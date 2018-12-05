/****************************************************************************
** Meta object code from reading C++ file 'AvatarMixerClientData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatars/AvatarMixerClientData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarMixerClientData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarMixerClientData_t {
    QByteArrayData data[10];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarMixerClientData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarMixerClientData_t qt_meta_stringdata_AvatarMixerClientData = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AvatarMixerClientData"
QT_MOC_LITERAL(1, 22, 33), // "removeLastBroadcastSequenceNu..."
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 17), // "NLPacket::LocalID"
QT_MOC_LITERAL(4, 75, 6), // "nodeID"
QT_MOC_LITERAL(5, 82, 23), // "removeLastBroadcastTime"
QT_MOC_LITERAL(6, 106, 8), // "nodeUUID"
QT_MOC_LITERAL(7, 115, 17), // "cleanupKilledNode"
QT_MOC_LITERAL(8, 133, 13), // "Node::LocalID"
QT_MOC_LITERAL(9, 147, 11) // "nodeLocalID"

    },
    "AvatarMixerClientData\0"
    "removeLastBroadcastSequenceNumber\0\0"
    "NLPacket::LocalID\0nodeID\0"
    "removeLastBroadcastTime\0nodeUUID\0"
    "cleanupKilledNode\0Node::LocalID\0"
    "nodeLocalID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarMixerClientData[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       5,    1,   32,    2, 0x02 /* Public */,
       7,    2,   35,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 8,    6,    9,

       0        // eod
};

void AvatarMixerClientData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarMixerClientData *_t = static_cast<AvatarMixerClientData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->removeLastBroadcastSequenceNumber((*reinterpret_cast< NLPacket::LocalID(*)>(_a[1]))); break;
        case 1: _t->removeLastBroadcastTime((*reinterpret_cast< NLPacket::LocalID(*)>(_a[1]))); break;
        case 2: _t->cleanupKilledNode((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< Node::LocalID(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarMixerClientData::staticMetaObject = {
    { &NodeData::staticMetaObject, qt_meta_stringdata_AvatarMixerClientData.data,
      qt_meta_data_AvatarMixerClientData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarMixerClientData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarMixerClientData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarMixerClientData.stringdata0))
        return static_cast<void*>(this);
    return NodeData::qt_metacast(_clname);
}

int AvatarMixerClientData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeData::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
