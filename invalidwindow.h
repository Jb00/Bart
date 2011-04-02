#ifndef INVALIDWINDOW_H
#define INVALIDWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>

#include "genui.h"

namespace Ui {
    class InvalidWindow;
}

class InvalidWindow : public QMainWindow, public genUI
{
    Q_OBJECT

public:
    explicit InvalidWindow(QWidget *parent = 0);
    ~InvalidWindow();

    void keyPressEvent(QKeyEvent * event);
    void setScheme();

    void setLabelText(QString);

private:
    Ui::InvalidWindow *ui;


private slots:

    void on_okBtn_clicked();
};

#endif // INVALIDWINDOW_H
