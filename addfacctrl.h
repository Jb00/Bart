#ifndef ADDFACCTRL_H
#define ADDFACCTRL_H

#include <QDialog>

#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QPainter>

#include "addfacility.h"
#include "Facility.h"
#include "genctrl.h"


class AddFacCtrl: public genCTRL
{
private :
        AddFacCtrl();
        static AddFacCtrl* anInstance;

        int id;
        QString facilityName;
        int x;
        int y;
        int AC;
        int CCC;
        int LTC;
        int area;
        QList<Facility *> *facilityList;
        bool ok;

public:

    static AddFacCtrl* getInstance();

    void addFacilityCoord(int, int);

    void invalid();

    void addToDb();
    void setId(int);
    void setX(int);
    void setY(int);
    void setAC(int);
    void setCCC(int);
    void setLTC(int);
    void setName(QString);
    void setArea(int);
    void setList(QList<Facility *>*);
    void setOK(bool);

    int getArea();
    bool isOK();
};

#endif // ADDFACCTRL_H

