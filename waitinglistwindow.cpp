#include "waitinglistwindow.h"
#include "ui_waitinglistwindow.h"

#include "mapwinctrl.h"

WaitingListWindow::WaitingListWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WaitingListWindow)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(cancelBtn_clicked()));
    connect(ui->addBtn, SIGNAL(pressed()), this, SLOT(addBtn_clicked()));
    connect(ui->searchBtn, SIGNAL(pressed()), this, SLOT(searchBtn_clicked()));
    connect(ui->removeBtn, SIGNAL(pressed()), this, SLOT(removeBtn_clicked()));


}

WaitingListWindow::~WaitingListWindow()
{
    delete ui;
}

void WaitingListWindow::cancelBtn_clicked(){

    ui->fnameLbl->clear();
    ui->lnameLbl->clear();
    ui->facnameLbl->clear();
    ui->careLbl->clear();
    ui->cardNumLbl->clear();
    ui->waitingLbl->clear();
    ui->healthLine->clear();

    this->close();
}

void WaitingListWindow::addBtn_clicked(){

}

void WaitingListWindow::searchBtn_clicked(){

    QString card;
    card = ui->healthLine->text();


    for(int i = 0; i < MapWinCtrl::getInstance()->listOfPatient.size(); i++){

            qDebug() << "Health card: " << MapWinCtrl::getInstance()->listOfPatient.at(i)->gethealthCard();
            if(MapWinCtrl::getInstance()->listOfPatient.at(i)->gethealthCard() == card){

                ui->fnameLbl->setText(MapWinCtrl::getInstance()->listOfPatient.at(i)->getFName());
                ui->lnameLbl->setText(MapWinCtrl::getInstance()->listOfPatient.at(i)->getLName());
                ui->facnameLbl->setText("we don't have a get for tis yet.");
                //ui->careLbl->setText(MapWinCtrl::getInstance()->listOfFacility.at(i)->listAcute.at(j)->getNeeded());
                ui->cardNumLbl->setText(MapWinCtrl::getInstance()->listOfPatient.at(i)->gethealthCard());


                //if(MapWinCtrl::getInstance()->listOfPatient.at(i)->getDateWL())
                    ui->waitingLbl->setText(MapWinCtrl::getInstance()->listOfPatient.at(i)->getDateWL().toString());
            }
        }

}

void WaitingListWindow::removeBtn_clicked(){

    QString card;
    card = ui->healthLine->text();

    //qDebug() << card;
    //qDebug() << "MapWnCtrl patient acute list size should be 3 in listAcute....size = " << MapWinCtrl::getInstance()->listOfFacility.at(0)->listAcute.size();
    //qDebug() << "MapWnCtrl patient acute list size should be 3 in listOfPatient....size = " << MapWinCtrl::getInstance()->listOfPatient.size();

    for(int i = 0; i < MapWinCtrl::getInstance()->listOfPatient.size(); i++){

            //qDebug() << "Health card: " << MapWinCtrl::getInstance()->listOfPatient.at(i)->gethealthCard();
            if(MapWinCtrl::getInstance()->listOfPatient.at(i)->gethealthCard() == card){

                MapWinCtrl::getInstance()->listOfFacility.at(i)->removePatientWL(MapWinCtrl::getInstance()->listOfPatient.at(i));
                ui->fnameLbl->clear();
                ui->lnameLbl->clear();
                ui->facnameLbl->clear();
                ui->careLbl->clear();
                ui->cardNumLbl->clear();
                ui->waitingLbl->clear();
                ui->healthLine->clear();
                break;
            }
    }

    this->close();
}

void WaitingListWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;
    }
}
