#ifndef CREATENEWFACILITYCONTROLLER_H
#define CREATENEWFACILITYCONTROLLER_H


#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>

#include "CreateNewFacility.h"
#include "Facility.h"



class CreateNewFacilityController
{

private :
        static CreateNewFacilityController* anInstance;
        CreateNewFacilityController();

        int id;
        QString facilityName;
        int x;
        int y;
        int AC;
        int CCC;
        int LTC;
        QString area;
        QList<Facility *> *facilityList;

public :
        static CreateNewFacilityController* getInstance();

        void createFacility(QList<Facility*>*);
        void addToDb();
        void setId(int);
        void setX(int);
        void setY(int);
        void setAC(int);
        void setCCC(int);
        void setLTC(int);
        void setName(QString);
        void setArea(QString);
        void setList(QList<Facility *>*);

};

#endif // CREATENEWFACILITYCONTROLLER_H
