#include "loginwindow.h"
#include "ui_loginwindow.h"

#include <iostream>
#include <QApplication>
#include <QKeyEvent>


LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    this->setPalette(Qt::white);
    setWindowTitle("EOBC Login");

    ui->pwordLine->setEchoMode(QLineEdit::Password);

    connect(ui->cancelBtn, SIGNAL(pressed()), this, SLOT(on_cancelBtn_clicked()));
    connect(ui->loginBtn, SIGNAL(pressed()), this, SLOT(on_loginBtn_clicked()));

    loginCtrl = new LoginWindowCtrl();

    setScheme();
}

LoginWindow::~LoginWindow(){delete ui;}

void LoginWindow::on_cancelBtn_clicked(){this->close();}

void LoginWindow::on_loginBtn_clicked()
{

    name = ui->nameLine->text();
    pword = ui->pwordLine->text();

    if(loginCtrl->authenticate(pword, name)){

        loginCtrl->goToMap();
        this->close();
    }
    else{

        loginCtrl->invalid();
        ui->pwordLine->clear();
        ui->nameLine->clear();
    }

}

void LoginWindow::setScheme(){

    QImage welcome("welcome.png");
    QImage cross("red_cross2.png");

    ui->welcomeLabel->setScaledContents(TRUE);
    ui->welcomeLabel->setPixmap(QPixmap::fromImage(welcome));

    ui->crossImg->setScaledContents(TRUE);
    ui->crossImg->setPixmap(QPixmap::fromImage(cross));

    QPalette btnPal(Qt::white);
    btnPal.setColor(QPalette::ButtonText, QColor(255, 255, 255));

    ui->loginBtn->setStyleSheet("background-color: red");
    ui->cancelBtn->setStyleSheet("background-color: red");

    ui->loginBtn->setPalette(btnPal);
    ui->cancelBtn->setPalette(btnPal);


}

void LoginWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        qApp->quit();
        break;

    }
}





