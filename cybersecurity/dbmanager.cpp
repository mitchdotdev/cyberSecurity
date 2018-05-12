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

bool DbManager::customerExists(Customer customer)
{
    bool exists;
    QSqlQuery query;

    query.prepare("SELECT name FROM companies WHERE name = :name");
    query.bindValue(":name", customer.GetCompanyName());

    exists = false;
    if(query.exec())
    {
        if(query.next())
        {
            exists = true;
        }
    }

    return exists;

}

bool DbManager::addCustomer(Customer newCustomer)
{
    bool success;
    QString cName;
    QString cStreet;
    QString cCity;
    QString cState;
    int cZipcode;
    QString cInterest;
    QString cValue;

    success = false;
    cName = newCustomer.GetCompanyName();
    cStreet = newCustomer.GetCompanyStreet();
    cCity = newCustomer.GetCompanyCity();
    cState = newCustomer.GetCompanyState();
    cZipcode = newCustomer.GetCompanyZipcode();
    cInterest = newCustomer.GetCompanyInterest();
    cValue =newCustomer.GetCompanyValue();

    QSqlQuery query;
    query.prepare("INSERT INTO companies (name, street, city, state, zipcode, interest, value)"
                  "VALUES (:iName, :iStreet, :iCity, :iState, :iZipcode, :iInterest, :iValue)");
    query.bindValue(":iName", cName);
    query.bindValue(":iStreet", cStreet);
    query.bindValue(":iCity", cCity);
    query.bindValue(":iState", cState);
    query.bindValue(":iZipcode", cZipcode);
    query.bindValue(":iInterest", cInterest);
    query.bindValue(":iValue", cValue);

    if(query.exec())
    {
        success = true;
    }
    else
    {
        qDebug() << "addCustomer error: " << query.lastError();
    }

    return success;
}

bool DbManager::removeCustomer(Customer customer)
{
    qDebug() << "gets into dbmanager remove customer";
    QSqlQuery query;
    bool success;
    QString companyName;

    success = false;
    companyName = customer.GetCompanyName();

    if(customerExists(customer))
    {
        qDebug()<< "customer exists";
        query.prepare("DELETE FROM companies WHERE name = (:name)");
        query.bindValue(":name", companyName);

        if(query.exec())
        {
            success = true;
        }
        else
        {
            qDebug() << "remove Company error: " << query.lastError();
        }
    }
    qDebug() << "gets to end of dbmanager remove customer";
    return success;
}

QList<Customer> DbManager::GetAllCustomers()
{
    QList<Customer> customerList;
    QString name;
    QString street;
    QString city;
    QString state;
    int zipcode;
    QString interest;
    QString value;

    int nameIndex;
    int streetIndex;
    int cityIndex;
    int stateIndex;
    int zipcodeIndex;
    int interestIndex;
    int valueIndex;

    QSqlQuery query;

    query.prepare("SELECT name, street, city, state, zipcode, interest, value FROM companies");

    if(query.exec())
    {
        nameIndex = query.record().indexOf("name");
        streetIndex = query.record().indexOf("street");
        cityIndex = query.record().indexOf("city");
        stateIndex = query.record().indexOf("state");
        zipcodeIndex = query.record().indexOf("zipcode");
        interestIndex = query.record().indexOf("interest");
        valueIndex = query.record().indexOf("value");
        while(query.next())
        {
            name = query.value(nameIndex).toString();
            street = query.value(streetIndex).toString();
            city = query.value(cityIndex).toString();
            state = query.value(stateIndex).toString();
            zipcode = query.value(zipcodeIndex). toInt();
            interest = query.value(interestIndex).toString();
            value = query.value(valueIndex).toString();

            customerList.append(Customer(name, street, city, state, zipcode, interest, value));
        }
    }
    else
    {
        qDebug() << "Error getting customers: " << query.lastError();
    }

    return customerList;
}

QList<Customer> DbManager::GetKeyCustomers()
{
    QList<Customer> customerList;
    QString name;
    QString street;
    QString city;
    QString state;
    int zipcode;
    QString interest;
    QString value;

    int nameIndex;
    int streetIndex;
    int cityIndex;
    int stateIndex;
    int zipcodeIndex;
    int interestIndex;
    int valueIndex;

    QSqlQuery query;

    query.prepare("SELECT name, street, city, state, zipcode, interest, value FROM companies");

    if(query.exec())
    {
        nameIndex = query.record().indexOf("name");
        streetIndex = query.record().indexOf("street");
        cityIndex = query.record().indexOf("city");
        stateIndex = query.record().indexOf("state");
        zipcodeIndex = query.record().indexOf("zipcode");
        interestIndex = query.record().indexOf("interest");
        valueIndex = query.record().indexOf("value");

        while(query.next())
        {
            value = query.value(valueIndex).toString();
            if(value == "key")
            {
                name = query.value(nameIndex).toString();
                street = query.value(streetIndex).toString();
                city = query.value(cityIndex).toString();
                state = query.value(stateIndex).toString();
                zipcode = query.value(zipcodeIndex). toInt();
                interest = query.value(interestIndex).toString();


                customerList.append(Customer(name, street, city, state, zipcode, interest, value));
            }
        }
    }
    else
    {
        qDebug() << "Error getting customers: " << query.lastError();
    }

    return customerList;
}

Customer DbManager::GetCustomer(QString companyName)
{
    QSqlQuery query;
    int nameIndex;
    int streetIndex;
    int cityIndex;
    int stateIndex;
    int zipcodeIndex;
    int interestIndex;
    int valueIndex;
    QString name;
    QString street;
    QString city;
    QString state;
    int zipcode;
    QString interest;
    QString value;

    query.prepare("SELECT name, street, city, state, zipcode, interest, value FROM "
                  "companies WHERE name = :cName");
    query.bindValue(":cName", companyName);

    if(query.exec())
    {
        nameIndex       = query.record().indexOf("name");
        streetIndex      = query.record().indexOf("street");
        cityIndex = query.record().indexOf("city");
        stateIndex = query.record().indexOf("state");
        zipcodeIndex = query.record().indexOf("zipcode");
        interestIndex = query.record().indexOf("interest");
        valueIndex =query.record().indexOf("value");

        if(query.next())
        {
            name       = query.value(nameIndex).toString();
            street      = query.value(streetIndex).toString();
            city = query.value(cityIndex).toString();
            state = query.value(stateIndex).toString();
            zipcode = query.value(zipcodeIndex).toInt();
            interest = query.value(interestIndex).toString();
            value = query.value(valueIndex).toString();
        }
        else
        {
            qDebug() << "Can't find customer";
        }
    }
    else
    {
        qDebug() << "Get Customer Error: " << query.lastError();
    }

    return Customer(name, street, city, state, zipcode, interest, value);
}

bool DbManager::VerifyLogin(credentials credentials)
{
    QSqlQuery query;
    bool success;

    success = false;
    query.prepare("SELECT username, password FROM credentials WHERE username = :user AND password = :passw");
    query.bindValue(":user", credentials.GetUsername());
    query.bindValue(":passw", credentials.GetPassword());

    if(query.exec())
    {
        if(query.next())
        {
            success = true;
        }
    }
    else
    {
        qDebug() << "Login Error: " << query.lastError();
    }

    return success;
}
