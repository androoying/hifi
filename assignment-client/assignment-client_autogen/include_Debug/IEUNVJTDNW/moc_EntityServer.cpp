/****************************************************************************
** Meta object code from reading C++ file 'EntityServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/entities/EntityServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityServer_t {
    QByteArrayData data[16];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityServer_t qt_meta_stringdata_EntityServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EntityServer"
QT_MOC_LITERAL(1, 13, 9), // "nodeAdded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 17), // "SharedNodePointer"
QT_MOC_LITERAL(4, 42, 4), // "node"
QT_MOC_LITERAL(5, 47, 10), // "nodeKilled"
QT_MOC_LITERAL(6, 58, 20), // "pruneDeletedEntities"
QT_MOC_LITERAL(7, 79, 17), // "entityFilterAdded"
QT_MOC_LITERAL(8, 97, 12), // "EntityItemID"
QT_MOC_LITERAL(9, 110, 2), // "id"
QT_MOC_LITERAL(10, 113, 7), // "success"
QT_MOC_LITERAL(11, 121, 18), // "handleEntityPacket"
QT_MOC_LITERAL(12, 140, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(13, 172, 7), // "message"
QT_MOC_LITERAL(14, 180, 10), // "senderNode"
QT_MOC_LITERAL(15, 191, 27) // "domainSettingsRequestFailed"

    },
    "EntityServer\0nodeAdded\0\0SharedNodePointer\0"
    "node\0nodeKilled\0pruneDeletedEntities\0"
    "entityFilterAdded\0EntityItemID\0id\0"
    "success\0handleEntityPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "senderNode\0domainSettingsRequestFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    2,   51,    2, 0x0a /* Public */,
      11,    2,   56,    2, 0x08 /* Private */,
      15,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 3,   13,   14,
    QMetaType::Void,

       0        // eod
};

void EntityServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityServer *_t = static_cast<EntityServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nodeAdded((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 1: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->pruneDeletedEntities(); break;
        case 3: _t->entityFilterAdded((*reinterpret_cast< EntityItemID(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->handleEntityPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 5: _t->domainSettingsRequestFailed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityServer::staticMetaObject = {
    { &OctreeServer::staticMetaObject, qt_meta_stringdata_EntityServer.data,
      qt_meta_data_EntityServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NewlyCreatedEntityHook"))
        return static_cast< NewlyCreatedEntityHook*>(this);
    return OctreeServer::qt_metacast(_clname);
}

int EntityServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OctreeServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
