/****************************************************************************
** Meta object code from reading C++ file 'QXmppSocks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/QXmppSocks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppSocks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppSocksClient_t {
    QByteArrayData data[5];
    char stringdata[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppSocksClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppSocksClient_t qt_meta_stringdata_QXmppSocksClient = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 5),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 13),
QT_MOC_LITERAL(4, 38, 13)
    },
    "QXmppSocksClient\0ready\0\0slotConnected\0"
    "slotReadyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppSocksClient[] = {

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
       3,    0,   30,    2, 0x08,
       4,    0,   31,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QXmppSocksClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppSocksClient *_t = static_cast<QXmppSocksClient *>(_o);
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->slotConnected(); break;
        case 2: _t->slotReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppSocksClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppSocksClient::ready)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QXmppSocksClient::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_QXmppSocksClient.data,
      qt_meta_data_QXmppSocksClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppSocksClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppSocksClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppSocksClient.stringdata))
        return static_cast<void*>(const_cast< QXmppSocksClient*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int QXmppSocksClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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
void QXmppSocksClient::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
struct qt_meta_stringdata_QXmppSocksServer_t {
    QByteArrayData data[9];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppSocksServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppSocksServer_t qt_meta_stringdata_QXmppSocksServer = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 13),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 11),
QT_MOC_LITERAL(4, 44, 6),
QT_MOC_LITERAL(5, 51, 8),
QT_MOC_LITERAL(6, 60, 4),
QT_MOC_LITERAL(7, 65, 17),
QT_MOC_LITERAL(8, 83, 13)
    },
    "QXmppSocksServer\0newConnection\0\0"
    "QTcpSocket*\0socket\0hostName\0port\0"
    "slotNewConnection\0slotReadyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppSocksServer[] = {

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
       1,    3,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   36,    2, 0x08,
       8,    0,   37,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::UShort,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QXmppSocksServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppSocksServer *_t = static_cast<QXmppSocksServer *>(_o);
        switch (_id) {
        case 0: _t->newConnection((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 1: _t->slotNewConnection(); break;
        case 2: _t->slotReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppSocksServer::*_t)(QTcpSocket * , QString , quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppSocksServer::newConnection)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QXmppSocksServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppSocksServer.data,
      qt_meta_data_QXmppSocksServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppSocksServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppSocksServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppSocksServer.stringdata))
        return static_cast<void*>(const_cast< QXmppSocksServer*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppSocksServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QXmppSocksServer::newConnection(QTcpSocket * _t1, QString _t2, quint16 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
