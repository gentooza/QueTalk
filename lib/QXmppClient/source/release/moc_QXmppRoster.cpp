/****************************************************************************
** Meta object code from reading C++ file 'QXmppRoster.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QXmppRoster.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppRoster.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppRoster_t {
    QByteArrayData data[13];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppRoster_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppRoster_t qt_meta_stringdata_QXmppRoster = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 14),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 15),
QT_MOC_LITERAL(4, 44, 7),
QT_MOC_LITERAL(5, 52, 8),
QT_MOC_LITERAL(6, 61, 13),
QT_MOC_LITERAL(7, 75, 12),
QT_MOC_LITERAL(8, 88, 16),
QT_MOC_LITERAL(9, 105, 13),
QT_MOC_LITERAL(10, 119, 16),
QT_MOC_LITERAL(11, 136, 13),
QT_MOC_LITERAL(12, 150, 23)
    },
    "QXmppRoster\0rosterReceived\0\0presenceChanged\0"
    "bareJid\0resource\0rosterChanged\0"
    "disconnected\0presenceReceived\0"
    "QXmppPresence\0rosterIqReceived\0"
    "QXmppRosterIq\0rosterRequestIqReceived\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppRoster[] = {

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
       1,    0,   49,    2, 0x06,
       3,    2,   50,    2, 0x06,
       6,    1,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   58,    2, 0x08,
       8,    1,   59,    2, 0x08,
      10,    1,   62,    2, 0x08,
      12,    1,   65,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void QXmppRoster::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppRoster *_t = static_cast<QXmppRoster *>(_o);
        switch (_id) {
        case 0: _t->rosterReceived(); break;
        case 1: _t->presenceChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->rosterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->disconnected(); break;
        case 4: _t->presenceReceived((*reinterpret_cast< const QXmppPresence(*)>(_a[1]))); break;
        case 5: _t->rosterIqReceived((*reinterpret_cast< const QXmppRosterIq(*)>(_a[1]))); break;
        case 6: _t->rosterRequestIqReceived((*reinterpret_cast< const QXmppRosterIq(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppRoster::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppRoster::rosterReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppRoster::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppRoster::presenceChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QXmppRoster::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppRoster::rosterChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QXmppRoster::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppRoster.data,
      qt_meta_data_QXmppRoster,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppRoster::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppRoster::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppRoster.stringdata))
        return static_cast<void*>(const_cast< QXmppRoster*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppRoster::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QXmppRoster::rosterReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppRoster::presenceChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QXmppRoster::rosterChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
