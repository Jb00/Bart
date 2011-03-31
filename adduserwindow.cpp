#include "adduserwindow.h"
#include "ui_adduserwindow.h"

AddUserWindow::AddUserWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddUserWindow)
{
    ui->setupUi(this);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(on_cancelBtn_clicked()));
    connect(ui->okBtn, SIGNAL(pressed()), this, SLOT(on_okBtn_clicked()));
}

AddUserWindow::~AddUserWindow(){delete ui;}

void AddUserWindow::on_okBtn_clicked(){


    userName = ui->nameLine->text();
    type =ui->typeLine->text().toInt();
    password =ui->passwordLine->text().toInt();
    //id = ui->idTxt->toPlainText().toInt();

   // AddUserCtrl::getInstance()->setId(id);
    AddUserCtrl::getInstance()->setName(userName);
    AddUserCtrl::getInstance()->setType(type);
    AddUserCtrl::getInstance()->setPassword(password);
    AddUserCtrl::getInstance()->addToDb();

}

void AddUserWindow::on_cancelBtn_clicked(){this->close();}

void AddUserWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;

    }
}


