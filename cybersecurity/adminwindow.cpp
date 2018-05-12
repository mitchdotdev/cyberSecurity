#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "confirmremoval.h"

adminwindow::adminwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminwindow),
    cModel(new CustomerModel(DbManager::instance().GetAllCustomers())),
    selectedName("")
{
    ui->setupUi(this);
    ui->customerTable->setModel(cModel);
    ui->customerTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->removeCustomer->setEnabled(false);
}

adminwindow::~adminwindow()
{
    delete ui;
    delete cModel;
}

void adminwindow::removeCustomer()
{
    qDebug() << "gets to beginning of admin window remove customer";
    if(DbManager::instance().customerExists(DbManager::instance().GetCustomer(selectedName)))
    {
        if(DbManager::instance().removeCustomer(DbManager::instance().GetCustomer(selectedName)))
        {
            updateCustomerView();
        }
    }
    else
    {
        qDebug() << "remove not working";
    }

    qDebug() << "gets to end of admin window remove customer";
}

void adminwindow::on_addCustomer_clicked()
{
    addcustomerwindow *addWin;
    addWin = new addcustomerwindow(this);
    connect(addWin, SIGNAL(customerAdded()), this, SLOT(updateCustomerView()));
    addWin->setModal(true);
    addWin->exec();
    delete addWin;
}

void adminwindow::on_customerTable_clicked(const QModelIndex &index)
{
    QModelIndex nameIndex;
    nameIndex = ui->customerTable->model()->index(index.row(), 0);
    selectedName = ui->customerTable->model()->data(nameIndex).toString();
    qDebug() << selectedName;
    ui->removeCustomer->setEnabled(true);
}

void adminwindow::on_removeCustomer_clicked()
{
    ConfirmRemoval *remWin;
    QList<Customer> cList;
    CustomerModel *tempModel;

    if(selectedName != "")
    {
        cList.append(Customer(DbManager::instance().GetCustomer(selectedName)));
        tempModel = new CustomerModel(cList);
        remWin = new ConfirmRemoval(this);
        connect(this, SIGNAL(SendModel(CustomerModel*)), remWin, SLOT(setCustomerView(CustomerModel*)));
        connect(remWin, SIGNAL(removalConfirmed()), this, SLOT(removeCustomer()));
        emit SendModel(tempModel);
        remWin->exec();
        delete tempModel;
        delete remWin;
    }

}
void adminwindow::updateCustomerView()
{
    qDebug() << "Received signal, updating customer view";
    cModel->setList(DbManager::instance().GetAllCustomers());
}
