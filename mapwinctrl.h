#ifndef MAPWINCTRL_H
#define MAPWINCTRL_H

#include <QList>
#include <QDialog>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include "adduserwindow.h"
#include "addfacility.h"
#include "genctrl.h"
#include "map.h"
#include "adduserctrl.h"
#include "Patient.h"
#include "Facility.h"
#include "facilitywindow.h"


class MapWinCtrl: public genCTRL
{
public:

    MapWinCtrl();
    ~MapWinCtrl();

    void goToAddUser();
    void goToAddFac(const QPoint &, const int &);
    void setupPatients();
    void setupFacility();
    void gotoFacility();

    void setCanceled(bool);
    //void goToLogin();

private:

    AddUserWindow* addUserWin;
    AddFacility* addFac;
    Map* map;
    FacilityWindow* aFacilityView;

    bool canceled;
    int windowCounter;
    //FAKE DATA TEST


    QList<Patient*> listOfPatient;
    QList<Facility*>listOfFacility;
    QList<User*> listOfUser;


    //Test Patient for Add patient to LTC
    Patient * aPatient11;
    Patient * aPatient12;
    Patient * aPatient13;
    Patient * aPatient14;
    Patient * aPatient15;
    Patient * aPatient16;
    Patient * aPatient17;
    QList<Patient*> aPatientList;

    Facility * aFacility2;
    Facility * aFacility3;
    Facility * aFacility4;
};

#endif // MAPWINCTRL_H
