#include "credentials.h"

credentials::credentials(QString user, QString pass)
{
    username = user;
    password = pass;
}

QString credentials::GetUsername()
{
    return username;
}

QString credentials::GetPassword()
{
    return password;
}
