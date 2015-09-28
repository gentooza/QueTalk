/****************************************************************************
** Meta object code from reading C++ file 'QXmppClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QXmppClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppClient_t {
    QByteArrayData data[27];
    char stringdata[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppClient_t qt_meta_stringdata_QXmppClient = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 12),
QT_MOC_LITERAL(4, 36, 5),
QT_MOC_LITERAL(5, 42, 18),
QT_MOC_LITERAL(6, 61, 15),
QT_MOC_LITERAL(7, 77, 12),
QT_MOC_LITERAL(8, 90, 16),
QT_MOC_LITERAL(9, 107, 13),
QT_MOC_LITERAL(10, 121, 10),
QT_MOC_LITERAL(11, 132, 7),
QT_MOC_LITERAL(12, 140, 19),
QT_MOC_LITERAL(13, 160, 16),
QT_MOC_LITERAL(14, 177, 17),
QT_MOC_LITERAL(15, 195, 14),
QT_MOC_LITERAL(16, 210, 10),
QT_MOC_LITERAL(17, 221, 11),
QT_MOC_LITERAL(18, 233, 11),
QT_MOC_LITERAL(19, 245, 7),
QT_MOC_LITERAL(20, 253, 7),
QT_MOC_LITERAL(21, 261, 17),
QT_MOC_LITERAL(22, 279, 10),
QT_MOC_LITERAL(23, 290, 19),
QT_MOC_LITERAL(24, 310, 12),
QT_MOC_LITERAL(25, 323, 27),
QT_MOC_LITERAL(26, 351, 10)
    },
    "QXmppClient\0connected\0\0disconnected\0"
    "error\0QXmppClient::Error\0messageReceived\0"
    "QXmppMessage\0presenceReceived\0"
    "QXmppPresence\0iqReceived\0QXmppIq\0"
    "discoveryIqReceived\0QXmppDiscoveryIq\0"
    "versionIqReceived\0QXmppVersionIq\0"
    "sendPacket\0QXmppPacket\0sendMessage\0"
    "bareJid\0message\0setClientPresence\0"
    "statusText\0QXmppPresence::Type\0"
    "presenceType\0QXmppPresence::Status::Type\0"
    "statusType\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06,
       3,    0,   85,    2, 0x06,
       4,    1,   86,    2, 0x06,
       6,    1,   89,    2, 0x06,
       8,    1,   92,    2, 0x06,
      10,    1,   95,    2, 0x06,
      12,    1,   98,    2, 0x06,
      14,    1,  101,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      16,    1,  104,    2, 0x0a,
      18,    2,  107,    2, 0x0a,
      21,    1,  112,    2, 0x0a,
      21,    1,  115,    2, 0x0a,
      21,    1,  118,    2, 0x0a,
      21,    1,  121,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void, 0x80000000 | 15,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   20,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 25,   26,

       0        // eod
};

void QXmppClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppClient *_t = static_cast<QXmppClient *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->error((*reinterpret_cast< QXmppClient::Error(*)>(_a[1]))); break;
        case 3: _t->messageReceived((*reinterpret_cast< const QXmppMessage(*)>(_a[1]))); break;
        case 4: _t->presenceReceived((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        case 5: _t->iqReceived((*reinterpret_cast< const QXmppIq(*)>(_a[1]))); break;
        case 6: _t->discoveryIqReceived((*reinterpret_cast< const QXmppDiscoveryIq(*)>(_a[1]))); break;
        case 7: _t->versionIqReceived((*reinterpret_cast< const QXmppVersionIq(*)>(_a[1]))); break;
        case 8: _t->sendPacket((*reinterpret_cast< const QXmppPacket(*)>(_a[1]))); break;
        case 9: _t->sendMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->setClientPresence((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        case 11: _t->setClientPresence((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->setClientPresence((*reinterpret_cast< QXmppPresence::Type(*)>(_a[1]))); break;
        case 13: _t->setClientPresence((*reinterpret_cast< QXmppPresence::Status::Type(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppClient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::disconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppClient::*_t)(QXmppClient::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::error)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppClient::*_t)(const QXmppMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::messageReceived)) {
                *result = 3;
            }
        }
        {
            typedef void (QXmppClient::*_t)(const QXmppPresence & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::presenceReceived)) {
                *result = 4;
            }
        }
        {
            typedef void (QXmppClient::*_t)(const QXmppIq & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::iqReceived)) {
                *result = 5;
            }
        }
        {
            typedef void (QXmppClient::*_t)(const QXmppDiscoveryIq & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::discoveryIqReceived)) {
                *result = 6;
            }
        }
        {
            typedef void (QXmppClient::*_t)(const QXmppVersionIq & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppClient::versionIqReceived)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject QXmppClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppClient.data,
      qt_meta_data_QXmppClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppClient.stringdata))
        return static_cast<void*>(const_cast< QXmppClient*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QXmppClient::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppClient::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QXmppClient::error(QXmppClient::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QXmppClient::messageReceived(const QXmppMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QXmppClient::presenceReceived(const QXmppPresence & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QXmppClient::iqReceived(const QXmppIq & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QXmppClient::discoveryIqReceived(const QXmppDiscoveryIq & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QXmppClient::versionIqReceived(const QXmppVersionIq & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
