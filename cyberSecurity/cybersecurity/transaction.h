#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QObject>

class transaction
{
public:
    transaction();
    transaction(QString cPackage, QString cName, double cPrice);
    QString GetPackage();
    QString GetName();
    double GetPrice();

private:
    QString package;
    QString name;
    double price;
};

#endif // TRANSACTION_H
