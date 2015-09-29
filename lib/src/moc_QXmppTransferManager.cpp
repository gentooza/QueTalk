/****************************************************************************
** Meta object code from reading C++ file 'QXmppTransferManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "client/QXmppTransferManager.h"
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
    QByteArrayData data[44];
    char stringdata[480];
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
QT_MOC_LITERAL(5, 57, 19),
QT_MOC_LITERAL(6, 77, 12),
QT_MOC_LITERAL(7, 90, 8),
QT_MOC_LITERAL(8, 99, 4),
QT_MOC_LITERAL(9, 104, 5),
QT_MOC_LITERAL(10, 110, 12),
QT_MOC_LITERAL(11, 123, 23),
QT_MOC_LITERAL(12, 147, 5),
QT_MOC_LITERAL(13, 153, 5),
QT_MOC_LITERAL(14, 159, 6),
QT_MOC_LITERAL(15, 166, 8),
QT_MOC_LITERAL(16, 175, 10),
QT_MOC_LITERAL(17, 186, 6),
QT_MOC_LITERAL(18, 193, 13),
QT_MOC_LITERAL(19, 207, 9),
QT_MOC_LITERAL(20, 217, 9),
QT_MOC_LITERAL(21, 227, 3),
QT_MOC_LITERAL(22, 231, 6),
QT_MOC_LITERAL(23, 238, 6),
QT_MOC_LITERAL(24, 245, 5),
QT_MOC_LITERAL(25, 251, 8),
QT_MOC_LITERAL(26, 260, 8),
QT_MOC_LITERAL(27, 269, 17),
QT_MOC_LITERAL(28, 287, 17),
QT_MOC_LITERAL(29, 305, 5),
QT_MOC_LITERAL(30, 311, 7),
QT_MOC_LITERAL(31, 319, 10),
QT_MOC_LITERAL(32, 330, 15),
QT_MOC_LITERAL(33, 346, 16),
QT_MOC_LITERAL(34, 363, 13),
QT_MOC_LITERAL(35, 377, 8),
QT_MOC_LITERAL(36, 386, 12),
QT_MOC_LITERAL(37, 399, 11),
QT_MOC_LITERAL(38, 411, 9),
QT_MOC_LITERAL(39, 421, 7),
QT_MOC_LITERAL(40, 429, 10),
QT_MOC_LITERAL(41, 440, 10),
QT_MOC_LITERAL(42, 451, 13),
QT_MOC_LITERAL(43, 465, 13)
    },
    "QXmppTransferJob\0error\0\0QXmppTransferJob::Error\0"
    "finished\0localFileUrlChanged\0localFileUrl\0"
    "progress\0done\0total\0stateChanged\0"
    "QXmppTransferJob::State\0state\0abort\0"
    "accept\0filePath\0QIODevice*\0output\0"
    "_q_terminated\0direction\0Direction\0jid\0"
    "method\0Method\0State\0fileName\0fileSize\0"
    "IncomingDirection\0OutgoingDirection\0"
    "Error\0NoError\0AbortError\0FileAccessError\0"
    "FileCorruptError\0ProtocolError\0NoMethod\0"
    "InBandMethod\0SocksMethod\0AnyMethod\0"
    "Methods\0OfferState\0StartState\0"
    "TransferState\0FinishedState\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppTransferJob[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   82, // properties
       5,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06,
       4,    0,   62,    2, 0x06,
       5,    1,   63,    2, 0x06,
       7,    2,   66,    2, 0x06,
      10,    1,   71,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      13,    0,   74,    2, 0x0a,
      14,    1,   75,    2, 0x0a,
      14,    1,   78,    2, 0x0a,
      18,    0,   81,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,

 // properties: name, type, flags
      19, 0x80000000 | 20, 0x00095409,
       6, QMetaType::QUrl, 0x00495103,
      21, QMetaType::QString, 0x00095401,
      22, 0x80000000 | 23, 0x00095409,
      12, 0x80000000 | 24, 0x00495009,
      25, QMetaType::QString, 0x00095401,
      26, QMetaType::LongLong, 0x00095401,

 // properties: notify_signal_id
       0,
       2,
       0,
       0,
       4,
       0,
       0,

 // enums: name, flags, count, data
      20, 0x0,    2,  130,
      29, 0x0,    5,  134,
      23, 0x1,    4,  144,
      39, 0x1,    4,  152,
      24, 0x0,    4,  160,

 // enum data: key, value
      27, uint(QXmppTransferJob::IncomingDirection),
      28, uint(QXmppTransferJob::OutgoingDirection),
      30, uint(QXmppTransferJob::NoError),
      31, uint(QXmppTransferJob::AbortError),
      32, uint(QXmppTransferJob::FileAccessError),
      33, uint(QXmppTransferJob::FileCorruptError),
      34, uint(QXmppTransferJob::ProtocolError),
      35, uint(QXmppTransferJob::NoMethod),
      36, uint(QXmppTransferJob::InBandMethod),
      37, uint(QXmppTransferJob::SocksMethod),
      38, uint(QXmppTransferJob::AnyMethod),
      35, uint(QXmppTransferJob::NoMethod),
      36, uint(QXmppTransferJob::InBandMethod),
      37, uint(QXmppTransferJob::SocksMethod),
      38, uint(QXmppTransferJob::AnyMethod),
      40, uint(QXmppTransferJob::OfferState),
      41, uint(QXmppTransferJob::StartState),
      42, uint(QXmppTransferJob::TransferState),
      43, uint(QXmppTransferJob::FinishedState),

       0        // eod
};

void QXmppTransferJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppTransferJob *_t = static_cast<QXmppTransferJob *>(_o);
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->localFileUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< QXmppTransferJob::State(*)>(_a[1]))); break;
        case 5: _t->abort(); break;
        case 6: _t->accept((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->accept((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 8: _t->_q_terminated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
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
            typedef void (QXmppTransferJob::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::localFileUrlChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QXmppTransferJob::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::progress)) {
                *result = 3;
            }
        }
        {
            typedef void (QXmppTransferJob::*_t)(QXmppTransferJob::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferJob::stateChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject QXmppTransferJob::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppTransferJob.data,
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
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppTransferJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Direction*>(_v) = direction(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = localFileUrl(); break;
        case 2: *reinterpret_cast< QString*>(_v) = jid(); break;
        case 3: *reinterpret_cast<int*>(_v) = QFlag(method()); break;
        case 4: *reinterpret_cast< State*>(_v) = state(); break;
        case 5: *reinterpret_cast< QString*>(_v) = fileName(); break;
        case 6: *reinterpret_cast< qint64*>(_v) = fileSize(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setLocalFileUrl(*reinterpret_cast< QUrl*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
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
void QXmppTransferJob::localFileUrlChanged(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QXmppTransferJob::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QXmppTransferJob::stateChanged(QXmppTransferJob::State _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
struct qt_meta_stringdata_QXmppTransferManager_t {
    QByteArrayData data[36];
    char stringdata[435];
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
QT_MOC_LITERAL(4, 53, 3),
QT_MOC_LITERAL(5, 57, 10),
QT_MOC_LITERAL(6, 68, 11),
QT_MOC_LITERAL(7, 80, 8),
QT_MOC_LITERAL(8, 89, 3),
QT_MOC_LITERAL(9, 93, 8),
QT_MOC_LITERAL(10, 102, 11),
QT_MOC_LITERAL(11, 114, 10),
QT_MOC_LITERAL(12, 125, 6),
QT_MOC_LITERAL(13, 132, 21),
QT_MOC_LITERAL(14, 154, 8),
QT_MOC_LITERAL(15, 163, 3),
QT_MOC_LITERAL(16, 167, 13),
QT_MOC_LITERAL(17, 181, 7),
QT_MOC_LITERAL(18, 189, 15),
QT_MOC_LITERAL(19, 205, 6),
QT_MOC_LITERAL(20, 212, 11),
QT_MOC_LITERAL(21, 224, 23),
QT_MOC_LITERAL(22, 248, 5),
QT_MOC_LITERAL(23, 254, 14),
QT_MOC_LITERAL(24, 269, 18),
QT_MOC_LITERAL(25, 288, 23),
QT_MOC_LITERAL(26, 312, 5),
QT_MOC_LITERAL(27, 318, 23),
QT_MOC_LITERAL(28, 342, 11),
QT_MOC_LITERAL(29, 354, 6),
QT_MOC_LITERAL(30, 361, 8),
QT_MOC_LITERAL(31, 370, 4),
QT_MOC_LITERAL(32, 375, 5),
QT_MOC_LITERAL(33, 381, 9),
QT_MOC_LITERAL(34, 391, 16),
QT_MOC_LITERAL(35, 408, 25)
    },
    "QXmppTransferManager\0fileReceived\0\0"
    "QXmppTransferJob*\0job\0jobStarted\0"
    "jobFinished\0sendFile\0jid\0filePath\0"
    "description\0QIODevice*\0device\0"
    "QXmppTransferFileInfo\0fileInfo\0sid\0"
    "_q_iqReceived\0QXmppIq\0_q_jobDestroyed\0"
    "object\0_q_jobError\0QXmppTransferJob::Error\0"
    "error\0_q_jobFinished\0_q_jobStateChanged\0"
    "QXmppTransferJob::State\0state\0"
    "_q_socksServerConnected\0QTcpSocket*\0"
    "socket\0hostName\0port\0proxy\0proxyOnly\0"
    "supportedMethods\0QXmppTransferJob::Methods\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppTransferManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       3,  136, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06,
       5,    1,   82,    2, 0x06,
       6,    1,   85,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    3,   88,    2, 0x0a,
       7,    2,   95,    2, 0x2a,
       7,    4,  100,    2, 0x0a,
       7,    3,  109,    2, 0x2a,
      16,    1,  116,    2, 0x08,
      18,    1,  119,    2, 0x08,
      20,    1,  122,    2, 0x08,
      23,    0,  125,    2, 0x08,
      24,    1,  126,    2, 0x08,
      27,    3,  129,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    0x80000000 | 3, QMetaType::QString, QMetaType::QString,    8,    9,
    0x80000000 | 3, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 13, QMetaType::QString,    8,   12,   14,   15,
    0x80000000 | 3, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 13,    8,   12,   14,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, QMetaType::QObjectStar,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 28, QMetaType::QString, QMetaType::UShort,   29,   30,   31,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00095103,
      33, QMetaType::Bool, 0x00095103,
      34, 0x80000000 | 35, 0x0009510b,

       0        // eod
};

void QXmppTransferManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppTransferManager *_t = static_cast<QXmppTransferManager *>(_o);
        switch (_id) {
        case 0: _t->fileReceived((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 1: _t->jobStarted((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 2: _t->jobFinished((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 3: { QXmppTransferJob* _r = _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmppTransferJob**>(_a[0]) = _r; }  break;
        case 4: { QXmppTransferJob* _r = _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QXmppTransferJob**>(_a[0]) = _r; }  break;
        case 5: { QXmppTransferJob* _r = _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QXmppTransferFileInfo(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QXmppTransferJob**>(_a[0]) = _r; }  break;
        case 6: { QXmppTransferJob* _r = _t->sendFile((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QIODevice*(*)>(_a[2])),(*reinterpret_cast< const QXmppTransferFileInfo(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QXmppTransferJob**>(_a[0]) = _r; }  break;
        case 7: _t->_q_iqReceived((*reinterpret_cast< const QXmppIq(*)>(_a[1]))); break;
        case 8: _t->_q_jobDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 9: _t->_q_jobError((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 10: _t->_q_jobFinished(); break;
        case 11: _t->_q_jobStateChanged((*reinterpret_cast< QXmppTransferJob::State(*)>(_a[1]))); break;
        case 12: _t->_q_socksServerConnected((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< quint16(*)>(_a[3]))); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppTransferJob* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
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
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferManager::jobStarted)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppTransferManager::*_t)(QXmppTransferJob * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppTransferManager::jobFinished)) {
                *result = 2;
            }
        }
    }
}

static const QMetaObject *qt_meta_extradata_QXmppTransferManager[] = {
        &QXmppTransferJob::staticMetaObject,
    0
};

const QMetaObject QXmppTransferManager::staticMetaObject = {
    { &QXmppClientExtension::staticMetaObject, qt_meta_stringdata_QXmppTransferManager.data,
      qt_meta_data_QXmppTransferManager,  qt_static_metacall, qt_meta_extradata_QXmppTransferManager, 0}
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
    return QXmppClientExtension::qt_metacast(_clname);
}

int QXmppTransferManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppClientExtension::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QString*>(_v) = proxy(); break;
        case 1: *reinterpret_cast< bool*>(_v) = proxyOnly(); break;
        case 2: *reinterpret_cast< QXmppTransferJob::Methods*>(_v) = supportedMethods(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setProxy(*reinterpret_cast< QString*>(_v)); break;
        case 1: setProxyOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: setSupportedMethods(*reinterpret_cast< QXmppTransferJob::Methods*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QXmppTransferManager::fileReceived(QXmppTransferJob * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppTransferManager::jobStarted(QXmppTransferJob * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QXmppTransferManager::jobFinished(QXmppTransferJob * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
