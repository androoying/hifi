/****************************************************************************
** Meta object code from reading C++ file 'PhysicalEntitySimulation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/PhysicalEntitySimulation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhysicalEntitySimulation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhysicalEntitySimulation_t {
    QByteArrayData data[8];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhysicalEntitySimulation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhysicalEntitySimulation_t qt_meta_stringdata_PhysicalEntitySimulation = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PhysicalEntitySimulation"
QT_MOC_LITERAL(1, 25, 25), // "entityCollisionWithEntity"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "EntityItemID"
QT_MOC_LITERAL(4, 65, 3), // "idA"
QT_MOC_LITERAL(5, 69, 3), // "idB"
QT_MOC_LITERAL(6, 73, 9), // "Collision"
QT_MOC_LITERAL(7, 83, 9) // "collision"

    },
    "PhysicalEntitySimulation\0"
    "entityCollisionWithEntity\0\0EntityItemID\0"
    "idA\0idB\0Collision\0collision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhysicalEntitySimulation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,

       0        // eod
};

void PhysicalEntitySimulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PhysicalEntitySimulation *_t = static_cast<PhysicalEntitySimulation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entityCollisionWithEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const EntityItemID(*)>(_a[2])),(*reinterpret_cast< const Collision(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhysicalEntitySimulation::*)(const EntityItemID & , const EntityItemID & , const Collision & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhysicalEntitySimulation::entityCollisionWithEntity)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhysicalEntitySimulation::staticMetaObject = {
    { &EntitySimulation::staticMetaObject, qt_meta_stringdata_PhysicalEntitySimulation.data,
      qt_meta_data_PhysicalEntitySimulation,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PhysicalEntitySimulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhysicalEntitySimulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhysicalEntitySimulation.stringdata0))
        return static_cast<void*>(this);
    return EntitySimulation::qt_metacast(_clname);
}

int PhysicalEntitySimulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EntitySimulation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void PhysicalEntitySimulation::entityCollisionWithEntity(const EntityItemID & _t1, const EntityItemID & _t2, const Collision & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
