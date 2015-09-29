/****************************************************************************
** Meta object code from reading C++ file 'QXmppOutgoingServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "server/QXmppOutgoingServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppOutgoingServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppOutgoingServer_t {
    QByteArrayData data[18];
    char stringdata[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppOutgoingServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppOutgoingServer_t qt_meta_stringdata_QXmppOutgoingServer = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 24),
QT_MOC_LITERAL(2, 45, 0),
QT_MOC_LITERAL(3, 46, 13),
QT_MOC_LITERAL(4, 60, 8),
QT_MOC_LITERAL(5, 69, 13),
QT_MOC_LITERAL(6, 83, 6),
QT_MOC_LITERAL(7, 90, 9),
QT_MOC_LITERAL(8, 100, 4),
QT_MOC_LITERAL(9, 105, 20),
QT_MOC_LITERAL(10, 126, 21),
QT_MOC_LITERAL(11, 148, 12),
QT_MOC_LITERAL(12, 161, 13),
QT_MOC_LITERAL(13, 175, 16),
QT_MOC_LITERAL(14, 192, 6),
QT_MOC_LITERAL(15, 199, 11),
QT_MOC_LITERAL(16, 211, 28),
QT_MOC_LITERAL(17, 240, 5)
    },
    "QXmppOutgoingServer\0dialbackResponseReceived\0"
    "\0QXmppDialback\0response\0connectToHost\0"
    "domain\0queueData\0data\0_q_dnsLookupFinished\0"
    "_q_socketDisconnected\0sendDialback\0"
    "slotSslErrors\0QList<QSslError>\0errors\0"
    "socketError\0QAbstractSocket::SocketError\0"
    "error\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppOutgoingServer[] = {

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
       1,    1,   54,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a,
       7,    1,   60,    2, 0x0a,
       9,    0,   63,    2, 0x08,
      10,    0,   64,    2, 0x08,
      11,    0,   65,    2, 0x08,
      12,    1,   66,    2, 0x08,
      15,    1,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void QXmppOutgoingServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppOutgoingServer *_t = static_cast<QXmppOutgoingServer *>(_o);
        switch (_id) {
        case 0: _t->dialbackResponseReceived((*reinterpret_cast< const QXmppDialback(*)>(_a[1]))); break;
        case 1: _t->connectToHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->queueData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->_q_dnsLookupFinished(); break;
        case 4: _t->_q_socketDisconnected(); break;
        case 5: _t->sendDialback(); break;
        case 6: _t->slotSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 7: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppOutgoingServer::*_t)(const QXmppDialback & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingServer::dialbackResponseReceived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QXmppOutgoingServer::staticMetaObject = {
    { &QXmppStream::staticMetaObject, qt_meta_stringdata_QXmppOutgoingServer.data,
      qt_meta_data_QXmppOutgoingServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppOutgoingServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppOutgoingServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppOutgoingServer.stringdata))
        return static_cast<void*>(const_cast< QXmppOutgoingServer*>(this));
    return QXmppStream::qt_metacast(_clname);
}

int QXmppOutgoingServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppStream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QXmppOutgoingServer::dialbackResponseReceived(const QXmppDialback & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
