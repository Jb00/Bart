/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created: Wed Mar 30 21:07:31 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *userLabel_2;
    QLabel *pwordLabel_2;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_2;
    QPushButton *loginBtn;
    QPushButton *cancelBtn;
    QLabel *welcomeLabel;
    QLabel *crossImg;
    QLineEdit *nameLine;
    QLineEdit *pwordLine;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(390, 202);
        actionExit = new QAction(LoginWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(LoginWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget_3 = new QWidget(centralWidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 80, 77, 71));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        userLabel_2 = new QLabel(layoutWidget_3);
        userLabel_2->setObjectName(QString::fromUtf8("userLabel_2"));

        verticalLayout_2->addWidget(userLabel_2);

        pwordLabel_2 = new QLabel(layoutWidget_3);
        pwordLabel_2->setObjectName(QString::fromUtf8("pwordLabel_2"));

        verticalLayout_2->addWidget(pwordLabel_2);

        layoutWidget_4 = new QWidget(centralWidget);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(90, 160, 204, 29));
        gridLayout_2 = new QGridLayout(layoutWidget_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        loginBtn = new QPushButton(layoutWidget_4);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));

        gridLayout_2->addWidget(loginBtn, 0, 0, 1, 1);

        cancelBtn = new QPushButton(layoutWidget_4);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);

        welcomeLabel = new QLabel(centralWidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(20, 20, 221, 31));
        crossImg = new QLabel(centralWidget);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(280, 0, 71, 71));
        nameLine = new QLineEdit(centralWidget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));
        nameLine->setGeometry(QRect(110, 80, 261, 27));
        pwordLine = new QLineEdit(centralWidget);
        pwordLine->setObjectName(QString::fromUtf8("pwordLine"));
        pwordLine->setGeometry(QRect(110, 120, 261, 27));
        LoginWindow->setCentralWidget(centralWidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "LoginWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("LoginWindow", "Exit", 0, QApplication::UnicodeUTF8));
        userLabel_2->setText(QApplication::translate("LoginWindow", "User Name", 0, QApplication::UnicodeUTF8));
        pwordLabel_2->setText(QApplication::translate("LoginWindow", "Password", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("LoginWindow", "Login", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("LoginWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        welcomeLabel->setText(QString());
        crossImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
