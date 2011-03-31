/********************************************************************************
** Form generated from reading UI file 'invalidwindow.ui'
**
** Created: Wed Mar 30 21:07:31 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVALIDWINDOW_H
#define UI_INVALIDWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvalidWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *okBtn;
    QLabel *warningImg;

    void setupUi(QMainWindow *InvalidWindow)
    {
        if (InvalidWindow->objectName().isEmpty())
            InvalidWindow->setObjectName(QString::fromUtf8("InvalidWindow"));
        InvalidWindow->resize(441, 93);
        centralWidget = new QWidget(InvalidWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 211, 31));
        okBtn = new QPushButton(centralWidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(210, 50, 98, 27));
        warningImg = new QLabel(centralWidget);
        warningImg->setObjectName(QString::fromUtf8("warningImg"));
        warningImg->setGeometry(QRect(30, 20, 71, 51));
        InvalidWindow->setCentralWidget(centralWidget);

        retranslateUi(InvalidWindow);

        QMetaObject::connectSlotsByName(InvalidWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InvalidWindow)
    {
        InvalidWindow->setWindowTitle(QApplication::translate("InvalidWindow", "InvalidWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InvalidWindow", "Invalid UserName or Password!", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("InvalidWindow", "OK", 0, QApplication::UnicodeUTF8));
        warningImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InvalidWindow: public Ui_InvalidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVALIDWINDOW_H
