#ifndef CREATENEWFACILITY_H
#define CREATENEWFACILITY_H

#include <QWidget>
#include "CreateNewFacilityController.h"



namespace Ui {
    class CreateNewFacility;
}

class CreateNewFacility : public QWidget
{
    Q_OBJECT

public:
    explicit CreateNewFacility(QWidget *parent = 0);
    ~CreateNewFacility();

private:
    Ui::CreateNewFacility *ui;
    int id;
    QString facilityName;
    int x;
    int y;
    int AC;
    int CCC;
    int LTC;
    QString area;


private slots :
       void okBtn_Clicked();

};

#endif // CREATENEWFACILITY_H

