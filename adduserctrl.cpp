#include "adduserctrl.h"

AddUserCtrl* AddUserCtrl::anInstance = NULL;


AddUserCtrl::AddUserCtrl()
{
    userName="";
    password="";
    type="";
}
AddUserCtrl::~AddUserCtrl(){}


AddUserCtrl* AddUserCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new AddUserCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}


void AddUserCtrl::addToDb()
{
   if (!(userName == ""))
    {
        qDebug() <<"BEFORE";
        qDebug() <<userList->size();

        User * aUser = new User(password,userName,type); //Create the facility to add
        userList->append(aUser); //Append it to the list of facility
        qDebug() <<"AFTER";
        qDebug() <<userList->size();
        userList=NULL;



        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     //   db.setDatabaseName ("/home/bartosz/Documents/EOBCSTORAGE");
        db.setDatabaseName ("/home/bob/repo/EOBCSTORAGE");
   /*     if (!db.open()) {
            QMessageBox::warning(this, QObject::tr("Unable to open database"), QObject::tr("An error occured while "
                                                                         "opening the connection: ") + db.lastError().text());}*/
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    QSqlQuery query;
    QString queryText;

    //MISS AREA AND FACILITY ID UNSURE YET


    //the main insert script
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    queryText = "INSERT INTO user (username, password,permissionLvl)"
                " VALUES (:name, :password, :type)";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    query.prepare(queryText);

    //binding the variables from the form to the query
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    query.bindValue(":name", userName);
    query.bindValue(":password", password);
    query.bindValue(":type", type);


    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    query.exec(); //executing the query

    //checking if the facility was added correctly and if not an error is produced
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /*   if(query.numRowsAffected() > 0){
        QMessageBox::information( this, "Add Facility Popup",
        "Facility " + facilityName + "has been added sucessfully!!");
    }
    else{
        QMessageBox::information( this, "error",
       "An error has occured while adding " + facilityName + " to the database");
    }*/



db.close();
}
    userName="";
    password="";
    type="";
///    id =-1;
}

void AddUserCtrl::setName(QString aName)
{
    userName = aName;
}

void AddUserCtrl::setPassword(QString aPassword)
{
    password = aPassword;
}

void AddUserCtrl::setType(QString aType)
{
    type =aType;
}

/*
void AddUserCtrl::setId(int anId)
{
    id=anId;
}
*/

void AddUserCtrl::setList(QList<User *> *aUserList)
{
    userList=aUserList;
}
