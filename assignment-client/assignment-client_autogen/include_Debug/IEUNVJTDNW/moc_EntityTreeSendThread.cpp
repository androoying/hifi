/****************************************************************************
** Meta object code from reading C++ file 'EntityTreeSendThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/entities/EntityTreeSendThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityTreeSendThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityTreeSendThread_t {
    QByteArrayData data[8];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityTreeSendThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityTreeSendThread_t qt_meta_stringdata_EntityTreeSendThread = {
    {
QT_MOC_LITERAL(0, 0, 20), // "EntityTreeSendThread"
QT_MOC_LITERAL(1, 21, 10), // "resetState"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 20), // "editingEntityPointer"
QT_MOC_LITERAL(4, 54, 17), // "EntityItemPointer"
QT_MOC_LITERAL(5, 72, 6), // "entity"
QT_MOC_LITERAL(6, 79, 21), // "deletingEntityPointer"
QT_MOC_LITERAL(7, 101, 11) // "EntityItem*"

    },
    "EntityTreeSendThread\0resetState\0\0"
    "editingEntityPointer\0EntityItemPointer\0"
    "entity\0deletingEntityPointer\0EntityItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityTreeSendThread[] = {

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
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,

       0        // eod
};

void EntityTreeSendThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityTreeSendThread *_t = static_cast<EntityTreeSendThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetState(); break;
        case 1: _t->editingEntityPointer((*reinterpret_cast< const EntityItemPointer(*)>(_a[1]))); break;
        case 2: _t->deletingEntityPointer((*reinterpret_cast< EntityItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItem* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityTreeSendThread::staticMetaObject = {
    { &OctreeSendThread::staticMetaObject, qt_meta_stringdata_EntityTreeSendThread.data,
      qt_meta_data_EntityTreeSendThread,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityTreeSendThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityTreeSendThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityTreeSendThread.stringdata0))
        return static_cast<void*>(this);
    return OctreeSendThread::qt_metacast(_clname);
}

int EntityTreeSendThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OctreeSendThread::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
