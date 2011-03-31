#include "map.h"

Map::Map()
{

    userList = new QList<User>();
    genUserList();
}

Map::~Map(){}

void Map::genUserList(){

    aUser = new User();
}

