/****************************************************************************
** Meta object code from reading C++ file 'QXmppTransferManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QXmppTransferManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppTransferManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppTransferJob_t {
    QByteArrayData data[15];
    char stringdata[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppTransferJob_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppTransferJob_t qt_meta_stringdata_QXmppTransferJob = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 5),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 23),
QT_MOC_LITERAL(4, 48, 8),
QT_MOC_LITERAL(5, 57, 8),
QT_MOC_LITERAL(6, 66, 4),
QT_MOC_LITERAL(7, 71, 5),
QT_MOC_LITERAL(8, 77, 12),
QT_MOC_LITERAL(9, 90, 23),
QT_MOC_LITERAL(10, 114, 5),
QT_MOC_LITERAL(11, 120, 12),
QT_MOC_LITERAL(12, 133, 11),
QT_MOC_LITERAL(13, 145, 8),
QT_MOC_LITERAL(14, 154, 14)
    },
    "QXmppTransferJob\0error\0\0QXmppTransferJob::Error\0"
    "finished\0progress\0done\0total\0stateChanged\0"
    "QXmppTransferJob::State\0state\0"
    "disconnected\0receiveData\0sendData\0"
    "slotTerminated\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppTransferJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       4,    0,   57,    2, 0x06,
       5,    2,   58,    2, 0x06,
       8,    1,   63,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,   66,    2, 0x08,
      12,    0,   67,    2, 0x08,
      13,    0,   68,    2, 0x08,
      14,    0,   69,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QXmppTransferJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppTransferJob *_t = static_cast<QXmppTransferJob *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QXmppTransferJob::State(*)>(_a[1]))); break;
        case 4: _t->disconnected(); break;
        case 5: _t->receiveData(); break;
        case 6: _t->sendData(); break;
        case 7: _t->slotTerminated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppTransferJob::*_t)(QXmppTransferJob::Error );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::error)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppTransferJob::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppTransferJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::progress)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppTransferJob::*_t)(QXmppTransferJob::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::stateChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QXmppTransferJob::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppTransferJob.data,
      qt_meta_data_QXmppTransferJob,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppTransferJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppTransferJob::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppTransferJob.stringdata))
        return static_cast<void*>(const_cast< QXmppTransferJob*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppTransferJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QXmppTransferJob::error(QXmppTransferJob::Error _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppTransferJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QXmppTransferJob::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QXmppTransferJob::stateChanged(QXmppTransferJob::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QXmppTransferManager_t {
    QByteArrayData data[33];
    char stringdata[454];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppTransferManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppTransferManager_t qt_meta_stringdata_QXmppTransferManager = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 12),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 17),
QT_MOC_LITERAL(4, 53, 5),
QT_MOC_LITERAL(5, 59, 8),
QT_MOC_LITERAL(6, 68, 3),
QT_MOC_LITERAL(7, 72, 20),
QT_MOC_LITERAL(8, 93, 17),
QT_MOC_LITERAL(9, 111, 18),
QT_MOC_LITERAL(10, 130, 15),
QT_MOC_LITERAL(11, 146, 17),
QT_MOC_LITERAL(12, 164, 14),
QT_MOC_LITERAL(13, 179, 17),
QT_MOC_LITERAL(14, 197, 14),
QT_MOC_LITERAL(15, 212, 10),
QT_MOC_LITERAL(16, 223, 7),
QT_MOC_LITERAL(17, 231, 12),
QT_MOC_LITERAL(18, 244, 6),
QT_MOC_LITERAL(19, 251, 8),
QT_MOC_LITERAL(20, 260, 23),
QT_MOC_LITERAL(21, 284, 5),
QT_MOC_LITERAL(22, 290, 11),
QT_MOC_LITERAL(23, 302, 15),
QT_MOC_LITERAL(24, 318, 23),
QT_MOC_LITERAL(25, 342, 5),
QT_MOC_LITERAL(26, 348, 20),
QT_MOC_LITERAL(27, 369, 11),
QT_MOC_LITERAL(28, 381, 6),
QT_MOC_LITERAL(29, 388, 8),
QT_MOC_LITERAL(30, 397, 4),
QT_MOC_LITERAL(31, 402, 26),
QT_MOC_LITERAL(32, 429, 23)
    },
    "QXmppTransferManager\0fileReceived\0\0"
    "QXmppTransferJob*\0offer\0finished\0job\0"
    "byteStreamIqReceived\0QXmppByteStreamIq\0"
    "ibbCloseIqReceived\0QXmppIbbCloseIq\0"
    "ibbDataIqReceived\0QXmppIbbDataIq\0"
    "ibbOpenIqReceived\0QXmppIbbOpenIq\0"
    "iqReceived\0QXmppIq\0jobDestroyed\0object\0"
    "jobError\0QXmppTransferJob::Error\0error\0"
    "jobFinished\0jobStateChanged\0"
    "QXmppTransferJob::State\0state\0"
    "socksServerConnected\0QTcpSocket*\0"
    "socket\0hostName\0port\0streamInitiationIqReceived\0"
    "QXmppStreamInitiationIq\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppTransferManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,
       5,    1,   82,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   85,    2, 0x08,
       9,    1,   88,    2, 0x08,
      11,    1,   91,    2, 0x08,
      13,    1,   94,    2, 0x08,
      15,    1,   97,    2, 0x08,
      17,    1,  100,    2, 0x08,
      19,    1,  103,    2, 0x08,
      22,    0,  106,    2, 0x08,
      23,    1,  107,    2, 0x08,
      26,    3,  110,    2, 0x08,
      31,    1,  117,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, QMetaType::QObjectStar,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::UShort,   28,   29,   30,
    QMetaType::Void, 0x80000000 | 32,    2,

       0        // eod
};

void QXmppTransferManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppTransferManager *_t = static_cast<QXmppTransferManager *>(_o);
        switch (_id) {
        case 0: _t->fileReceived((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 1: _t->finished((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 2: _t->byteStreamIqReceived((*reinterpret_cast< const QXmppByteStreamIq(*)>(_a[1]))); break;
        case 3: _t->ibbCloseIqReceived((*reinterpret_cast< const QXmppIbbCloseIq(*)>(_a[1]))); break;
        case 4: _t->ibbDataIqReceived((*reinterpret_cast< const QXmppIbbDataIq(*)>(_a[1]))); break;
        case 5: _t->ibbOpenIqReceived((*reinterpret_cast< const QXmppIbbOpenIq(*)>(_a[1]))); break;
        case 6: _t->iqReceived((*reinterpret_cast< const QXmppIq(*)>(_a[1]))); break;
        case 7: _t->jobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 8: _t->jobError((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 9: _t->jobFinished(); break;
        case 10: _t->jobStateChanged((*reinterpret_cast< QXmppTransferJob::State(*)>(_a[1]))); break;
        case 11: _t->socksServerConnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
        case 12: _t->streamInitiationIqReceived((*reinterpret_cast< const QXmppStreamInitiationIq(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppTransferJob* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppTransferJob* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppTransferManager::*_t)(QXmppTransferJob * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferManager::fileReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppTransferManager::*_t)(QXmppTransferJob * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferManager::finished)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppTransferManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppTransferManager.data,
      qt_meta_data_QXmppTransferManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppTransferManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppTransferManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppTransferManager.stringdata))
        return static_cast<void*>(const_cast< QXmppTransferManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppTransferManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QXmppTransferManager::fileReceived(QXmppTransferJob * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppTransferManager::finished(QXmppTransferJob * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
