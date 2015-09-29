/****************************************************************************
** Meta object code from reading C++ file 'QXmppIncomingServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "server/QXmppIncomingServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppIncomingServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppIncomingServer_t {
    QByteArrayData data[11];
    char stringdata[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppIncomingServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppIncomingServer_t qt_meta_stringdata_QXmppIncomingServer = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 23),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 13),
QT_MOC_LITERAL(4, 59, 6),
QT_MOC_LITERAL(5, 66, 15),
QT_MOC_LITERAL(6, 82, 11),
QT_MOC_LITERAL(7, 94, 7),
QT_MOC_LITERAL(8, 102, 28),
QT_MOC_LITERAL(9, 131, 8),
QT_MOC_LITERAL(10, 140, 22)
    },
    "QXmppIncomingServer\0dialbackRequestReceived\0"
    "\0QXmppDialback\0result\0elementReceived\0"
    "QDomElement\0element\0slotDialbackResponseReceived\0"
    "dialback\0slotSocketDisconnected\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppIncomingServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,
       5,    1,   37,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       8,    1,   40,    2, 0x08,
      10,    0,   43,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    9,
    QMetaType::Void,

       0        // eod
};

void QXmppIncomingServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppIncomingServer *_t = static_cast<QXmppIncomingServer *>(_o);
        switch (_id) {
        case 0: _t->dialbackRequestReceived((*reinterpret_cast< const QXmppDialback(*)>(_a[1]))); break;
        case 1: _t->elementReceived((*reinterpret_cast< const QDomElement(*)>(_a[1]))); break;
        case 2: _t->slotDialbackResponseReceived((*reinterpret_cast< const QXmppDialback(*)>(_a[1]))); break;
        case 3: _t->slotSocketDisconnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppIncomingServer::*_t)(const QXmppDialback & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIncomingServer::dialbackRequestReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppIncomingServer::*_t)(const QDomElement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIncomingServer::elementReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppIncomingServer::staticMetaObject = {
    { &QXmppStream::staticMetaObject, qt_meta_stringdata_QXmppIncomingServer.data,
      qt_meta_data_QXmppIncomingServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppIncomingServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppIncomingServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppIncomingServer.stringdata))
        return static_cast<void*>(const_cast< QXmppIncomingServer*>(this));
    return QXmppStream::qt_metacast(_clname);
}

int QXmppIncomingServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppStream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QXmppIncomingServer::dialbackRequestReceived(const QXmppDialback & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppIncomingServer::elementReceived(const QDomElement & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
