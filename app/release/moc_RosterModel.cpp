/****************************************************************************
** Meta object code from reading C++ file 'RosterModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../RosterModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RosterModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RosterModel_t {
    QByteArrayData data[13];
    char stringdata[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_RosterModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_RosterModel_t qt_meta_stringdata_RosterModel = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 12),
QT_MOC_LITERAL(4, 42, 9),
QT_MOC_LITERAL(5, 52, 12),
QT_MOC_LITERAL(6, 65, 11),
QT_MOC_LITERAL(7, 77, 19),
QT_MOC_LITERAL(8, 97, 7),
QT_MOC_LITERAL(9, 105, 8),
QT_MOC_LITERAL(10, 114, 17),
QT_MOC_LITERAL(11, 132, 12),
QT_MOC_LITERAL(12, 145, 12)
    },
    "RosterModel\0lastOneResource\0\0contactIndex\0"
    "parseDone\0hiddenUpdate\0parseRoster\0"
    "presenceChangedSlot\0bareJid\0resource\0"
    "rosterChangedSlot\0vCardRecived\0"
    "QXmppVCardIq\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       4,    0,   52,    2, 0x06,
       5,    0,   53,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x0a,
       7,    2,   55,    2, 0x08,
      10,    1,   60,    2, 0x08,
      11,    1,   63,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void RosterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RosterModel *_t = static_cast<RosterModel *>(_o);
        switch (_id) {
        case 0: _t->lastOneResource((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->parseDone(); break;
        case 2: _t->hiddenUpdate(); break;
        case 3: _t->parseRoster(); break;
        case 4: _t->presenceChangedSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->rosterChangedSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->vCardRecived((*reinterpret_cast< const QXmppVCardIq(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RosterModel::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosterModel::lastOneResource)) {
                *result = 0;
            }
        }
        {
            typedef void (RosterModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosterModel::parseDone)) {
                *result = 1;
            }
        }
        {
            typedef void (RosterModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosterModel::hiddenUpdate)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject RosterModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_RosterModel.data,
      qt_meta_data_RosterModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *RosterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RosterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RosterModel.stringdata))
        return static_cast<void*>(const_cast< RosterModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int RosterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RosterModel::lastOneResource(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RosterModel::parseDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void RosterModel::hiddenUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
