#ifndef PATIENT_H
#define PATIENT_H

#include <QString>
#include <QDate>
//Patient.h
//Define a patient


class Patient
{

private :

//        QDate dateBirth;

        QString typeCareNeeded;
        QString facilityName;
        int bedNumber;

        QString healthCardNum;
        QString fName;
        QString lName;
        QDate dateAdmitted;
        QDate dateWL;
        int reqCare;
        int occCare;



public:
    Patient(QString,QString,QString,QDate,QDate,int,int);
    ~Patient();

    void setNeeded(int);
    void setFacility(QString);
    void setBed(int);
    void setdateWL(QDate);
    QString gethealthCard();
    QString getFName();
    QString getLName();
    QDate getAdmission();
    QDate getDateWL();
    int getNeeded(); //Needed Care

};
#endif // PATIENT_H


