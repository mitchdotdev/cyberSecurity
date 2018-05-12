#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "dbmanager.h"
#include "models.h"
#include "addcustomerwindow.h"

namespace Ui {
class adminwindow;
}

class adminwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminwindow(QWidget *parent = 0);
    ~adminwindow();

private slots:
    void on_addCustomer_clicked();
    void updateCustomerView();
    void removeCustomer();
    void on_customerTable_clicked(const QModelIndex &index);
    void on_removeCustomer_clicked();


signals:
    void SendModel(CustomerModel *mod);

private:
    Ui::adminwindow *ui;
    CustomerModel *cModel;
    QString selectedName;

};

#endif // ADMINWINDOW_H
