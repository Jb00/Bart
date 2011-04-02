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
#include "invalidwindow.h"


class MapWinCtrl: public genCTRL
{
public:


    void goToAddUser();
    void goToAddFac(const QPoint &, const int &, const QColor &);
    void setupPatients();
    //void setupFacility();
    void gotoFacility();
    void setList(QList<Facility *>);

    void invalid();
    QList<Facility*> listOfFacility;
    QList<Patient*> listOfPatient;


    static MapWinCtrl* getInstance();

    //void determineArea(QColor);

private:

    MapWinCtrl();
    static MapWinCtrl* anInstance;


    AddUserWindow* addUserWin;
    AddFacility* addFac;
    Map* map;
    FacilityWindow* aFacilityView;
    InvalidWindow* invalidWin;

    //bool canceled;
    //FAKE DATA TEST
    QList<QColor> *colorList;


    QList<User*> listOfUser;

    int area;

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
