/********************************************************************************
** Form generated from reading UI file 'addfacility.ui'
**
** Created: Sat Apr 2 16:14:28 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFACILITY_H
#define UI_ADDFACILITY_H

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
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddFacility
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_2;
    QPushButton *okBtn;
    QPushButton *cancelBtn;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_2;
    QLabel *label_8;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QSpinBox *acuteNumBox;
    QLabel *label_13;
    QSpinBox *complexNumBox;
    QLabel *label_14;
    QSpinBox *longNumBox;
    QFrame *frame;
    QLabel *label_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *hospitalRadio;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *nursingRadio;
    QSpacerItem *horizontalSpacer_5;
    QLabel *crossImg;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QLineEdit *nameLine;
    QLineEdit *idLine;
    QLineEdit *xLine;
    QLineEdit *yLine;

    void setupUi(QMainWindow *AddFacility)
    {
        if (AddFacility->objectName().isEmpty())
            AddFacility->setObjectName(QString::fromUtf8("AddFacility"));
        AddFacility->resize(410, 610);
        centralWidget = new QWidget(AddFacility);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 520, 411, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        okBtn = new QPushButton(layoutWidget_2);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));

        gridLayout_2->addWidget(okBtn, 0, 0, 1, 1);

        cancelBtn = new QPushButton(layoutWidget_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));

        gridLayout_2->addWidget(cancelBtn, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        horizontalSpacer_2 = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 190, 391, 161));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 0, 111, 21));
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 381, 141));
        gridLayout_3 = new QGridLayout(layoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        acuteNumBox = new QSpinBox(layoutWidget);
        acuteNumBox->setObjectName(QString::fromUtf8("acuteNumBox"));

        gridLayout_3->addWidget(acuteNumBox, 0, 1, 1, 1);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 1, 0, 1, 1);

        complexNumBox = new QSpinBox(layoutWidget);
        complexNumBox->setObjectName(QString::fromUtf8("complexNumBox"));

        gridLayout_3->addWidget(complexNumBox, 1, 1, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 2, 0, 1, 1);

        longNumBox = new QSpinBox(layoutWidget);
        longNumBox->setObjectName(QString::fromUtf8("longNumBox"));

        gridLayout_3->addWidget(longNumBox, 2, 1, 1, 1);

        label_8->raise();
        layoutWidget->raise();
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 100, 391, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 10, 101, 21));
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 40, 391, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        hospitalRadio = new QRadioButton(layoutWidget1);
        hospitalRadio->setObjectName(QString::fromUtf8("hospitalRadio"));

        horizontalLayout_2->addWidget(hospitalRadio);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        nursingRadio = new QRadioButton(layoutWidget1);
        nursingRadio->setObjectName(QString::fromUtf8("nursingRadio"));

        horizontalLayout_2->addWidget(nursingRadio);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_4->raise();
        layoutWidget->raise();
        crossImg = new QLabel(centralWidget);
        crossImg->setObjectName(QString::fromUtf8("crossImg"));
        crossImg->setGeometry(QRect(290, 10, 71, 71));
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 360, 93, 141));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 360, 271, 151));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        nameLine = new QLineEdit(widget);
        nameLine->setObjectName(QString::fromUtf8("nameLine"));

        gridLayout_7->addWidget(nameLine, 0, 0, 1, 1);

        idLine = new QLineEdit(widget);
        idLine->setObjectName(QString::fromUtf8("idLine"));

        gridLayout_7->addWidget(idLine, 1, 0, 1, 1);

        xLine = new QLineEdit(widget);
        xLine->setObjectName(QString::fromUtf8("xLine"));

        gridLayout_7->addWidget(xLine, 2, 0, 1, 1);

        yLine = new QLineEdit(widget);
        yLine->setObjectName(QString::fromUtf8("yLine"));

        gridLayout_7->addWidget(yLine, 3, 0, 1, 1);

        AddFacility->setCentralWidget(centralWidget);

        retranslateUi(AddFacility);

        QMetaObject::connectSlotsByName(AddFacility);
    } // setupUi

    void retranslateUi(QMainWindow *AddFacility)
    {
        AddFacility->setWindowTitle(QApplication::translate("AddFacility", "AddFacility", 0, QApplication::UnicodeUTF8));
        okBtn->setText(QApplication::translate("AddFacility", "OK", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("AddFacility", "Cancel", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("AddFacility", "Number of Beds", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("AddFacility", "Acute Care:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("AddFacility", "Complex Care:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("AddFacility", "Long Term Care:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddFacility", "Type of Facility", 0, QApplication::UnicodeUTF8));
        hospitalRadio->setText(QApplication::translate("AddFacility", "Hospital", 0, QApplication::UnicodeUTF8));
        nursingRadio->setText(QApplication::translate("AddFacility", "Nursing Home", 0, QApplication::UnicodeUTF8));
        crossImg->setText(QString());
        label->setText(QApplication::translate("AddFacility", "Facility Name", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddFacility", "Facility ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddFacility", "X Coordinate", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddFacility", "Y Coordinate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddFacility: public Ui_AddFacility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFACILITY_H
