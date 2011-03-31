#ifndef ADDUSERCTRL_H
#define ADDUSERCTRL_H

#include <QDialog>
#include "genctrl.h"

#include <QList>
#include <QString>
#include <QtSql>
#include <QMessageBox>
#include <QSqlTableModel>

#include "adduserctrl.h"
#include "User.h"


class AddUserCtrl: public genCTRL
{

private :
        static AddUserCtrl* anInstance;
        AddUserCtrl();
        QString userName;
        QString password;
        QString type;
        QList<User *> *userList;


public:
    ~AddUserCtrl();

    bool checkExisiting(QString);
//    void addNewUser(QString, QString, QString, QString);

    static AddUserCtrl* getInstance();
    void addToDb();
    void setName(QString);
    void setPassword(QString);
    void setType(QString);
    void setId(int);
    void setList(QList<User *>*);



};

#endif // ADDUSERCTRL_H

