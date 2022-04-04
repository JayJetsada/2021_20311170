/********************************************************************************
** Form generated from reading UI file 'edititemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITITEMDIALOG_H
#define UI_EDITITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditItemDialog
{
public:
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *name;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QDoubleSpinBox *unitCost;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *stockLevel;
    QLabel *label_3;
    QCheckBox *reorder;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *EditItemDialog)
    {
        if (EditItemDialog->objectName().isEmpty())
            EditItemDialog->setObjectName(QString::fromUtf8("EditItemDialog"));
        EditItemDialog->resize(288, 182);
        frame = new QFrame(EditItemDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 10, 241, 132));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        name = new QLineEdit(frame);
        name->setObjectName(QString::fromUtf8("name"));

        horizontalLayout->addWidget(name);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        unitCost = new QDoubleSpinBox(frame);
        unitCost->setObjectName(QString::fromUtf8("unitCost"));

        horizontalLayout_2->addWidget(unitCost);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        stockLevel = new QSpinBox(frame);
        stockLevel->setObjectName(QString::fromUtf8("stockLevel"));

        horizontalLayout_3->addWidget(stockLevel);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);

        reorder = new QCheckBox(frame);
        reorder->setObjectName(QString::fromUtf8("reorder"));

        verticalLayout->addWidget(reorder);

        widget = new QWidget(EditItemDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(9, 149, 242, 24));
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        retranslateUi(EditItemDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditItemDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditItemDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditItemDialog);
    } // setupUi

    void retranslateUi(QDialog *EditItemDialog)
    {
        EditItemDialog->setWindowTitle(QCoreApplication::translate("EditItemDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EditItemDialog", "Item Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditItemDialog", "Item Cost", nullptr));
        label_3->setText(QCoreApplication::translate("EditItemDialog", "Stock Level", nullptr));
        reorder->setText(QCoreApplication::translate("EditItemDialog", "Reorder?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditItemDialog: public Ui_EditItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITITEMDIALOG_H
