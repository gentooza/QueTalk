/****************************************************************************
** Meta object code from reading C++ file 'TransferManagerModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TransferManagerModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransferManagerModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransferManagerModel_t {
    QByteArrayData data[18];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TransferManagerModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TransferManagerModel_t qt_meta_stringdata_TransferManagerModel = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 12),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 17),
QT_MOC_LITERAL(4, 53, 3),
QT_MOC_LITERAL(5, 57, 17),
QT_MOC_LITERAL(6, 75, 12),
QT_MOC_LITERAL(7, 88, 3),
QT_MOC_LITERAL(8, 92, 8),
QT_MOC_LITERAL(9, 101, 9),
QT_MOC_LITERAL(10, 111, 6),
QT_MOC_LITERAL(11, 118, 11),
QT_MOC_LITERAL(12, 130, 11),
QT_MOC_LITERAL(13, 142, 4),
QT_MOC_LITERAL(14, 147, 5),
QT_MOC_LITERAL(15, 153, 15),
QT_MOC_LITERAL(16, 169, 23),
QT_MOC_LITERAL(17, 193, 5)
    },
    "TransferManagerModel\0addJobToList\0\0"
    "QXmppTransferJob*\0job\0removeJobFromList\0"
    "stopJobAtRow\0row\0clearJob\0removeRow\0"
    "parent\0jobFinished\0jobProgress\0done\0"
    "total\0jobStateChanged\0QXmppTransferJob::State\0"
    "state\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferManagerModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a,
       5,    1,   62,    2, 0x0a,
       6,    1,   65,    2, 0x0a,
       8,    0,   68,    2, 0x0a,
       9,    2,   69,    2, 0x0a,
       9,    1,   74,    2, 0x2a,
      11,    0,   77,    2, 0x08,
      12,    2,   78,    2, 0x08,
      15,    1,   83,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QModelIndex,    7,   10,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void TransferManagerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferManagerModel *_t = static_cast<TransferManagerModel *>(_o);
        switch (_id) {
        case 0: _t->addJobToList((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 1: _t->removeJobFromList((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 2: _t->stopJobAtRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->clearJob(); break;
        case 4: _t->removeRow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->removeRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->jobFinished(); break;
        case 7: _t->jobProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->jobStateChanged((*reinterpret_cast< QXmppTransferJob::State(*)>(_a[1]))); break;
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
    }
}

const QMetaObject TransferManagerModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_TransferManagerModel.data,
      qt_meta_data_TransferManagerModel,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransferManagerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferManagerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransferManagerModel.stringdata))
        return static_cast<void*>(const_cast< TransferManagerModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int TransferManagerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
