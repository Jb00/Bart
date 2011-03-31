#include "mapwindow.h"
#include "ui_mapwindow.h"

MapWindow::MapWindow(const QString &filePath): ui(new Ui::MapWindow)
{
    renderer = new QSvgRenderer(filePath);
    facilityPnts = new QLinkedList<QPoint>();

    mapCtrl = new MapWinCtrl();

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

    colorList->append(QColor("#F2FCC2"));
    colorList->append(QColor("#FCCDB6"));
    colorList->append(QColor("#b3f3fc"));
    colorList->append(QColor("#fcc5ea"));
    colorList->append(QColor("#b8b3fc"));
    colorList->append(QColor("#b6fcb3"));
    colorList->append(QColor("#f2f1f0"));

}

MapWindow::~MapWindow(){}

void MapWindow::createUser_clicked(){mapCtrl->goToAddUser();}

void MapWindow::createFac_clicked(){
    QPoint aPnt;
    mapCtrl->goToAddFac(aPnt, NULL);
}

void MapWindow::paintEvent(QPaintEvent *event)
 {
     Q_UNUSED(event)
     QPainter painter(this);
     renderer->render(&painter);

     painter.setBrush(Qt::red);
     painter.setPen(Qt::red);

     QLinkedList<QPoint>::iterator i;
     for (i = facilityPnts->begin(); i != facilityPnts->end(); ++i)
        painter.drawEllipse(*i, 5, 5);

 }


void MapWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

    case Qt::Key_Escape:
        qApp->quit();
        break;

    }
}

void MapWindow::mousePressEvent(QMouseEvent *event){

    QPixmap pm = QPixmap::grabWidget(this);
    QImage test;

    test = pm.toImage();

    QColor currentColor = test.pixel(event->x(), event->y());

    if(currentColor == QColor("#f2f1f0")){

        qApp->quit();
    }
    else{
        determineArea(currentColor);
        facilityPnts->append(event->pos());
        mapCtrl->goToAddFac(event->pos(), area);
        if(!AddFacCtrl::getInstance()->isOK()){
            facilityPnts->pop_back();
            AddFacCtrl::getInstance()->setOK(true);
        }
    }

/*
    QLinkedList<QPoint>::iterator i;
    for (i = facilityPnts->begin(); i != facilityPnts->end(); ++i)
        std::cout << *i << endl;
        //std::cout << facilityPnts->front().x() << ", " << facilityPnts->front().y() << "\n";
    */
    update();
}

void MapWindow::facilityView(){mapCtrl->gotoFacility();}

void MapWindow::determineArea(QColor aColor){

    QList<QColor>::iterator i;
    for (i = colorList->begin(); i != colorList->end(); ++i){

        if(aColor == *i){

            if(aColor.toRgb().name().toStdString() == "#f2fcc2"){
                area = 0;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fccdb6"){
                area = 1;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b3f3fc"){
                area = 2;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#fcc5ea"){
                area = 3;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
            else if(aColor.toRgb().name().toStdString() == "#b8b3fc"){
                area = 4;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
            else{
                area = 5;
                //qDebug() << aColor.toRgb().name() << ", area: " << area;
                break;
            }
        }
    }

}
