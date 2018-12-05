/****************************************************************************
** Meta object code from reading C++ file 'DomainServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DomainServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainServer_t {
    QByteArrayData data[60];
    char stringdata0[1231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainServer_t qt_meta_stringdata_DomainServer = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DomainServer"
QT_MOC_LITERAL(1, 13, 16), // "iceServerChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "userConnected"
QT_MOC_LITERAL(4, 45, 16), // "userDisconnected"
QT_MOC_LITERAL(5, 62, 9), // "nodeAdded"
QT_MOC_LITERAL(6, 72, 17), // "SharedNodePointer"
QT_MOC_LITERAL(7, 90, 4), // "node"
QT_MOC_LITERAL(8, 95, 10), // "nodeKilled"
QT_MOC_LITERAL(9, 106, 23), // "transactionJSONCallback"
QT_MOC_LITERAL(10, 130, 4), // "data"
QT_MOC_LITERAL(11, 135, 7), // "restart"
QT_MOC_LITERAL(12, 143, 30), // "processRequestAssignmentPacket"
QT_MOC_LITERAL(13, 174, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(14, 206, 6), // "packet"
QT_MOC_LITERAL(15, 213, 24), // "processListRequestPacket"
QT_MOC_LITERAL(16, 238, 11), // "sendingNode"
QT_MOC_LITERAL(17, 250, 26), // "processNodeJSONStatsPacket"
QT_MOC_LITERAL(18, 277, 10), // "packetList"
QT_MOC_LITERAL(19, 288, 22), // "processPathQueryPacket"
QT_MOC_LITERAL(20, 311, 34), // "processNodeDisconnectRequestP..."
QT_MOC_LITERAL(21, 346, 7), // "message"
QT_MOC_LITERAL(22, 354, 37), // "processICEServerHeartbeatDeni..."
QT_MOC_LITERAL(23, 392, 28), // "processICEServerHeartbeatACK"
QT_MOC_LITERAL(24, 421, 44), // "handleDomainContentReplacemen..."
QT_MOC_LITERAL(25, 466, 34), // "handleOctreeFileReplacementRe..."
QT_MOC_LITERAL(26, 501, 27), // "handleOctreeFileReplacement"
QT_MOC_LITERAL(27, 529, 10), // "octreeFile"
QT_MOC_LITERAL(28, 540, 31), // "processOctreeDataRequestMessage"
QT_MOC_LITERAL(29, 572, 31), // "processOctreeDataPersistMessage"
QT_MOC_LITERAL(30, 604, 29), // "setupPendingAssignmentCredits"
QT_MOC_LITERAL(31, 634, 31), // "sendPendingTransactionsToServer"
QT_MOC_LITERAL(32, 666, 22), // "performIPAddressUpdate"
QT_MOC_LITERAL(33, 689, 12), // "HifiSockAddr"
QT_MOC_LITERAL(34, 702, 17), // "newPublicSockAddr"
QT_MOC_LITERAL(35, 720, 24), // "sendHeartbeatToMetaverse"
QT_MOC_LITERAL(36, 745, 24), // "sendHeartbeatToIceServer"
QT_MOC_LITERAL(37, 770, 19), // "handleConnectedNode"
QT_MOC_LITERAL(38, 790, 7), // "newNode"
QT_MOC_LITERAL(39, 798, 23), // "handleTempDomainSuccess"
QT_MOC_LITERAL(40, 822, 14), // "QNetworkReply*"
QT_MOC_LITERAL(41, 837, 12), // "requestReply"
QT_MOC_LITERAL(42, 850, 21), // "handleTempDomainError"
QT_MOC_LITERAL(43, 872, 29), // "handleMetaverseHeartbeatError"
QT_MOC_LITERAL(44, 902, 10), // "queuedQuit"
QT_MOC_LITERAL(45, 913, 11), // "quitMessage"
QT_MOC_LITERAL(46, 925, 8), // "exitCode"
QT_MOC_LITERAL(47, 934, 19), // "handleKeypairChange"
QT_MOC_LITERAL(48, 954, 24), // "updateICEServerAddresses"
QT_MOC_LITERAL(49, 979, 17), // "handleICEHostInfo"
QT_MOC_LITERAL(50, 997, 9), // "QHostInfo"
QT_MOC_LITERAL(51, 1007, 8), // "hostInfo"
QT_MOC_LITERAL(52, 1016, 34), // "sendICEServerAddressToMetaver..."
QT_MOC_LITERAL(53, 1051, 38), // "handleSuccessfulICEServerAddr..."
QT_MOC_LITERAL(54, 1090, 34), // "handleFailedICEServerAddressU..."
QT_MOC_LITERAL(55, 1125, 21), // "updateReplicatedNodes"
QT_MOC_LITERAL(56, 1147, 21), // "updateDownstreamNodes"
QT_MOC_LITERAL(57, 1169, 19), // "updateUpstreamNodes"
QT_MOC_LITERAL(58, 1189, 18), // "tokenGrantFinished"
QT_MOC_LITERAL(59, 1208, 22) // "profileRequestFinished"

    },
    "DomainServer\0iceServerChanged\0\0"
    "userConnected\0userDisconnected\0nodeAdded\0"
    "SharedNodePointer\0node\0nodeKilled\0"
    "transactionJSONCallback\0data\0restart\0"
    "processRequestAssignmentPacket\0"
    "QSharedPointer<ReceivedMessage>\0packet\0"
    "processListRequestPacket\0sendingNode\0"
    "processNodeJSONStatsPacket\0packetList\0"
    "processPathQueryPacket\0"
    "processNodeDisconnectRequestPacket\0"
    "message\0processICEServerHeartbeatDenialPacket\0"
    "processICEServerHeartbeatACK\0"
    "handleDomainContentReplacementFromURLRequest\0"
    "handleOctreeFileReplacementRequest\0"
    "handleOctreeFileReplacement\0octreeFile\0"
    "processOctreeDataRequestMessage\0"
    "processOctreeDataPersistMessage\0"
    "setupPendingAssignmentCredits\0"
    "sendPendingTransactionsToServer\0"
    "performIPAddressUpdate\0HifiSockAddr\0"
    "newPublicSockAddr\0sendHeartbeatToMetaverse\0"
    "sendHeartbeatToIceServer\0handleConnectedNode\0"
    "newNode\0handleTempDomainSuccess\0"
    "QNetworkReply*\0requestReply\0"
    "handleTempDomainError\0"
    "handleMetaverseHeartbeatError\0queuedQuit\0"
    "quitMessage\0exitCode\0handleKeypairChange\0"
    "updateICEServerAddresses\0handleICEHostInfo\0"
    "QHostInfo\0hostInfo\0"
    "sendICEServerAddressToMetaverseAPI\0"
    "handleSuccessfulICEServerAddressUpdate\0"
    "handleFailedICEServerAddressUpdate\0"
    "updateReplicatedNodes\0updateDownstreamNodes\0"
    "updateUpstreamNodes\0tokenGrantFinished\0"
    "profileRequestFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x06 /* Public */,
       3,    0,  215,    2, 0x06 /* Public */,
       4,    0,  216,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  217,    2, 0x0a /* Public */,
       8,    1,  220,    2, 0x0a /* Public */,
       9,    1,  223,    2, 0x0a /* Public */,
      11,    0,  226,    2, 0x0a /* Public */,
      12,    1,  227,    2, 0x08 /* Private */,
      15,    2,  230,    2, 0x08 /* Private */,
      17,    2,  235,    2, 0x08 /* Private */,
      19,    1,  240,    2, 0x08 /* Private */,
      20,    1,  243,    2, 0x08 /* Private */,
      22,    1,  246,    2, 0x08 /* Private */,
      23,    1,  249,    2, 0x08 /* Private */,
      24,    1,  252,    2, 0x08 /* Private */,
      25,    1,  255,    2, 0x08 /* Private */,
      26,    1,  258,    2, 0x08 /* Private */,
      28,    1,  261,    2, 0x08 /* Private */,
      29,    1,  264,    2, 0x08 /* Private */,
      30,    0,  267,    2, 0x08 /* Private */,
      31,    0,  268,    2, 0x08 /* Private */,
      32,    1,  269,    2, 0x08 /* Private */,
      35,    0,  272,    2, 0x08 /* Private */,
      36,    0,  273,    2, 0x08 /* Private */,
      37,    1,  274,    2, 0x08 /* Private */,
      39,    1,  277,    2, 0x08 /* Private */,
      42,    1,  280,    2, 0x08 /* Private */,
      43,    1,  283,    2, 0x08 /* Private */,
      44,    2,  286,    2, 0x08 /* Private */,
      47,    0,  291,    2, 0x08 /* Private */,
      48,    0,  292,    2, 0x08 /* Private */,
      49,    1,  293,    2, 0x08 /* Private */,
      52,    0,  296,    2, 0x08 /* Private */,
      53,    1,  297,    2, 0x08 /* Private */,
      54,    1,  300,    2, 0x08 /* Private */,
      55,    0,  303,    2, 0x08 /* Private */,
      56,    0,  304,    2, 0x08 /* Private */,
      57,    0,  305,    2, 0x08 /* Private */,
      58,    0,  306,    2, 0x08 /* Private */,
      59,    0,  307,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QJsonObject,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 6,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 6,   18,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, QMetaType::QByteArray,   27,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void, 0x80000000 | 13,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   45,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DomainServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainServer *_t = static_cast<DomainServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iceServerChanged(); break;
        case 1: _t->userConnected(); break;
        case 2: _t->userDisconnected(); break;
        case 3: _t->nodeAdded((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 4: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 5: _t->transactionJSONCallback((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 6: _t->restart(); break;
        case 7: _t->processRequestAssignmentPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 8: _t->processListRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 9: _t->processNodeJSONStatsPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 10: _t->processPathQueryPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 11: _t->processNodeDisconnectRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 12: _t->processICEServerHeartbeatDenialPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 13: _t->processICEServerHeartbeatACK((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 14: _t->handleDomainContentReplacementFromURLRequest((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 15: _t->handleOctreeFileReplacementRequest((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 16: _t->handleOctreeFileReplacement((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 17: _t->processOctreeDataRequestMessage((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 18: _t->processOctreeDataPersistMessage((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 19: _t->setupPendingAssignmentCredits(); break;
        case 20: _t->sendPendingTransactionsToServer(); break;
        case 21: _t->performIPAddressUpdate((*reinterpret_cast< const HifiSockAddr(*)>(_a[1]))); break;
        case 22: _t->sendHeartbeatToMetaverse(); break;
        case 23: _t->sendHeartbeatToIceServer(); break;
        case 24: _t->handleConnectedNode((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 25: _t->handleTempDomainSuccess((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 26: _t->handleTempDomainError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 27: _t->handleMetaverseHeartbeatError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 28: _t->queuedQuit((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 29: _t->handleKeypairChange(); break;
        case 30: _t->updateICEServerAddresses(); break;
        case 31: _t->handleICEHostInfo((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 32: _t->sendICEServerAddressToMetaverseAPI(); break;
        case 33: _t->handleSuccessfulICEServerAddressUpdate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 34: _t->handleFailedICEServerAddressUpdate((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 35: _t->updateReplicatedNodes(); break;
        case 36: _t->updateDownstreamNodes(); break;
        case 37: _t->updateUpstreamNodes(); break;
        case 38: _t->tokenGrantFinished(); break;
        case 39: _t->profileRequestFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
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
            }
            break;
        case 15:
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
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 34:
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
            using _t = void (DomainServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainServer::iceServerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DomainServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainServer::userConnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DomainServer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainServer::userDisconnected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainServer::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_DomainServer.data,
      qt_meta_data_DomainServer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainServer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "HTTPSRequestHandler"))
        return static_cast< HTTPSRequestHandler*>(this);
    return QCoreApplication::qt_metacast(_clname);
}

int DomainServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void DomainServer::iceServerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DomainServer::userConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DomainServer::userDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
