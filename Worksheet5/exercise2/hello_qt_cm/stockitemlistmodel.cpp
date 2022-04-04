// stockitemlistmodel.cpp ----------------------------------------------
#include "stockitemlistmodel.h"
// function allows listview to determine the number of items in list
int StockItemListModel::rowCount( const QModelIndex & parent ) const {
    return stockItems.size();
}
// function allows the listView to request data at index
// QVariant is just Qt's way of defining a variable that could be any
// basic type (int, float, double, string, ... )
QVariant StockItemListModel::data( const QModelIndex & index, int role ) const {
// Check that the index is valid
if( !index.isValid() ) return QVariant();
if( index.row() >= stockItems.size() || index.row() < 0 ) return QVariant();
// Return item name as display variable
if( role == Qt::DisplayRole ) {
    return QVariant( stockItems[index.row()].getName() );
} else {
return QVariant();
  }
}
// To allow modifying stored list
void StockItemListModel::addItem( const StockItem & s ) {
// This emits a signal to warn the listView that extra rows will be added
emit beginInsertRows( QModelIndex(), stockItems.size()-1, stockItems.size()-1 );
// Add the extra item to the list
stockItems.push_back( s );
// Emits a signal to say rows have been added.
emit endInsertRows();
}


void StockItemListModel::insertItem( const StockItem &s, const QModelIndex & index ) {
//?? (same as add item)
    if( index.isValid() && index.row() >= 0 && index.row() < stockItems.size() ) {
  // This emits a signal to warn the listView that extra rows will be added
  emit beginInsertRows( QModelIndex(), stockItems.size()-1, stockItems.size()-1 );
  //insert item to the after the selected item
  stockItems.insert(stockItems.begin() + index.row()+1,s);
  // Emits a signal to say rows have been added.
  emit endInsertRows();
    }
}

void StockItemListModel::setItem( const StockItem &s, const QModelIndex & index ) {
    if( index.isValid() && index.row() >= 0 && index.row() < stockItems.size() ) {
    // Just replace the item in the vector
    stockItems[index.row()] = s;
    // Need to emit a signal that tells listView the data has changed
    emit dataChanged( index, index ); // index is the first and last row to be changed
       }
}

void StockItemListModel::removeItem( const QModelIndex & index ) {
//?? (~ same as add item) = the index of selected item
    // index.row()
 if( index.isValid() && index.row() >= 0 && index.row() < stockItems.size() ){
    // This emits a signal to warn the listView that extra rows will be added
    // Remove
    stockItems.erase( stockItems.begin()+index.row());

 }
}

// to allow accessing stored list item properties
StockItem StockItemListModel::getItem( const QModelIndex & index ) const {
    if( index.isValid() && index.row() >= 0 && index.row() < stockItems.size() )
        return stockItems[index.row()];
    return StockItem();
}


QString StockItemListModel::getItemName(int i){
 //get the item name from listView
 return stockItems[i].getName();
}

double StockItemListModel::getItemCost(int i){
 //get the item cost from listView
 return stockItems[i].getUnitCost();
}

int StockItemListModel::getItemStock(int i){
 //get the item stocklevel from listView
 return stockItems[i].getStockLevel();
}
// ---------------------------------------------------------------------

