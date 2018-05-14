/** @file adminwindow.h
 *  @brief The window in which an admin can log into and control information regarding customers
 */

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
    ProxyModel *pModel;
    CustomerModel *c2Model;
    ProxyModel *p2Model;
    QString selectedName;

};

#endif // ADMINWINDOW_H
