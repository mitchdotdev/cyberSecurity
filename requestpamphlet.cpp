#include "requestpamphlet.h"
#include "ui_requestpamphlet.h"

requestPamphlet::requestPamphlet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::requestPamphlet)
{
    ui->setupUi(this);
}

requestPamphlet::~requestPamphlet()
{
    delete ui;
}

void requestPamphlet::on_buttonBox_accepted()
{
    companyName = ui->name->text();
    companyAddress = ui->address->text();
    companyCity = ui->city->text();
    companyState = ui->state->text();

    //add to database

    ui->name->clear();
    ui->address->clear();
    ui->city->clear();
    ui->state->clear();
}
