/** @file credentials.h
 *  @brief header file for the login credentials of an admin
 */

#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include <QObject>

class credentials
{
public:
    credentials(QString user, QString pass);

    QString GetUsername();
    QString GetPassword();
private:
    QString username;
    QString password;
};

#endif // CREDENTIALS_H
