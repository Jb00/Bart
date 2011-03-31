/********************************************************************************
** Form generated from reading UI file 'CreateNewFacility.ui'
**
** Created: Mon Mar 28 21:22:11 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATENEWFACILITY_H
#define UI_CREATENEWFACILITY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateNewFacility
{
public:
    QLineEdit *facilityLine;
    QLineEdit *yLine;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QFrame *frame_2;
    QLabel *label_13;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLabel *label_14;
    QSpinBox *acuteNumBox;
    QLabel *label_15;
    QSpinBox *complexNumBox;
    QLabel *label_16;
    QSpinBox *longNumBox;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_4;
    QPushButton *okBtn_2;
    QPushButton *cancelBtn_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *xLine;
    QLabel *crossImg;
    QLineEdit *idLine;
    QFrame *frame;
    QLabel *label_17;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QRadioButton *hospitalRadio;
    QSpacerItem *horizontalSpacer_6;
    QRadioButton *nursingRadio;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *CreateNewFacility)
    {
        if (CreateNewFacility->objectName().isEmpty())
            CreateNewFacility->setObjectName(QString::fromUtf8("CreateNewFacility"));
        CreateNewFacility->resize(469, 557);
        facilityLine = new QLineEdit(CreateNewFacility);
        facilityLine->setObjectName(QString::fromUtf8("facilityLine"));
        facilityLine->setGeometry(QRect(150, 370, 281, 27));
        yLine = new QLineEdit(CreateNewFacility);
        yLine->setObjectName(QString::fromUtf8("yLine"));
        yLine->setGeometry(QRect(150, 460, 281, 27));
        layoutWidget = new QWidget(CreateNewFacility);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 370, 93, 121));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        frame_2 = new QFrame(CreateNewFacility);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(40, 200, 391, 161));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(140, 10, 111, 21));
        layoutWidget_2 = new QWidget(frame_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(90, 50, 211, 95));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 0, 0, 1, 1);

        acuteNumBox = new QSpinBox(layoutWidget_2);
        acuteNumBox->setObjectName(QString::fromUtf8("acuteNumBox"));

        gridLayout_3->addWidget(acuteNumBox, 0, 1, 1, 1);

        label_15 = new QLabel(layoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 1, 0, 1, 1);

        complexNumBox = new QSpinBox(layoutWidget_2);
        complexNumBox->setObjectName(QString::fromUtf8("complexNumBox"));

        gridLayout_3->addWidget(complexNumBox, 1, 1, 1, 1);

        label_16 = new QLabel(layoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 2, 0, 1, 1);

        longNumBox = new QSpinBox(layoutWidget_2);
        longNumBox->setObjectName(QString::fromUtf8("longNumBox"));

        gridLayout_3->addWidget(longNumBox, 2, 1, 1, 1);

        layoutWidget_3 = new QWidget(CreateNewFacility);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 510, 411, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        okBtn_2 = new QPushButton(layoutWidget_3);
        okBtn_2->setObjectName(QString::fromUtf8("okBtn_2"));

        gridLayout_4->addWidget(okBtn_2, 0, 0, 1, 1);

        cancelBtn_2 = new QPushButton(layoutWidget_3);
        cancelBtn_2->setObjectName(QString::fromUtf8("cancelBtn_2"));

        gridLayout_4->addWidget(cancelBtn_2, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_4);

        horizontalSpacer_4 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        xLine = new QLineEdit(CreateNewFacility);
        xLine->setObjectName(QString::fromUtf8("xLine"));
        xLine->setGeometry(QRect(150, 430, 281, 27));
        crossImg = new QLabel(CreateNewFacility);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(320, 20, 71, 71));
        idLine = new QLineEdit(CreateNewFacility);
        idLine->setObjectName(QString::fromUtf8("idLine"));
        idLine->setGeometry(QRect(150, 400, 281, 27));
        frame = new QFrame(CreateNewFacility);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 110, 391, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(140, 10, 101, 21));
        layoutWidget_4 = new QWidget(frame);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(0, 40, 391, 24));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        hospitalRadio = new QRadioButton(layoutWidget_4);
        hospitalRadio->setObjectName(QString::fromUtf8("hospitalRadio"));

        horizontalLayout_3->addWidget(hospitalRadio);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        nursingRadio = new QRadioButton(layoutWidget_4);
        nursingRadio->setObjectName(QString::fromUtf8("nursingRadio"));

        horizontalLayout_3->addWidget(nursingRadio);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        retranslateUi(CreateNewFacility);

        QMetaObject::connectSlotsByName(CreateNewFacility);
    } // setupUi

    void retranslateUi(QWidget *CreateNewFacility)
    {
        CreateNewFacility->setWindowTitle(QApplication::translate("CreateNewFacility", "Form", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CreateNewFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CreateNewFacility", "Facility ID", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CreateNewFacility", "X Coordinate", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CreateNewFacility", "Y Coordinate", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CreateNewFacility", "Number of Beds", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CreateNewFacility", "Acute Care:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("CreateNewFacility", "Complex Care:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("CreateNewFacility", "Long Term Care:", 0, QApplication::UnicodeUTF8));
        okBtn_2->setText(QApplication::translate("CreateNewFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn_2->setText(QApplication::translate("CreateNewFacility", "Cancel", 0, QApplication::UnicodeUTF8));
        crossImg->setText(QString());
        label_17->setText(QApplication::translate("CreateNewFacility", "Type of Facility", 0, QApplication::UnicodeUTF8));
        hospitalRadio->setText(QApplication::translate("CreateNewFacility", "Hospital", 0, QApplication::UnicodeUTF8));
        nursingRadio->setText(QApplication::translate("CreateNewFacility", "Nursing Home", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateNewFacility: public Ui_CreateNewFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATENEWFACILITY_H
