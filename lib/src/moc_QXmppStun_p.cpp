/****************************************************************************
** Meta object code from reading C++ file 'QXmppStun_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/QXmppStun_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppStun_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppStunTransaction_t {
    QByteArrayData data[9];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppStunTransaction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppStunTransaction_t qt_meta_stringdata_QXmppStunTransaction = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 8),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 9),
QT_MOC_LITERAL(4, 41, 16),
QT_MOC_LITERAL(5, 58, 7),
QT_MOC_LITERAL(6, 66, 8),
QT_MOC_LITERAL(7, 75, 8),
QT_MOC_LITERAL(8, 84, 5)
    },
    "QXmppStunTransaction\0finished\0\0writeStun\0"
    "QXmppStunMessage\0request\0readStun\0"
    "response\0retry\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppStunTransaction[] = {

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
       1,    0,   34,    2, 0x06,
       3,    1,   35,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   38,    2, 0x0a,
       8,    0,   41,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void,

       0        // eod
};

void QXmppStunTransaction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppStunTransaction *_t = static_cast<QXmppStunTransaction *>(_o);
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->writeStun((*reinterpret_cast< const QXmppStunMessage(*)>(_a[1]))); break;
        case 2: _t->readStun((*reinterpret_cast< const QXmppStunMessage(*)>(_a[1]))); break;
        case 3: _t->retry(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppStunTransaction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppStunTransaction::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppStunTransaction::*_t)(const QXmppStunMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppStunTransaction::writeStun)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppStunTransaction::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppStunTransaction.data,
      qt_meta_data_QXmppStunTransaction,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppStunTransaction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppStunTransaction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppStunTransaction.stringdata))
        return static_cast<void*>(const_cast< QXmppStunTransaction*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppStunTransaction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppLoggable::qt_metacall(_c, _id, _a);
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
void QXmppStunTransaction::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppStunTransaction::writeStun(const QXmppStunMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QXmppIceTransport_t {
    QByteArrayData data[8];
    char stringdata[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppIceTransport_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppIceTransport_t qt_meta_stringdata_QXmppIceTransport = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 16),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 4),
QT_MOC_LITERAL(4, 41, 12),
QT_MOC_LITERAL(5, 54, 4),
QT_MOC_LITERAL(6, 59, 4),
QT_MOC_LITERAL(7, 64, 18)
    },
    "QXmppIceTransport\0datagramReceived\0\0"
    "data\0QHostAddress\0host\0port\0"
    "disconnectFromHost\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppIceTransport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   31,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4, QMetaType::UShort,    3,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QXmppIceTransport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppIceTransport *_t = static_cast<QXmppIceTransport *>(_o);
        switch (_id) {
        case 0: _t->datagramReceived((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QHostAddress(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 1: _t->disconnectFromHost(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppIceTransport::*_t)(const QByteArray & , const QHostAddress & , quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppIceTransport::datagramReceived)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QXmppIceTransport::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppIceTransport.data,
      qt_meta_data_QXmppIceTransport,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppIceTransport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppIceTransport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppIceTransport.stringdata))
        return static_cast<void*>(const_cast< QXmppIceTransport*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppIceTransport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppLoggable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QXmppIceTransport::datagramReceived(const QByteArray & _t1, const QHostAddress & _t2, quint16 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QXmppTurnAllocation_t {
    QByteArrayData data[13];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppTurnAllocation_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppTurnAllocation_t qt_meta_stringdata_QXmppTurnAllocation = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 9),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 12),
QT_MOC_LITERAL(4, 44, 13),
QT_MOC_LITERAL(5, 58, 18),
QT_MOC_LITERAL(6, 77, 9),
QT_MOC_LITERAL(7, 87, 7),
QT_MOC_LITERAL(8, 95, 15),
QT_MOC_LITERAL(9, 111, 19),
QT_MOC_LITERAL(10, 131, 9),
QT_MOC_LITERAL(11, 141, 16),
QT_MOC_LITERAL(12, 158, 7)
    },
    "QXmppTurnAllocation\0connected\0\0"
    "disconnected\0connectToHost\0"
    "disconnectFromHost\0readyRead\0refresh\0"
    "refreshChannels\0transactionFinished\0"
    "writeStun\0QXmppStunMessage\0message\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppTurnAllocation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06,
       3,    0,   60,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x0a,
       5,    0,   62,    2, 0x0a,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    0,   65,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    1,   67,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void QXmppTurnAllocation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppTurnAllocation *_t = static_cast<QXmppTurnAllocation *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->connectToHost(); break;
        case 3: _t->disconnectFromHost(); break;
        case 4: _t->readyRead(); break;
        case 5: _t->refresh(); break;
        case 6: _t->refreshChannels(); break;
        case 7: _t->transactionFinished(); break;
        case 8: _t->writeStun((*reinterpret_cast< const QXmppStunMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppTurnAllocation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTurnAllocation::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppTurnAllocation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTurnAllocation::disconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppTurnAllocation::staticMetaObject = {
    { &QXmppIceTransport::staticMetaObject, qt_meta_stringdata_QXmppTurnAllocation.data,
      qt_meta_data_QXmppTurnAllocation,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppTurnAllocation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppTurnAllocation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppTurnAllocation.stringdata))
        return static_cast<void*>(const_cast< QXmppTurnAllocation*>(this));
    return QXmppIceTransport::qt_metacast(_clname);
}

int QXmppTurnAllocation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppIceTransport::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QXmppTurnAllocation::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppTurnAllocation::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
struct qt_meta_stringdata_QXmppUdpTransport_t {
    QByteArrayData data[4];
    char stringdata[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppUdpTransport_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppUdpTransport_t qt_meta_stringdata_QXmppUdpTransport = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 18),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 9)
    },
    "QXmppUdpTransport\0disconnectFromHost\0"
    "\0readyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppUdpTransport[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a,
       3,    0,   25,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QXmppUdpTransport::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppUdpTransport *_t = static_cast<QXmppUdpTransport *>(_o);
        switch (_id) {
        case 0: _t->disconnectFromHost(); break;
        case 1: _t->readyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QXmppUdpTransport::staticMetaObject = {
    { &QXmppIceTransport::staticMetaObject, qt_meta_stringdata_QXmppUdpTransport.data,
      qt_meta_data_QXmppUdpTransport,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppUdpTransport::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppUdpTransport::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppUdpTransport.stringdata))
        return static_cast<void*>(const_cast< QXmppUdpTransport*>(this));
    return QXmppIceTransport::qt_metacast(_clname);
}

int QXmppUdpTransport::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppIceTransport::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
