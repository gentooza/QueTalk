/****************************************************************************
** Meta object code from reading C++ file 'QXmppCallManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "client/QXmppCallManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppCallManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppCall_t {
    QByteArrayData data[31];
    char stringdata[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppCall_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppCall_t qt_meta_stringdata_QXmppCall = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 9),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 8),
QT_MOC_LITERAL(4, 30, 7),
QT_MOC_LITERAL(5, 38, 12),
QT_MOC_LITERAL(6, 51, 16),
QT_MOC_LITERAL(7, 68, 5),
QT_MOC_LITERAL(8, 74, 16),
QT_MOC_LITERAL(9, 91, 19),
QT_MOC_LITERAL(10, 111, 4),
QT_MOC_LITERAL(11, 116, 16),
QT_MOC_LITERAL(12, 133, 6),
QT_MOC_LITERAL(13, 140, 6),
QT_MOC_LITERAL(14, 147, 10),
QT_MOC_LITERAL(15, 158, 9),
QT_MOC_LITERAL(16, 168, 22),
QT_MOC_LITERAL(17, 191, 10),
QT_MOC_LITERAL(18, 202, 14),
QT_MOC_LITERAL(19, 217, 9),
QT_MOC_LITERAL(20, 227, 9),
QT_MOC_LITERAL(21, 237, 3),
QT_MOC_LITERAL(22, 241, 5),
QT_MOC_LITERAL(23, 247, 9),
QT_MOC_LITERAL(24, 257, 9),
QT_MOC_LITERAL(25, 267, 17),
QT_MOC_LITERAL(26, 285, 17),
QT_MOC_LITERAL(27, 303, 15),
QT_MOC_LITERAL(28, 319, 11),
QT_MOC_LITERAL(29, 331, 18),
QT_MOC_LITERAL(30, 350, 13)
    },
    "QXmppCall\0connected\0\0finished\0ringing\0"
    "stateChanged\0QXmppCall::State\0state\0"
    "audioModeChanged\0QIODevice::OpenMode\0"
    "mode\0videoModeChanged\0accept\0hangup\0"
    "startVideo\0stopVideo\0localCandidatesChanged\0"
    "terminated\0updateOpenMode\0direction\0"
    "Direction\0jid\0State\0audioMode\0videoMode\0"
    "IncomingDirection\0OutgoingDirection\0"
    "ConnectingState\0ActiveState\0"
    "DisconnectingState\0FinishedState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppCall[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,   98, // properties
       2,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06,
       3,    0,   80,    2, 0x06,
       4,    0,   81,    2, 0x06,
       5,    1,   82,    2, 0x06,
       8,    1,   85,    2, 0x06,
      11,    1,   88,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    0,   91,    2, 0x0a,
      13,    0,   92,    2, 0x0a,
      14,    0,   93,    2, 0x0a,
      15,    0,   94,    2, 0x0a,
      16,    0,   95,    2, 0x08,
      17,    0,   96,    2, 0x08,
      18,    0,   97,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x00095409,
      21, QMetaType::QString, 0x00095401,
       7, 0x80000000 | 22, 0x00495009,
      23, 0x80000000 | 9, 0x00495009,
      24, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       3,
       4,
       5,

 // enums: name, flags, count, data
      20, 0x0,    2,  126,
      22, 0x0,    4,  130,

 // enum data: key, value
      25, uint(QXmppCall::IncomingDirection),
      26, uint(QXmppCall::OutgoingDirection),
      27, uint(QXmppCall::ConnectingState),
      28, uint(QXmppCall::ActiveState),
      29, uint(QXmppCall::DisconnectingState),
      30, uint(QXmppCall::FinishedState),

       0        // eod
};

void QXmppCall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppCall *_t = static_cast<QXmppCall *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->finished(); break;
        case 2: _t->ringing(); break;
        case 3: _t->stateChanged((*reinterpret_cast< QXmppCall::State(*)>(_a[1]))); break;
        case 4: _t->audioModeChanged((*reinterpret_cast< QIODevice::OpenMode(*)>(_a[1]))); break;
        case 5: _t->videoModeChanged((*reinterpret_cast< QIODevice::OpenMode(*)>(_a[1]))); break;
        case 6: _t->accept(); break;
        case 7: _t->hangup(); break;
        case 8: _t->startVideo(); break;
        case 9: _t->stopVideo(); break;
        case 10: _t->localCandidatesChanged(); break;
        case 11: _t->terminated(); break;
        case 12: _t->updateOpenMode(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppCall::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppCall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppCall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppCall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::ringing)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppCall::*_t)(QXmppCall::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::stateChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QXmppCall::*_t)(QIODevice::OpenMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::audioModeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QXmppCall::*_t)(QIODevice::OpenMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCall::videoModeChanged)) {
                *result = 5;
            }
        }
    }
}

static const QMetaObject *qt_meta_extradata_QXmppCall[] = {
        &QIODevice::staticMetaObject,
    0
};

const QMetaObject QXmppCall::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppCall.data,
      qt_meta_data_QXmppCall,  qt_static_metacall, qt_meta_extradata_QXmppCall, 0}
};


const QMetaObject *QXmppCall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppCall::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppCall.stringdata))
        return static_cast<void*>(const_cast< QXmppCall*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppCall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = direction(); break;
        case 1: *reinterpret_cast< QString*>(_v) = jid(); break;
        case 2: *reinterpret_cast< State*>(_v) = state(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(audioMode()); break;
        case 4: *reinterpret_cast<int*>(_v) = QFlag(videoMode()); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QXmppCall::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppCall::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QXmppCall::ringing()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QXmppCall::stateChanged(QXmppCall::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QXmppCall::audioModeChanged(QIODevice::OpenMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QXmppCall::videoModeChanged(QIODevice::OpenMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_QXmppCallManager_t {
    QByteArrayData data[18];
    char stringdata[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppCallManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppCallManager_t qt_meta_stringdata_QXmppCallManager = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 12),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 10),
QT_MOC_LITERAL(4, 42, 4),
QT_MOC_LITERAL(5, 47, 11),
QT_MOC_LITERAL(6, 59, 3),
QT_MOC_LITERAL(7, 63, 16),
QT_MOC_LITERAL(8, 80, 6),
QT_MOC_LITERAL(9, 87, 15),
QT_MOC_LITERAL(10, 103, 13),
QT_MOC_LITERAL(11, 117, 7),
QT_MOC_LITERAL(12, 125, 2),
QT_MOC_LITERAL(13, 128, 19),
QT_MOC_LITERAL(14, 148, 13),
QT_MOC_LITERAL(15, 162, 19),
QT_MOC_LITERAL(16, 182, 13),
QT_MOC_LITERAL(17, 196, 8)
    },
    "QXmppCallManager\0callReceived\0\0"
    "QXmppCall*\0call\0callStarted\0jid\0"
    "_q_callDestroyed\0object\0_q_disconnected\0"
    "_q_iqReceived\0QXmppIq\0iq\0_q_jingleIqReceived\0"
    "QXmppJingleIq\0_q_presenceReceived\0"
    "QXmppPresence\0presence\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppCallManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       5,    1,   57,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   60,    2, 0x0a,
       7,    1,   63,    2, 0x08,
       9,    0,   66,    2, 0x08,
      10,    1,   67,    2, 0x08,
      13,    1,   70,    2, 0x08,
      15,    1,   73,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    0x80000000 | 3, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   12,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void QXmppCallManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppCallManager *_t = static_cast<QXmppCallManager *>(_o);
        switch (_id) {
        case 0: _t->callReceived((*reinterpret_cast< QXmppCall*(*)>(_a[1]))); break;
        case 1: _t->callStarted((*reinterpret_cast< QXmppCall*(*)>(_a[1]))); break;
        case 2: { QXmppCall* _r = _t->call((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QXmppCall**>(_a[0]) = _r; }  break;
        case 3: _t->_q_callDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->_q_disconnected(); break;
        case 5: _t->_q_iqReceived((*reinterpret_cast< const QXmppIq(*)>(_a[1]))); break;
        case 6: _t->_q_jingleIqReceived((*reinterpret_cast< const QXmppJingleIq(*)>(_a[1]))); break;
        case 7: _t->_q_presenceReceived((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppCall* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppCall* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppCallManager::*_t)(QXmppCall * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCallManager::callReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppCallManager::*_t)(QXmppCall * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppCallManager::callStarted)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppCallManager::staticMetaObject = {
    { &QXmppClientExtension::staticMetaObject, qt_meta_stringdata_QXmppCallManager.data,
      qt_meta_data_QXmppCallManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppCallManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppCallManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppCallManager.stringdata))
        return static_cast<void*>(const_cast< QXmppCallManager*>(this));
    return QXmppClientExtension::qt_metacast(_clname);
}

int QXmppCallManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppClientExtension::qt_metacall(_c, _id, _a);
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
void QXmppCallManager::callReceived(QXmppCall * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppCallManager::callStarted(QXmppCall * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
