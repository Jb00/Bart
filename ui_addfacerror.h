/********************************************************************************
** Form generated from reading UI file 'addfacerror.ui'
**
** Created: Thu Mar 31 21:58:14 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFACERROR_H
#define UI_ADDFACERROR_H

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

class Ui_AddFacError
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *okBtn;
    QLabel *warningImg;

    void setupUi(QMainWindow *AddFacError)
    {
        if (AddFacError->objectName().isEmpty())
            AddFacError->setObjectName(QString::fromUtf8("AddFacError"));
        AddFacError->resize(441, 93);
        centralwidget = new QWidget(AddFacError);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 10, 171, 31));
        okBtn = new QPushButton(centralwidget);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(210, 50, 98, 27));
        warningImg = new QLabel(centralwidget);
        warningImg->setObjectName(QString::fromUtf8("warningImg"));
        warningImg->setGeometry(QRect(30, 20, 71, 51));
        AddFacError->setCentralWidget(centralwidget);

        retranslateUi(AddFacError);

        QMetaObject::connectSlotsByName(AddFacError);
    } // setupUi

    void retranslateUi(QMainWindow *AddFacError)
    {
        AddFacError->setWindowTitle(QApplication::translate("AddFacError", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddFacError", "Insufficient data entered!", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddFacError", "OK", 0, QApplication::UnicodeUTF8));
        warningImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddFacError: public Ui_AddFacError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFACERROR_H
