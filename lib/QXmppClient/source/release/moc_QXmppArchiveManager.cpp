/****************************************************************************
** Meta object code from reading C++ file 'QXmppArchiveManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QXmppArchiveManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppArchiveManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppArchiveManager_t {
    QByteArrayData data[12];
    char stringdata[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppArchiveManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppArchiveManager_t qt_meta_stringdata_QXmppArchiveManager = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 19),
QT_MOC_LITERAL(2, 40, 0),
QT_MOC_LITERAL(3, 41, 23),
QT_MOC_LITERAL(4, 65, 19),
QT_MOC_LITERAL(5, 85, 16),
QT_MOC_LITERAL(6, 102, 21),
QT_MOC_LITERAL(7, 124, 18),
QT_MOC_LITERAL(8, 143, 21),
QT_MOC_LITERAL(9, 165, 18),
QT_MOC_LITERAL(10, 184, 21),
QT_MOC_LITERAL(11, 206, 18)
    },
    "QXmppArchiveManager\0archiveListReceived\0"
    "\0QList<QXmppArchiveChat>\0archiveChatReceived\0"
    "QXmppArchiveChat\0archiveChatIqReceived\0"
    "QXmppArchiveChatIq\0archiveListIqReceived\0"
    "QXmppArchiveListIq\0archivePrefIqReceived\0"
    "QXmppArchivePrefIq\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppArchiveManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06,
       4,    1,   42,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   45,    2, 0x08,
       8,    1,   48,    2, 0x08,
      10,    1,   51,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11,    2,

       0        // eod
};

void QXmppArchiveManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppArchiveManager *_t = static_cast<QXmppArchiveManager *>(_o);
        switch (_id) {
        case 0: _t->archiveListReceived((*reinterpret_cast< const QList<QXmppArchiveChat>(*)>(_a[1]))); break;
        case 1: _t->archiveChatReceived((*reinterpret_cast< const QXmppArchiveChat(*)>(_a[1]))); break;
        case 2: _t->archiveChatIqReceived((*reinterpret_cast< const QXmppArchiveChatIq(*)>(_a[1]))); break;
        case 3: _t->archiveListIqReceived((*reinterpret_cast< const QXmppArchiveListIq(*)>(_a[1]))); break;
        case 4: _t->archivePrefIqReceived((*reinterpret_cast< const QXmppArchivePrefIq(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppArchiveManager::*_t)(const QList<QXmppArchiveChat> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppArchiveManager::archiveListReceived)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppArchiveManager::*_t)(const QXmppArchiveChat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppArchiveManager::archiveChatReceived)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppArchiveManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QXmppArchiveManager.data,
      qt_meta_data_QXmppArchiveManager,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppArchiveManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppArchiveManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppArchiveManager.stringdata))
        return static_cast<void*>(const_cast< QXmppArchiveManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QXmppArchiveManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QXmppArchiveManager::archiveListReceived(const QList<QXmppArchiveChat> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXmppArchiveManager::archiveChatReceived(const QXmppArchiveChat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
