#include "edititemdialog.h"
#include "ui_edititemdialog.h"

EditItemDialog::EditItemDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditItemDialog)
{
    ui->setupUi(this);
    // need to link the ok button to the Dialog's "accept" slot
    connect( ui->buttonBox, &QDialogButtonBox::accepted, this, &QDialog::accept );
    // need to link the cancel button to the Dialog's "reject" slot
    connect( ui->buttonBox, &QDialogButtonBox::rejected, this, &QDialog::reject );
}

bool EditItemDialog::runDialog( StockItem & item ) {
// populate the dialog's input widgets with item's parameters
ui->name->setText( item.getName() );
ui->unitCost->setValue( item.getUnitCost() );
ui->stockLevel->setValue( item.getStockLevel() );
ui->reorder->setChecked( item.getReorder() );
// get Qt to run the dialog
if( this->exec() == QDialog::Accepted ) {
// if user clicked ok, update the item
item.setName( ui->name->text() );
item.setUnitCost( ui->unitCost->value() );
item.setStockLevel( ui->stockLevel->value() );
item.setReorder( ui->reorder->isChecked() );
return true;
}
return false;
}


EditItemDialog::~EditItemDialog()
{
    delete ui;
}
