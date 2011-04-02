#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(const QString &filePath): ui(new Ui::MapWindow)
{
    renderer = new QSvgRenderer(filePath);

    ui->setupUi(this);
    this->setMouseTracking(true);

    ui->menuFile->addAction(ui->actionLogout);
    ui->menuAdmin->addAction(ui->actionAdd_newUser);
    ui->menuAdmin->addAction(ui->actionCreate_Facility);
    connect(ui->actionLogout, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->actionAdd_newUser, SIGNAL(triggered()), this, SLOT(createUser_clicked()));
    connect(ui->actionCreate_Facility, SIGNAL(triggered()), this, SLOT(createFac_clicked()));
    connect(ui->actionFacilityView,SIGNAL(triggered()), this, SLOT(facilityView()));

    colorList = new QList<QColor>();
    facSizeList = new QList<int>();
}

MapWindow::~MapWindow(){}

void MapWindow::createUser_clicked(){MapWinCtrl::getInstance()->goToAddUser();}

void MapWindow::createFac_clicked(){
    QPoint aPnt;
    QColor aColor;
    MapWinCtrl::getInstance()->goToAddFac(aPnt, NULL, aColor);
}
/*
void MapWindow::determineFacColor(){

    //QColor aColor;

    if(!(MapWinCtrl::getInstance()->listOfFacility.isEmpty())){

        for(int i = 0; i < MapWinCtrl::getInstance()->listOfFacility.size(); i++){

            if((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC())
                && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= 0){
                colorList->append(Qt::red);
                colorList->append(Qt::darkGreen);
            }
            else if((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() < MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC())
                && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() <= 0){
                colorList->append(Qt::darkGreen);
                colorList->append(Qt::red);
            }
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() == MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC())
                colorList->append(Qt::blue);
            else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalLTC() > 0)
                colorList->append(Qt::black);
        }

         colorList->clear();
    }


}

void MapWindow::determineFacSize(){

    //int size;

    if(!(MapWinCtrl::getInstance()->listOfFacility.isEmpty())){

        for(int i = 0; i < MapWinCtrl::getInstance()->listOfFacility.size(); i++){

            if((MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > 0
               && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 25)
                && (MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() ==
                    MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalCCC())){

                facSizeList->append(3);

            }

        }

        facSizeList->clear();
    }


}
*/
void MapWindow::paintEvent(QPaintEvent *event)
 {
     Q_UNUSED(event)
     QPainter painter(this);
     renderer->render(&painter);
/*
     determineFacColor();
     determineFacSize();

     for(int i = 0; i < colorList->size(); i++){

         QPoint aPnt;
         aPnt.setX(MapWinCtrl::getInstance()->listOfFacility.at(i)->getX());
         aPnt.setY(MapWinCtrl::getInstance()->listOfFacility.at(i)->getY());

         painter.setBrush(colorList->at(i));
         painter.setPen(colorList->at(i));

         for(int j = 0; j < facSizeList->size(); i++){
             painter.drawEllipse(aPnt, facSizeList->at(j), facSizeList->at(j));
         }
     }
     */
     if(!(MapWinCtrl::getInstance()->listOfFacility.isEmpty())){

         for(int i = 0; i < MapWinCtrl::getInstance()->listOfFacility.size(); i++){

             //determineFacColor();
             //determineFacSize();

             if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > 0 && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 25){

                 QPoint aPnt;
                 aPnt.setX(MapWinCtrl::getInstance()->listOfFacility.at(i)->getX());
                 aPnt.setY(MapWinCtrl::getInstance()->listOfFacility.at(i)->getY());

                 painter.setBrush(Qt::red);
                 painter.setPen(Qt::red);
                 painter.drawEllipse(aPnt, 3, 3);

             }
             else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > 25 && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 50){

                 QPoint aPnt;
                 aPnt.setX(MapWinCtrl::getInstance()->listOfFacility.at(i)->getX());
                 aPnt.setY(MapWinCtrl::getInstance()->listOfFacility.at(i)->getY());

                 painter.setBrush(Qt::red);
                 painter.setPen(Qt::red);
                 painter.drawEllipse(aPnt, 5, 5);

             }
             else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > 50 && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 75){

                 QPoint aPnt;
                 aPnt.setX(MapWinCtrl::getInstance()->listOfFacility.at(i)->getX());
                 aPnt.setY(MapWinCtrl::getInstance()->listOfFacility.at(i)->getY());

                 painter.setBrush(Qt::red);
                 painter.setPen(Qt::red);
                 painter.drawEllipse(aPnt, 7, 7);

             }
             else if(MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() > 75 && MapWinCtrl::getInstance()->listOfFacility.at(i)->getTotalAC() <= 100){

                 QPoint aPnt;
                 aPnt.setX(MapWinCtrl::getInstance()->listOfFacility.at(i)->getX());
                 aPnt.setY(MapWinCtrl::getInstance()->listOfFacility.at(i)->getY());

                 painter.setBrush(Qt::red);
                 painter.setPen(Qt::red);
                 painter.drawEllipse(aPnt, 9, 9);

             }


         }
     }


 }


void MapWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        qApp->quit();
        break;

    }
}

void MapWindow::mousePressEvent(QMouseEvent *event){

    //qDebug() << event->pos();
    QPixmap pm = QPixmap::grabWidget(this);
    QImage test;

    test = pm.toImage();

    QColor currentColor = test.pixel(event->x(), event->y());

    if(currentColor == QColor("#f2f1f0"))
        MapWinCtrl::getInstance()->invalid();
    else
        MapWinCtrl::getInstance()->goToAddFac(event->pos(), area, currentColor);


    update();
}

void MapWindow::facilityView(){MapWinCtrl::getInstance()->gotoFacility();}


