#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QDebug>
#include <QFile>

class DbManager
{
public:
    static DbManager& instance();

    DbManager(const DbManager&) = delete; //delete copy constructor

    void operator =(const DbManager&) = delete; //delete = operator

    bool isOpen() const;

    bool updateCustomerList();
private:

    DbManager();

    ~DbManager();

    QSqlDatabase cyberDB;
};

#endif // DBMANAGER_H
