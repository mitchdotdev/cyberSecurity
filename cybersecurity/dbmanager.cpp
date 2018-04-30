#include "dbmanager.h"

DbManager::DbManager()
{
    cyberDB = QSqlDatabase::addDatabase("QSQLITE");
    cyberDB.setDatabaseName("cyber.db");

    if( QFile::exists("cyber.db") )
    {
        if (!cyberDB.open()) //be careful, SQLITE will create the db if it doesn't exist and return true.
        {
            qDebug() << "Error: could not open connection to database.";
        }
        else
        {
            qDebug() << "Database connection opened.";
        }
    }
    else
    {
        qDebug() << "Cannot open database because the DB Path does not exist.";
    }
}

DbManager::~DbManager()
{
    if (cyberDB.isOpen())
    {
        cyberDB.close();
    }
    qDebug() << "Destroying Databasemanager";
}

bool DbManager::isOpen() const
{
    return cyberDB.isOpen();
}

DbManager& DbManager::instance()
{
    static DbManager dmInstance;

    return dmInstance;
}

bool DbManager::updateCustomerList()
{

}
