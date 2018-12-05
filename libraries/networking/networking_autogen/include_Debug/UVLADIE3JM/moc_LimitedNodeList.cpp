/****************************************************************************
** Meta object code from reading C++ file 'LimitedNodeList.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/LimitedNodeList.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LimitedNodeList.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LimitedNodeList_t {
    QByteArrayData data[79];
    char stringdata0[1301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LimitedNodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LimitedNodeList_t qt_meta_stringdata_LimitedNodeList = {
    {
QT_MOC_LITERAL(0, 0, 15), // "LimitedNodeList"
QT_MOC_LITERAL(1, 16, 8), // "dataSent"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "channelType"
QT_MOC_LITERAL(4, 38, 5), // "bytes"
QT_MOC_LITERAL(5, 44, 12), // "dataReceived"
QT_MOC_LITERAL(6, 57, 21), // "packetVersionMismatch"
QT_MOC_LITERAL(7, 79, 10), // "PacketType"
QT_MOC_LITERAL(8, 90, 4), // "type"
QT_MOC_LITERAL(9, 95, 12), // "HifiSockAddr"
QT_MOC_LITERAL(10, 108, 14), // "senderSockAddr"
QT_MOC_LITERAL(11, 123, 10), // "senderUUID"
QT_MOC_LITERAL(12, 134, 11), // "uuidChanged"
QT_MOC_LITERAL(13, 146, 9), // "ownerUUID"
QT_MOC_LITERAL(14, 156, 7), // "oldUUID"
QT_MOC_LITERAL(15, 164, 9), // "nodeAdded"
QT_MOC_LITERAL(16, 174, 17), // "SharedNodePointer"
QT_MOC_LITERAL(17, 192, 17), // "nodeSocketUpdated"
QT_MOC_LITERAL(18, 210, 10), // "nodeKilled"
QT_MOC_LITERAL(19, 221, 13), // "nodeActivated"
QT_MOC_LITERAL(20, 235, 27), // "clientConnectionToNodeReset"
QT_MOC_LITERAL(21, 263, 20), // "localSockAddrChanged"
QT_MOC_LITERAL(22, 284, 13), // "localSockAddr"
QT_MOC_LITERAL(23, 298, 21), // "publicSockAddrChanged"
QT_MOC_LITERAL(24, 320, 14), // "publicSockAddr"
QT_MOC_LITERAL(25, 335, 22), // "isAllowedEditorChanged"
QT_MOC_LITERAL(26, 358, 15), // "isAllowedEditor"
QT_MOC_LITERAL(27, 374, 13), // "canRezChanged"
QT_MOC_LITERAL(28, 388, 6), // "canRez"
QT_MOC_LITERAL(29, 395, 16), // "canRezTmpChanged"
QT_MOC_LITERAL(30, 412, 9), // "canRezTmp"
QT_MOC_LITERAL(31, 422, 22), // "canRezCertifiedChanged"
QT_MOC_LITERAL(32, 445, 25), // "canRezTmpCertifiedChanged"
QT_MOC_LITERAL(33, 471, 21), // "canWriteAssetsChanged"
QT_MOC_LITERAL(34, 493, 14), // "canWriteAssets"
QT_MOC_LITERAL(35, 508, 14), // "canKickChanged"
QT_MOC_LITERAL(36, 523, 7), // "canKick"
QT_MOC_LITERAL(37, 531, 24), // "canReplaceContentChanged"
QT_MOC_LITERAL(38, 556, 17), // "canReplaceContent"
QT_MOC_LITERAL(39, 574, 5), // "reset"
QT_MOC_LITERAL(40, 580, 13), // "eraseAllNodes"
QT_MOC_LITERAL(41, 594, 17), // "removeSilentNodes"
QT_MOC_LITERAL(42, 612, 17), // "updateLocalSocket"
QT_MOC_LITERAL(43, 630, 27), // "startSTUNPublicSocketUpdate"
QT_MOC_LITERAL(44, 658, 15), // "sendSTUNRequest"
QT_MOC_LITERAL(45, 674, 16), // "killNodeWithUUID"
QT_MOC_LITERAL(46, 691, 8), // "nodeUUID"
QT_MOC_LITERAL(47, 700, 12), // "ConnectionID"
QT_MOC_LITERAL(48, 713, 15), // "newConnectionID"
QT_MOC_LITERAL(49, 729, 27), // "connectedForLocalSocketTest"
QT_MOC_LITERAL(50, 757, 23), // "errorTestingLocalSocket"
QT_MOC_LITERAL(51, 781, 31), // "clientConnectionToSockAddrReset"
QT_MOC_LITERAL(52, 813, 8), // "sockAddr"
QT_MOC_LITERAL(53, 822, 25), // "flagTimeForConnectionStep"
QT_MOC_LITERAL(54, 848, 14), // "ConnectionStep"
QT_MOC_LITERAL(55, 863, 14), // "connectionStep"
QT_MOC_LITERAL(56, 878, 9), // "timestamp"
QT_MOC_LITERAL(57, 888, 32), // "possiblyTimeoutSTUNAddressLookup"
QT_MOC_LITERAL(58, 921, 26), // "addSTUNHandlerToUnfiltered"
QT_MOC_LITERAL(59, 948, 18), // "setSocketLocalPort"
QT_MOC_LITERAL(60, 967, 15), // "socketLocalPort"
QT_MOC_LITERAL(61, 983, 13), // "LookupAddress"
QT_MOC_LITERAL(62, 997, 13), // "HandleAddress"
QT_MOC_LITERAL(63, 1011, 15), // "SendSTUNRequest"
QT_MOC_LITERAL(64, 1027, 23), // "SetPublicSocketFromSTUN"
QT_MOC_LITERAL(65, 1051, 20), // "SetICEServerHostname"
QT_MOC_LITERAL(66, 1072, 18), // "SetICEServerSocket"
QT_MOC_LITERAL(67, 1091, 18), // "SendICEServerQuery"
QT_MOC_LITERAL(68, 1110, 24), // "ReceiveDSPeerInformation"
QT_MOC_LITERAL(69, 1135, 13), // "SendPingsToDS"
QT_MOC_LITERAL(70, 1149, 17), // "SetDomainHostname"
QT_MOC_LITERAL(71, 1167, 15), // "SetDomainSocket"
QT_MOC_LITERAL(72, 1183, 13), // "SendDSCheckIn"
QT_MOC_LITERAL(73, 1197, 13), // "ReceiveDSList"
QT_MOC_LITERAL(74, 1211, 15), // "AddedAudioMixer"
QT_MOC_LITERAL(75, 1227, 13), // "SendAudioPing"
QT_MOC_LITERAL(76, 1241, 19), // "SetAudioMixerSocket"
QT_MOC_LITERAL(77, 1261, 15), // "SendAudioPacket"
QT_MOC_LITERAL(78, 1277, 23) // "ReceiveFirstAudioPacket"

    },
    "LimitedNodeList\0dataSent\0\0channelType\0"
    "bytes\0dataReceived\0packetVersionMismatch\0"
    "PacketType\0type\0HifiSockAddr\0"
    "senderSockAddr\0senderUUID\0uuidChanged\0"
    "ownerUUID\0oldUUID\0nodeAdded\0"
    "SharedNodePointer\0nodeSocketUpdated\0"
    "nodeKilled\0nodeActivated\0"
    "clientConnectionToNodeReset\0"
    "localSockAddrChanged\0localSockAddr\0"
    "publicSockAddrChanged\0publicSockAddr\0"
    "isAllowedEditorChanged\0isAllowedEditor\0"
    "canRezChanged\0canRez\0canRezTmpChanged\0"
    "canRezTmp\0canRezCertifiedChanged\0"
    "canRezTmpCertifiedChanged\0"
    "canWriteAssetsChanged\0canWriteAssets\0"
    "canKickChanged\0canKick\0canReplaceContentChanged\0"
    "canReplaceContent\0reset\0eraseAllNodes\0"
    "removeSilentNodes\0updateLocalSocket\0"
    "startSTUNPublicSocketUpdate\0sendSTUNRequest\0"
    "killNodeWithUUID\0nodeUUID\0ConnectionID\0"
    "newConnectionID\0connectedForLocalSocketTest\0"
    "errorTestingLocalSocket\0"
    "clientConnectionToSockAddrReset\0"
    "sockAddr\0flagTimeForConnectionStep\0"
    "ConnectionStep\0connectionStep\0timestamp\0"
    "possiblyTimeoutSTUNAddressLookup\0"
    "addSTUNHandlerToUnfiltered\0"
    "setSocketLocalPort\0socketLocalPort\0"
    "LookupAddress\0HandleAddress\0SendSTUNRequest\0"
    "SetPublicSocketFromSTUN\0SetICEServerHostname\0"
    "SetICEServerSocket\0SendICEServerQuery\0"
    "ReceiveDSPeerInformation\0SendPingsToDS\0"
    "SetDomainHostname\0SetDomainSocket\0"
    "SendDSCheckIn\0ReceiveDSList\0AddedAudioMixer\0"
    "SendAudioPing\0SetAudioMixerSocket\0"
    "SendAudioPacket\0ReceiveFirstAudioPacket"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LimitedNodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      34,   14, // methods
       0,    0, // properties
       1,  280, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  184,    2, 0x06 /* Public */,
       5,    2,  189,    2, 0x06 /* Public */,
       6,    3,  194,    2, 0x06 /* Public */,
      12,    2,  201,    2, 0x06 /* Public */,
      15,    1,  206,    2, 0x06 /* Public */,
      17,    1,  209,    2, 0x06 /* Public */,
      18,    1,  212,    2, 0x06 /* Public */,
      19,    1,  215,    2, 0x06 /* Public */,
      20,    1,  218,    2, 0x06 /* Public */,
      21,    1,  221,    2, 0x06 /* Public */,
      23,    1,  224,    2, 0x06 /* Public */,
      25,    1,  227,    2, 0x06 /* Public */,
      27,    1,  230,    2, 0x06 /* Public */,
      29,    1,  233,    2, 0x06 /* Public */,
      31,    1,  236,    2, 0x06 /* Public */,
      32,    1,  239,    2, 0x06 /* Public */,
      33,    1,  242,    2, 0x06 /* Public */,
      35,    1,  245,    2, 0x06 /* Public */,
      37,    1,  248,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      39,    0,  251,    2, 0x0a /* Public */,
      40,    0,  252,    2, 0x0a /* Public */,
      41,    0,  253,    2, 0x0a /* Public */,
      42,    0,  254,    2, 0x0a /* Public */,
      43,    0,  255,    2, 0x0a /* Public */,
      44,    0,  256,    2, 0x0a /* Public */,
      45,    2,  257,    2, 0x0a /* Public */,
      45,    1,  262,    2, 0x2a /* Public | MethodCloned */,
      49,    0,  265,    2, 0x09 /* Protected */,
      50,    0,  266,    2, 0x09 /* Protected */,
      51,    1,  267,    2, 0x09 /* Protected */,
      53,    2,  270,    2, 0x08 /* Private */,
      57,    0,  275,    2, 0x08 /* Private */,
      58,    0,  276,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      59,    1,  277,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::UChar, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9, QMetaType::QUuid,    8,   10,   11,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid,   13,   14,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void, 0x80000000 | 9,   22,
    QMetaType::Void, 0x80000000 | 9,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   38,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 47,   46,   48,
    QMetaType::Bool, QMetaType::QUuid,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   52,
    QMetaType::Void, 0x80000000 | 54, QMetaType::ULongLong,   55,   56,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::UShort,   60,

 // enums: name, flags, count, data
      54, 0x0,   18,  284,

 // enum data: key, value
      61, uint(LimitedNodeList::LookupAddress),
      62, uint(LimitedNodeList::HandleAddress),
      63, uint(LimitedNodeList::SendSTUNRequest),
      64, uint(LimitedNodeList::SetPublicSocketFromSTUN),
      65, uint(LimitedNodeList::SetICEServerHostname),
      66, uint(LimitedNodeList::SetICEServerSocket),
      67, uint(LimitedNodeList::SendICEServerQuery),
      68, uint(LimitedNodeList::ReceiveDSPeerInformation),
      69, uint(LimitedNodeList::SendPingsToDS),
      70, uint(LimitedNodeList::SetDomainHostname),
      71, uint(LimitedNodeList::SetDomainSocket),
      72, uint(LimitedNodeList::SendDSCheckIn),
      73, uint(LimitedNodeList::ReceiveDSList),
      74, uint(LimitedNodeList::AddedAudioMixer),
      75, uint(LimitedNodeList::SendAudioPing),
      76, uint(LimitedNodeList::SetAudioMixerSocket),
      77, uint(LimitedNodeList::SendAudioPacket),
      78, uint(LimitedNodeList::ReceiveFirstAudioPacket),

       0        // eod
};

void LimitedNodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LimitedNodeList *_t = static_cast<LimitedNodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataSent((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->dataReceived((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->packetVersionMismatch((*reinterpret_cast< PacketType(*)>(_a[1])),(*reinterpret_cast< const HifiSockAddr(*)>(_a[2])),(*reinterpret_cast< const QUuid(*)>(_a[3]))); break;
        case 3: _t->uuidChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 4: _t->nodeAdded((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 5: _t->nodeSocketUpdated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 6: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 7: _t->nodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 8: _t->clientConnectionToNodeReset((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 9: _t->localSockAddrChanged((*reinterpret_cast< const HifiSockAddr(*)>(_a[1]))); break;
        case 10: _t->publicSockAddrChanged((*reinterpret_cast< const HifiSockAddr(*)>(_a[1]))); break;
        case 11: _t->isAllowedEditorChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->canRezChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->canRezTmpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->canRezCertifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->canRezTmpCertifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->canWriteAssetsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->canKickChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->canReplaceContentChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->reset(); break;
        case 20: _t->eraseAllNodes(); break;
        case 21: _t->removeSilentNodes(); break;
        case 22: _t->updateLocalSocket(); break;
        case 23: _t->startSTUNPublicSocketUpdate(); break;
        case 24: _t->sendSTUNRequest(); break;
        case 25: { bool _r = _t->killNodeWithUUID((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< ConnectionID(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->killNodeWithUUID((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->connectedForLocalSocketTest(); break;
        case 28: _t->errorTestingLocalSocket(); break;
        case 29: _t->clientConnectionToSockAddrReset((*reinterpret_cast< const HifiSockAddr(*)>(_a[1]))); break;
        case 30: _t->flagTimeForConnectionStep((*reinterpret_cast< ConnectionStep(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 31: _t->possiblyTimeoutSTUNAddressLookup(); break;
        case 32: _t->addSTUNHandlerToUnfiltered(); break;
        case 33: _t->setSocketLocalPort((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 6:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LimitedNodeList::*)(quint8 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::dataSent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(quint8 , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::dataReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(PacketType , const HifiSockAddr & , const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::packetVersionMismatch)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(const QUuid & , const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::uuidChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::nodeAdded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::nodeSocketUpdated)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::nodeKilled)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::nodeActivated)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(SharedNodePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::clientConnectionToNodeReset)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(const HifiSockAddr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::localSockAddrChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(const HifiSockAddr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::publicSockAddrChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::isAllowedEditorChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canRezChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canRezTmpChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canRezCertifiedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canRezTmpCertifiedChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canWriteAssetsChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canKickChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (LimitedNodeList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LimitedNodeList::canReplaceContentChanged)) {
                *result = 18;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LimitedNodeList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LimitedNodeList.data,
      qt_meta_data_LimitedNodeList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LimitedNodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LimitedNodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LimitedNodeList.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int LimitedNodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 34)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 34;
    }
    return _id;
}

// SIGNAL 0
void LimitedNodeList::dataSent(quint8 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LimitedNodeList::dataReceived(quint8 _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LimitedNodeList::packetVersionMismatch(PacketType _t1, const HifiSockAddr & _t2, const QUuid & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LimitedNodeList::uuidChanged(const QUuid & _t1, const QUuid & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LimitedNodeList::nodeAdded(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LimitedNodeList::nodeSocketUpdated(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LimitedNodeList::nodeKilled(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LimitedNodeList::nodeActivated(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void LimitedNodeList::clientConnectionToNodeReset(SharedNodePointer _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LimitedNodeList::localSockAddrChanged(const HifiSockAddr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void LimitedNodeList::publicSockAddrChanged(const HifiSockAddr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void LimitedNodeList::isAllowedEditorChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void LimitedNodeList::canRezChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void LimitedNodeList::canRezTmpChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void LimitedNodeList::canRezCertifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void LimitedNodeList::canRezTmpCertifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void LimitedNodeList::canWriteAssetsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void LimitedNodeList::canKickChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void LimitedNodeList::canReplaceContentChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
