/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Player_t {
    QByteArrayData data[18];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Player"
QT_MOC_LITERAL(1, 7, 17), // "fullScreenChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 10), // "fullScreen"
QT_MOC_LITERAL(4, 37, 8), // "mySignal"
QT_MOC_LITERAL(5, 46, 4), // "open"
QT_MOC_LITERAL(6, 51, 15), // "durationChanged"
QT_MOC_LITERAL(7, 67, 8), // "duration"
QT_MOC_LITERAL(8, 76, 15), // "positionChanged"
QT_MOC_LITERAL(9, 92, 8), // "progress"
QT_MOC_LITERAL(10, 101, 4), // "seek"
QT_MOC_LITERAL(11, 106, 7), // "seconds"
QT_MOC_LITERAL(12, 114, 4), // "jump"
QT_MOC_LITERAL(13, 119, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 131, 5), // "index"
QT_MOC_LITERAL(15, 137, 23), // "playlistPositionChanged"
QT_MOC_LITERAL(16, 161, 21), // "videoAvailableChanged"
QT_MOC_LITERAL(17, 183, 9) // "available"

    },
    "Player\0fullScreenChanged\0\0fullScreen\0"
    "mySignal\0open\0durationChanged\0duration\0"
    "positionChanged\0progress\0seek\0seconds\0"
    "jump\0QModelIndex\0index\0playlistPositionChanged\0"
    "videoAvailableChanged\0available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,
      15,    1,   76,    2, 0x08 /* Private */,
      16,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fullScreenChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->mySignal(); break;
        case 2: _t->open(); break;
        case 3: _t->durationChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->positionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->jump((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->playlistPositionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->videoAvailableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::fullScreenChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Player::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Player::mySignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Player.data,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Player::fullScreenChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Player::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
