#ifndef ADDFACCTRL_H
#define ADDFACCTRL_H

#include <QDialog>

#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QPainter>
#include <QPoint>

#include "addfacility.h"
#include "Facility.h"
#include "genctrl.h"
#include "invalidwindow.h"
//#include "mapwinctrl.h"


class AddFacCtrl: public genCTRL
{
private:
        AddFacCtrl();
        static AddFacCtrl* anInstance;

        InvalidWindow *invalidWin;

        int id;
        QString facilityName;
        int x;
        int y;
        int AC;
        int CCC;
        int LTC;
        int area;

        QColor facIconColor;
        int facXSize;
        int facYSize;
        //bool ok;

       // QList<FacIconInfo*> *facIconList;

public:

        QLinkedList<QPoint> *facilityPnts;
        QList<Facility *> *facilityList;

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
        void setFacIconColor(QColor);
        void setFacXSize(int);
        void setFacYSize(int);
        void setOK(bool);

        int getArea();
        int getAC();
        int getCCC();
        int getLTC();

        //QList<FacIconInfo*>* getIconList();

        //void setIconList(FacIconInfo *);

        QColor getFacIconColor();
        int getFacXSize();
        int getFacYSize();
        //bool isOK();
};

#endif // ADDFACCTRL_H

