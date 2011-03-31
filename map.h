#ifndef MAP_H
#define MAP_H

#include <QList>
#include "User.h"
#include "Facility.h"

class Map
{
public:

    Map();
    ~Map();

    void genUserList();
    void genFacList();

private:

    QList<User>* userList;
    User* aUser;
    QList<Facility>* facList;
    Facility* aFac;

};

#endif // MAP_H
