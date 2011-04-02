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

    colorList = new QList<QColor>();

    colorList->append(QColor("#F2FCC2"));
    colorList->append(QColor("#FCCDB6"));
    colorList->append(QColor("#b3f3fc"));
    colorList->append(QColor("#fcc5ea"));
    colorList->append(QColor("#b8b3fc"));
    colorList->append(QColor("#b6fcb3"));
    colorList->append(QColor("#f2f1f0"));

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
    //qDebug() << "AC: " << AC;

    if((name == "") || (id == 0) || (xCoord == 0) || (yCoord == 0) || ((AC == 0) && (CCC == 0) && (LTC == 0))){

       AddFacCtrl::getInstance()->invalid();
    }
    else{

        //Set value into the controller from the UI
        AddFacCtrl::getInstance()->setId(id);
        AddFacCtrl::getInstance()->setName(name);
        AddFacCtrl::getInstance()->setX(xCoord);
        AddFacCtrl::getInstance()->setY(yCoord);
        AddFacCtrl::getInstance()->setAC(AC);
        AddFacCtrl::getInstance()->setCCC(CCC);
        AddFacCtrl::getInstance()->setLTC(LTC);

        //determineIcon();
        qDebug() << "AC before adToDb: " << AddFacCtrl::getInstance()->getAC();
        AddFacCtrl::getInstance()->addToDb();
        this->close();
    }


}

void AddFacility::cancelBtn_clicked(){this->close();}

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

/*
void AddFacility::determineIcon(){

    if(AC > 0 && AC <= 25){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::red);
        AddFacCtrl::getInstance()->setFacXSize(3);
        AddFacCtrl::getInstance()->setFacYSize(3);
    }
    else if(AC > 25 && AC <= 50){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::red);
        AddFacCtrl::getInstance()->setFacXSize(5);
        AddFacCtrl::getInstance()->setFacYSize(5);
    }
    else if(AC > 50 && AC <= 75){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::red);
        AddFacCtrl::getInstance()->setFacXSize(7);
        AddFacCtrl::getInstance()->setFacYSize(7);
    }
    else if(AC > 75 && AC <= 100){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::red);
        AddFacCtrl::getInstance()->setFacXSize(9);
        AddFacCtrl::getInstance()->setFacYSize(9);
    }
    else if(LTC > 0 && LTC <= 25){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::black);
        AddFacCtrl::getInstance()->setFacXSize(3);
        AddFacCtrl::getInstance()->setFacYSize(3);
    }
    else if(LTC > 25 && LTC <= 50){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::black);
        AddFacCtrl::getInstance()->setFacXSize(5);
        AddFacCtrl::getInstance()->setFacYSize(5);
    }
    else if(LTC > 50 && LTC <= 75){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::black);
        AddFacCtrl::getInstance()->setFacXSize(7);
        AddFacCtrl::getInstance()->setFacYSize(7);
    }
    else if(LTC > 75 && LTC <= 100){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::black);
        AddFacCtrl::getInstance()->setFacXSize(9);
        AddFacCtrl::getInstance()->setFacYSize(9);
    }
    else if(CCC > 0 && CCC <= 25){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::darkGreen);
        AddFacCtrl::getInstance()->setFacXSize(3);
        AddFacCtrl::getInstance()->setFacYSize(3);
    }
    else if(CCC > 25 && CCC <= 50){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::darkGreen);
        AddFacCtrl::getInstance()->setFacXSize(5);
        AddFacCtrl::getInstance()->setFacYSize(5);
    }
    else if(CCC > 50 && CCC <= 75){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::darkGreen);
        AddFacCtrl::getInstance()->setFacXSize(7);
        AddFacCtrl::getInstance()->setFacYSize(7);
    }
    else if(CCC > 75 && CCC <= 100){

        AddFacCtrl::getInstance()->setFacIconColor(Qt::darkGreen);
        AddFacCtrl::getInstance()->setFacXSize(9);
        AddFacCtrl::getInstance()->setFacYSize(9);
    }

    AddFacCtrl::getInstance()->addToDb();
}
*/

void AddFacility::determineArea(QColor aColor){

    QList<QColor>::iterator i;
    for (i = colorList->begin(); i != colorList->end(); ++i){

        if(aColor == *i){

            if(aColor.toRgb().name().toStdString() == "#f2fcc2"){
                area = 0;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fccdb6"){
                area = 1;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b3f3fc"){
                area = 2;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fcc5ea"){
                area = 3;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b8b3fc"){
                area = 4;
                break;
            }
            else{
                area = 5;
                break;
            }
        }
    }

}




