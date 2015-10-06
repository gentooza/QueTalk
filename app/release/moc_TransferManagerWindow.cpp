/****************************************************************************
** Meta object code from reading C++ file 'TransferManagerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TransferManagerWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransferManagerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransferManagerWindow_t {
    QByteArrayData data[8];
    char stringdata[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TransferManagerWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TransferManagerWindow_t qt_meta_stringdata_TransferManagerWindow = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 16),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 17),
QT_MOC_LITERAL(4, 58, 3),
QT_MOC_LITERAL(5, 62, 15),
QT_MOC_LITERAL(6, 78, 21),
QT_MOC_LITERAL(7, 100, 8)
    },
    "TransferManagerWindow\0deleteFileHandel\0"
    "\0QXmppTransferJob*\0job\0stopTransferJob\0"
    "showCustomContextMenu\0position\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferManagerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a,
       5,    0,   32,    2, 0x08,
       6,    1,   33,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,

       0        // eod
};

void TransferManagerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferManagerWindow *_t = static_cast<TransferManagerWindow *>(_o);
        switch (_id) {
        case 0: _t->deleteFileHandel((*reinterpret_cast< QXmppTransferJob*(*)>(_a[1]))); break;
        case 1: _t->stopTransferJob(); break;
        case 2: _t->showCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
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
        }
    }
}

const QMetaObject TransferManagerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TransferManagerWindow.data,
      qt_meta_data_TransferManagerWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *TransferManagerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferManagerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TransferManagerWindow.stringdata))
        return static_cast<void*>(const_cast< TransferManagerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TransferManagerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
