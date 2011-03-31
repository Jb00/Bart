#include <QApplication>
#include "User.h"

User::User(){
    password = "";
    name = "";
    typeUser = "";
}

User::~User(){}

User::User(QString aPassword, QString aName, QString aType)
{
    password = aPassword;
    name = aName;
    typeUser = aType;
}

//Return id
QString User::getPassword()
{
    return password;
}

//Return Name
QString User::getName()
{
    return name;
}

//Return Type
QString User::getType()
{
    return typeUser;
}

//Return Where the user works, 0 if not associated with a facility
QString User::getFacility()
{
    return workAtFacility;
}
