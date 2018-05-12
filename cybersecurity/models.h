#ifndef MODELS_H
#define MODELS_H

#include <QAbstractTableModel>
#include <QSortFilterProxyModel>
#include <QStyledItemDelegate>
#include <QList>
#include <QDebug>
#include <QObject>
#include "dbmanager.h"
#include "customer.h"

class CustomerModel : public QAbstractTableModel
{
public:
    CustomerModel(QList<Customer> customerList, QObject *parent = 0);

    void setList(const QList<Customer> customerList);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
private:
    QList<Customer> modCustomerList;
};

#endif // MODELS_H
