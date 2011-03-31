#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QKeyEvent>

#include "loginwindowctrl.h"
#include "genui.h"

namespace Ui {
    class LoginWindow;
}

class LoginWindow : public QMainWindow, public genUI
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

    void setScheme();
    void keyPressEvent(QKeyEvent * event);

private:
    Ui::LoginWindow *ui;

    //QObjects
    QString pword;
    QString name;

    //Class pointers
    LoginWindowCtrl* loginCtrl;
    User* aUser;

private slots:
    void on_cancelBtn_clicked();
    void on_loginBtn_clicked();

};

#endif // LOGINWINDOW_H
