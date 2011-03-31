#ifndef MAPWINDOW_H
#define MAPWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QString>
#include <QSvgRenderer>
#include <QSize>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QPainter>
#include <QGraphicsView>
#include <QToolTip>
#include <QPixmap>
#include <QDebug>

#include "mapwinctrl.h"
#include <QRgb>

namespace Ui {
    class MapWindow;
}

class MapWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MapWindow(const QString& filePath);
    ~MapWindow();

    void keyPressEvent(QKeyEvent * event);
    virtual void paintEvent(QPaintEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);

    void determineArea(QColor);

private:
    Ui::MapWindow *ui;
    MapWinCtrl* mapCtrl;

    QString fileName;
    QSvgRenderer* renderer;

    QLinkedList<QPoint> *facilityPnts;

    QList<QColor> *colorList;
    int area;


private slots:

    void createUser_clicked();
    void createFac_clicked();
    void facilityView();
};

#endif // MAPWINDOW_H

