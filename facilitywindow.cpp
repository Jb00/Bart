#include "facilitywindow.h"
#include "ui_facilitywindow.h"

FacilityWindow::FacilityWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FacilityWindow)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(okBtn_clicked()));

    connect(ui->acuteRaio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));
    connect(ui->complexRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));
    connect(ui->longRadio, SIGNAL(toggled(bool)), this, SLOT(typeRadio_selected()));


}

void FacilityWindow::setUI(Facility* aFacility)
{
    facility = aFacility;
    //Set num to QString
    QString id;
    id.setNum(facility->getId()); //int to string
    QString x;
    x.setNum(facility->getX());
    QString y;
    y.setNum(facility->getY());


    ui->nameLbl->setText(facility->getName());
    ui->idLbl->setText(id);
    ui->xLbl->setText(x);
    ui->yLbl->setText(y);

    //for acute occupancy
    QString occ;
    occ.setNum(facility->getSizePatientComplex());
    ui->occLbl->setText(occ);
}

FacilityWindow::~FacilityWindow()
{
    delete ui;
}

void FacilityWindow::typeRadio_selected()
{

}

void FacilityWindow::okBtn_clicked(){


}

void FacilityWindow::cancelBtn_clicked(){


}

void FacilityWindow::waitingBtn_clicked(){

}

/*void FacilityWindow::setScheme(){

    this->setPalette(Qt::white);

    QImage cross("red_cross2.png");
    ui->crossImg->setScaledContents(TRUE);
    ui->crossImg->setPixmap(QPixmap::fromImage(cross));
}*/

void FacilityWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        qApp->quit();
        break;

    }
}

