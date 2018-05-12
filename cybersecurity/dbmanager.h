/** @file dbmanager.h
 *  @brief class that allows for interactions with the database
 */

#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QDebug>
#include <QFile>
#include <QtSql>
#include <QList>
#include <QString>
#include <fstream>
#include <string>
#include "customer.h"
#include "credentials.h"

class DbManager
{
public:
    static DbManager& instance();
    DbManager(const DbManager&) = delete; //delete copy constructor
    void operator =(const DbManager&) = delete; //delete = operator

    bool isOpen() const;

    bool addCustomer(Customer newCustomer);
    bool removeCustomer(Customer customer);
    bool customerExists(Customer customer);
    QList<Customer> GetAllCustomers();
    Customer GetCustomer(QString companyName);
    QList<Customer> GetKeyCustomers();
    bool VerifyLogin(credentials credentials);
private:

    DbManager();

    ~DbManager();

    QSqlDatabase cyberDB;
};

#endif // DBMANAGER_H
