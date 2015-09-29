/****************************************************************************
** Meta object code from reading C++ file 'QXmppStream.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "base/QXmppStream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QXmppStream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXmppStream_t {
    QByteArrayData data[12];
    char stringdata[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QXmppStream_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QXmppStream_t qt_meta_stringdata_QXmppStream = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 9),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 12),
QT_MOC_LITERAL(4, 36, 18),
QT_MOC_LITERAL(5, 55, 8),
QT_MOC_LITERAL(6, 64, 18),
QT_MOC_LITERAL(7, 83, 18),
QT_MOC_LITERAL(8, 102, 14),
QT_MOC_LITERAL(9, 117, 28),
QT_MOC_LITERAL(10, 146, 5),
QT_MOC_LITERAL(11, 152, 18)
    },
    "QXmppStream\0connected\0\0disconnected\0"
    "disconnectFromHost\0sendData\0"
    "_q_socketConnected\0_q_socketEncrypted\0"
    "_q_socketError\0QAbstractSocket::SocketError\0"
    "error\0_q_socketReadyRead\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXmppStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    0,   55,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   56,    2, 0x0a,
       5,    1,   57,    2, 0x0a,
       6,    0,   60,    2, 0x08,
       7,    0,   61,    2, 0x08,
       8,    1,   62,    2, 0x08,
      11,    0,   65,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void QXmppStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXmppStream *_t = static_cast<QXmppStream *>(_o);
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->disconnectFromHost(); break;
        case 3: { bool _r = _t->sendData((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->_q_socketConnected(); break;
        case 5: _t->_q_socketEncrypted(); break;
        case 6: _t->_q_socketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->_q_socketReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXmppStream::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppStream::connected)) {
                *result = 0;
            }
        }
        {
            typedef void (QXmppStream::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXmppStream::disconnected)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QXmppStream::staticMetaObject = {
    { &QXmppLoggable::staticMetaObject, qt_meta_stringdata_QXmppStream.data,
      qt_meta_data_QXmppStream,  qt_static_metacall, 0, 0}
};


const QMetaObject *QXmppStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXmppStream::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QXmppStream.stringdata))
        return static_cast<void*>(const_cast< QXmppStream*>(this));
    return QXmppLoggable::qt_metacast(_clname);
}

int QXmppStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QXmppLoggable::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QXmppStream::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QXmppStream::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
