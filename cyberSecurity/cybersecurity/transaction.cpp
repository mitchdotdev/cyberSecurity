#include "transaction.h"

transaction::transaction()
{
    package = "";
    name = "";
    price = 0.0;
}

transaction::transaction(QString cPackage, QString cName, double cPrice)
{
    package = cPackage;
    name = cName;
    price = cPrice;
}

QString transaction::GetPackage()
{
    return package;
}

QString transaction::GetName()
{
    return name;
}

double transaction::GetPrice()
{
    return price;
}
