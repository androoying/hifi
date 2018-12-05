/****************************************************************************
** Meta object code from reading C++ file 'DomainGatekeeper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DomainGatekeeper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainGatekeeper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainGatekeeper_t {
    QByteArrayData data[23];
    char stringdata0[487];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainGatekeeper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainGatekeeper_t qt_meta_stringdata_DomainGatekeeper = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DomainGatekeeper"
QT_MOC_LITERAL(1, 17, 8), // "killNode"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "SharedNodePointer"
QT_MOC_LITERAL(4, 45, 4), // "node"
QT_MOC_LITERAL(5, 50, 13), // "connectedNode"
QT_MOC_LITERAL(6, 64, 27), // "processConnectRequestPacket"
QT_MOC_LITERAL(7, 92, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(8, 124, 7), // "message"
QT_MOC_LITERAL(9, 132, 20), // "processICEPingPacket"
QT_MOC_LITERAL(10, 153, 25), // "processICEPingReplyPacket"
QT_MOC_LITERAL(11, 179, 31), // "processICEPeerInformationPacket"
QT_MOC_LITERAL(12, 211, 21), // "publicKeyJSONCallback"
QT_MOC_LITERAL(13, 233, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 248, 12), // "requestReply"
QT_MOC_LITERAL(15, 261, 26), // "publicKeyJSONErrorCallback"
QT_MOC_LITERAL(16, 288, 28), // "getIsGroupMemberJSONCallback"
QT_MOC_LITERAL(17, 317, 29), // "getIsGroupMemberErrorCallback"
QT_MOC_LITERAL(18, 347, 37), // "getDomainOwnerFriendsListJSON..."
QT_MOC_LITERAL(19, 385, 38), // "getDomainOwnerFriendsListErro..."
QT_MOC_LITERAL(20, 424, 18), // "refreshGroupsCache"
QT_MOC_LITERAL(21, 443, 21), // "updateNodePermissions"
QT_MOC_LITERAL(22, 465, 21) // "handlePeerPingTimeout"

    },
    "DomainGatekeeper\0killNode\0\0SharedNodePointer\0"
    "node\0connectedNode\0processConnectRequestPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "processICEPingPacket\0processICEPingReplyPacket\0"
    "processICEPeerInformationPacket\0"
    "publicKeyJSONCallback\0QNetworkReply*\0"
    "requestReply\0publicKeyJSONErrorCallback\0"
    "getIsGroupMemberJSONCallback\0"
    "getIsGroupMemberErrorCallback\0"
    "getDomainOwnerFriendsListJSONCallback\0"
    "getDomainOwnerFriendsListErrorCallback\0"
    "refreshGroupsCache\0updateNodePermissions\0"
    "handlePeerPingTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainGatekeeper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   95,    2, 0x0a /* Public */,
       9,    1,   98,    2, 0x0a /* Public */,
      10,    1,  101,    2, 0x0a /* Public */,
      11,    1,  104,    2, 0x0a /* Public */,
      12,    1,  107,    2, 0x0a /* Public */,
      15,    1,  110,    2, 0x0a /* Public */,
      16,    1,  113,    2, 0x0a /* Public */,
      17,    1,  116,    2, 0x0a /* Public */,
      18,    1,  119,    2, 0x0a /* Public */,
      19,    1,  122,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,
      21,    0,  126,    2, 0x0a /* Public */,
      22,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DomainGatekeeper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainGatekeeper *_t = static_cast<DomainGatekeeper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->killNode((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 1: _t->connectedNode((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->processConnectRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 3: _t->processICEPingPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 4: _t->processICEPingReplyPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 5: _t->processICEPeerInformationPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 6: _t->publicKeyJSONCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->publicKeyJSONErrorCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->getIsGroupMemberJSONCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 9: _t->getIsGroupMemberErrorCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->getDomainOwnerFriendsListJSONCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->getDomainOwnerFriendsListErrorCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->refreshGroupsCache(); break;
        case 13: _t->updateNodePermissions(); break;
        case 14: _t->handlePeerPingTimeout(); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DomainGatekeeper::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainGatekeeper::killNode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DomainGatekeeper::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainGatekeeper::connectedNode)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainGatekeeper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DomainGatekeeper.data,
      qt_meta_data_DomainGatekeeper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainGatekeeper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainGatekeeper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainGatekeeper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DomainGatekeeper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void DomainGatekeeper::killNode(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DomainGatekeeper::connectedNode(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
