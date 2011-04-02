/********************************************************************************
** Form generated from reading UI file 'facilitywindow.ui'
**
** Created: Sat Apr 2 16:14:28 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACILITYWINDOW_H
#define UI_FACILITYWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacilityWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *acuteRaio;
    QRadioButton *complexRadio;
    QRadioButton *longRadio;
    QFrame *frame_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *occLbl;
    QLabel *label_2;
    QLabel *availLbl;
    QLabel *label_4;
    QLabel *totalLbl;
    QFrame *frame_5;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QLabel *label_26;
    QSpinBox *addBedNum;
    QWidget *widget2;
    QGridLayout *gridLayout_3;
    QLabel *label_27;
    QSpinBox *addPatNum;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *nameLbl;
    QLabel *idLbl;
    QLabel *label_11;
    QLabel *xLbl;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *yLbl;
    QPushButton *waitingBtn;

    void setupUi(QMainWindow *FacilityWindow)
    {
        if (FacilityWindow->objectName().isEmpty())
            FacilityWindow->setObjectName(QString::fromUtf8("FacilityWindow"));
        FacilityWindow->resize(420, 541);
        centralWidget = new QWidget(FacilityWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 230, 401, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 81, 21));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(10, 30, 161, 131));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 138, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        acuteRaio = new QRadioButton(layoutWidget);
        acuteRaio->setObjectName(QString::fromUtf8("acuteRaio"));
        acuteRaio->setChecked(true);

        verticalLayout->addWidget(acuteRaio);

        complexRadio = new QRadioButton(layoutWidget);
        complexRadio->setObjectName(QString::fromUtf8("complexRadio"));

        verticalLayout->addWidget(complexRadio);

        longRadio = new QRadioButton(layoutWidget);
        longRadio->setObjectName(QString::fromUtf8("longRadio"));

        verticalLayout->addWidget(longRadio);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(170, 30, 221, 131));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frame_4);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 201, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        occLbl = new QLabel(widget);
        occLbl->setObjectName(QString::fromUtf8("occLbl"));

        gridLayout->addWidget(occLbl, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        availLbl = new QLabel(widget);
        availLbl->setObjectName(QString::fromUtf8("availLbl"));

        gridLayout->addWidget(availLbl, 1, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        totalLbl = new QLabel(widget);
        totalLbl->setObjectName(QString::fromUtf8("totalLbl"));

        gridLayout->addWidget(totalLbl, 2, 1, 1, 1);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(10, 160, 381, 131));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        okBtn = new QPushButton(frame_5);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setGeometry(QRect(260, 30, 98, 27));
        cancelBtn = new QPushButton(frame_5);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(260, 70, 98, 27));
        widget1 = new QWidget(frame_5);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(91, 30, 142, 29));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(widget1);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_2->addWidget(label_26, 0, 0, 1, 1);

        addBedNum = new QSpinBox(widget1);
        addBedNum->setObjectName(QString::fromUtf8("addBedNum"));

        gridLayout_2->addWidget(addBedNum, 0, 1, 1, 1);

        widget2 = new QWidget(frame_5);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 70, 231, 29));
        gridLayout_3 = new QGridLayout(widget2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(widget2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_3->addWidget(label_27, 0, 0, 1, 1);

        addPatNum = new QSpinBox(widget2);
        addPatNum->setObjectName(QString::fromUtf8("addPatNum"));

        gridLayout_3->addWidget(addPatNum, 0, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(80, 10, 261, 211));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 10, 141, 20));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 60, 61, 17));
        nameLbl = new QLabel(frame_2);
        nameLbl->setObjectName(QString::fromUtf8("nameLbl"));
        nameLbl->setGeometry(QRect(80, 60, 171, 20));
        idLbl = new QLabel(frame_2);
        idLbl->setObjectName(QString::fromUtf8("idLbl"));
        idLbl->setGeometry(QRect(80, 90, 171, 20));
        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 90, 61, 17));
        xLbl = new QLabel(frame_2);
        xLbl->setObjectName(QString::fromUtf8("xLbl"));
        xLbl->setGeometry(QRect(80, 120, 171, 20));
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 120, 61, 17));
        label_14 = new QLabel(frame_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 150, 61, 17));
        yLbl = new QLabel(frame_2);
        yLbl->setObjectName(QString::fromUtf8("yLbl"));
        yLbl->setGeometry(QRect(80, 150, 171, 20));
        waitingBtn = new QPushButton(frame_2);
        waitingBtn->setObjectName(QString::fromUtf8("waitingBtn"));
        waitingBtn->setGeometry(QRect(80, 170, 98, 27));
        FacilityWindow->setCentralWidget(centralWidget);

        retranslateUi(FacilityWindow);

        QMetaObject::connectSlotsByName(FacilityWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FacilityWindow)
    {
        FacilityWindow->setWindowTitle(QApplication::translate("FacilityWindow", "FacilityWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FacilityWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        acuteRaio->setText(QApplication::translate("FacilityWindow", "Acute Care", 0, QApplication::UnicodeUTF8));
        complexRadio->setText(QApplication::translate("FacilityWindow", "Complex  Care", 0, QApplication::UnicodeUTF8));
        longRadio->setText(QApplication::translate("FacilityWindow", "Long Term Care", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("FacilityWindow", "Occupancy", 0, QApplication::UnicodeUTF8));
        occLbl->setText(QString());
        label_2->setText(QApplication::translate("FacilityWindow", "Available Beds", 0, QApplication::UnicodeUTF8));
        availLbl->setText(QString());
        label_4->setText(QApplication::translate("FacilityWindow", "Total Beds", 0, QApplication::UnicodeUTF8));
        totalLbl->setText(QString());
        okBtn->setText(QApplication::translate("FacilityWindow", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("FacilityWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("FacilityWindow", "Add Bed(s)", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("FacilityWindow", "Add Patient(s) to Bed(s)", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("FacilityWindow", "Facility Information", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("FacilityWindow", "Name:", 0, QApplication::UnicodeUTF8));
        nameLbl->setText(QString());
        idLbl->setText(QString());
        label_11->setText(QApplication::translate("FacilityWindow", "ID:", 0, QApplication::UnicodeUTF8));
        xLbl->setText(QString());
        label_13->setText(QApplication::translate("FacilityWindow", "X coord.:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("FacilityWindow", "Y coord.:", 0, QApplication::UnicodeUTF8));
        yLbl->setText(QString());
        waitingBtn->setText(QApplication::translate("FacilityWindow", "Waiting List", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FacilityWindow: public Ui_FacilityWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACILITYWINDOW_H
