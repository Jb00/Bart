/****************************************************************************
** Meta object code from reading C++ file 'addfacility.h'
**
** Created: Wed Mar 30 21:41:22 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "addfacility.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addfacility.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddFacility[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      33,   12,   12,   12, 0x08,
      49,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddFacility[] = {
    "AddFacility\0\0cancelBtn_clicked()\0"
    "okBtn_clicked()\0typeRadio_selected()\0"
};

const QMetaObject AddFacility::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddFacility,
      qt_meta_data_AddFacility, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddFacility::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddFacility::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddFacility::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddFacility))
        return static_cast<void*>(const_cast< AddFacility*>(this));
    if (!strcmp(_clname, "genUI"))
        return static_cast< genUI*>(const_cast< AddFacility*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddFacility::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: cancelBtn_clicked(); break;
        case 1: okBtn_clicked(); break;
        case 2: typeRadio_selected(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
