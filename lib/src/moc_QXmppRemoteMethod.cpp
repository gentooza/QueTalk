/****************************************************************************
** Meta object code from reading C++ file 'QXmppRemoteMethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "client/QXmppRemoteMethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppRemoteMethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppRemoteMethod_t {
    QByteArrayData data[8];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppRemoteMethod_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppRemoteMethod_t qt_meta_stringdata_QXmppRemoteMethod = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 8),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 8),
QT_MOC_LITERAL(4, 37, 15),
QT_MOC_LITERAL(5, 53, 2),
QT_MOC_LITERAL(6, 56, 9),
QT_MOC_LITERAL(7, 66, 18)
    },
    "QXmppRemoteMethod\0callDone\0\0gotError\0"
    "QXmppRpcErrorIq\0iq\0gotResult\0"
    "QXmppRpcResponseIq\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppRemoteMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08,
       6,    1,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,

       0        // eod
};

void QXmppRemoteMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppRemoteMethod *_t = static_cast<QXmppRemoteMethod *>(_o);
        switch (_id) {
        case 0: _t->callDone(); break;
        case 1: _t->gotError((*reinterpret_cast< const QXmppRpcErrorIq(*)>(_a[1]))); break;
        case 2: _t->gotResult((*reinterpret_cast< const QXmppRpcResponseIq(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppRemoteMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppRemoteMethod::callDone)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QXmppRemoteMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppRemoteMethod.data,
      qt_meta_data_QXmppRemoteMethod,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppRemoteMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppRemoteMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppRemoteMethod.stringdata))
        return static_cast<void*>(const_cast< QXmppRemoteMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppRemoteMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QXmppRemoteMethod::callDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
