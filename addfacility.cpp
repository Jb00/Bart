#include "addfacility.h"
#include "ui_addfacility.h"

#include <QDialog>

AddFacility::AddFacility(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddFacility)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(okBtn_clicked()));
    connect(ui->hospitalRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));
    connect(ui->nursingRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));

    ui->acuteNumBox->setDisabled(true);
    ui->complexNumBox->setDisabled(true);
    ui->longNumBox->setDisabled(true);


    setScheme();

}

AddFacility::~AddFacility(){delete ui;}

void AddFacility::okBtn_clicked(){

    name = ui->nameLine->text();
    id = ui->idLine->text().toInt();
    xCoord = ui->xLine->text().toInt();
    yCoord = ui->yLine->text().toInt();
    AC = ui->acuteNumBox->text().toInt();
    CCC=ui->complexNumBox->text().toInt();
    LTC=ui->longNumBox->text().toInt();
    qDebug() <<CCC;


    //Set value into the controller from the UI
    AddFacCtrl::getInstance()->setId(id);
    AddFacCtrl::getInstance()->setName(name);
    AddFacCtrl::getInstance()->setX(xCoord);
    AddFacCtrl::getInstance()->setY(yCoord);
 //   AddFacCtrl::getInstance()->setArea(area);
    AddFacCtrl::getInstance()->setAC(AC);
    AddFacCtrl::getInstance()->setCCC(CCC);
    AddFacCtrl::getInstance()->setAC(LTC);

    AddFacCtrl::getInstance()->addToDb();
    AddFacCtrl::getInstance()->setOK(true);
    this->close();
    /*
    OLD BART
    if(ui->hospitalRadio->isChecked())
        addCtrl->addFacilityToMap(name, id, xCoord, yCoord, ui->acuteNumBox->text().toInt(), ui->complexNumBox->text().toInt(), ui->longNumBox->text().toInt(), 'h');
    else if(ui->nursingRadio->isChecked())
        addCtrl->addFacilityToMap(name, id, xCoord, yCoord, ui->acuteNumBox->text().toInt(), ui->complexNumBox->text().toInt(), ui->longNumBox->text().toInt(), 'n');
    else
        addCtrl->invalid();

        */
}

void AddFacility::cancelBtn_clicked(){

    AddFacCtrl::getInstance()->setOK(false);
    this->close();
}

void AddFacility::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;
    }
}

void AddFacility::typeRadio_selected(){

    if(ui->hospitalRadio->isChecked()){

        ui->acuteNumBox->setEnabled(true);
        ui->complexNumBox->setEnabled(true);
        ui->longNumBox->setDisabled(true);
        ui->longNumBox->setValue(0);
    }
    else{

        ui->longNumBox->setEnabled(true);
        ui->acuteNumBox->setDisabled(true);
        ui->acuteNumBox->setValue(0);
        ui->complexNumBox->setDisabled(true);
        ui->complexNumBox->setValue(0);
    }

}

void AddFacility::setScheme(){

    this->setPalette(Qt::white);

    QImage cross("red_cross2.png");
    ui->crossImg->setScaledContents(TRUE);
    ui->crossImg->setPixmap(QPixmap::fromImage(cross));
}

void AddFacility::addCoord(int x, int y){

    QString xStr;
    QString yStr;

    xStr.setNum(x);
    yStr.setNum(y);
    ui->xLine->setText(xStr);
    ui->yLine->setText(yStr);
    ui->xLine->setDisabled(true);
    ui->yLine->setDisabled(true);
}




