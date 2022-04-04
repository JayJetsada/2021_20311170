#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox.h"
#include "edititemdialog.h"
#include "stockitem.h"
#include "stockitemlistmodel.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QAction>
#include <QFile>
#include <QTextStream>
#include <QDataStream>
#include <QIcon>

// Example of connecting signals and slots in mainwindow.cpp------------
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow) {
ui->setupUi(this);

// Link the ListModel to the ListView
ui->listView->setModel( &stockList );
// Tell this list view to only accept single selections
ui->listView->setSelectionBehavior( QAbstractItemView::SelectItems );

// Connect the released() signal of the addButton object to the handleAddButton slot in this object
connect( ui->addButton, &QPushButton::released, this, &MainWindow::handleAddButton );
connect( ui->editButton, &QPushButton::released, this, &MainWindow::handleEditButton );
connect( ui->removeButton, &QPushButton::released, this, &MainWindow::handleRemoveButton);

connect( this, &MainWindow::statusUpdateMessage, ui->statusBar, &QStatusBar::showMessage );

}

void MainWindow::handleAddButton() {
//QMessageBox msgBox;
//msgBox.setText("Add button was clicked");
//msgBox.exec();
StockItem item;
 QModelIndexList selectedList;
 selectedList = ui->listView->selectionModel()->selectedIndexes();
 if( selectedList.length() == 1 ) {
  stockList.insertItem( item,selectedList[0] );

 } else {
  stockList.addItem( item );
 }
 emit statusUpdateMessage( QString("Add button was clicked"), 0 );
}

void MainWindow::handleEditButton() {
//QMessageBox msgBox;
//msgBox.setText("Edit button was clicked");
//msgBox.exec();
EditItemDialog dialog( this );
//StockItem item;
//emit statusUpdateMessage( QString("Edit button was clicked"), 0 );
//dialog.runDialog( item );
QModelIndexList selectedList;
selectedList = ui->listView->selectionModel()->selectedIndexes();
    if( selectedList.length() == 1 ) {
// selectedList is a list of all selected items in the listView. Since we set its
// behaviour to single selection, were only interested in the first selecteded item.
StockItem item = stockList.getItem( selectedList[0] );
    if( dialog.runDialog( item ) ) {
// user clicked ok, need to update item in list...
    stockList.setItem( item, selectedList[0] );
}
} else {
emit statusUpdateMessage( QString("No item selected to edit!"), 0 );
}
}

void MainWindow::handleRemoveButton() {
    QModelIndexList selectedList;
    selectedList = ui->listView->selectionModel()->selectedIndexes();
    emit statusUpdateMessage( QString("Remove button was clicked"), 0 );
        if( selectedList.length() == 1 ) {
            stockList.removeItem(selectedList[0] );
            }else {
                emit statusUpdateMessage( QString("No item selected to remove!"), 0 );
                }
}
void MainWindow::on_actionSave_triggered(){

 //make a QString called item
 QString item;
 //get file name from user
 QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
                           "/home/jana/untitled.png",
                           tr("Text File (*.txt)"));
 //create a file with the given name
 QFile file(fileName);
 file.open(QIODevice::WriteOnly | QIODevice::Text);
 //declare out as QTextStream for file
 QTextStream out(&file);
 //print out all of the item in listView
 for (int i = 0; i < stockList.rowCount(); i++){
  out <<"Item:" << i+1 << " : " << stockList.getItemName(i) << " Cost: " << stockList.getItemCost(i) << " StockLevel: " << stockList.getItemStock(i)<< "\n";
 }
 file.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}
