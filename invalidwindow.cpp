#include "invalidwindow.h"
#include "ui_invalidwindow.h"

InvalidWindow::InvalidWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InvalidWindow)
{
    ui->setupUi(this);
    this->setPalette(Qt::white);
    connect(ui->okBtn, SIGNAL(clicked()), this, SLOT(on_okBtn_clicked()));

    setScheme();
}

InvalidWindow::~InvalidWindow(){delete ui;}

void InvalidWindow::on_okBtn_clicked(){this->close();}

void InvalidWindow::setScheme(){

    QImage warning("warning.jpg");
    ui->warningImg->setScaledContents(TRUE);
    ui->warningImg->setPixmap(QPixmap::fromImage(warning));

    QPalette btnPal(Qt::white);
    btnPal.setColor(QPalette::ButtonText, QColor(255, 255, 255));

    ui->okBtn->setStyleSheet("background-color: red");

    ui->okBtn->setPalette(btnPal);

}

void InvalidWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        this->close();
        break;

    }
}

void InvalidWindow::setLabelText(QString str){ui->label->setText(str);}
