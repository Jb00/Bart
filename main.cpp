#include <QtGui/QApplication>
#include <QDesktopWidget>

#include "loginwindow.h"
#include "genctrl.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;
    w.show();

    genCTRL* temp = new genCTRL();
    temp->center(w);

    return a.exec();
}
