#ifndef GENUI_H
#define GENUI_H

#include <QWidget>
#include <QKeyEvent>
#include <QApplication>

class genUI
{
public:
    genUI();
    ~genUI();

    virtual void keyPressEvent(QKeyEvent * event);
    virtual void setScheme();
};

#endif // GENUI_H
