/********************************************************************************
** Form generated from reading UI file 'mapwindow.ui'
**
** Created: Sat Apr 2 16:14:28 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPWINDOW_H
#define UI_MAPWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapWindow
{
public:
    QAction *actionAbout;
    QAction *actionHospital;
    QAction *actionNursing_Home;
    QAction *actionFull_Screen;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionOn;
    QAction *actionOff;
    QAction *actionLogout;
    QAction *actionAcute_Care;
    QAction *actionComplex_Continuing_Care;
    QAction *actionLong_Term_Care;
    QAction *actionAdd_newUser;
    QAction *actionDelete_User;
    QAction *actionCreate_Facility;
    QAction *actionDelete_Facility;
    QAction *actionFacilityView;
    QWidget *centralWidget;
    QWidget *mapWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuSearch;
    QMenu *menuAvailable_Beds;
    QMenu *menuView;
    QMenu *menuFacility;
    QMenu *menuZoom;
    QMenu *menuHelp;
    QMenu *menuAdmin;

    void setupUi(QMainWindow *MapWindow)
    {
        if (MapWindow->objectName().isEmpty())
            MapWindow->setObjectName(QString::fromUtf8("MapWindow"));
        MapWindow->resize(969, 558);
        actionAbout = new QAction(MapWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionHospital = new QAction(MapWindow);
        actionHospital->setObjectName(QString::fromUtf8("actionHospital"));
        actionNursing_Home = new QAction(MapWindow);
        actionNursing_Home->setObjectName(QString::fromUtf8("actionNursing_Home"));
        actionFull_Screen = new QAction(MapWindow);
        actionFull_Screen->setObjectName(QString::fromUtf8("actionFull_Screen"));
        actionZoom_In = new QAction(MapWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        actionZoom_Out = new QAction(MapWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        actionOn = new QAction(MapWindow);
        actionOn->setObjectName(QString::fromUtf8("actionOn"));
        actionOff = new QAction(MapWindow);
        actionOff->setObjectName(QString::fromUtf8("actionOff"));
        actionLogout = new QAction(MapWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionAcute_Care = new QAction(MapWindow);
        actionAcute_Care->setObjectName(QString::fromUtf8("actionAcute_Care"));
        actionComplex_Continuing_Care = new QAction(MapWindow);
        actionComplex_Continuing_Care->setObjectName(QString::fromUtf8("actionComplex_Continuing_Care"));
        actionLong_Term_Care = new QAction(MapWindow);
        actionLong_Term_Care->setObjectName(QString::fromUtf8("actionLong_Term_Care"));
        actionAdd_newUser = new QAction(MapWindow);
        actionAdd_newUser->setObjectName(QString::fromUtf8("actionAdd_newUser"));
        actionDelete_User = new QAction(MapWindow);
        actionDelete_User->setObjectName(QString::fromUtf8("actionDelete_User"));
        actionCreate_Facility = new QAction(MapWindow);
        actionCreate_Facility->setObjectName(QString::fromUtf8("actionCreate_Facility"));
        actionDelete_Facility = new QAction(MapWindow);
        actionDelete_Facility->setObjectName(QString::fromUtf8("actionDelete_Facility"));
        actionFacilityView = new QAction(MapWindow);
        actionFacilityView->setObjectName(QString::fromUtf8("actionFacilityView"));
        centralWidget = new QWidget(MapWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        mapWidget = new QWidget(centralWidget);
        mapWidget->setObjectName(QString::fromUtf8("mapWidget"));
        mapWidget->setGeometry(QRect(0, 0, 971, 531));
        MapWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MapWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 969, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSearch = new QMenu(menuFile);
        menuSearch->setObjectName(QString::fromUtf8("menuSearch"));
        menuAvailable_Beds = new QMenu(menuSearch);
        menuAvailable_Beds->setObjectName(QString::fromUtf8("menuAvailable_Beds"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFacility = new QMenu(menuView);
        menuFacility->setObjectName(QString::fromUtf8("menuFacility"));
        menuZoom = new QMenu(menuView);
        menuZoom->setObjectName(QString::fromUtf8("menuZoom"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuAdmin = new QMenu(menuBar);
        menuAdmin->setObjectName(QString::fromUtf8("menuAdmin"));
        MapWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuAdmin->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuSearch->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionLogout);
        menuSearch->addAction(menuAvailable_Beds->menuAction());
        menuAvailable_Beds->addAction(actionAcute_Care);
        menuAvailable_Beds->addSeparator();
        menuAvailable_Beds->addAction(actionComplex_Continuing_Care);
        menuAvailable_Beds->addSeparator();
        menuAvailable_Beds->addAction(actionLong_Term_Care);
        menuView->addAction(menuFacility->menuAction());
        menuView->addSeparator();
        menuView->addAction(actionFull_Screen);
        menuView->addSeparator();
        menuView->addAction(menuZoom->menuAction());
        menuFacility->addAction(actionHospital);
        menuFacility->addSeparator();
        menuFacility->addAction(actionNursing_Home);
        menuZoom->addAction(actionZoom_In);
        menuZoom->addSeparator();
        menuZoom->addAction(actionZoom_Out);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionFacilityView);
        menuAdmin->addAction(actionAdd_newUser);
        menuAdmin->addSeparator();
        menuAdmin->addAction(actionCreate_Facility);

        retranslateUi(MapWindow);

        QMetaObject::connectSlotsByName(MapWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MapWindow)
    {
        MapWindow->setWindowTitle(QApplication::translate("MapWindow", "MapWindow", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MapWindow", "About", 0, QApplication::UnicodeUTF8));
        actionHospital->setText(QApplication::translate("MapWindow", "Hospital", 0, QApplication::UnicodeUTF8));
        actionNursing_Home->setText(QApplication::translate("MapWindow", "Nursing Home", 0, QApplication::UnicodeUTF8));
        actionFull_Screen->setText(QApplication::translate("MapWindow", "Full Screen", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("MapWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("MapWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
        actionOn->setText(QApplication::translate("MapWindow", "On", 0, QApplication::UnicodeUTF8));
        actionOff->setText(QApplication::translate("MapWindow", "Off", 0, QApplication::UnicodeUTF8));
        actionLogout->setText(QApplication::translate("MapWindow", "Logout", 0, QApplication::UnicodeUTF8));
        actionAcute_Care->setText(QApplication::translate("MapWindow", "Acute Care", 0, QApplication::UnicodeUTF8));
        actionComplex_Continuing_Care->setText(QApplication::translate("MapWindow", "Complex Continuing Care", 0, QApplication::UnicodeUTF8));
        actionLong_Term_Care->setText(QApplication::translate("MapWindow", "Long Term Care", 0, QApplication::UnicodeUTF8));
        actionAdd_newUser->setText(QApplication::translate("MapWindow", "Create User", 0, QApplication::UnicodeUTF8));
        actionDelete_User->setText(QApplication::translate("MapWindow", "Delete User", 0, QApplication::UnicodeUTF8));
        actionCreate_Facility->setText(QApplication::translate("MapWindow", "Create Facility", 0, QApplication::UnicodeUTF8));
        actionDelete_Facility->setText(QApplication::translate("MapWindow", "Delete Facility", 0, QApplication::UnicodeUTF8));
        actionFacilityView->setText(QApplication::translate("MapWindow", "FacilityView", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MapWindow", "File", 0, QApplication::UnicodeUTF8));
        menuSearch->setTitle(QApplication::translate("MapWindow", "Search", 0, QApplication::UnicodeUTF8));
        menuAvailable_Beds->setTitle(QApplication::translate("MapWindow", "Available Beds", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MapWindow", "View", 0, QApplication::UnicodeUTF8));
        menuFacility->setTitle(QApplication::translate("MapWindow", "Facility", 0, QApplication::UnicodeUTF8));
        menuZoom->setTitle(QApplication::translate("MapWindow", "Zoom", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MapWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuAdmin->setTitle(QApplication::translate("MapWindow", "Admin", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MapWindow: public Ui_MapWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPWINDOW_H
