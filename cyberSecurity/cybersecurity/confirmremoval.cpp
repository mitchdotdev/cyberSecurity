#include "confirmremoval.h"
#include "ui_confirmremoval.h"

ConfirmRemoval::ConfirmRemoval(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmRemoval)
{
    ui->setupUi(this);
}

ConfirmRemoval::~ConfirmRemoval()
{
    delete ui;
}


void ConfirmRemoval::setCustomerView(CustomerModel *model)
{
    ui->removeTable->setModel(model);
}

void ConfirmRemoval::on_confirmButton_clicked()
{
    emit removalConfirmed();
    close();
}

void ConfirmRemoval::on_cancelButton_clicked()
{
    close();
}
