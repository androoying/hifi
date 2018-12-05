/****************************************************************************
** Meta object code from reading C++ file 'NodeList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NodeList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NodeList_t {
    QByteArrayData data[47];
    char stringdata0[894];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NodeList_t qt_meta_stringdata_NodeList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "NodeList"
QT_MOC_LITERAL(1, 9, 24), // "receivedDomainServerList"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "ignoredNode"
QT_MOC_LITERAL(4, 47, 6), // "nodeID"
QT_MOC_LITERAL(5, 54, 7), // "enabled"
QT_MOC_LITERAL(6, 62, 26), // "ignoreRadiusEnabledChanged"
QT_MOC_LITERAL(7, 89, 9), // "isIgnored"
QT_MOC_LITERAL(8, 99, 19), // "usernameFromIDReply"
QT_MOC_LITERAL(9, 119, 8), // "username"
QT_MOC_LITERAL(10, 128, 18), // "machineFingerprint"
QT_MOC_LITERAL(11, 147, 7), // "isAdmin"
QT_MOC_LITERAL(12, 155, 5), // "reset"
QT_MOC_LITERAL(13, 161, 22), // "skipDomainHandlerReset"
QT_MOC_LITERAL(14, 184, 22), // "resetFromDomainHandler"
QT_MOC_LITERAL(15, 207, 23), // "sendDomainServerCheckIn"
QT_MOC_LITERAL(16, 231, 17), // "handleDSPathQuery"
QT_MOC_LITERAL(17, 249, 7), // "newPath"
QT_MOC_LITERAL(18, 257, 23), // "processDomainServerList"
QT_MOC_LITERAL(19, 281, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(20, 313, 7), // "message"
QT_MOC_LITERAL(21, 321, 28), // "processDomainServerAddedNode"
QT_MOC_LITERAL(22, 350, 30), // "processDomainServerRemovedNode"
QT_MOC_LITERAL(23, 381, 31), // "processDomainServerPathResponse"
QT_MOC_LITERAL(24, 413, 40), // "processDomainServerConnection..."
QT_MOC_LITERAL(25, 454, 17), // "processPingPacket"
QT_MOC_LITERAL(26, 472, 17), // "SharedNodePointer"
QT_MOC_LITERAL(27, 490, 11), // "sendingNode"
QT_MOC_LITERAL(28, 502, 22), // "processPingReplyPacket"
QT_MOC_LITERAL(29, 525, 20), // "processICEPingPacket"
QT_MOC_LITERAL(30, 546, 26), // "processUsernameFromIDReply"
QT_MOC_LITERAL(31, 573, 31), // "toggleSendNewerDSConnectVersion"
QT_MOC_LITERAL(32, 605, 22), // "shouldSendNewerVersion"
QT_MOC_LITERAL(33, 628, 22), // "stopKeepalivePingTimer"
QT_MOC_LITERAL(34, 651, 22), // "sendPendingDSPathQuery"
QT_MOC_LITERAL(35, 674, 33), // "handleICEConnectionToDomainSe..."
QT_MOC_LITERAL(36, 708, 18), // "startNodeHolePunch"
QT_MOC_LITERAL(37, 727, 4), // "node"
QT_MOC_LITERAL(38, 732, 21), // "handleNodePingTimeout"
QT_MOC_LITERAL(39, 754, 24), // "pingPunchForDomainServer"
QT_MOC_LITERAL(40, 779, 18), // "sendKeepAlivePings"
QT_MOC_LITERAL(41, 798, 24), // "maybeSendIgnoreSetToNode"
QT_MOC_LITERAL(42, 823, 9), // "sendStats"
QT_MOC_LITERAL(43, 833, 11), // "statsObject"
QT_MOC_LITERAL(44, 845, 12), // "HifiSockAddr"
QT_MOC_LITERAL(45, 858, 11), // "destination"
QT_MOC_LITERAL(46, 870, 23) // "sendStatsToDomainServer"

    },
    "NodeList\0receivedDomainServerList\0\0"
    "ignoredNode\0nodeID\0enabled\0"
    "ignoreRadiusEnabledChanged\0isIgnored\0"
    "usernameFromIDReply\0username\0"
    "machineFingerprint\0isAdmin\0reset\0"
    "skipDomainHandlerReset\0resetFromDomainHandler\0"
    "sendDomainServerCheckIn\0handleDSPathQuery\0"
    "newPath\0processDomainServerList\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "processDomainServerAddedNode\0"
    "processDomainServerRemovedNode\0"
    "processDomainServerPathResponse\0"
    "processDomainServerConnectionTokenPacket\0"
    "processPingPacket\0SharedNodePointer\0"
    "sendingNode\0processPingReplyPacket\0"
    "processICEPingPacket\0processUsernameFromIDReply\0"
    "toggleSendNewerDSConnectVersion\0"
    "shouldSendNewerVersion\0stopKeepalivePingTimer\0"
    "sendPendingDSPathQuery\0"
    "handleICEConnectionToDomainServer\0"
    "startNodeHolePunch\0node\0handleNodePingTimeout\0"
    "pingPunchForDomainServer\0sendKeepAlivePings\0"
    "maybeSendIgnoreSetToNode\0sendStats\0"
    "statsObject\0HifiSockAddr\0destination\0"
    "sendStatsToDomainServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,
       3,    2,  160,    2, 0x06 /* Public */,
       6,    1,  165,    2, 0x06 /* Public */,
       8,    4,  168,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  177,    2, 0x0a /* Public */,
      12,    0,  180,    2, 0x2a /* Public | MethodCloned */,
      14,    0,  181,    2, 0x0a /* Public */,
      15,    0,  182,    2, 0x0a /* Public */,
      16,    1,  183,    2, 0x0a /* Public */,
      18,    1,  186,    2, 0x0a /* Public */,
      21,    1,  189,    2, 0x0a /* Public */,
      22,    1,  192,    2, 0x0a /* Public */,
      23,    1,  195,    2, 0x0a /* Public */,
      24,    1,  198,    2, 0x0a /* Public */,
      25,    2,  201,    2, 0x0a /* Public */,
      28,    2,  206,    2, 0x0a /* Public */,
      29,    1,  211,    2, 0x0a /* Public */,
      30,    1,  214,    2, 0x0a /* Public */,
      31,    1,  217,    2, 0x0a /* Public */,
      33,    0,  220,    2, 0x08 /* Private */,
      34,    0,  221,    2, 0x08 /* Private */,
      35,    0,  222,    2, 0x08 /* Private */,
      36,    1,  223,    2, 0x08 /* Private */,
      38,    0,  226,    2, 0x08 /* Private */,
      39,    0,  227,    2, 0x08 /* Private */,
      40,    0,  228,    2, 0x08 /* Private */,
      41,    1,  229,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      42,    2,  232,    2, 0x02 /* Public */,
      46,    1,  237,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    4,    9,   10,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 26,   20,   27,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 26,   20,   27,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   37,

 // methods: parameters
    QMetaType::LongLong, QMetaType::QJsonObject, 0x80000000 | 44,   43,   45,
    QMetaType::LongLong, QMetaType::QJsonObject,   43,

       0        // eod
};

void NodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NodeList *_t = static_cast<NodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedDomainServerList(); break;
        case 1: _t->ignoredNode((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->ignoreRadiusEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->usernameFromIDReply((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->reset((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->reset(); break;
        case 6: _t->resetFromDomainHandler(); break;
        case 7: _t->sendDomainServerCheckIn(); break;
        case 8: _t->handleDSPathQuery((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->processDomainServerList((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 10: _t->processDomainServerAddedNode((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 11: _t->processDomainServerRemovedNode((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 12: _t->processDomainServerPathResponse((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 13: _t->processDomainServerConnectionTokenPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 14: _t->processPingPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 15: _t->processPingReplyPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 16: _t->processICEPingPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 17: _t->processUsernameFromIDReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 18: _t->toggleSendNewerDSConnectVersion((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->stopKeepalivePingTimer(); break;
        case 20: _t->sendPendingDSPathQuery(); break;
        case 21: _t->handleICEConnectionToDomainServer(); break;
        case 22: _t->startNodeHolePunch((*reinterpret_cast< const SharedNodePointer(*)>(_a[1]))); break;
        case 23: _t->handleNodePingTimeout(); break;
        case 24: _t->pingPunchForDomainServer(); break;
        case 25: _t->sendKeepAlivePings(); break;
        case 26: _t->maybeSendIgnoreSetToNode((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 27: { qint64 _r = _t->sendStats((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< HifiSockAddr(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        case 28: { qint64 _r = _t->sendStatsToDomainServer((*reinterpret_cast< QJsonObject(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qint64*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
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
            }
            break;
        case 14:
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
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NodeList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeList::receivedDomainServerList)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NodeList::*)(const QUuid & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeList::ignoredNode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeList::ignoreRadiusEnabledChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NodeList::*)(const QString & , const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeList::usernameFromIDReply)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NodeList::staticMetaObject = {
    { &LimitedNodeList::staticMetaObject, qt_meta_stringdata_NodeList.data,
      qt_meta_data_NodeList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NodeList.stringdata0))
        return static_cast<void*>(this);
    return LimitedNodeList::qt_metacast(_clname);
}

int NodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LimitedNodeList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void NodeList::receivedDomainServerList()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NodeList::ignoredNode(const QUuid & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NodeList::ignoreRadiusEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void NodeList::usernameFromIDReply(const QString & _t1, const QString & _t2, const QString & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
