#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <QObject>

class Customer
{
public:
    Customer();
    Customer(QString cName, QString cStreet, QString cCity, QString cState, int cZipcode,
             QString cInterest, QString cValue);
    QString GetCompanyName();
    QString GetCompanyStreet();
    QString GetCompanyCity();
    QString GetCompanyState();
    int GetCompanyZipcode();
    QString GetCompanyInterest();
    QString GetCompanyValue();
private:
    QString name;
    QString street;
    QString city;
    QString state;
    int zipcode;
    QString interest;
    QString value;
};

#endif // CUSTOMER_H
