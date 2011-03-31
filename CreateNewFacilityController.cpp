#include "CreateNewFacilityController.h"

CreateNewFacilityController* CreateNewFacilityController::anInstance =NULL;


CreateNewFacilityController::CreateNewFacilityController()
{
    //Set value to meaningless value
    id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area ="";
}


CreateNewFacilityController* CreateNewFacilityController::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new CreateNewFacilityController; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

/*
void CreateNewFacilityController::createFacility(QList<Facility *> *aFacilityList)
{
    qDebug() << id;
    Facility * aFacility = new Facility(id, facilityName,x,y); //Create the facility to add
    aFacilityList->append(aFacility); //Append it to the list of facility
  //  addToDb();

}
*/
void CreateNewFacilityController::addToDb()
{
    if (!(facilityName == ""))
    {
        qDebug() <<"BEFORE";
        qDebug() <<facilityList->size();

      //  Facility * aFacility = new Facility(id, facilityName,x,y); //Create the facility to add
   //     facilityList->append(aFacility); //Append it to the list of facility
        qDebug() <<"AFTER";
        qDebug() <<facilityList->size();
        facilityList=NULL;


    qDebug()<<id;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName ("127.0.0.1");
    db.setDatabaseName ("EOBCSTORAGE");
    db.setUserName ("root");
    db.setPassword ("bobpw");
    if (!db.open()) {
        /*QMessageBox::warning(this, tr("Unable to open database"), tr("An error occured while "
                                                                     "opening the connection: ") + db.lastError().text());*/
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    QSqlQuery query;
    QString queryText;

    //MISS AREA AND FACILITY ID UNSURE YET


    //the main insert script
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    queryText = "INSERT INTO facility (facilityID, name, coordinateX, coordinateY, AC, CCC,LTC)"
                " VALUES (:id, :facilityName, :x, :y, :AC, :CCC, :LTC)";
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    query.prepare(queryText);

    //binding the variables from the form to the query
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    query.bindValue(":facilityID", id);
    query.bindValue(":facilityName", facilityName);
    query.bindValue(":x", x);
    query.bindValue(":y", y);
    query.bindValue(":AC", AC);
    query.bindValue(":CCC", CCC);
    query.bindValue(":LTC", LTC);

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
    }
*/


db.close();
}
    id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area ="";
}

void CreateNewFacilityController::setId(int anId)
{
    id = anId;
}

void CreateNewFacilityController::setX(int aX)
{
    x = aX;
}

void CreateNewFacilityController::setY(int aY)
{
    y= aY;
}

void CreateNewFacilityController::setAC(int anAC)
{
    AC = anAC;
}

void CreateNewFacilityController::setCCC(int aCCC)
{
    CCC =aCCC;
}

void CreateNewFacilityController::setLTC(int aLTC)
{
    LTC=  aLTC;
}

void CreateNewFacilityController::setName(QString aName)
{
        facilityName = aName;
}

void CreateNewFacilityController::setArea(QString anArea)
{
    area =anArea;
}

void CreateNewFacilityController::setList(QList<Facility *> *aFacilityList)
{
    facilityList = aFacilityList;
}
