// stockitem.cpp ---------------------------------------------------------
#include "stockitem.h"
void StockItem::setName( const QString & name ) { this->name = name; }
void StockItem::setUnitCost( double unitCost ) { this->unitCost = unitCost; }
void StockItem::setStockLevel( int stockLevel ) { this->stockLevel = stockLevel; }
void StockItem::setReorder( bool reorder ) { this->reorder = reorder; }
QString StockItem::getName() const { return this->name; }
double StockItem::getUnitCost() const { return this->unitCost; }
int StockItem::getStockLevel() const { return this->stockLevel; }
bool StockItem::getReorder() const { return this->reorder; }
// ---------------------------------------------------------------------