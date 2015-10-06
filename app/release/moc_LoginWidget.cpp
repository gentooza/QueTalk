/****************************************************************************
** Meta object code from reading C++ file 'LoginWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoginWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginWidget_t {
    QByteArrayData data[12];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_LoginWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_LoginWidget_t qt_meta_stringdata_LoginWidget = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 5),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 4),
QT_MOC_LITERAL(4, 24, 6),
QT_MOC_LITERAL(5, 31, 9),
QT_MOC_LITERAL(6, 41, 8),
QT_MOC_LITERAL(7, 50, 12),
QT_MOC_LITERAL(8, 63, 4),
QT_MOC_LITERAL(9, 68, 9),
QT_MOC_LITERAL(10, 78, 12),
QT_MOC_LITERAL(11, 91, 7)
    },
    "LoginWidget\0login\0\0lock\0unlock\0showState\0"
    "readData\0Preferences*\0pref\0writeData\0"
    "clickedLogin\0getHost\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a,
       4,    0,   56,    2, 0x0a,
       5,    1,   57,    2, 0x0a,
       6,    1,   60,    2, 0x0a,
       9,    1,   63,    2, 0x0a,
      10,    0,   66,    2, 0x08,
      11,    0,   67,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginWidget *_t = static_cast<LoginWidget *>(_o);
        switch (_id) {
        case 0: _t->login(); break;
        case 1: _t->lock(); break;
        case 2: _t->unlock(); break;
        case 3: _t->showState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->readData((*reinterpret_cast< Preferences*(*)>(_a[1]))); break;
        case 5: _t->writeData((*reinterpret_cast< Preferences*(*)>(_a[1]))); break;
        case 6: _t->clickedLogin(); break;
        case 7: _t->getHost(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginWidget::login)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LoginWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginWidget.data,
      qt_meta_data_LoginWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *LoginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginWidget.stringdata))
        return static_cast<void*>(const_cast< LoginWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LoginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void LoginWidget::login()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
