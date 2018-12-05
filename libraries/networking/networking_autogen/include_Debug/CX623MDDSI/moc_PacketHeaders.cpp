/****************************************************************************
** Meta object code from reading C++ file 'PacketHeaders.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/udt/PacketHeaders.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PacketHeaders.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PacketTypeEnum_t {
    QByteArrayData data[105];
    char stringdata0[1923];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PacketTypeEnum_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PacketTypeEnum_t qt_meta_stringdata_PacketTypeEnum = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PacketTypeEnum"
QT_MOC_LITERAL(1, 15, 5), // "Value"
QT_MOC_LITERAL(2, 21, 7), // "Unknown"
QT_MOC_LITERAL(3, 29, 12), // "StunResponse"
QT_MOC_LITERAL(4, 42, 10), // "DomainList"
QT_MOC_LITERAL(5, 53, 4), // "Ping"
QT_MOC_LITERAL(6, 58, 9), // "PingReply"
QT_MOC_LITERAL(7, 68, 10), // "KillAvatar"
QT_MOC_LITERAL(8, 79, 10), // "AvatarData"
QT_MOC_LITERAL(9, 90, 11), // "InjectAudio"
QT_MOC_LITERAL(10, 102, 10), // "MixedAudio"
QT_MOC_LITERAL(11, 113, 21), // "MicrophoneAudioNoEcho"
QT_MOC_LITERAL(12, 135, 23), // "MicrophoneAudioWithEcho"
QT_MOC_LITERAL(13, 159, 14), // "BulkAvatarData"
QT_MOC_LITERAL(14, 174, 16), // "SilentAudioFrame"
QT_MOC_LITERAL(15, 191, 17), // "DomainListRequest"
QT_MOC_LITERAL(16, 209, 17), // "RequestAssignment"
QT_MOC_LITERAL(17, 227, 16), // "CreateAssignment"
QT_MOC_LITERAL(18, 244, 22), // "DomainConnectionDenied"
QT_MOC_LITERAL(19, 267, 15), // "MuteEnvironment"
QT_MOC_LITERAL(20, 283, 16), // "AudioStreamStats"
QT_MOC_LITERAL(21, 300, 21), // "DomainServerPathQuery"
QT_MOC_LITERAL(22, 322, 24), // "DomainServerPathResponse"
QT_MOC_LITERAL(23, 347, 21), // "DomainServerAddedNode"
QT_MOC_LITERAL(24, 369, 24), // "ICEServerPeerInformation"
QT_MOC_LITERAL(25, 394, 14), // "ICEServerQuery"
QT_MOC_LITERAL(26, 409, 11), // "OctreeStats"
QT_MOC_LITERAL(27, 421, 15), // "SetAvatarTraits"
QT_MOC_LITERAL(28, 437, 21), // "AvatarIdentityRequest"
QT_MOC_LITERAL(29, 459, 22), // "AssignmentClientStatus"
QT_MOC_LITERAL(30, 482, 9), // "NoisyMute"
QT_MOC_LITERAL(31, 492, 14), // "AvatarIdentity"
QT_MOC_LITERAL(32, 507, 17), // "NodeIgnoreRequest"
QT_MOC_LITERAL(33, 525, 20), // "DomainConnectRequest"
QT_MOC_LITERAL(34, 546, 23), // "DomainServerRequireDTLS"
QT_MOC_LITERAL(35, 570, 13), // "NodeJsonStats"
QT_MOC_LITERAL(36, 584, 14), // "OctreeDataNack"
QT_MOC_LITERAL(37, 599, 8), // "StopNode"
QT_MOC_LITERAL(38, 608, 16), // "AudioEnvironment"
QT_MOC_LITERAL(39, 625, 14), // "EntityEditNack"
QT_MOC_LITERAL(40, 640, 18), // "ICEServerHeartbeat"
QT_MOC_LITERAL(41, 659, 7), // "ICEPing"
QT_MOC_LITERAL(42, 667, 12), // "ICEPingReply"
QT_MOC_LITERAL(43, 680, 10), // "EntityData"
QT_MOC_LITERAL(44, 691, 11), // "EntityQuery"
QT_MOC_LITERAL(45, 703, 9), // "EntityAdd"
QT_MOC_LITERAL(46, 713, 11), // "EntityErase"
QT_MOC_LITERAL(47, 725, 10), // "EntityEdit"
QT_MOC_LITERAL(48, 736, 27), // "DomainServerConnectionToken"
QT_MOC_LITERAL(49, 764, 21), // "DomainSettingsRequest"
QT_MOC_LITERAL(50, 786, 14), // "DomainSettings"
QT_MOC_LITERAL(51, 801, 8), // "AssetGet"
QT_MOC_LITERAL(52, 810, 13), // "AssetGetReply"
QT_MOC_LITERAL(53, 824, 11), // "AssetUpload"
QT_MOC_LITERAL(54, 836, 16), // "AssetUploadReply"
QT_MOC_LITERAL(55, 853, 12), // "AssetGetInfo"
QT_MOC_LITERAL(56, 866, 17), // "AssetGetInfoReply"
QT_MOC_LITERAL(57, 884, 23), // "DomainDisconnectRequest"
QT_MOC_LITERAL(58, 908, 23), // "DomainServerRemovedNode"
QT_MOC_LITERAL(59, 932, 12), // "MessagesData"
QT_MOC_LITERAL(60, 945, 17), // "MessagesSubscribe"
QT_MOC_LITERAL(61, 963, 19), // "MessagesUnsubscribe"
QT_MOC_LITERAL(62, 983, 24), // "ICEServerHeartbeatDenied"
QT_MOC_LITERAL(63, 1008, 21), // "AssetMappingOperation"
QT_MOC_LITERAL(64, 1030, 26), // "AssetMappingOperationReply"
QT_MOC_LITERAL(65, 1057, 21), // "ICEServerHeartbeatACK"
QT_MOC_LITERAL(66, 1079, 20), // "NegotiateAudioFormat"
QT_MOC_LITERAL(67, 1100, 19), // "SelectedAudioFormat"
QT_MOC_LITERAL(68, 1120, 16), // "MoreEntityShapes"
QT_MOC_LITERAL(69, 1137, 15), // "NodeKickRequest"
QT_MOC_LITERAL(70, 1153, 15), // "NodeMuteRequest"
QT_MOC_LITERAL(71, 1169, 19), // "RadiusIgnoreRequest"
QT_MOC_LITERAL(72, 1189, 21), // "UsernameFromIDRequest"
QT_MOC_LITERAL(73, 1211, 19), // "UsernameFromIDReply"
QT_MOC_LITERAL(74, 1231, 11), // "AvatarQuery"
QT_MOC_LITERAL(75, 1243, 22), // "RequestsDomainListData"
QT_MOC_LITERAL(76, 1266, 16), // "PerAvatarGainSet"
QT_MOC_LITERAL(77, 1283, 21), // "EntityScriptGetStatus"
QT_MOC_LITERAL(78, 1305, 26), // "EntityScriptGetStatusReply"
QT_MOC_LITERAL(79, 1332, 24), // "ReloadEntityServerScript"
QT_MOC_LITERAL(80, 1357, 13), // "EntityPhysics"
QT_MOC_LITERAL(81, 1371, 21), // "EntityServerScriptLog"
QT_MOC_LITERAL(82, 1393, 19), // "AdjustAvatarSorting"
QT_MOC_LITERAL(83, 1413, 21), // "OctreeFileReplacement"
QT_MOC_LITERAL(84, 1435, 21), // "CollisionEventChanges"
QT_MOC_LITERAL(85, 1457, 31), // "ReplicatedMicrophoneAudioNoEcho"
QT_MOC_LITERAL(86, 1489, 33), // "ReplicatedMicrophoneAudioWith..."
QT_MOC_LITERAL(87, 1523, 21), // "ReplicatedInjectAudio"
QT_MOC_LITERAL(88, 1545, 26), // "ReplicatedSilentAudioFrame"
QT_MOC_LITERAL(89, 1572, 24), // "ReplicatedAvatarIdentity"
QT_MOC_LITERAL(90, 1597, 20), // "ReplicatedKillAvatar"
QT_MOC_LITERAL(91, 1618, 24), // "ReplicatedBulkAvatarData"
QT_MOC_LITERAL(92, 1643, 31), // "DomainContentReplacementFromUrl"
QT_MOC_LITERAL(93, 1675, 18), // "ChallengeOwnership"
QT_MOC_LITERAL(94, 1694, 22), // "EntityScriptCallMethod"
QT_MOC_LITERAL(95, 1717, 25), // "ChallengeOwnershipRequest"
QT_MOC_LITERAL(96, 1743, 23), // "ChallengeOwnershipReply"
QT_MOC_LITERAL(97, 1767, 21), // "OctreeDataFileRequest"
QT_MOC_LITERAL(98, 1789, 19), // "OctreeDataFileReply"
QT_MOC_LITERAL(99, 1809, 17), // "OctreeDataPersist"
QT_MOC_LITERAL(100, 1827, 11), // "EntityClone"
QT_MOC_LITERAL(101, 1839, 33), // "EntityQueryInitialResultsComp..."
QT_MOC_LITERAL(102, 1873, 16), // "BulkAvatarTraits"
QT_MOC_LITERAL(103, 1890, 16), // "AudioSoloRequest"
QT_MOC_LITERAL(104, 1907, 15) // "NUM_PACKET_TYPE"

    },
    "PacketTypeEnum\0Value\0Unknown\0StunResponse\0"
    "DomainList\0Ping\0PingReply\0KillAvatar\0"
    "AvatarData\0InjectAudio\0MixedAudio\0"
    "MicrophoneAudioNoEcho\0MicrophoneAudioWithEcho\0"
    "BulkAvatarData\0SilentAudioFrame\0"
    "DomainListRequest\0RequestAssignment\0"
    "CreateAssignment\0DomainConnectionDenied\0"
    "MuteEnvironment\0AudioStreamStats\0"
    "DomainServerPathQuery\0DomainServerPathResponse\0"
    "DomainServerAddedNode\0ICEServerPeerInformation\0"
    "ICEServerQuery\0OctreeStats\0SetAvatarTraits\0"
    "AvatarIdentityRequest\0AssignmentClientStatus\0"
    "NoisyMute\0AvatarIdentity\0NodeIgnoreRequest\0"
    "DomainConnectRequest\0DomainServerRequireDTLS\0"
    "NodeJsonStats\0OctreeDataNack\0StopNode\0"
    "AudioEnvironment\0EntityEditNack\0"
    "ICEServerHeartbeat\0ICEPing\0ICEPingReply\0"
    "EntityData\0EntityQuery\0EntityAdd\0"
    "EntityErase\0EntityEdit\0"
    "DomainServerConnectionToken\0"
    "DomainSettingsRequest\0DomainSettings\0"
    "AssetGet\0AssetGetReply\0AssetUpload\0"
    "AssetUploadReply\0AssetGetInfo\0"
    "AssetGetInfoReply\0DomainDisconnectRequest\0"
    "DomainServerRemovedNode\0MessagesData\0"
    "MessagesSubscribe\0MessagesUnsubscribe\0"
    "ICEServerHeartbeatDenied\0AssetMappingOperation\0"
    "AssetMappingOperationReply\0"
    "ICEServerHeartbeatACK\0NegotiateAudioFormat\0"
    "SelectedAudioFormat\0MoreEntityShapes\0"
    "NodeKickRequest\0NodeMuteRequest\0"
    "RadiusIgnoreRequest\0UsernameFromIDRequest\0"
    "UsernameFromIDReply\0AvatarQuery\0"
    "RequestsDomainListData\0PerAvatarGainSet\0"
    "EntityScriptGetStatus\0EntityScriptGetStatusReply\0"
    "ReloadEntityServerScript\0EntityPhysics\0"
    "EntityServerScriptLog\0AdjustAvatarSorting\0"
    "OctreeFileReplacement\0CollisionEventChanges\0"
    "ReplicatedMicrophoneAudioNoEcho\0"
    "ReplicatedMicrophoneAudioWithEcho\0"
    "ReplicatedInjectAudio\0ReplicatedSilentAudioFrame\0"
    "ReplicatedAvatarIdentity\0ReplicatedKillAvatar\0"
    "ReplicatedBulkAvatarData\0"
    "DomainContentReplacementFromUrl\0"
    "ChallengeOwnership\0EntityScriptCallMethod\0"
    "ChallengeOwnershipRequest\0"
    "ChallengeOwnershipReply\0OctreeDataFileRequest\0"
    "OctreeDataFileReply\0OctreeDataPersist\0"
    "EntityClone\0EntityQueryInitialResultsComplete\0"
    "BulkAvatarTraits\0AudioSoloRequest\0"
    "NUM_PACKET_TYPE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PacketTypeEnum[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x2,  103,   18,

 // enum data: key, value
       2, uint(PacketTypeEnum::Value::Unknown),
       3, uint(PacketTypeEnum::Value::StunResponse),
       4, uint(PacketTypeEnum::Value::DomainList),
       5, uint(PacketTypeEnum::Value::Ping),
       6, uint(PacketTypeEnum::Value::PingReply),
       7, uint(PacketTypeEnum::Value::KillAvatar),
       8, uint(PacketTypeEnum::Value::AvatarData),
       9, uint(PacketTypeEnum::Value::InjectAudio),
      10, uint(PacketTypeEnum::Value::MixedAudio),
      11, uint(PacketTypeEnum::Value::MicrophoneAudioNoEcho),
      12, uint(PacketTypeEnum::Value::MicrophoneAudioWithEcho),
      13, uint(PacketTypeEnum::Value::BulkAvatarData),
      14, uint(PacketTypeEnum::Value::SilentAudioFrame),
      15, uint(PacketTypeEnum::Value::DomainListRequest),
      16, uint(PacketTypeEnum::Value::RequestAssignment),
      17, uint(PacketTypeEnum::Value::CreateAssignment),
      18, uint(PacketTypeEnum::Value::DomainConnectionDenied),
      19, uint(PacketTypeEnum::Value::MuteEnvironment),
      20, uint(PacketTypeEnum::Value::AudioStreamStats),
      21, uint(PacketTypeEnum::Value::DomainServerPathQuery),
      22, uint(PacketTypeEnum::Value::DomainServerPathResponse),
      23, uint(PacketTypeEnum::Value::DomainServerAddedNode),
      24, uint(PacketTypeEnum::Value::ICEServerPeerInformation),
      25, uint(PacketTypeEnum::Value::ICEServerQuery),
      26, uint(PacketTypeEnum::Value::OctreeStats),
      27, uint(PacketTypeEnum::Value::SetAvatarTraits),
      28, uint(PacketTypeEnum::Value::AvatarIdentityRequest),
      29, uint(PacketTypeEnum::Value::AssignmentClientStatus),
      30, uint(PacketTypeEnum::Value::NoisyMute),
      31, uint(PacketTypeEnum::Value::AvatarIdentity),
      32, uint(PacketTypeEnum::Value::NodeIgnoreRequest),
      33, uint(PacketTypeEnum::Value::DomainConnectRequest),
      34, uint(PacketTypeEnum::Value::DomainServerRequireDTLS),
      35, uint(PacketTypeEnum::Value::NodeJsonStats),
      36, uint(PacketTypeEnum::Value::OctreeDataNack),
      37, uint(PacketTypeEnum::Value::StopNode),
      38, uint(PacketTypeEnum::Value::AudioEnvironment),
      39, uint(PacketTypeEnum::Value::EntityEditNack),
      40, uint(PacketTypeEnum::Value::ICEServerHeartbeat),
      41, uint(PacketTypeEnum::Value::ICEPing),
      42, uint(PacketTypeEnum::Value::ICEPingReply),
      43, uint(PacketTypeEnum::Value::EntityData),
      44, uint(PacketTypeEnum::Value::EntityQuery),
      45, uint(PacketTypeEnum::Value::EntityAdd),
      46, uint(PacketTypeEnum::Value::EntityErase),
      47, uint(PacketTypeEnum::Value::EntityEdit),
      48, uint(PacketTypeEnum::Value::DomainServerConnectionToken),
      49, uint(PacketTypeEnum::Value::DomainSettingsRequest),
      50, uint(PacketTypeEnum::Value::DomainSettings),
      51, uint(PacketTypeEnum::Value::AssetGet),
      52, uint(PacketTypeEnum::Value::AssetGetReply),
      53, uint(PacketTypeEnum::Value::AssetUpload),
      54, uint(PacketTypeEnum::Value::AssetUploadReply),
      55, uint(PacketTypeEnum::Value::AssetGetInfo),
      56, uint(PacketTypeEnum::Value::AssetGetInfoReply),
      57, uint(PacketTypeEnum::Value::DomainDisconnectRequest),
      58, uint(PacketTypeEnum::Value::DomainServerRemovedNode),
      59, uint(PacketTypeEnum::Value::MessagesData),
      60, uint(PacketTypeEnum::Value::MessagesSubscribe),
      61, uint(PacketTypeEnum::Value::MessagesUnsubscribe),
      62, uint(PacketTypeEnum::Value::ICEServerHeartbeatDenied),
      63, uint(PacketTypeEnum::Value::AssetMappingOperation),
      64, uint(PacketTypeEnum::Value::AssetMappingOperationReply),
      65, uint(PacketTypeEnum::Value::ICEServerHeartbeatACK),
      66, uint(PacketTypeEnum::Value::NegotiateAudioFormat),
      67, uint(PacketTypeEnum::Value::SelectedAudioFormat),
      68, uint(PacketTypeEnum::Value::MoreEntityShapes),
      69, uint(PacketTypeEnum::Value::NodeKickRequest),
      70, uint(PacketTypeEnum::Value::NodeMuteRequest),
      71, uint(PacketTypeEnum::Value::RadiusIgnoreRequest),
      72, uint(PacketTypeEnum::Value::UsernameFromIDRequest),
      73, uint(PacketTypeEnum::Value::UsernameFromIDReply),
      74, uint(PacketTypeEnum::Value::AvatarQuery),
      75, uint(PacketTypeEnum::Value::RequestsDomainListData),
      76, uint(PacketTypeEnum::Value::PerAvatarGainSet),
      77, uint(PacketTypeEnum::Value::EntityScriptGetStatus),
      78, uint(PacketTypeEnum::Value::EntityScriptGetStatusReply),
      79, uint(PacketTypeEnum::Value::ReloadEntityServerScript),
      80, uint(PacketTypeEnum::Value::EntityPhysics),
      81, uint(PacketTypeEnum::Value::EntityServerScriptLog),
      82, uint(PacketTypeEnum::Value::AdjustAvatarSorting),
      83, uint(PacketTypeEnum::Value::OctreeFileReplacement),
      84, uint(PacketTypeEnum::Value::CollisionEventChanges),
      85, uint(PacketTypeEnum::Value::ReplicatedMicrophoneAudioNoEcho),
      86, uint(PacketTypeEnum::Value::ReplicatedMicrophoneAudioWithEcho),
      87, uint(PacketTypeEnum::Value::ReplicatedInjectAudio),
      88, uint(PacketTypeEnum::Value::ReplicatedSilentAudioFrame),
      89, uint(PacketTypeEnum::Value::ReplicatedAvatarIdentity),
      90, uint(PacketTypeEnum::Value::ReplicatedKillAvatar),
      91, uint(PacketTypeEnum::Value::ReplicatedBulkAvatarData),
      92, uint(PacketTypeEnum::Value::DomainContentReplacementFromUrl),
      93, uint(PacketTypeEnum::Value::ChallengeOwnership),
      94, uint(PacketTypeEnum::Value::EntityScriptCallMethod),
      95, uint(PacketTypeEnum::Value::ChallengeOwnershipRequest),
      96, uint(PacketTypeEnum::Value::ChallengeOwnershipReply),
      97, uint(PacketTypeEnum::Value::OctreeDataFileRequest),
      98, uint(PacketTypeEnum::Value::OctreeDataFileReply),
      99, uint(PacketTypeEnum::Value::OctreeDataPersist),
     100, uint(PacketTypeEnum::Value::EntityClone),
     101, uint(PacketTypeEnum::Value::EntityQueryInitialResultsComplete),
     102, uint(PacketTypeEnum::Value::BulkAvatarTraits),
     103, uint(PacketTypeEnum::Value::AudioSoloRequest),
     104, uint(PacketTypeEnum::Value::NUM_PACKET_TYPE),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject PacketTypeEnum::staticMetaObject = {
    { nullptr, qt_meta_stringdata_PacketTypeEnum.data,
      qt_meta_data_PacketTypeEnum,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
