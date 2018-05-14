#include "addcustomerwindow.h"
#include "ui_addcustomerwindow.h"
#include "dbmanager.h"

addcustomerwindow::addcustomerwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addcustomerwindow)
{
    ui->setupUi(this);
}

addcustomerwindow::~addcustomerwindow()
{
    delete ui;
}

void addcustomerwindow::on_addButton_clicked()
{
    QString name;
    QString street;
    QString city;
    QString state;
    int zipcode;
    QString interest;
    QString value;

    name = ui->nameEdit->text();
    street = ui->streetEdit->text();
    city = ui->cityEdit->text();
    state = ui->statesComboBox->currentText();
    zipcode = ui->zipcodeSpinBox->value();
    interest = ui->interestEdit->text();
    value = ui->valueEdit->text();

    if(!DbManager::instance().customerExists(Customer(name, street, city, state, zipcode, interest, value)))
    {
        if(DbManager::instance().addCustomer(Customer(name, street, city, state, zipcode, interest, value)))
        {
            ui->outputLabel->setText("Customer Added");
            emit customerAdded();
        }
        else
        {
            ui->outputLabel->setText("Failed to add Customer");
        }
    }
    else
    {
        ui->outputLabel->setText("Customer already exists");
    }
}
