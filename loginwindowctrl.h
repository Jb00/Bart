#ifndef LOGINWINDOWCTRL_H
#define LOGINWINDOWCTRL_H

#include <QDialog>
#include <QtSql>
#include <QSqlTableModel>
#include <QMessageBox>
#include <string.h>
#include <QWidget>
#include <QFile>

#include "User.h"
#include "invalidwindow.h"
#include "mapwindow.h"
#include "genctrl.h"

class LoginWindowCtrl:QWidget, public genCTRL
{

public:
    LoginWindowCtrl(QWidget *parent = 0);
    ~LoginWindowCtrl();

    bool authenticate(QString, QString);
    void invalid();
    void goToMap();

private:

    User* aUser;
    InvalidWindow* invalidEntry;
    MapWindow* mapWin;

    QString queryName;
    QString queryPword;

    QString fileName;
};

#endif // LOGINWINDOWCTRL_H
