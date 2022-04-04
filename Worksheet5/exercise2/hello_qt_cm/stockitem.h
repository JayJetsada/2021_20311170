//-----------stockitem.h----------------------------
#ifndef STOCK_ITEM_H
#define STOCK_ITEM_H
#include <QString>
class StockItem {
public:
StockItem() :
name( "Item_Name" ), unitCost( 0. ), stockLevel( 0 ), reorder( false ) {}
StockItem( const char * n, double u, int s, bool b ) :
name( n ), unitCost( u ), stockLevel( s ), reorder( b ) {}
void setName( const QString & name );
void setUnitCost( double unitCost );
void setStockLevel( int stockLevel );
void setReorder( bool reorder );
QString getName() const;
double getUnitCost() const;
int getStockLevel() const;
bool getReorder() const;
private:
    QString name;
    double unitCost;
    int stockLevel;
    bool reorder;
};
#endif
// ---------------------------------------------------------------------
