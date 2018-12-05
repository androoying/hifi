/****************************************************************************
** Meta object code from reading C++ file 'AvatarData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AvatarData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarData_t {
    QByteArrayData data[115];
    char stringdata0[1828];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarData_t qt_meta_stringdata_AvatarData = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AvatarData"
QT_MOC_LITERAL(1, 11, 18), // "displayNameChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 25), // "sessionDisplayNameChanged"
QT_MOC_LITERAL(4, 57, 23), // "skeletonModelURLChanged"
QT_MOC_LITERAL(5, 81, 21), // "lookAtSnappingChanged"
QT_MOC_LITERAL(6, 103, 7), // "enabled"
QT_MOC_LITERAL(7, 111, 18), // "sessionUUIDChanged"
QT_MOC_LITERAL(8, 130, 20), // "sendAvatarDataPacket"
QT_MOC_LITERAL(9, 151, 7), // "sendAll"
QT_MOC_LITERAL(10, 159, 18), // "sendIdentityPacket"
QT_MOC_LITERAL(11, 178, 32), // "setJointMappingsFromNetworkReply"
QT_MOC_LITERAL(12, 211, 14), // "setSessionUUID"
QT_MOC_LITERAL(13, 226, 11), // "sessionUUID"
QT_MOC_LITERAL(14, 238, 37), // "getAbsoluteJointRotationInObj..."
QT_MOC_LITERAL(15, 276, 9), // "glm::quat"
QT_MOC_LITERAL(16, 286, 5), // "index"
QT_MOC_LITERAL(17, 292, 40), // "getAbsoluteJointTranslationIn..."
QT_MOC_LITERAL(18, 333, 9), // "glm::vec3"
QT_MOC_LITERAL(19, 343, 37), // "setAbsoluteJointRotationInObj..."
QT_MOC_LITERAL(20, 381, 8), // "rotation"
QT_MOC_LITERAL(21, 390, 40), // "setAbsoluteJointTranslationIn..."
QT_MOC_LITERAL(22, 431, 11), // "translation"
QT_MOC_LITERAL(23, 443, 14), // "getTargetScale"
QT_MOC_LITERAL(24, 458, 13), // "resetLastSent"
QT_MOC_LITERAL(25, 472, 17), // "getDomainMinScale"
QT_MOC_LITERAL(26, 490, 17), // "getDomainMaxScale"
QT_MOC_LITERAL(27, 508, 12), // "getEyeHeight"
QT_MOC_LITERAL(28, 521, 9), // "getHeight"
QT_MOC_LITERAL(29, 531, 12), // "setHandState"
QT_MOC_LITERAL(30, 544, 1), // "s"
QT_MOC_LITERAL(31, 546, 12), // "getHandState"
QT_MOC_LITERAL(32, 559, 15), // "setRawJointData"
QT_MOC_LITERAL(33, 575, 18), // "QVector<JointData>"
QT_MOC_LITERAL(34, 594, 4), // "data"
QT_MOC_LITERAL(35, 599, 12), // "setJointData"
QT_MOC_LITERAL(36, 612, 16), // "setJointRotation"
QT_MOC_LITERAL(37, 629, 19), // "setJointTranslation"
QT_MOC_LITERAL(38, 649, 14), // "clearJointData"
QT_MOC_LITERAL(39, 664, 16), // "isJointDataValid"
QT_MOC_LITERAL(40, 681, 16), // "getJointRotation"
QT_MOC_LITERAL(41, 698, 19), // "getJointTranslation"
QT_MOC_LITERAL(42, 718, 4), // "name"
QT_MOC_LITERAL(43, 723, 17), // "getJointRotations"
QT_MOC_LITERAL(44, 741, 18), // "QVector<glm::quat>"
QT_MOC_LITERAL(45, 760, 20), // "getJointTranslations"
QT_MOC_LITERAL(46, 781, 18), // "QVector<glm::vec3>"
QT_MOC_LITERAL(47, 800, 17), // "setJointRotations"
QT_MOC_LITERAL(48, 818, 14), // "jointRotations"
QT_MOC_LITERAL(49, 833, 20), // "setJointTranslations"
QT_MOC_LITERAL(50, 854, 17), // "jointTranslations"
QT_MOC_LITERAL(51, 872, 15), // "clearJointsData"
QT_MOC_LITERAL(52, 888, 13), // "getJointIndex"
QT_MOC_LITERAL(53, 902, 13), // "getJointNames"
QT_MOC_LITERAL(54, 916, 13), // "setBlendshape"
QT_MOC_LITERAL(55, 930, 3), // "val"
QT_MOC_LITERAL(56, 934, 21), // "getAttachmentsVariant"
QT_MOC_LITERAL(57, 956, 21), // "setAttachmentsVariant"
QT_MOC_LITERAL(58, 978, 7), // "variant"
QT_MOC_LITERAL(59, 986, 18), // "updateAvatarEntity"
QT_MOC_LITERAL(60, 1005, 8), // "entityID"
QT_MOC_LITERAL(61, 1014, 10), // "entityData"
QT_MOC_LITERAL(62, 1025, 17), // "clearAvatarEntity"
QT_MOC_LITERAL(63, 1043, 23), // "requiresRemovalFromTree"
QT_MOC_LITERAL(64, 1067, 28), // "setForceFaceTrackerConnected"
QT_MOC_LITERAL(65, 1096, 9), // "connected"
QT_MOC_LITERAL(66, 1106, 17), // "getAttachmentData"
QT_MOC_LITERAL(67, 1124, 23), // "QVector<AttachmentData>"
QT_MOC_LITERAL(68, 1148, 17), // "setAttachmentData"
QT_MOC_LITERAL(69, 1166, 14), // "attachmentData"
QT_MOC_LITERAL(70, 1181, 6), // "attach"
QT_MOC_LITERAL(71, 1188, 8), // "modelURL"
QT_MOC_LITERAL(72, 1197, 9), // "jointName"
QT_MOC_LITERAL(73, 1207, 5), // "scale"
QT_MOC_LITERAL(74, 1213, 6), // "isSoft"
QT_MOC_LITERAL(75, 1220, 15), // "allowDuplicates"
QT_MOC_LITERAL(76, 1236, 8), // "useSaved"
QT_MOC_LITERAL(77, 1245, 9), // "detachOne"
QT_MOC_LITERAL(78, 1255, 9), // "detachAll"
QT_MOC_LITERAL(79, 1265, 19), // "getAvatarEntityData"
QT_MOC_LITERAL(80, 1285, 15), // "AvatarEntityMap"
QT_MOC_LITERAL(81, 1301, 19), // "setAvatarEntityData"
QT_MOC_LITERAL(82, 1321, 16), // "avatarEntityData"
QT_MOC_LITERAL(83, 1338, 22), // "getSensorToWorldMatrix"
QT_MOC_LITERAL(84, 1361, 9), // "glm::mat4"
QT_MOC_LITERAL(85, 1371, 21), // "getSensorToWorldScale"
QT_MOC_LITERAL(86, 1393, 27), // "getControllerLeftHandMatrix"
QT_MOC_LITERAL(87, 1421, 28), // "getControllerRightHandMatrix"
QT_MOC_LITERAL(88, 1450, 11), // "getDataRate"
QT_MOC_LITERAL(89, 1462, 8), // "rateName"
QT_MOC_LITERAL(90, 1471, 13), // "getUpdateRate"
QT_MOC_LITERAL(91, 1485, 8), // "position"
QT_MOC_LITERAL(92, 1494, 7), // "density"
QT_MOC_LITERAL(93, 1502, 12), // "handPosition"
QT_MOC_LITERAL(94, 1515, 7), // "bodyYaw"
QT_MOC_LITERAL(95, 1523, 9), // "bodyPitch"
QT_MOC_LITERAL(96, 1533, 8), // "bodyRoll"
QT_MOC_LITERAL(97, 1542, 11), // "orientation"
QT_MOC_LITERAL(98, 1554, 15), // "headOrientation"
QT_MOC_LITERAL(99, 1570, 9), // "headPitch"
QT_MOC_LITERAL(100, 1580, 7), // "headYaw"
QT_MOC_LITERAL(101, 1588, 8), // "headRoll"
QT_MOC_LITERAL(102, 1597, 8), // "velocity"
QT_MOC_LITERAL(103, 1606, 15), // "angularVelocity"
QT_MOC_LITERAL(104, 1622, 13), // "audioLoudness"
QT_MOC_LITERAL(105, 1636, 20), // "audioAverageLoudness"
QT_MOC_LITERAL(106, 1657, 11), // "displayName"
QT_MOC_LITERAL(107, 1669, 18), // "sessionDisplayName"
QT_MOC_LITERAL(108, 1688, 21), // "lookAtSnappingEnabled"
QT_MOC_LITERAL(109, 1710, 16), // "skeletonModelURL"
QT_MOC_LITERAL(110, 1727, 10), // "jointNames"
QT_MOC_LITERAL(111, 1738, 19), // "sensorToWorldMatrix"
QT_MOC_LITERAL(112, 1758, 24), // "controllerLeftHandMatrix"
QT_MOC_LITERAL(113, 1783, 25), // "controllerRightHandMatrix"
QT_MOC_LITERAL(114, 1809, 18) // "sensorToWorldScale"

    },
    "AvatarData\0displayNameChanged\0\0"
    "sessionDisplayNameChanged\0"
    "skeletonModelURLChanged\0lookAtSnappingChanged\0"
    "enabled\0sessionUUIDChanged\0"
    "sendAvatarDataPacket\0sendAll\0"
    "sendIdentityPacket\0setJointMappingsFromNetworkReply\0"
    "setSessionUUID\0sessionUUID\0"
    "getAbsoluteJointRotationInObjectFrame\0"
    "glm::quat\0index\0"
    "getAbsoluteJointTranslationInObjectFrame\0"
    "glm::vec3\0setAbsoluteJointRotationInObjectFrame\0"
    "rotation\0setAbsoluteJointTranslationInObjectFrame\0"
    "translation\0getTargetScale\0resetLastSent\0"
    "getDomainMinScale\0getDomainMaxScale\0"
    "getEyeHeight\0getHeight\0setHandState\0"
    "s\0getHandState\0setRawJointData\0"
    "QVector<JointData>\0data\0setJointData\0"
    "setJointRotation\0setJointTranslation\0"
    "clearJointData\0isJointDataValid\0"
    "getJointRotation\0getJointTranslation\0"
    "name\0getJointRotations\0QVector<glm::quat>\0"
    "getJointTranslations\0QVector<glm::vec3>\0"
    "setJointRotations\0jointRotations\0"
    "setJointTranslations\0jointTranslations\0"
    "clearJointsData\0getJointIndex\0"
    "getJointNames\0setBlendshape\0val\0"
    "getAttachmentsVariant\0setAttachmentsVariant\0"
    "variant\0updateAvatarEntity\0entityID\0"
    "entityData\0clearAvatarEntity\0"
    "requiresRemovalFromTree\0"
    "setForceFaceTrackerConnected\0connected\0"
    "getAttachmentData\0QVector<AttachmentData>\0"
    "setAttachmentData\0attachmentData\0"
    "attach\0modelURL\0jointName\0scale\0isSoft\0"
    "allowDuplicates\0useSaved\0detachOne\0"
    "detachAll\0getAvatarEntityData\0"
    "AvatarEntityMap\0setAvatarEntityData\0"
    "avatarEntityData\0getSensorToWorldMatrix\0"
    "glm::mat4\0getSensorToWorldScale\0"
    "getControllerLeftHandMatrix\0"
    "getControllerRightHandMatrix\0getDataRate\0"
    "rateName\0getUpdateRate\0position\0density\0"
    "handPosition\0bodyYaw\0bodyPitch\0bodyRoll\0"
    "orientation\0headOrientation\0headPitch\0"
    "headYaw\0headRoll\0velocity\0angularVelocity\0"
    "audioLoudness\0audioAverageLoudness\0"
    "displayName\0sessionDisplayName\0"
    "lookAtSnappingEnabled\0skeletonModelURL\0"
    "jointNames\0sensorToWorldMatrix\0"
    "controllerLeftHandMatrix\0"
    "controllerRightHandMatrix\0sensorToWorldScale"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      75,   14, // methods
      27,  646, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  389,    2, 0x06 /* Public */,
       3,    0,  390,    2, 0x06 /* Public */,
       4,    0,  391,    2, 0x06 /* Public */,
       5,    1,  392,    2, 0x06 /* Public */,
       7,    0,  395,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  396,    2, 0x0a /* Public */,
       8,    0,  399,    2, 0x2a /* Public | MethodCloned */,
      10,    0,  400,    2, 0x0a /* Public */,
      11,    0,  401,    2, 0x0a /* Public */,
      12,    1,  402,    2, 0x0a /* Public */,
      14,    1,  405,    2, 0x0a /* Public */,
      17,    1,  408,    2, 0x0a /* Public */,
      19,    2,  411,    2, 0x0a /* Public */,
      21,    2,  416,    2, 0x0a /* Public */,
      23,    0,  421,    2, 0x0a /* Public */,
      24,    0,  422,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      25,    0,  423,    2, 0x02 /* Public */,
      26,    0,  424,    2, 0x02 /* Public */,
      27,    0,  425,    2, 0x02 /* Public */,
      28,    0,  426,    2, 0x02 /* Public */,
      29,    1,  427,    2, 0x02 /* Public */,
      31,    0,  430,    2, 0x02 /* Public */,
      32,    1,  431,    2, 0x02 /* Public */,
      35,    3,  434,    2, 0x02 /* Public */,
      36,    2,  441,    2, 0x02 /* Public */,
      37,    2,  446,    2, 0x02 /* Public */,
      38,    1,  451,    2, 0x02 /* Public */,
      39,    1,  454,    2, 0x02 /* Public */,
      40,    1,  457,    2, 0x02 /* Public */,
      41,    1,  460,    2, 0x02 /* Public */,
      35,    3,  463,    2, 0x02 /* Public */,
      36,    2,  470,    2, 0x02 /* Public */,
      37,    2,  475,    2, 0x02 /* Public */,
      38,    1,  480,    2, 0x02 /* Public */,
      39,    1,  483,    2, 0x02 /* Public */,
      40,    1,  486,    2, 0x02 /* Public */,
      41,    1,  489,    2, 0x02 /* Public */,
      43,    0,  492,    2, 0x02 /* Public */,
      45,    0,  493,    2, 0x02 /* Public */,
      47,    1,  494,    2, 0x02 /* Public */,
      49,    1,  497,    2, 0x02 /* Public */,
      51,    0,  500,    2, 0x02 /* Public */,
      52,    1,  501,    2, 0x02 /* Public */,
      53,    0,  504,    2, 0x02 /* Public */,
      54,    2,  505,    2, 0x02 /* Public */,
      56,    0,  510,    2, 0x02 /* Public */,
      57,    1,  511,    2, 0x02 /* Public */,
      59,    2,  514,    2, 0x02 /* Public */,
      62,    2,  519,    2, 0x02 /* Public */,
      62,    1,  524,    2, 0x22 /* Public | MethodCloned */,
      64,    1,  527,    2, 0x02 /* Public */,
      66,    0,  530,    2, 0x02 /* Public */,
      68,    1,  531,    2, 0x02 /* Public */,
      70,    8,  534,    2, 0x02 /* Public */,
      70,    7,  551,    2, 0x22 /* Public | MethodCloned */,
      70,    6,  566,    2, 0x22 /* Public | MethodCloned */,
      70,    5,  579,    2, 0x22 /* Public | MethodCloned */,
      70,    4,  590,    2, 0x22 /* Public | MethodCloned */,
      70,    3,  599,    2, 0x22 /* Public | MethodCloned */,
      70,    2,  606,    2, 0x22 /* Public | MethodCloned */,
      70,    1,  611,    2, 0x22 /* Public | MethodCloned */,
      77,    2,  614,    2, 0x02 /* Public */,
      77,    1,  619,    2, 0x22 /* Public | MethodCloned */,
      78,    2,  622,    2, 0x02 /* Public */,
      78,    1,  627,    2, 0x22 /* Public | MethodCloned */,
      79,    0,  630,    2, 0x02 /* Public */,
      81,    1,  631,    2, 0x02 /* Public */,
      83,    0,  634,    2, 0x02 /* Public */,
      85,    0,  635,    2, 0x02 /* Public */,
      86,    0,  636,    2, 0x02 /* Public */,
      87,    0,  637,    2, 0x02 /* Public */,
      88,    1,  638,    2, 0x02 /* Public */,
      88,    0,  641,    2, 0x22 /* Public | MethodCloned */,
      90,    1,  642,    2, 0x02 /* Public */,
      90,    0,  645,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,   13,
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 18, QMetaType::Int,   16,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 15,   16,   20,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 18,   16,   22,
    QMetaType::Float,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Char,   30,
    QMetaType::Char,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15, 0x80000000 | 18,   16,   20,   22,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   16,   20,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   16,   22,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Bool, QMetaType::Int,   16,
    0x80000000 | 15, QMetaType::Int,   16,
    0x80000000 | 18, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15, 0x80000000 | 18,   42,   20,   22,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   42,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,   42,   22,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Bool, QMetaType::QString,   42,
    0x80000000 | 15, QMetaType::QString,   42,
    0x80000000 | 18, QMetaType::QString,   42,
    0x80000000 | 44,
    0x80000000 | 46,
    QMetaType::Void, 0x80000000 | 44,   48,
    QMetaType::Void, 0x80000000 | 46,   50,
    QMetaType::Void,
    QMetaType::Int, QMetaType::QString,   42,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,   42,   55,
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::QVariantList,   58,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QByteArray,   60,   61,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,   60,   63,
    QMetaType::Void, QMetaType::QUuid,   60,
    QMetaType::Void, QMetaType::Bool,   65,
    0x80000000 | 67,
    QMetaType::Void, 0x80000000 | 67,   69,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, 0x80000000 | 15, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   71,   72,   22,   20,   73,   74,   75,   76,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, 0x80000000 | 15, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,   71,   72,   22,   20,   73,   74,   75,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, 0x80000000 | 15, QMetaType::Float, QMetaType::Bool,   71,   72,   22,   20,   73,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, 0x80000000 | 15, QMetaType::Float,   71,   72,   22,   20,   73,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18, 0x80000000 | 15,   71,   72,   22,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 18,   71,   72,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   71,   72,
    QMetaType::Void, QMetaType::QString,   71,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   71,   72,
    QMetaType::Void, QMetaType::QString,   71,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   71,   72,
    QMetaType::Void, QMetaType::QString,   71,
    0x80000000 | 80,
    QMetaType::Void, 0x80000000 | 80,   82,
    0x80000000 | 84,
    QMetaType::Float,
    0x80000000 | 84,
    0x80000000 | 84,
    QMetaType::Float, QMetaType::QString,   89,
    QMetaType::Float,
    QMetaType::Float, QMetaType::QString,   89,
    QMetaType::Float,

 // properties: name, type, flags
      91, 0x80000000 | 18, 0x0009500b,
      73, QMetaType::Float, 0x00095003,
      92, QMetaType::Float, 0x00095001,
      93, 0x80000000 | 18, 0x0009510b,
      94, QMetaType::Float, 0x00095103,
      95, QMetaType::Float, 0x00095103,
      96, QMetaType::Float, 0x00095103,
      97, 0x80000000 | 15, 0x0009500b,
      98, 0x80000000 | 15, 0x0009510b,
      99, QMetaType::Float, 0x00095103,
     100, QMetaType::Float, 0x00095103,
     101, QMetaType::Float, 0x00095103,
     102, 0x80000000 | 18, 0x0009500b,
     103, 0x80000000 | 18, 0x0009500b,
     104, QMetaType::Float, 0x00095103,
     105, QMetaType::Float, 0x00095103,
     106, QMetaType::QString, 0x00495103,
     107, QMetaType::QString, 0x00495103,
     108, QMetaType::Bool, 0x00495003,
     109, QMetaType::QString, 0x00495003,
      69, 0x80000000 | 67, 0x0009510b,
     110, QMetaType::QStringList, 0x00095001,
      13, QMetaType::QUuid, 0x00495001,
     111, 0x80000000 | 84, 0x00095009,
     112, 0x80000000 | 84, 0x00095009,
     113, 0x80000000 | 84, 0x00095009,
     114, QMetaType::Float, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       3,
       2,
       0,
       0,
       4,
       0,
       0,
       0,
       0,

       0        // eod
};

void AvatarData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarData *_t = static_cast<AvatarData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayNameChanged(); break;
        case 1: _t->sessionDisplayNameChanged(); break;
        case 2: _t->skeletonModelURLChanged(); break;
        case 3: _t->lookAtSnappingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sessionUUIDChanged(); break;
        case 5: _t->sendAvatarDataPacket((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sendAvatarDataPacket(); break;
        case 7: _t->sendIdentityPacket(); break;
        case 8: _t->setJointMappingsFromNetworkReply(); break;
        case 9: _t->setSessionUUID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 10: { glm::quat _r = _t->getAbsoluteJointRotationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 11: { glm::vec3 _r = _t->getAbsoluteJointTranslationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->setAbsoluteJointRotationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->setAbsoluteJointTranslationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getTargetScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->resetLastSent(); break;
        case 16: { float _r = _t->getDomainMinScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { float _r = _t->getDomainMaxScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 18: { float _r = _t->getEyeHeight();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: { float _r = _t->getHeight();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setHandState((*reinterpret_cast< char(*)>(_a[1]))); break;
        case 21: { char _r = _t->getHandState();
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setRawJointData((*reinterpret_cast< QVector<JointData>(*)>(_a[1]))); break;
        case 23: _t->setJointData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3]))); break;
        case 24: _t->setJointRotation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2]))); break;
        case 25: _t->setJointTranslation((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2]))); break;
        case 26: _t->clearJointData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: { bool _r = _t->isJointDataValid((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { glm::quat _r = _t->getJointRotation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 29: { glm::vec3 _r = _t->getJointTranslation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setJointData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3]))); break;
        case 31: _t->setJointRotation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2]))); break;
        case 32: _t->setJointTranslation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2]))); break;
        case 33: _t->clearJointData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: { bool _r = _t->isJointDataValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { glm::quat _r = _t->getJointRotation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 36: { glm::vec3 _r = _t->getJointTranslation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 37: { QVector<glm::quat> _r = _t->getJointRotations();
            if (_a[0]) *reinterpret_cast< QVector<glm::quat>*>(_a[0]) = std::move(_r); }  break;
        case 38: { QVector<glm::vec3> _r = _t->getJointTranslations();
            if (_a[0]) *reinterpret_cast< QVector<glm::vec3>*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->setJointRotations((*reinterpret_cast< const QVector<glm::quat>(*)>(_a[1]))); break;
        case 40: _t->setJointTranslations((*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[1]))); break;
        case 41: _t->clearJointsData(); break;
        case 42: { int _r = _t->getJointIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 43: { QStringList _r = _t->getJointNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 44: _t->setBlendshape((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 45: { QVariantList _r = _t->getAttachmentsVariant();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->setAttachmentsVariant((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 47: _t->updateAvatarEntity((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2]))); break;
        case 48: _t->clearAvatarEntity((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 49: _t->clearAvatarEntity((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 50: _t->setForceFaceTrackerConnected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: { QVector<AttachmentData> _r = _t->getAttachmentData();
            if (_a[0]) *reinterpret_cast< QVector<AttachmentData>*>(_a[0]) = std::move(_r); }  break;
        case 52: _t->setAttachmentData((*reinterpret_cast< const QVector<AttachmentData>(*)>(_a[1]))); break;
        case 53: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< bool(*)>(_a[8]))); break;
        case 54: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 55: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6]))); break;
        case 56: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 57: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4]))); break;
        case 58: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3]))); break;
        case 59: _t->attach((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 60: _t->attach((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 61: _t->detachOne((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 62: _t->detachOne((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 63: _t->detachAll((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 64: _t->detachAll((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 65: { AvatarEntityMap _r = _t->getAvatarEntityData();
            if (_a[0]) *reinterpret_cast< AvatarEntityMap*>(_a[0]) = std::move(_r); }  break;
        case 66: _t->setAvatarEntityData((*reinterpret_cast< const AvatarEntityMap(*)>(_a[1]))); break;
        case 67: { glm::mat4 _r = _t->getSensorToWorldMatrix();
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 68: { float _r = _t->getSensorToWorldScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 69: { glm::mat4 _r = _t->getControllerLeftHandMatrix();
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 70: { glm::mat4 _r = _t->getControllerRightHandMatrix();
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 71: { float _r = _t->getDataRate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 72: { float _r = _t->getDataRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 73: { float _r = _t->getUpdateRate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 74: { float _r = _t->getUpdateRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::quat> >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::vec3> >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<AttachmentData> >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AvatarEntityMap >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarData::displayNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarData::sessionDisplayNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarData::skeletonModelURLChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AvatarData::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarData::lookAtSnappingChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarData::sessionUUIDChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 20:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<AttachmentData> >(); break;
        case 25:
        case 24:
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
        case 8:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 13:
        case 12:
        case 3:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AvatarData *_t = static_cast<AvatarData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getWorldPosition(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getDomainLimitedScale(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getDensity(); break;
        case 3: *reinterpret_cast< glm::vec3*>(_v) = _t->getHandPosition(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getBodyYaw(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getBodyPitch(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getBodyRoll(); break;
        case 7: *reinterpret_cast< glm::quat*>(_v) = _t->getWorldOrientation(); break;
        case 8: *reinterpret_cast< glm::quat*>(_v) = _t->getHeadOrientation(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getHeadPitch(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getHeadYaw(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getHeadRoll(); break;
        case 12: *reinterpret_cast< glm::vec3*>(_v) = _t->getWorldVelocity(); break;
        case 13: *reinterpret_cast< glm::vec3*>(_v) = _t->getWorldAngularVelocity(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getAudioLoudness(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getAudioAverageLoudness(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getDisplayName(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getSessionDisplayName(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->_lookAtSnappingEnabled; break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->getSkeletonModelURLFromScript(); break;
        case 20: *reinterpret_cast< QVector<AttachmentData>*>(_v) = _t->getAttachmentData(); break;
        case 21: *reinterpret_cast< QStringList*>(_v) = _t->getJointNames(); break;
        case 22: *reinterpret_cast< QUuid*>(_v) = _t->getSessionUUID(); break;
        case 23: *reinterpret_cast< glm::mat4*>(_v) = _t->getSensorToWorldMatrix(); break;
        case 24: *reinterpret_cast< glm::mat4*>(_v) = _t->getControllerLeftHandMatrix(); break;
        case 25: *reinterpret_cast< glm::mat4*>(_v) = _t->getControllerRightHandMatrix(); break;
        case 26: *reinterpret_cast< float*>(_v) = _t->getSensorToWorldScale(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AvatarData *_t = static_cast<AvatarData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPositionViaScript(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 1: _t->setTargetScale(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setHandPosition(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 4: _t->setBodyYaw(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setBodyPitch(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setBodyRoll(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setOrientationViaScript(*reinterpret_cast< glm::quat*>(_v)); break;
        case 8: _t->setHeadOrientation(*reinterpret_cast< glm::quat*>(_v)); break;
        case 9: _t->setHeadPitch(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setHeadYaw(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setHeadRoll(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setWorldVelocity(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 13: _t->setWorldAngularVelocity(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 14: _t->setAudioLoudness(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setAudioAverageLoudness(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 17: _t->setSessionDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 18:
            if (_t->_lookAtSnappingEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->_lookAtSnappingEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->lookAtSnappingChanged(_t->_lookAtSnappingEnabled);
            }
            break;
        case 19: _t->setSkeletonModelURLFromScript(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setAttachmentData(*reinterpret_cast< QVector<AttachmentData>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AvatarData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AvatarData.data,
      qt_meta_data_AvatarData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarData.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SpatiallyNestable"))
        return static_cast< SpatiallyNestable*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 75)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 75;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 27;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 27;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AvatarData::displayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AvatarData::sessionDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AvatarData::skeletonModelURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AvatarData::lookAtSnappingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AvatarData::sessionUUIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_AttachmentDataObject_t {
    QByteArrayData data[22];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AttachmentDataObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AttachmentDataObject_t qt_meta_stringdata_AttachmentDataObject = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AttachmentDataObject"
QT_MOC_LITERAL(1, 21, 11), // "setModelURL"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "modelURL"
QT_MOC_LITERAL(4, 43, 11), // "getModelURL"
QT_MOC_LITERAL(5, 55, 12), // "setJointName"
QT_MOC_LITERAL(6, 68, 9), // "jointName"
QT_MOC_LITERAL(7, 78, 12), // "getJointName"
QT_MOC_LITERAL(8, 91, 14), // "setTranslation"
QT_MOC_LITERAL(9, 106, 9), // "glm::vec3"
QT_MOC_LITERAL(10, 116, 11), // "translation"
QT_MOC_LITERAL(11, 128, 14), // "getTranslation"
QT_MOC_LITERAL(12, 143, 11), // "setRotation"
QT_MOC_LITERAL(13, 155, 9), // "glm::quat"
QT_MOC_LITERAL(14, 165, 8), // "rotation"
QT_MOC_LITERAL(15, 174, 11), // "getRotation"
QT_MOC_LITERAL(16, 186, 8), // "setScale"
QT_MOC_LITERAL(17, 195, 5), // "scale"
QT_MOC_LITERAL(18, 201, 8), // "getScale"
QT_MOC_LITERAL(19, 210, 9), // "setIsSoft"
QT_MOC_LITERAL(20, 220, 9), // "getIsSoft"
QT_MOC_LITERAL(21, 230, 6) // "isSoft"

    },
    "AttachmentDataObject\0setModelURL\0\0"
    "modelURL\0getModelURL\0setJointName\0"
    "jointName\0getJointName\0setTranslation\0"
    "glm::vec3\0translation\0getTranslation\0"
    "setRotation\0glm::quat\0rotation\0"
    "getRotation\0setScale\0scale\0getScale\0"
    "setIsSoft\0getIsSoft\0isSoft"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AttachmentDataObject[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x02 /* Public */,
       4,    0,   77,    2, 0x02 /* Public */,
       5,    1,   78,    2, 0x02 /* Public */,
       7,    0,   81,    2, 0x02 /* Public */,
       8,    1,   82,    2, 0x02 /* Public */,
      11,    0,   85,    2, 0x02 /* Public */,
      12,    1,   86,    2, 0x02 /* Public */,
      15,    0,   89,    2, 0x02 /* Public */,
      16,    1,   90,    2, 0x02 /* Public */,
      18,    0,   93,    2, 0x02 /* Public */,
      19,    1,   94,    2, 0x02 /* Public */,
      20,    0,   97,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::QString,
    QMetaType::Void, 0x80000000 | 9,   10,
    0x80000000 | 9,
    QMetaType::Void, 0x80000000 | 13,   14,
    0x80000000 | 13,
    QMetaType::Void, QMetaType::Float,   17,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Bool,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 9, 0x0009510b,
      14, 0x80000000 | 13, 0x0009510b,
      17, QMetaType::Float, 0x00095103,
      21, QMetaType::Bool, 0x00095103,

       0        // eod
};

void AttachmentDataObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AttachmentDataObject *_t = static_cast<AttachmentDataObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setModelURL((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getModelURL();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setJointName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->getJointName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setTranslation((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 5: { glm::vec3 _r = _t->getTranslation();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setRotation((*reinterpret_cast< const glm::quat(*)>(_a[1]))); break;
        case 7: { glm::quat _r = _t->getRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: { float _r = _t->getScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setIsSoft((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: { bool _r = _t->getIsSoft();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AttachmentDataObject *_t = static_cast<AttachmentDataObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getModelURL(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getJointName(); break;
        case 2: *reinterpret_cast< glm::vec3*>(_v) = _t->getTranslation(); break;
        case 3: *reinterpret_cast< glm::quat*>(_v) = _t->getRotation(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getScale(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getIsSoft(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AttachmentDataObject *_t = static_cast<AttachmentDataObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModelURL(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setJointName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setTranslation(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 3: _t->setRotation(*reinterpret_cast< glm::quat*>(_v)); break;
        case 4: _t->setScale(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setIsSoft(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AttachmentDataObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AttachmentDataObject.data,
      qt_meta_data_AttachmentDataObject,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AttachmentDataObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AttachmentDataObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AttachmentDataObject.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int AttachmentDataObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
