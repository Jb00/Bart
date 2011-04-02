/********************************************************************************
** Form generated from reading UI file 'waitinglistwindow.ui'
**
** Created: Sat Apr 2 16:14:28 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINGLISTWINDOW_H
#define UI_WAITINGLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaitingListWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *healthLine;
    QPushButton *searchBtn;
    QLabel *label;
    QLabel *label_3;
    QFrame *frame_2;
    QPushButton *cancelBtn;
    QPushButton *addBtn;
    QPushButton *removeBtn;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLabel *fnameLbl;
    QLabel *label_5;
    QLabel *lnameLbl;
    QLabel *label_6;
    QLabel *facnameLbl;
    QLabel *label_7;
    QLabel *careLbl;
    QLabel *label_8;
    QLabel *cardNumLbl;
    QLabel *label_9;
    QLabel *waitingLbl;

    void setupUi(QMainWindow *WaitingListWindow)
    {
        if (WaitingListWindow->objectName().isEmpty())
            WaitingListWindow->setObjectName(QString::fromUtf8("WaitingListWindow"));
        WaitingListWindow->resize(532, 415);
        centralWidget = new QWidget(WaitingListWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 40, 511, 71));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 101, 31));
        healthLine = new QLineEdit(frame);
        healthLine->setObjectName(QString::fromUtf8("healthLine"));
        healthLine->setGeometry(QRect(120, 20, 261, 27));
        searchBtn = new QPushButton(frame);
        searchBtn->setObjectName(QString::fromUtf8("searchBtn"));
        searchBtn->setGeometry(QRect(400, 20, 98, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 10, 51, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 120, 51, 20));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(9, 160, 511, 241));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        cancelBtn = new QPushButton(frame_2);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        cancelBtn->setGeometry(QRect(20, 190, 98, 27));
        addBtn = new QPushButton(frame_2);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(210, 190, 98, 27));
        removeBtn = new QPushButton(frame_2);
        removeBtn->setObjectName(QString::fromUtf8("removeBtn"));
        removeBtn->setGeometry(QRect(390, 190, 98, 27));
        widget = new QWidget(frame_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 23, 471, 141));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        fnameLbl = new QLabel(widget);
        fnameLbl->setObjectName(QString::fromUtf8("fnameLbl"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fnameLbl);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lnameLbl = new QLabel(widget);
        lnameLbl->setObjectName(QString::fromUtf8("lnameLbl"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lnameLbl);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_6);

        facnameLbl = new QLabel(widget);
        facnameLbl->setObjectName(QString::fromUtf8("facnameLbl"));

        formLayout->setWidget(2, QFormLayout::FieldRole, facnameLbl);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_7);

        careLbl = new QLabel(widget);
        careLbl->setObjectName(QString::fromUtf8("careLbl"));

        formLayout->setWidget(3, QFormLayout::FieldRole, careLbl);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        cardNumLbl = new QLabel(widget);
        cardNumLbl->setObjectName(QString::fromUtf8("cardNumLbl"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cardNumLbl);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_9);

        waitingLbl = new QLabel(widget);
        waitingLbl->setObjectName(QString::fromUtf8("waitingLbl"));

        formLayout->setWidget(5, QFormLayout::FieldRole, waitingLbl);

        WaitingListWindow->setCentralWidget(centralWidget);

        retranslateUi(WaitingListWindow);

        QMetaObject::connectSlotsByName(WaitingListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WaitingListWindow)
    {
        WaitingListWindow->setWindowTitle(QApplication::translate("WaitingListWindow", "WaitingListWindow", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("WaitingListWindow", "Health Card #:", 0, QApplication::UnicodeUTF8));
        searchBtn->setText(QApplication::translate("WaitingListWindow", "Search", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WaitingListWindow", "Search", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WaitingListWindow", "Results", 0, QApplication::UnicodeUTF8));
        cancelBtn->setText(QApplication::translate("WaitingListWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        addBtn->setText(QApplication::translate("WaitingListWindow", "Add", 0, QApplication::UnicodeUTF8));
        removeBtn->setText(QApplication::translate("WaitingListWindow", "Remove", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("WaitingListWindow", "First Name:", 0, QApplication::UnicodeUTF8));
        fnameLbl->setText(QString());
        label_5->setText(QApplication::translate("WaitingListWindow", "Last Name:", 0, QApplication::UnicodeUTF8));
        lnameLbl->setText(QString());
        label_6->setText(QApplication::translate("WaitingListWindow", "Facility Name:", 0, QApplication::UnicodeUTF8));
        facnameLbl->setText(QString());
        label_7->setText(QApplication::translate("WaitingListWindow", "Type of Care:", 0, QApplication::UnicodeUTF8));
        careLbl->setText(QString());
        label_8->setText(QApplication::translate("WaitingListWindow", "Health Card #:", 0, QApplication::UnicodeUTF8));
        cardNumLbl->setText(QString());
        label_9->setText(QApplication::translate("WaitingListWindow", "On Waiting List?:", 0, QApplication::UnicodeUTF8));
        waitingLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WaitingListWindow: public Ui_WaitingListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINGLISTWINDOW_H
