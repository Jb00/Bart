#include "mapwinctrl.h"

MapWinCtrl* MapWinCtrl::anInstance =NULL;

MapWinCtrl::MapWinCtrl()
{
    QDate aDate(1998,2,3);

    colorList = new QList<QColor>();

    colorList->append(QColor("#F2FCC2"));
    colorList->append(QColor("#FCCDB6"));
    colorList->append(QColor("#b3f3fc"));
    colorList->append(QColor("#fcc5ea"));
    colorList->append(QColor("#b8b3fc"));
    colorList->append(QColor("#b6fcb3"));
    colorList->append(QColor("#f2f1f0"));

    //fake data
    aFacility2 = new Facility(5,"TheFacility",4,2,4,5,6); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
    /*aFacility3 = new Facility(5,"ttt",4,2,4,5,6, Qt::blue, 2, 2); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
    aFacility4 = new Facility(5,"eeee",4,2,4,5,6, Qt::green, 2, 2); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
    */
    aPatient15 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
    aPatient16 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
    aPatient17 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);

    listOfPatient.append(aPatient15);listOfPatient.append(aPatient16);listOfPatient.append(aPatient17);
    listOfFacility.append(aFacility2);//listOfFacility.append(aFacility3);listOfFacility.append(aFacility4);

    listOfFacility.at(0)->addPatientAcute(aPatient15);
    listOfFacility.at(0)->addPatientAcute(aPatient16);
    listOfFacility.at(0)->addPatientAcute(aPatient17);
    listOfFacility.at(0)->addWaitingList(aPatient15);
  // setupFacility(); //Where in reality our Db will only contains 1 facility ? So only the first facility will be set there.
  //  setupPatients(); //Put all patients inside the facility

   //canceled = false;

    AddFacCtrl::getInstance()->setList(&listOfFacility);

}

MapWinCtrl* MapWinCtrl::getInstance()
{
    if(!anInstance) //If it is doesn't already exist
        anInstance = new MapWinCtrl; //Create a new instance, new for the heap.

    return anInstance;//Return the instance.
}

void MapWinCtrl::invalid(){

    invalidWin = new InvalidWindow();

    invalidWin->setLabelText("Facilities can not be created here!");
    invalidWin->show();

    genCTRL::center(*invalidWin);
}



void MapWinCtrl::goToAddUser()
{
    addUserWin = new AddUserWindow();
    addUserWin->show();
    genCTRL::center(*addUserWin);
}

void MapWinCtrl::goToAddFac(const QPoint &pnt, const int &area, const QColor &aColor)
{

    addFac = new AddFacility();
    addFac->show();
    AddFacCtrl::getInstance()->setList(&listOfFacility);
    AddFacCtrl::getInstance()->setArea(area);

    genCTRL::center(*addFac);

    if(!(pnt.isNull())){
        addFac->addCoord(pnt.x(), pnt.y());
        addFac->determineArea(aColor);
    }

}

void MapWinCtrl::gotoFacility()
{
    aFacilityView = new FacilityWindow();
    aFacilityView->show();
    aFacilityView->setUI(listOfFacility.at(0));
  //  AddFacCtrl::getInstance()->setList(&listOfFacility);
    genCTRL::center(*aFacilityView);
}


//Put from DB to our list the patients

/*void MapWinCtrl::setupPatients()
{
    QSqlQuery query;
    QString HealthCardNum;
    QString firstName ;
    QString lastName;
    QDate dateAdmitted ;
    QDate datePlacedOnWaitingList;
    int reqCare;
    int occCare;

     query.exec("SELECT dateAdmitted,datePlacedOnWaitingList,firstName,healthCardNum, lastName ,occCare,reqCare FROM patient ");

     while (query.next()) {
         HealthCardNum =query.value(3).toString();
         firstName = query.value(2).toString();
         lastName = query.value(4).toString();
         datePlacedOnWaitingList = query.value(1).toDate();
         dateAdmitted = query.value(0).toDate();
         occCare = query.value(5).toInt();
         reqCare = query.value(6).toInt();

         Patient * aPatient = new Patient(HealthCardNum, firstName,lastName,dateAdmitted,datePlacedOnWaitingList,reqCare,occCare);
         if(occCare == 0)
            listOfFacility.at(0)->addPatientAcute(aPatient);
         else if (occCare == 1)
             listOfFacility.at(0)->addPatientComplex(aPatient);
         else
             listOfFacility.at(0)->addPatientLTC(aPatient);
  //       listOfPatient.append(aPatient);
     }
     query.clear();
}*/

/*void MapWinCtrl::setupFacility()
{
    int id,x,y,AC,CCC,LTC;
    QString facilityName;
    QSqlQuery query;
    query.exec("SELECT AC,CCC,coordinateX,coordinateY,facilityID,LTC,name FROM facility ");

    while (query.next()) {
        AC = query.value(0).toInt();
        CCC = query.value(1).toInt();
        x = query.value(2).toInt();
        y = query.value(3).toInt();
        id = query.value(4).toInt();
        LTC = query.value(5).toInt();
        facilityName = query.value(6).toString();

        Facility * aFacility = new Facility(id,facilityName,x,y,AC,CCC,LTC);
        listOfFacility.append(aFacility);
    }
    query.clear();
}*/

//void MapWinCtrl::setCanceled(bool canc){canceled = canc;}
void MapWinCtrl::setList(QList<Facility *> aFacilityList){listOfFacility = aFacilityList;}
/*
void MapWinCtrl::determineArea(QColor aColor){

    QList<QColor>::iterator i;
    for (i = colorList->begin(); i != colorList->end(); ++i){

        if(aColor == *i){

            if(aColor.toRgb().name().toStdString() == "#f2fcc2"){
                area = 0;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fccdb6"){
                area = 1;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b3f3fc"){
                area = 2;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fcc5ea"){
                area = 3;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b8b3fc"){
                area = 4;
                break;
            }
            else{
                area = 5;
                break;
            }
        }
    }

}
*/
