#include "customer.h"

Customer::Customer()
{
    name = "";
    street = "";
    city = "";
    state = "";
    zipcode = 0;
    interest = "";
    value = "";
}

Customer::Customer(QString cName, QString cStreet, QString cCity, QString cState, int cZipcode,
                   QString cInterest, QString cValue)
{
    name = cName;
    street = cStreet;
    city = cCity;
    state = cState;
    zipcode = cZipcode;
    interest = cInterest;
    value = cValue;
}

QString Customer::GetCompanyName()
{
    return name;
}

QString Customer::GetCompanyStreet()
{
    return street;
}

QString Customer::GetCompanyCity()
{
    return city;
}

QString Customer::GetCompanyState()
{
    return state;
}

int Customer::GetCompanyZipcode()
{
    return zipcode;
}

QString Customer::GetCompanyInterest()
{
    return interest;
}

QString Customer::GetCompanyValue()
{
    return value;
}
