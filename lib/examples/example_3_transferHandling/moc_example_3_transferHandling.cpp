/****************************************************************************
** Meta object code from reading C++ file 'example_3_transferHandling.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "example_3_transferHandling.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'example_3_transferHandling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_xmppClient_t {
    QByteArrayData data[15];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_xmppClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_xmppClient_t qt_meta_stringdata_xmppClient = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 9),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 23),
QT_MOC_LITERAL(4, 46, 5),
QT_MOC_LITERAL(5, 52, 16),
QT_MOC_LITERAL(6, 69, 17),
QT_MOC_LITERAL(7, 87, 3),
QT_MOC_LITERAL(8, 91, 12),
QT_MOC_LITERAL(9, 104, 20),
QT_MOC_LITERAL(10, 125, 13),
QT_MOC_LITERAL(11, 139, 8),
QT_MOC_LITERAL(12, 148, 12),
QT_MOC_LITERAL(13, 161, 4),
QT_MOC_LITERAL(14, 166, 5)
    },
    "xmppClient\0slotError\0\0QXmppTransferJob::Error\0"
    "error\0slotFileReceived\0QXmppTransferJob*\0"
    "job\0slotFinished\0slotPresenceReceived\0"
    "QXmppPresence\0presence\0slotProgress\0"
    "done\0total\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xmppClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08,
       5,    1,   42,    2, 0x08,
       8,    0,   45,    2, 0x08,
       9,    1,   46,    2, 0x08,
      12,    2,   49,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   13,   14,

       0        // eod
};

void xmppClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        xmppClient *_t = static_cast<xmppClient *>(_o);
        switch (_id) {
        case 0: _t->slotError((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 1: _t->slotFileReceived((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 2: _t->slotFinished(); break;
        case 3: _t->slotPresenceReceived((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        case 4: _t->slotProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXmppTransferJob* >(); break;
            }
            break;
        }
    }
}

const QMetaObject xmppClient::staticMetaObject = {
    { &QXmppClient::staticMetaObject, qt_meta_stringdata_xmppClient.data,
      qt_meta_data_xmppClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *xmppClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xmppClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_xmppClient.stringdata))
        return static_cast<void*>(const_cast< xmppClient*>(this));
    return QXmppClient::qt_metacast(_clname);
}

int xmppClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
