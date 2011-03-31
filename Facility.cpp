#include "Facility.h"

Facility::Facility(int anId,QString aName, int aX,int aY,int anACbed,int aCCCbed,int aLTCBed)
{
    id = anId;
    name = aName;
    x=aX;
    y=aY;
    NumberBedTotalAcute = anACbed = NumberBedAvailableAcute;
    NumberBedTotalComplex =aCCCbed = NumberBedAvailableComplex;
    NumberBedTotalLTC = aLTCBed = NumberBedAvailableLTC;

    if(NumberBedTotalAcute > 0 )
        type ="H";
        else if(NumberBedTotalComplex > 0)
            type="H";
            else if (NumberBedTotalLTC > 0)
                type ="N";
            else
                type ="Q"; //UNKNOWN
}

Facility::~Facility(){}


//Add a bed Acute
void Facility::addBedAcute()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBedAcute.append(aBed); //Add at the end of the list
}

int Facility::getSizeAcute()
{
    return listBedAcute.size();
}

bool Facility::isEmptyAcute()
{
    return listBedAcute.isEmpty();
}

//Remove a bed Acute

bool Facility::removeBedAcute(int number)
{
    int loop=0;                     //Will be used to make sure we dont check more than the number of actual bed. Incase they are all Used.

    number = number * -1 ; // To put the number positive

    if (listBedAcute.isEmpty() || (number > listBedAcute.size())) //Make sure the list isn't empty
        return false;

    while (number != 0 )
    {
        if (listBedAcute.front()->getUse() == 0 )
        {
            listBedAcute.removeFirst();
            number--;
        }
        if (loop > getSizeAcute())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

int Facility::getSizePatientAcute()
{
    return listAcute.size();
}

//Add Bed Complex
void Facility::addBedComplex()
{
    Bed * aBed = new Bed();         //Create a new bed
    listBedComplex.append(aBed);    //Add at the end of the list
}

int Facility::getSizeComplex()
{
    return listBedComplex.size();
}

bool Facility::isEmptyComplex()
{
    return listBedComplex.isEmpty();
}

//Remove a bed Complex
bool Facility::removeBedComplex(int number)
{
    int loop=0;

    number = number * -1 ; // To put the number positive

    if (listBedComplex.isEmpty() || (number > listBedComplex.size())) //Make sure the list isn't empty
        return false;

    while (number != 0 )
    {
        if (listBedComplex.at(loop)->getUse() == 0 )
        {
            listBedComplex.removeAt(loop);
            number--;
        }
        if (loop >= getSizeComplex())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

void Facility::addPatientAcute(Patient * aPatient)
{

    listAcute.append(aPatient);
}

void Facility::addPatientComplex(Patient * aPatient)
{
    listComplex.append(aPatient);
}

bool Facility::NUsedBedComplex() //If we want to return bed #, simply return bed # or -1 . -1 fail and bed# = win.
{
    int loop=0;
    if (listBedComplex.isEmpty()) //If the list of bed is empty, then obviously return false
        return false;

    while(loop < getSizeComplex())
    {
        if (listBedComplex.at(loop)->getUse() == 0 )
        {
            listBedComplex.at(loop)->setUse(1);
            return true; //We found an empty bed for the patient
        }
        loop++;
    }
    return false; //No empty bed
}

bool Facility::NUsedBedAcute() //If we want to return bed #, simply return bed # or -1 . -1 fail and bed# = win.
{
    int loop=0;
    if (listBedAcute.isEmpty()) //If the list of bed is empty, then obviously return false
        return false;

    while(loop < getSizeAcute())
    {
        if (listBedAcute.at(loop)->getUse() == 0 )
        {
            listBedAcute.at(loop)->setUse(1);
            return true; //We found an empty bed for the patient
        }
        loop++;
    }
    return false; //No empty bed
}

int Facility::getSizePatientComplex()
{
    return listComplex.size();
}



//Add Bed LTC
void Facility::addBedLTC()
{
    Bed * aBed = new Bed(); //Create a new bed
    listBedLTC.append(aBed); //Add at the end of the list
    std::cout<< listBedLTC.first()->getUse();                   //TO REMOVE TEST
}

int Facility::getSizeLTC()
{
    return listBedLTC.size();
}

bool Facility::isEmptyLTC()
{
    return listBedLTC.isEmpty();
}

//Remove a bed LTC
bool Facility::removeBedLTC(int number)
{
    int loop=0;
    while (number != 0 || !isEmptyLTC())
    {
        std::cout << listBedLTC.front()->getUse();              //TO REMOVE TEST
        if (listBedLTC.front()->getUse() == 0 )
        {
            listBedLTC.removeFirst();
            number++; //As the number is negative, ++
        }
        if (loop >= getSizeLTC())   //If we tested more than number of Bed, and we couldn't remove the demanded number.
            return false;               //Fail to remove 'number' Bed

        loop++;                     //Keep track of the number of bed tested.
    }
    return true;                       //Success erased 'number' Bed;
}

void Facility::addPatientLTC(Patient* aPatient)
{
    listLTC.append(aPatient);
}

bool Facility::removePatientWL(Patient* aPatient)
{
    int position= listWL.indexOf(aPatient);// Return -1 if not in the list
    std::cout << "THE POSITION"<<position;
    if( position != -1) //If it is in the list
    {
        listWL.removeAt(position);
        return true; //Success remove
    }

    return false; //Fail to remove
}

bool Facility::NUsedBedLTC()
{
    int loop=0;
    if (listBedLTC.isEmpty()) //If the list of bed is empty, then obviously return false
        return false;

    while(loop < getSizeLTC())
    {
        if (listBedLTC.at(loop)->getUse() == 0 )
        {
            listBedLTC.at(loop)->setUse(1);
            return true; //We found an empty bed for the patient
        }
        loop++;
    }
    return false; //No empty bed
}

int Facility::getSizePatientLTC()
{
    return listLTC.size();
}


void Facility::addWaitingList(Patient * aPatient)
{
    listWL.append(aPatient);
}

int Facility::getSizeWL()
{
    return listWL.size();
}

QString Facility::getName()
{
    return name;
}

QString Facility::getArea()
{
    return area;
}

int Facility::getId()
{
    return id;
}

int Facility::getX()
{
    return x;
}

int Facility::getY()
{
    return y;
}


void Facility::setName(QString aName)
{
    name = aName;
}

