/****************************************************************************
** Meta object code from reading C++ file 'InfoEventStackWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../InfoEventStackWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InfoEventStackWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InfoEventStackWidget_t {
    QByteArrayData data[11];
    char stringdata[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_InfoEventStackWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_InfoEventStackWidget_t qt_meta_stringdata_InfoEventStackWidget = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 12),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 5),
QT_MOC_LITERAL(4, 41, 16),
QT_MOC_LITERAL(5, 58, 12),
QT_MOC_LITERAL(6, 71, 8),
QT_MOC_LITERAL(7, 80, 9),
QT_MOC_LITERAL(8, 90, 9),
QT_MOC_LITERAL(9, 100, 6),
QT_MOC_LITERAL(10, 107, 11)
    },
    "InfoEventStackWidget\0countChanged\0\0"
    "count\0infoEventCleared\0previousSlot\0"
    "nextSlot\0closeSlot\0animeSlot\0amount\0"
    "destorySlot\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoEventStackWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       4,    0,   52,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       5,    0,   53,    2, 0x08,
       6,    0,   54,    2, 0x08,
       7,    0,   55,    2, 0x08,
       8,    1,   56,    2, 0x08,
      10,    0,   59,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    9,
    QMetaType::Void,

       0        // eod
};

void InfoEventStackWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InfoEventStackWidget *_t = static_cast<InfoEventStackWidget *>(_o);
        switch (_id) {
        case 0: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->infoEventCleared(); break;
        case 2: _t->previousSlot(); break;
        case 3: _t->nextSlot(); break;
        case 4: _t->closeSlot(); break;
        case 5: _t->animeSlot((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->destorySlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InfoEventStackWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoEventStackWidget::countChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (InfoEventStackWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InfoEventStackWidget::infoEventCleared)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject InfoEventStackWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InfoEventStackWidget.data,
      qt_meta_data_InfoEventStackWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *InfoEventStackWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoEventStackWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InfoEventStackWidget.stringdata))
        return static_cast<void*>(const_cast< InfoEventStackWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int InfoEventStackWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void InfoEventStackWidget::countChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfoEventStackWidget::infoEventCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
