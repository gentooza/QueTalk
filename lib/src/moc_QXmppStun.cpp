/****************************************************************************
** Meta object code from reading C++ file 'QXmppStun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/QXmppStun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppStun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppIceComponent_t {
    QByteArrayData data[21];
    char stringdata[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppIceComponent_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppIceComponent_t qt_meta_stringdata_QXmppIceComponent = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 9),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 16),
QT_MOC_LITERAL(4, 46, 8),
QT_MOC_LITERAL(5, 55, 21),
QT_MOC_LITERAL(6, 77, 22),
QT_MOC_LITERAL(7, 100, 5),
QT_MOC_LITERAL(8, 106, 13),
QT_MOC_LITERAL(9, 120, 12),
QT_MOC_LITERAL(10, 133, 15),
QT_MOC_LITERAL(11, 149, 14),
QT_MOC_LITERAL(12, 164, 12),
QT_MOC_LITERAL(13, 177, 4),
QT_MOC_LITERAL(14, 182, 4),
QT_MOC_LITERAL(15, 187, 13),
QT_MOC_LITERAL(16, 201, 19),
QT_MOC_LITERAL(17, 221, 20),
QT_MOC_LITERAL(18, 242, 9),
QT_MOC_LITERAL(19, 252, 16),
QT_MOC_LITERAL(20, 269, 7)
    },
    "QXmppIceComponent\0connected\0\0"
    "datagramReceived\0datagram\0"
    "gatheringStateChanged\0localCandidatesChanged\0"
    "close\0connectToHost\0sendDatagram\0"
    "checkCandidates\0handleDatagram\0"
    "QHostAddress\0host\0port\0turnConnected\0"
    "transactionFinished\0updateGatheringState\0"
    "writeStun\0QXmppStunMessage\0request\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppIceComponent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06,
       3,    1,   80,    2, 0x06,
       5,    0,   83,    2, 0x06,
       6,    0,   84,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   85,    2, 0x0a,
       8,    0,   86,    2, 0x0a,
       9,    1,   87,    2, 0x0a,
      10,    0,   90,    2, 0x08,
      11,    3,   91,    2, 0x08,
      15,    0,   98,    2, 0x08,
      16,    0,   99,    2, 0x08,
      17,    0,  100,    2, 0x08,
      18,    1,  101,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::LongLong, QMetaType::QByteArray,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 12, QMetaType::UShort,    4,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   20,

       0        // eod
};

void QXmppIceComponent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppIceComponent *_t = static_cast<QXmppIceComponent *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->datagramReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->gatheringStateChanged(); break;
        case 3: _t->localCandidatesChanged(); break;
        case 4: _t->close(); break;
        case 5: _t->connectToHost(); break;
        case 6: { qint64 _r = _t->sendDatagram((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = _r; }  break;
        case 7: _t->checkCandidates(); break;
        case 8: _t->handleDatagram((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 9: _t->turnConnected(); break;
        case 10: _t->transactionFinished(); break;
        case 11: _t->updateGatheringState(); break;
        case 12: _t->writeStun((*reinterpret_cast< const QXmppStunMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppIceComponent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceComponent::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppIceComponent::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceComponent::datagramReceived)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppIceComponent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceComponent::gatheringStateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppIceComponent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceComponent::localCandidatesChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QXmppIceComponent::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppIceComponent.data,
      qt_meta_data_QXmppIceComponent,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppIceComponent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppIceComponent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppIceComponent.stringdata))
        return static_cast<void*>(const_cast< QXmppIceComponent*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppIceComponent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppLoggable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QXmppIceComponent::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppIceComponent::datagramReceived(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QXmppIceComponent::gatheringStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QXmppIceComponent::localCandidatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
struct qt_meta_stringdata_QXmppIceConnection_t {
    QByteArrayData data[17];
    char stringdata[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppIceConnection_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppIceConnection_t qt_meta_stringdata_QXmppIceConnection = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 9),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 12),
QT_MOC_LITERAL(4, 43, 21),
QT_MOC_LITERAL(5, 65, 22),
QT_MOC_LITERAL(6, 88, 5),
QT_MOC_LITERAL(7, 94, 13),
QT_MOC_LITERAL(8, 108, 13),
QT_MOC_LITERAL(9, 122, 25),
QT_MOC_LITERAL(10, 148, 11),
QT_MOC_LITERAL(11, 160, 14),
QT_MOC_LITERAL(12, 175, 34),
QT_MOC_LITERAL(13, 210, 14),
QT_MOC_LITERAL(14, 225, 17),
QT_MOC_LITERAL(15, 243, 18),
QT_MOC_LITERAL(16, 262, 22)
    },
    "QXmppIceConnection\0connected\0\0"
    "disconnected\0gatheringStateChanged\0"
    "localCandidatesChanged\0close\0connectToHost\0"
    "slotConnected\0slotGatheringStateChanged\0"
    "slotTimeout\0gatheringState\0"
    "QXmppIceConnection::GatheringState\0"
    "GatheringState\0NewGatheringState\0"
    "BusyGatheringState\0CompleteGatheringState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppIceConnection[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   68, // properties
       1,   72, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06,
       3,    0,   60,    2, 0x06,
       4,    0,   61,    2, 0x06,
       5,    0,   62,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   63,    2, 0x0a,
       7,    0,   64,    2, 0x0a,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    0,   67,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00495009,

 // properties: notify_signal_id
       2,

 // enums: name, flags, count, data
      13, 0x0,    3,   76,

 // enum data: key, value
      14, uint(QXmppIceConnection::NewGatheringState),
      15, uint(QXmppIceConnection::BusyGatheringState),
      16, uint(QXmppIceConnection::CompleteGatheringState),

       0        // eod
};

void QXmppIceConnection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppIceConnection *_t = static_cast<QXmppIceConnection *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->gatheringStateChanged(); break;
        case 3: _t->localCandidatesChanged(); break;
        case 4: _t->close(); break;
        case 5: _t->connectToHost(); break;
        case 6: _t->slotConnected(); break;
        case 7: _t->slotGatheringStateChanged(); break;
        case 8: _t->slotTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppIceConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceConnection::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppIceConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceConnection::disconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppIceConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceConnection::gatheringStateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppIceConnection::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceConnection::localCandidatesChanged)) {
                *result = 3;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QXmppIceConnection::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppIceConnection.data,
      qt_meta_data_QXmppIceConnection,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppIceConnection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppIceConnection::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppIceConnection.stringdata))
        return static_cast<void*>(const_cast< QXmppIceConnection*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppIceConnection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppLoggable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QXmppIceConnection::GatheringState*>(_v) = gatheringState(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QXmppIceConnection::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppIceConnection::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QXmppIceConnection::gatheringStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QXmppIceConnection::localCandidatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
