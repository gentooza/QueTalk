/****************************************************************************
** Meta object code from reading C++ file 'QXmppVCardManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QXmppVCardManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppVCardManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppVCardManager_t {
    QByteArrayData data[6];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppVCardManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppVCardManager_t qt_meta_stringdata_QXmppVCardManager = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 10),
QT_MOC_LITERAL(4, 44, 19),
QT_MOC_LITERAL(5, 64, 15)
    },
    "QXmppVCardManager\0vCardReceived\0\0"
    "QXmppVCard\0clientVCardReceived\0"
    "vCardIqReceived\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppVCardManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,
       4,    0,   32,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    1,   33,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QXmppVCardManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppVCardManager *_t = static_cast<QXmppVCardManager *>(_o);
        switch (_id) {
        case 0: _t->vCardReceived((*reinterpret_cast< const QXmppVCard(*)>(_a[1]))); break;
        case 1: _t->clientVCardReceived(); break;
        case 2: _t->vCardIqReceived((*reinterpret_cast< const QXmppVCard(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppVCardManager::*_t)(const QXmppVCard & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppVCardManager::vCardReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppVCardManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppVCardManager::clientVCardReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppVCardManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppVCardManager.data,
      qt_meta_data_QXmppVCardManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppVCardManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppVCardManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppVCardManager.stringdata))
        return static_cast<void*>(const_cast< QXmppVCardManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppVCardManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QXmppVCardManager::vCardReceived(const QXmppVCard & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppVCardManager::clientVCardReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
