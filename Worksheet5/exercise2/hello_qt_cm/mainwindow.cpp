#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMainWindow>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
connect( this, &MainWindow::statusUpdateMessage, ui->statusBar, &QStatusBar::showMessage );
connect( ui->pushButton, &QPushButton::released, this, &MainWindow::handleAddButton );
}


void MainWindow::handleAddButton() {
// This causes MainWindow to emit the signal that will then be
// received by the statusbar's slot
emit statusUpdateMessage( QString("Add button was clicked"), 0 );
}


MainWindow::~MainWindow()
{
    delete ui;
}


