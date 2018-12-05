/****************************************************************************
** Meta object code from reading C++ file 'AvatarMixer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatars/AvatarMixer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarMixer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarMixer_t {
    QByteArrayData data[32];
    char stringdata0[582];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarMixer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarMixer_t qt_meta_stringdata_AvatarMixer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AvatarMixer"
QT_MOC_LITERAL(1, 12, 3), // "run"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 18), // "handleAvatarKilled"
QT_MOC_LITERAL(4, 36, 17), // "SharedNodePointer"
QT_MOC_LITERAL(5, 54, 10), // "killedNode"
QT_MOC_LITERAL(6, 65, 15), // "sendStatsPacket"
QT_MOC_LITERAL(7, 81, 19), // "queueIncomingPacket"
QT_MOC_LITERAL(8, 101, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(9, 133, 7), // "message"
QT_MOC_LITERAL(10, 141, 4), // "node"
QT_MOC_LITERAL(11, 146, 25), // "handleAdjustAvatarSorting"
QT_MOC_LITERAL(12, 172, 10), // "senderNode"
QT_MOC_LITERAL(13, 183, 23), // "handleAvatarQueryPacket"
QT_MOC_LITERAL(14, 207, 26), // "handleAvatarIdentityPacket"
QT_MOC_LITERAL(15, 234, 22), // "handleKillAvatarPacket"
QT_MOC_LITERAL(16, 257, 29), // "handleNodeIgnoreRequestPacket"
QT_MOC_LITERAL(17, 287, 31), // "handleRadiusIgnoreRequestPacket"
QT_MOC_LITERAL(18, 319, 6), // "packet"
QT_MOC_LITERAL(19, 326, 11), // "sendingNode"
QT_MOC_LITERAL(20, 338, 34), // "handleRequestsDomainListDataP..."
QT_MOC_LITERAL(21, 373, 22), // "handleReplicatedPacket"
QT_MOC_LITERAL(22, 396, 32), // "handleReplicatedBulkAvatarPacket"
QT_MOC_LITERAL(23, 429, 33), // "handleAvatarIdentityRequestPa..."
QT_MOC_LITERAL(24, 463, 29), // "domainSettingsRequestComplete"
QT_MOC_LITERAL(25, 493, 27), // "handlePacketVersionMismatch"
QT_MOC_LITERAL(26, 521, 10), // "PacketType"
QT_MOC_LITERAL(27, 532, 4), // "type"
QT_MOC_LITERAL(28, 537, 12), // "HifiSockAddr"
QT_MOC_LITERAL(29, 550, 14), // "senderSockAddr"
QT_MOC_LITERAL(30, 565, 10), // "senderUUID"
QT_MOC_LITERAL(31, 576, 5) // "start"

    },
    "AvatarMixer\0run\0\0handleAvatarKilled\0"
    "SharedNodePointer\0killedNode\0"
    "sendStatsPacket\0queueIncomingPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "node\0handleAdjustAvatarSorting\0"
    "senderNode\0handleAvatarQueryPacket\0"
    "handleAvatarIdentityPacket\0"
    "handleKillAvatarPacket\0"
    "handleNodeIgnoreRequestPacket\0"
    "handleRadiusIgnoreRequestPacket\0packet\0"
    "sendingNode\0handleRequestsDomainListDataPacket\0"
    "handleReplicatedPacket\0"
    "handleReplicatedBulkAvatarPacket\0"
    "handleAvatarIdentityRequestPacket\0"
    "domainSettingsRequestComplete\0"
    "handlePacketVersionMismatch\0PacketType\0"
    "type\0HifiSockAddr\0senderSockAddr\0"
    "senderUUID\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarMixer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x0a /* Public */,
       3,    1,  100,    2, 0x0a /* Public */,
       6,    0,  103,    2, 0x0a /* Public */,
       7,    2,  104,    2, 0x08 /* Private */,
      11,    2,  109,    2, 0x08 /* Private */,
      13,    2,  114,    2, 0x08 /* Private */,
      14,    2,  119,    2, 0x08 /* Private */,
      15,    2,  124,    2, 0x08 /* Private */,
      16,    2,  129,    2, 0x08 /* Private */,
      17,    2,  134,    2, 0x08 /* Private */,
      20,    2,  139,    2, 0x08 /* Private */,
      21,    1,  144,    2, 0x08 /* Private */,
      22,    1,  147,    2, 0x08 /* Private */,
      23,    2,  150,    2, 0x08 /* Private */,
      24,    0,  155,    2, 0x08 /* Private */,
      25,    3,  156,    2, 0x08 /* Private */,
      31,    0,  163,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   10,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,   18,   19,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26, 0x80000000 | 28, QMetaType::QUuid,   27,   29,   30,
    QMetaType::Void,

       0        // eod
};

void AvatarMixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarMixer *_t = static_cast<AvatarMixer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->handleAvatarKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->sendStatsPacket(); break;
        case 3: _t->queueIncomingPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 4: _t->handleAdjustAvatarSorting((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 5: _t->handleAvatarQueryPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 6: _t->handleAvatarIdentityPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 7: _t->handleKillAvatarPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 8: _t->handleNodeIgnoreRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 9: _t->handleRadiusIgnoreRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 10: _t->handleRequestsDomainListDataPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 11: _t->handleReplicatedPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 12: _t->handleReplicatedBulkAvatarPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 13: _t->handleAvatarIdentityRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 14: _t->domainSettingsRequestComplete(); break;
        case 15: _t->handlePacketVersionMismatch((*reinterpret_cast< PacketType(*)>(_a[1])),(*reinterpret_cast< const HifiSockAddr(*)>(_a[2])),(*reinterpret_cast< const QUuid(*)>(_a[3]))); break;
        case 16: _t->start(); break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
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
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 9:
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
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarMixer::staticMetaObject = {
    { &ThreadedAssignment::staticMetaObject, qt_meta_stringdata_AvatarMixer.data,
      qt_meta_data_AvatarMixer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarMixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarMixer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarMixer.stringdata0))
        return static_cast<void*>(this);
    return ThreadedAssignment::qt_metacast(_clname);
}

int AvatarMixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedAssignment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
