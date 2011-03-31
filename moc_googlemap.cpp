/****************************************************************************
** Meta object code from reading C++ file 'googlemap.h'
**
** Created: Tue Mar 29 20:25:13 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "googlemap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'googlemap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QGoogleMap[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   11,   11,   11, 0x0a,
      51,   46,   11,   11, 0x0a,
      68,   11,   11,   11, 0x0a,
      80,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QGoogleMap[] = {
    "QGoogleMap\0\0reloadMap()\0reply(QNetworkReply*)\0"
    "addr\0geocode(QString)\0loadCoord()\0"
    "clearCoord()\0"
};

const QMetaObject QGoogleMap::staticMetaObject = {
    { &QWebView::staticMetaObject, qt_meta_stringdata_QGoogleMap,
      qt_meta_data_QGoogleMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QGoogleMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QGoogleMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QGoogleMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGoogleMap))
        return static_cast<void*>(const_cast< QGoogleMap*>(this));
    return QWebView::qt_metacast(_clname);
}

int QGoogleMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reloadMap(); break;
        case 1: reply((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: geocode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: loadCoord(); break;
        case 4: clearCoord(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QGoogleMap::reloadMap()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
