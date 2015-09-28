/****************************************************************************
** Meta object code from reading C++ file 'ibbClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ibbClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ibbClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ibbClient_t {
    QByteArrayData data[10];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_ibbClient_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_ibbClient_t qt_meta_stringdata_ibbClient = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 13),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 9),
QT_MOC_LITERAL(4, 35, 23),
QT_MOC_LITERAL(5, 59, 5),
QT_MOC_LITERAL(6, 65, 12),
QT_MOC_LITERAL(7, 78, 12),
QT_MOC_LITERAL(8, 91, 4),
QT_MOC_LITERAL(9, 96, 5)
    },
    "ibbClient\0slotConnected\0\0slotError\0"
    "QXmppTransferJob::Error\0error\0"
    "slotFinished\0slotProgress\0done\0total\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ibbClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a,
       3,    1,   35,    2, 0x0a,
       6,    0,   38,    2, 0x0a,
       7,    2,   39,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,

       0        // eod
};

void ibbClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ibbClient *_t = static_cast<ibbClient *>(_o);
        switch (_id) {
        case 0: _t->slotConnected(); break;
        case 1: _t->slotError((*reinterpret_cast< QXmppTransferJob::Error(*)>(_a[1]))); break;
        case 2: _t->slotFinished(); break;
        case 3: _t->slotProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject ibbClient::staticMetaObject = {
    { &QXmppClient::staticMetaObject, qt_meta_stringdata_ibbClient.data,
      qt_meta_data_ibbClient,  qt_static_metacall, 0, 0}
};


const QMetaObject *ibbClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ibbClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ibbClient.stringdata))
        return static_cast<void*>(const_cast< ibbClient*>(this));
    return QXmppClient::qt_metacast(_clname);
}

int ibbClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppClient::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
