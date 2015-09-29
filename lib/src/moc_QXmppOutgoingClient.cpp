/****************************************************************************
** Meta object code from reading C++ file 'QXmppOutgoingClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "client/QXmppOutgoingClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppOutgoingClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppOutgoingClient_t {
    QByteArrayData data[27];
    char stringdata[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppOutgoingClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppOutgoingClient_t qt_meta_stringdata_QXmppOutgoingClient = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 5),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 18),
QT_MOC_LITERAL(4, 46, 15),
QT_MOC_LITERAL(5, 62, 11),
QT_MOC_LITERAL(6, 74, 7),
QT_MOC_LITERAL(7, 82, 5),
QT_MOC_LITERAL(8, 88, 7),
QT_MOC_LITERAL(9, 96, 16),
QT_MOC_LITERAL(10, 113, 13),
QT_MOC_LITERAL(11, 127, 15),
QT_MOC_LITERAL(12, 143, 12),
QT_MOC_LITERAL(13, 156, 10),
QT_MOC_LITERAL(14, 167, 7),
QT_MOC_LITERAL(15, 175, 9),
QT_MOC_LITERAL(16, 185, 16),
QT_MOC_LITERAL(17, 202, 6),
QT_MOC_LITERAL(18, 209, 20),
QT_MOC_LITERAL(19, 230, 21),
QT_MOC_LITERAL(20, 252, 11),
QT_MOC_LITERAL(21, 264, 28),
QT_MOC_LITERAL(22, 293, 15),
QT_MOC_LITERAL(23, 309, 9),
QT_MOC_LITERAL(24, 319, 8),
QT_MOC_LITERAL(25, 328, 8),
QT_MOC_LITERAL(26, 337, 11)
    },
    "QXmppOutgoingClient\0error\0\0"
    "QXmppClient::Error\0elementReceived\0"
    "QDomElement\0element\0bool&\0handled\0"
    "presenceReceived\0QXmppPresence\0"
    "messageReceived\0QXmppMessage\0iqReceived\0"
    "QXmppIq\0sslErrors\0QList<QSslError>\0"
    "errors\0_q_dnsLookupFinished\0"
    "_q_socketDisconnected\0socketError\0"
    "QAbstractSocket::SocketError\0"
    "socketSslErrors\0pingStart\0pingStop\0"
    "pingSend\0pingTimeout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppOutgoingClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06,
       4,    2,   87,    2, 0x06,
       9,    1,   92,    2, 0x06,
      11,    1,   95,    2, 0x06,
      13,    1,   98,    2, 0x06,
      15,    1,  101,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      18,    0,  104,    2, 0x08,
      19,    0,  105,    2, 0x08,
      20,    1,  106,    2, 0x08,
      22,    1,  109,    2, 0x08,
      23,    0,  112,    2, 0x08,
      24,    0,  113,    2, 0x08,
      25,    0,  114,    2, 0x08,
      26,    0,  115,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QXmppOutgoingClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppOutgoingClient *_t = static_cast<QXmppOutgoingClient *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QXmppClient::Error(*)>(_a[1]))); break;
        case 1: _t->elementReceived((*reinterpret_cast< const QDomElement(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->presenceReceived((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< const QXmppMessage(*)>(_a[1]))); break;
        case 4: _t->iqReceived((*reinterpret_cast< const QXmppIq(*)>(_a[1]))); break;
        case 5: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 6: _t->_q_dnsLookupFinished(); break;
        case 7: _t->_q_socketDisconnected(); break;
        case 8: _t->socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 9: _t->socketSslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 10: _t->pingStart(); break;
        case 11: _t->pingStop(); break;
        case 12: _t->pingSend(); break;
        case 13: _t->pingTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
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
            typedef void (QXmppOutgoingClient::*_t)(QXmppClient::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::error)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppOutgoingClient::*_t)(const QDomElement & , bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::elementReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppOutgoingClient::*_t)(const QXmppPresence & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::presenceReceived)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppOutgoingClient::*_t)(const QXmppMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::messageReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (QXmppOutgoingClient::*_t)(const QXmppIq & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::iqReceived)) {
                *result = 4;
            }
        }
        {
            typedef void (QXmppOutgoingClient::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppOutgoingClient::sslErrors)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QXmppOutgoingClient::staticMetaObject = {
    { &QXmppStream::staticMetaObject, qt_meta_stringdata_QXmppOutgoingClient.data,
      qt_meta_data_QXmppOutgoingClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppOutgoingClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppOutgoingClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppOutgoingClient.stringdata))
        return static_cast<void*>(const_cast< QXmppOutgoingClient*>(this));
    return QXmppStream::qt_metacast(_clname);
}

int QXmppOutgoingClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppStream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QXmppOutgoingClient::error(QXmppClient::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppOutgoingClient::elementReceived(const QDomElement & _t1, bool & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QXmppOutgoingClient::presenceReceived(const QXmppPresence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QXmppOutgoingClient::messageReceived(const QXmppMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QXmppOutgoingClient::iqReceived(const QXmppIq & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QXmppOutgoingClient::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
