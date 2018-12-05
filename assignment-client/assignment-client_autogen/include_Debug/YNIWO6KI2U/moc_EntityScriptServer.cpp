/****************************************************************************
** Meta object code from reading C++ file 'EntityScriptServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripts/EntityScriptServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityScriptServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityScriptServer_t {
    QByteArrayData data[21];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptServer_t qt_meta_stringdata_EntityScriptServer = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EntityScriptServer"
QT_MOC_LITERAL(1, 19, 3), // "run"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 13), // "nodeActivated"
QT_MOC_LITERAL(4, 38, 17), // "SharedNodePointer"
QT_MOC_LITERAL(5, 56, 13), // "activatedNode"
QT_MOC_LITERAL(6, 70, 10), // "nodeKilled"
QT_MOC_LITERAL(7, 81, 10), // "killedNode"
QT_MOC_LITERAL(8, 92, 15), // "sendStatsPacket"
QT_MOC_LITERAL(9, 108, 18), // "handleOctreePacket"
QT_MOC_LITERAL(10, 127, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(11, 159, 7), // "message"
QT_MOC_LITERAL(12, 167, 10), // "senderNode"
QT_MOC_LITERAL(13, 178, 25), // "handleSelectedAudioFormat"
QT_MOC_LITERAL(14, 204, 36), // "handleReloadEntityServerScrip..."
QT_MOC_LITERAL(15, 241, 33), // "handleEntityScriptGetStatusPa..."
QT_MOC_LITERAL(16, 275, 14), // "handleSettings"
QT_MOC_LITERAL(17, 290, 15), // "updateEntityPPS"
QT_MOC_LITERAL(18, 306, 33), // "handleEntityServerScriptLogPa..."
QT_MOC_LITERAL(19, 340, 8), // "pushLogs"
QT_MOC_LITERAL(20, 349, 34) // "handleEntityScriptCallMethodP..."

    },
    "EntityScriptServer\0run\0\0nodeActivated\0"
    "SharedNodePointer\0activatedNode\0"
    "nodeKilled\0killedNode\0sendStatsPacket\0"
    "handleOctreePacket\0QSharedPointer<ReceivedMessage>\0"
    "message\0senderNode\0handleSelectedAudioFormat\0"
    "handleReloadEntityServerScriptPacket\0"
    "handleEntityScriptGetStatusPacket\0"
    "handleSettings\0updateEntityPPS\0"
    "handleEntityServerScriptLogPacket\0"
    "pushLogs\0handleEntityScriptCallMethodPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x0a /* Public */,
       3,    1,   80,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    2,   87,    2, 0x08 /* Private */,
      13,    1,   92,    2, 0x08 /* Private */,
      14,    2,   95,    2, 0x08 /* Private */,
      15,    2,  100,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    2,  107,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    2,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   11,   12,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   11,   12,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 4,   11,   12,

       0        // eod
};

void EntityScriptServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityScriptServer *_t = static_cast<EntityScriptServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->nodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 3: _t->sendStatsPacket(); break;
        case 4: _t->handleOctreePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 5: _t->handleSelectedAudioFormat((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 6: _t->handleReloadEntityServerScriptPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 7: _t->handleEntityScriptGetStatusPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 8: _t->handleSettings(); break;
        case 9: _t->updateEntityPPS(); break;
        case 10: _t->handleEntityServerScriptLogPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 11: _t->pushLogs(); break;
        case 12: _t->handleEntityScriptCallMethodPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
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
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 12:
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

QT_INIT_METAOBJECT const QMetaObject EntityScriptServer::staticMetaObject = {
    { &ThreadedAssignment::staticMetaObject, qt_meta_stringdata_EntityScriptServer.data,
      qt_meta_data_EntityScriptServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptServer.stringdata0))
        return static_cast<void*>(this);
    return ThreadedAssignment::qt_metacast(_clname);
}

int EntityScriptServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedAssignment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
