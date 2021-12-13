#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stockitemlistmodel.h"
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
void statusUpdateMessage( const QString & message, int timeout );

// Example of slot definition in mainwindow.h---------------------------
public slots:
    void handleAddButton();
    void handleEditButton();
    void handleRemoveButton();
    void on_actionSave_triggered();
// --------------------------------------------------------------------
private:
    Ui::MainWindow *ui;
    StockItemListModel stockList;

};

#endif // MAINWINDOW_H
