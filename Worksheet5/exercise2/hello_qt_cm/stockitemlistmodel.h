// stockitemlistmodel.h ----------------------------------------------
#ifndef STOCKITEMLISTMODEL_H
#define STOCKITEMLISTMODEL_H
#include <QAbstractListModel>
#include "stockitem.h"
class StockItemListModel : public QAbstractListModel {
Q_OBJECT
public:
// Constructor
explicit StockItemListModel( QObject* parent = 0 ) : QAbstractListModel( parent ) {}
// Virtual functions that must be defined in a valid ListModel
int rowCount( const QModelIndex &parent = QModelIndex() ) const;
QVariant data( const QModelIndex &index, int role ) const;
// To allow modifying stored list
void addItem( const StockItem &s );
void insertItem( const StockItem &s, const QModelIndex &index );
void setItem( const StockItem &s, const QModelIndex &index );
void removeItem( const QModelIndex &index );
void clearList();
// to allow accessing stored list item properties
StockItem getItem( const QModelIndex &index ) const;
QString getItemName(int i);
double getItemCost (int i);
int getItemStock (int i);
private:
std::vector<StockItem> stockItems;
};
#endif
// ---------------------------------------------------------------------

