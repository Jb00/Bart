
#include "Patient.h"

Patient::Patient(QString aHealthCardNum,QString aFName,QString aLName,QDate aDateAdmitted,QDate aDateWL,int aReqCare,int anOccCare)
{
    aHealthCardNum = healthCardNum;
    fName = aFName;
    lName = aLName;
    dateAdmitted = aDateAdmitted;
    dateWL = aDateWL;
    reqCare = aReqCare;
    occCare = anOccCare;
}



void Patient::setNeeded(int aType)
{
    reqCare = aType;
}

void Patient::setFacility(QString aFacility)
{
    facilityName =aFacility;
}

void Patient::setBed(int aBed)
{
    bedNumber =aBed;
}

void Patient::setdateWL(QDate aDate)
{
    dateWL =aDate;
}

QString Patient::gethealthCard()
{
    return healthCardNum;
}

QString Patient::getFName()
{
    return fName;
}

QString Patient::getLName()
{
    return lName;
}

QDate Patient::getDateWL()
{
    return dateWL;
}

QDate Patient::getAdmission()
{
    return dateAdmitted;
}

int Patient::getNeeded()
{
    return reqCare;
}

/*QString Patient::getFacility()
{
    return facilityName;
}

int Patient::getBed()
{
    return bedNumber;
}
*/






