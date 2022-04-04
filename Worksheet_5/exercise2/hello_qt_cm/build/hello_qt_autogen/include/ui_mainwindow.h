/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *addButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *editButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *removeButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 426);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8("Icons/actionSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("Icons/actionSave.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_3->addWidget(addButton);

        horizontalSpacer = new QSpacerItem(38, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        editButton = new QPushButton(centralWidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout_3->addWidget(editButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        removeButton = new QPushButton(centralWidget);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        horizontalLayout_3->addWidget(removeButton);


        verticalLayout->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        removeButton->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
