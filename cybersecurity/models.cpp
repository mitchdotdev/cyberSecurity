#include "models.h"

CustomerModel::CustomerModel(QList<Customer> customerList, QObject *parent):
    QAbstractTableModel(parent)
{
    modCustomerList = customerList;
}

void CustomerModel::setList(const QList<Customer> customerList)
{
    beginResetModel();
    modCustomerList = customerList;
    endResetModel();
}

int CustomerModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return modCustomerList.length();
}

int CustomerModel::columnCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return 7;
}

QVariant CustomerModel::data(const QModelIndex &index, int role) const
{
    if(!index.isValid())
    {
        return QVariant();
    }
    if(index.row() >= modCustomerList.size() || index.row() < 0)
    {
        return QVariant();
    }

    if(role == Qt::DisplayRole)
    {
        Customer customer = modCustomerList.at(index.row());

        switch(index.column())
        {
        case 0:
            return customer.GetCompanyName();
            break;
        case 1:
            return customer.GetCompanyStreet();
            break;
        case 2:
            return customer.GetCompanyCity();
            break;
        case 3:
            return customer.GetCompanyState();
            break;
        case 4:
            return customer.GetCompanyZipcode();
            break;
        case 5:
            return customer.GetCompanyInterest();
            break;
        case 6:
            return customer.GetCompanyValue();
            break;
        default:
            return QVariant();
            break;
        }
    }
    return QVariant();
}

QVariant CustomerModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role != Qt::DisplayRole)
    {
        return QVariant();
    }

    if(orientation == Qt::Horizontal)
    {
        switch(section)
        {
        case 0:
            return tr("Company Name");
            break;
        case 1:
            return tr("Street Name");
            break;
        case 2:
            return tr("City");
            break;
        case 3:
            return tr("State");
            break;
        case 4:
            return tr("Zipcode");
            break;
        case 5:
            return tr("Interest");
            break;
        case 6:
            return tr("Value");
            break;

        }
    }
    return QVariant();
}

ProxyModel::ProxyModel(QObject *parent): QSortFilterProxyModel(parent),
    cName(""), cStreet(""), cCity(""), cState(""), cZipcode(0),
    cInterest(""), cValue("")
{

}

QVariant ProxyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return sourceModel()->headerData(section, orientation, role);
}
