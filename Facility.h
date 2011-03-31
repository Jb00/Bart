#ifndef FACILITY_H
#define FACILITY_H
#include <QString>
#include <QList>
#include "Patient.h"
#include "Bed.h"
#include <iostream>

class Facility
{

private :
        QString type; //Keep type of facility
        QString name;
        int id;
        QString area; //Do we agree to let it like that ? or We'll use an area objecT? We needed it for some waiting list and such. See later ?
        int NumberBedtotal; // +ac + ccc + ltc
        bool hasWaitingList; // 1 has it, 0 doesn't
        int NumberBedTotalAcute;
        int NumberBedAvailableAcute;
        int NumberBedTotalComplex;
        int NumberBedAvailableComplex;
        int NumberBedTotalLTC;
        int NumberBedAvailableLTC;
        int x;
        int y;
        QList<Bed*> listBedComplex;
        QList<Bed*> listBedAcute;
        QList<Bed*> listBedLTC;
        QList<Patient*> listAcute;
        QList<Patient*> listComplex;
        QList<Patient*> listLTC; //List of patient in LTC

        QList<Patient*> listWL; //WaitingList


public:
    Facility(int,QString,int,int,int,int,int);
  //  Facility(QString,QString); // Might need to pass NumberBedtotal, depends of the UI. I'll assume no.
    ~Facility();

    //Acute
    void addBedAcute();
    bool removeBedAcute(int);
    int getSizeAcute();
    bool isEmptyAcute();
    bool NUsedBedAcute();   //Non Used Bed for Acute care. True = success false = fail
    void addPatientAcute(Patient*);
    int getSizePatientAcute();
    //Complex
    void addBedComplex();
    bool removeBedComplex(int);
    int getSizeComplex();
    bool isEmptyComplex();
    void addPatientComplex(Patient*);
    bool NUsedBedComplex(); //Non Used Bed for Complex Care. True = success false = fail
    int getSizePatientComplex();
    //LTC
    void addBedLTC();
    bool removeBedLTC(int);
    int getSizePatientLTC();
    bool isEmptyLTC();
    void addPatientLTC(Patient*);
    bool removePatientWL(Patient*);
    int getSizeLTC();
    void addWaitingList(Patient*);
    int getSizeWL();
    bool NUsedBedLTC();

    QString getName();
    QString getArea();
    int getId();
    int getX();
    int getY();



    void setName(QString);




};

#endif // FACILITY_H
