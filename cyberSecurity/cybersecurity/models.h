/** @file models.h
 *  @brief models that allow for the table view of information
 */

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

class ProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    ProxyModel(QObject* parent = 0);
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;

private:
    QString cName;
    QString cStreet;
    QString cCity;
    QString cState;
    int cZipcode;
    QString cInterest;
    QString cValue;
    QString cPackage;
    double cPrice;
};

class TransactionModel : public QAbstractTableModel
{
public:
    TransactionModel(QList<transaction> transList, QObject *parent = 0);

    void setList(const QList<transaction> transList);
    int rowCount(const QModelIndex &parent = QModelIndex()) const;
    int columnCount(const QModelIndex &parent = QModelIndex()) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
private:
    QList<transaction> modTransactionList;
};

#endif // MODELS_H
