#include "addfacctrl.h"
#include "mapwinctrl.h"

AddFacCtrl* AddFacCtrl::anInstance =NULL;

AddFacCtrl::AddFacCtrl()
{
    //Set value to meaningless value
    id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area = -1;
    //facilityList = new QList<Facility *>();
}

AddFacCtrl* AddFacCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new AddFacCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

void AddFacCtrl::invalid(){

    invalidWin = new InvalidWindow();

    invalidWin->setLabelText("Insufficient data entered!");
    invalidWin->show();

    genCTRL::center(*invalidWin);
}

//bool AddFacCtrl::isOK(){return ok;}


void AddFacCtrl::addToDb()
{
    if (!(facilityName == ""))
    {
        //qDebug() <<"BEFORE";
        //qDebug() <<facilityList->size();

        //Facility * aFacility = new Facility(id, facilityName,x,y,AC,CCC,LTC, facIconColor, facXSize, facYSize);
        Facility * aFacility = new Facility(id, facilityName,x,y,AC,CCC,LTC); //Create the facility to add

        qDebug() << "AC in addToDb() from aFacility: " << aFacility->getTotalAC()
                ;
        qDebug() << "AC in addToDb() from AddFacCtrl: " << AC;
        facilityList->append(aFacility);
        MapWinCtrl::getInstance()->listOfFacility.append(aFacility);
        qDebug() << "AC in addToDb() from MapWinCtrl: " << AC;

        //Append it to the list of facility
        //qDebug() <<"AFTER";
        //qDebug() <<facilityList->size();
       // MapWinCtrl::getInstance()->setList(facilityList);
        facilityList=NULL;

/*
     //   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
     //   db.setDatabaseName ("/home/bartosz/Documents/EOBCSTORAGE");
     //   db.setDatabaseName ("/home/bob/repo/EOBCSTORAGE");
     //   if (!db.open()) {
    //        qDebug() << "FAIL";
            QMessageBox::warning(this, QObject::tr("Unable to open database"), QObject::tr("An error occured while "
                                                                         "opening the connection: ") + db.lastError().text());

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
    if(query.numRowsAffected() > 0){
        QMessageBox::information( this, "Add Facility Popup",
        "Facility " + facilityName + "has been added sucessfully!!");
    }
    else{
        QMessageBox::information( this, "error",
       "An error has occured while adding " + facilityName + " to the database");
    }
*/
}

//db.close();

    /*id = -1;
    facilityName ="";
    x= -1;
    y= -1;
    AC= -1;
    CCC= -1;
    LTC =-1;
    area = -1;*/
}

void AddFacCtrl::setId(int anId){id = anId;}
void AddFacCtrl::setX(int aX){x = aX;}
void AddFacCtrl::setY(int aY){y= aY;}
void AddFacCtrl::setAC(int anAC){AC = anAC;}
void AddFacCtrl::setCCC(int aCCC){CCC =aCCC;}
void AddFacCtrl::setLTC(int aLTC){LTC=  aLTC;}
void AddFacCtrl::setName(QString aName){facilityName = aName;}
/**********************************************************************************************
********CHANGED FROM setArea(QString) to setArea(int) TO ACCOMODATE PROTOCOL*******************
***********************************************************************************************/
void AddFacCtrl::setArea(int anArea){area = anArea;}
void AddFacCtrl::setList(QList<Facility *> *aFacilityList){facilityList = aFacilityList;}
void AddFacCtrl::setFacIconColor(QColor aColor){facIconColor = aColor;}
void AddFacCtrl::setFacXSize(int xSize){facXSize = xSize;}
void AddFacCtrl::setFacYSize(int ySize){facYSize = ySize;}

int AddFacCtrl::getArea(){return area;}
int AddFacCtrl::getAC(){return AC;}
int AddFacCtrl::getCCC(){return CCC;}
int AddFacCtrl::getLTC(){return LTC;}
int AddFacCtrl::getFacXSize(){return facXSize;}
int AddFacCtrl::getFacYSize(){return facYSize;}
QColor AddFacCtrl::getFacIconColor(){return facIconColor;}

