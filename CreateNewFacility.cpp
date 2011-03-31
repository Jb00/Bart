#include "CreateNewFacility.h"
#include "ui_CreateNewFacility.h"

CreateNewFacility::CreateNewFacility(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateNewFacility)
{
    ui->setupUi(this);
    connect(ui->okBtn_2,SIGNAL(clicked()),this,SLOT(okBtn_Clicked()));
}

CreateNewFacility::~CreateNewFacility()
{
    delete ui;
}


void CreateNewFacility::okBtn_Clicked()
{
   // facilityName = ui->nameTxt->toPlainText();
   // area = ui->areaTxt->toPlainText();
   // NumberBedtotal = ui->bedsTxt->toPlainText();
   // hasWaitingList = ui->waitingTxt->toPlainText();

    id =ui->idLine->text().toInt();
    facilityName = ui->facilityLine->text();
    x= ui->xLine->text().toInt();
    y=ui->yLine->text().toInt();
    AC = ui->acuteNumBox->text().toInt();
    CCC=ui->complexNumBox->text().toInt();
    LTC=ui->longNumBox->text().toInt();
    qDebug() <<CCC;
//    area =ui->area->text();

    //Set value into the controller from the UI
    CreateNewFacilityController::getInstance()->setId(id);
    CreateNewFacilityController::getInstance()->setName(facilityName);
    CreateNewFacilityController::getInstance()->setX(x);
    CreateNewFacilityController::getInstance()->setY(y);
    CreateNewFacilityController::getInstance()->setArea(area);
    CreateNewFacilityController::getInstance()->setAC(AC);
    CreateNewFacilityController::getInstance()->setCCC(CCC);
    CreateNewFacilityController::getInstance()->setAC(LTC);

    CreateNewFacilityController::getInstance()->addToDb();

}


