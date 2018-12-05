/****************************************************************************
** Meta object code from reading C++ file 'UserInputMapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controllers/UserInputMapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserInputMapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controller__UserInputMapper_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller__UserInputMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller__UserInputMapper_t qt_meta_stringdata_controller__UserInputMapper = {
    {
QT_MOC_LITERAL(0, 0, 27), // "controller::UserInputMapper"
QT_MOC_LITERAL(1, 28, 11), // "actionEvent"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "action"
QT_MOC_LITERAL(4, 48, 5), // "state"
QT_MOC_LITERAL(5, 54, 10), // "inputEvent"
QT_MOC_LITERAL(6, 65, 5), // "input"
QT_MOC_LITERAL(7, 71, 15) // "hardwareChanged"

    },
    "controller::UserInputMapper\0actionEvent\0"
    "\0action\0state\0inputEvent\0input\0"
    "hardwareChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller__UserInputMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,
       7,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    6,    4,
    QMetaType::Void,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void controller::UserInputMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserInputMapper *_t = static_cast<UserInputMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->inputEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->hardwareChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInputMapper::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInputMapper::actionEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInputMapper::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInputMapper::inputEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserInputMapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UserInputMapper::hardwareChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject controller::UserInputMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller__UserInputMapper.data,
      qt_meta_data_controller__UserInputMapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *controller::UserInputMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::UserInputMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controller__UserInputMapper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int controller::UserInputMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void controller::UserInputMapper::actionEvent(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controller::UserInputMapper::inputEvent(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void controller::UserInputMapper::hardwareChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
