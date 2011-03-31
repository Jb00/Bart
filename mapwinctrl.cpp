#include "mapwinctrl.h"

MapWinCtrl::MapWinCtrl()
{
    QDate aDate(1998,2,3);

    //fake data
    aFacility2 = new Facility(5,"TheFacility",4,2,4,5,6); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
    aFacility3 = new Facility(5,"ttt",4,2,4,5,6); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE
    aFacility4 = new Facility(5,"eeee",4,2,4,5,6); //Will use the main facility list, but for now.LEt's assume 1 facility TO CHANGE

    aPatient15 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
    aPatient16 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);
    aPatient17 = new Patient ("12e","Bob","Henry",aDate,aDate,7,8);

    listOfPatient.append(aPatient15);listOfPatient.append(aPatient16);listOfPatient.append(aPatient17);
    listOfFacility.append(aFacility2);listOfFacility.append(aFacility3);listOfFacility.append(aFacility4);

   setupFacility(); //Where in reality our Db will only contains 1 facility ? So only the first facility will be set there.
   setupPatients(); //Put all patients inside the facility

   canceled = false;
   windowCounter = 0;

}
MapWinCtrl::~MapWinCtrl(){}


void MapWinCtrl::goToAddUser()
{
    addUserWin = new AddUserWindow();
    addUserWin->show();
    genCTRL::center(*addUserWin);
}

void MapWinCtrl::goToAddFac(const QPoint &pnt, const int &area)
{

    addFac = new AddFacility();
    addFac->show();
    AddFacCtrl::getInstance()->setList(&listOfFacility);
    AddFacCtrl::getInstance()->setArea(area);

    //qDebug() << "Area from AddFacCtrl::getInstance().getArea() in MapWinCtrl::goToAddFac: " << AddFacCtrl::getInstance()->getArea();
    genCTRL::center(*addFac);

    if(!(pnt.isNull())){
        addFac->addCoord(pnt.x(), pnt.y());
    }

    /*if(AddFacCtrl::getInstance()->isCanceled()){
        canceled = true;
        AddFacCtrl::getInstance()->setCanceled(false);
        qDebug() << "Cancel button after being clicked and set back to false in AddFacCtrl: " << AddFacCtrl::getInstance()->isCanceled();
        return canceled;
    }

    return canceled;*/
}

void MapWinCtrl::gotoFacility()
{
    aFacilityView = new FacilityWindow();
    aFacilityView->show();
    aFacilityView->setUI(listOfFacility.at(0));
  //  AddFacCtrl::getInstance()->setList(&listOfFacility);
  //  genCTRL::center(*addFac);
}


//Put from DB to our list the patients

void MapWinCtrl::setupPatients()
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
}

void MapWinCtrl::setupFacility()
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
}

void MapWinCtrl::setCanceled(bool canc){canceled = canc;}

