/****************************************************************************
** Meta object code from reading C++ file 'EntityScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityScriptingInterface_t {
    QByteArrayData data[198];
    char stringdata0[3241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptingInterface_t qt_meta_stringdata_EntityScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "EntityScriptingInterface"
QT_MOC_LITERAL(1, 25, 19), // "collisionWithEntity"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 12), // "EntityItemID"
QT_MOC_LITERAL(4, 59, 3), // "idA"
QT_MOC_LITERAL(5, 63, 3), // "idB"
QT_MOC_LITERAL(6, 67, 9), // "Collision"
QT_MOC_LITERAL(7, 77, 9), // "collision"
QT_MOC_LITERAL(8, 87, 21), // "canAdjustLocksChanged"
QT_MOC_LITERAL(9, 109, 14), // "canAdjustLocks"
QT_MOC_LITERAL(10, 124, 13), // "canRezChanged"
QT_MOC_LITERAL(11, 138, 6), // "canRez"
QT_MOC_LITERAL(12, 145, 16), // "canRezTmpChanged"
QT_MOC_LITERAL(13, 162, 9), // "canRezTmp"
QT_MOC_LITERAL(14, 172, 22), // "canRezCertifiedChanged"
QT_MOC_LITERAL(15, 195, 15), // "canRezCertified"
QT_MOC_LITERAL(16, 211, 25), // "canRezTmpCertifiedChanged"
QT_MOC_LITERAL(17, 237, 18), // "canRezTmpCertified"
QT_MOC_LITERAL(18, 256, 21), // "canWriteAssetsChanged"
QT_MOC_LITERAL(19, 278, 14), // "canWriteAssets"
QT_MOC_LITERAL(20, 293, 18), // "mousePressOnEntity"
QT_MOC_LITERAL(21, 312, 12), // "entityItemID"
QT_MOC_LITERAL(22, 325, 12), // "PointerEvent"
QT_MOC_LITERAL(23, 338, 5), // "event"
QT_MOC_LITERAL(24, 344, 24), // "mouseDoublePressOnEntity"
QT_MOC_LITERAL(25, 369, 17), // "mouseMoveOnEntity"
QT_MOC_LITERAL(26, 387, 20), // "mouseReleaseOnEntity"
QT_MOC_LITERAL(27, 408, 19), // "mousePressOffEntity"
QT_MOC_LITERAL(28, 428, 25), // "mouseDoublePressOffEntity"
QT_MOC_LITERAL(29, 454, 17), // "clickDownOnEntity"
QT_MOC_LITERAL(30, 472, 20), // "holdingClickOnEntity"
QT_MOC_LITERAL(31, 493, 20), // "clickReleaseOnEntity"
QT_MOC_LITERAL(32, 514, 16), // "hoverEnterEntity"
QT_MOC_LITERAL(33, 531, 15), // "hoverOverEntity"
QT_MOC_LITERAL(34, 547, 16), // "hoverLeaveEntity"
QT_MOC_LITERAL(35, 564, 11), // "enterEntity"
QT_MOC_LITERAL(36, 576, 11), // "leaveEntity"
QT_MOC_LITERAL(37, 588, 14), // "deletingEntity"
QT_MOC_LITERAL(38, 603, 8), // "entityID"
QT_MOC_LITERAL(39, 612, 12), // "addingEntity"
QT_MOC_LITERAL(40, 625, 16), // "clearingEntities"
QT_MOC_LITERAL(41, 642, 16), // "webEventReceived"
QT_MOC_LITERAL(42, 659, 7), // "message"
QT_MOC_LITERAL(43, 667, 17), // "canReplaceContent"
QT_MOC_LITERAL(44, 685, 9), // "addEntity"
QT_MOC_LITERAL(45, 695, 20), // "EntityItemProperties"
QT_MOC_LITERAL(46, 716, 10), // "properties"
QT_MOC_LITERAL(47, 727, 10), // "clientOnly"
QT_MOC_LITERAL(48, 738, 14), // "addModelEntity"
QT_MOC_LITERAL(49, 753, 4), // "name"
QT_MOC_LITERAL(50, 758, 8), // "modelUrl"
QT_MOC_LITERAL(51, 767, 8), // "textures"
QT_MOC_LITERAL(52, 776, 9), // "shapeType"
QT_MOC_LITERAL(53, 786, 7), // "dynamic"
QT_MOC_LITERAL(54, 794, 13), // "collisionless"
QT_MOC_LITERAL(55, 808, 9), // "grabbable"
QT_MOC_LITERAL(56, 818, 9), // "glm::vec3"
QT_MOC_LITERAL(57, 828, 8), // "position"
QT_MOC_LITERAL(58, 837, 7), // "gravity"
QT_MOC_LITERAL(59, 845, 11), // "cloneEntity"
QT_MOC_LITERAL(60, 857, 15), // "entityIDToClone"
QT_MOC_LITERAL(61, 873, 19), // "getEntityProperties"
QT_MOC_LITERAL(62, 893, 19), // "EntityPropertyFlags"
QT_MOC_LITERAL(63, 913, 17), // "desiredProperties"
QT_MOC_LITERAL(64, 931, 10), // "editEntity"
QT_MOC_LITERAL(65, 942, 12), // "deleteEntity"
QT_MOC_LITERAL(66, 955, 16), // "callEntityMethod"
QT_MOC_LITERAL(67, 972, 6), // "method"
QT_MOC_LITERAL(68, 979, 6), // "params"
QT_MOC_LITERAL(69, 986, 22), // "callEntityServerMethod"
QT_MOC_LITERAL(70, 1009, 22), // "callEntityClientMethod"
QT_MOC_LITERAL(71, 1032, 15), // "clientSessionID"
QT_MOC_LITERAL(72, 1048, 17), // "findClosestEntity"
QT_MOC_LITERAL(73, 1066, 6), // "center"
QT_MOC_LITERAL(74, 1073, 6), // "radius"
QT_MOC_LITERAL(75, 1080, 12), // "findEntities"
QT_MOC_LITERAL(76, 1093, 14), // "QVector<QUuid>"
QT_MOC_LITERAL(77, 1108, 17), // "findEntitiesInBox"
QT_MOC_LITERAL(78, 1126, 6), // "corner"
QT_MOC_LITERAL(79, 1133, 10), // "dimensions"
QT_MOC_LITERAL(80, 1144, 21), // "findEntitiesInFrustum"
QT_MOC_LITERAL(81, 1166, 7), // "frustum"
QT_MOC_LITERAL(82, 1174, 18), // "findEntitiesByType"
QT_MOC_LITERAL(83, 1193, 10), // "entityType"
QT_MOC_LITERAL(84, 1204, 18), // "findEntitiesByName"
QT_MOC_LITERAL(85, 1223, 10), // "entityName"
QT_MOC_LITERAL(86, 1234, 19), // "caseSensitiveSearch"
QT_MOC_LITERAL(87, 1254, 19), // "findRayIntersection"
QT_MOC_LITERAL(88, 1274, 29), // "RayToEntityIntersectionResult"
QT_MOC_LITERAL(89, 1304, 7), // "PickRay"
QT_MOC_LITERAL(90, 1312, 3), // "ray"
QT_MOC_LITERAL(91, 1316, 16), // "precisionPicking"
QT_MOC_LITERAL(92, 1333, 12), // "QScriptValue"
QT_MOC_LITERAL(93, 1346, 18), // "entityIdsToInclude"
QT_MOC_LITERAL(94, 1365, 18), // "entityIdsToDiscard"
QT_MOC_LITERAL(95, 1384, 11), // "visibleOnly"
QT_MOC_LITERAL(96, 1396, 14), // "collidableOnly"
QT_MOC_LITERAL(97, 1411, 25), // "findRayIntersectionVector"
QT_MOC_LITERAL(98, 1437, 21), // "QVector<EntityItemID>"
QT_MOC_LITERAL(99, 1459, 27), // "findRayIntersectionBlocking"
QT_MOC_LITERAL(100, 1487, 19), // "reloadServerScripts"
QT_MOC_LITERAL(101, 1507, 21), // "getServerScriptStatus"
QT_MOC_LITERAL(102, 1529, 8), // "callback"
QT_MOC_LITERAL(103, 1538, 21), // "queryPropertyMetadata"
QT_MOC_LITERAL(104, 1560, 8), // "property"
QT_MOC_LITERAL(105, 1569, 15), // "scopeOrCallback"
QT_MOC_LITERAL(106, 1585, 12), // "methodOrName"
QT_MOC_LITERAL(107, 1598, 20), // "setLightsArePickable"
QT_MOC_LITERAL(108, 1619, 5), // "value"
QT_MOC_LITERAL(109, 1625, 20), // "getLightsArePickable"
QT_MOC_LITERAL(110, 1646, 19), // "setZonesArePickable"
QT_MOC_LITERAL(111, 1666, 19), // "getZonesArePickable"
QT_MOC_LITERAL(112, 1686, 21), // "setDrawZoneBoundaries"
QT_MOC_LITERAL(113, 1708, 21), // "getDrawZoneBoundaries"
QT_MOC_LITERAL(114, 1730, 14), // "setVoxelSphere"
QT_MOC_LITERAL(115, 1745, 15), // "setVoxelCapsule"
QT_MOC_LITERAL(116, 1761, 5), // "start"
QT_MOC_LITERAL(117, 1767, 3), // "end"
QT_MOC_LITERAL(118, 1771, 8), // "setVoxel"
QT_MOC_LITERAL(119, 1780, 12), // "setAllVoxels"
QT_MOC_LITERAL(120, 1793, 17), // "setVoxelsInCuboid"
QT_MOC_LITERAL(121, 1811, 11), // "lowPosition"
QT_MOC_LITERAL(122, 1823, 10), // "cuboidSize"
QT_MOC_LITERAL(123, 1834, 24), // "voxelCoordsToWorldCoords"
QT_MOC_LITERAL(124, 1859, 11), // "voxelCoords"
QT_MOC_LITERAL(125, 1871, 24), // "worldCoordsToVoxelCoords"
QT_MOC_LITERAL(126, 1896, 11), // "worldCoords"
QT_MOC_LITERAL(127, 1908, 24), // "voxelCoordsToLocalCoords"
QT_MOC_LITERAL(128, 1933, 24), // "localCoordsToVoxelCoords"
QT_MOC_LITERAL(129, 1958, 11), // "localCoords"
QT_MOC_LITERAL(130, 1970, 12), // "setAllPoints"
QT_MOC_LITERAL(131, 1983, 18), // "QVector<glm::vec3>"
QT_MOC_LITERAL(132, 2002, 6), // "points"
QT_MOC_LITERAL(133, 2009, 11), // "appendPoint"
QT_MOC_LITERAL(134, 2021, 5), // "point"
QT_MOC_LITERAL(135, 2027, 8), // "dumpTree"
QT_MOC_LITERAL(136, 2036, 9), // "addAction"
QT_MOC_LITERAL(137, 2046, 16), // "actionTypeString"
QT_MOC_LITERAL(138, 2063, 9), // "arguments"
QT_MOC_LITERAL(139, 2073, 12), // "updateAction"
QT_MOC_LITERAL(140, 2086, 8), // "actionID"
QT_MOC_LITERAL(141, 2095, 12), // "deleteAction"
QT_MOC_LITERAL(142, 2108, 12), // "getActionIDs"
QT_MOC_LITERAL(143, 2121, 18), // "getActionArguments"
QT_MOC_LITERAL(144, 2140, 40), // "getAbsoluteJointTranslationIn..."
QT_MOC_LITERAL(145, 2181, 10), // "jointIndex"
QT_MOC_LITERAL(146, 2192, 37), // "getAbsoluteJointRotationInObj..."
QT_MOC_LITERAL(147, 2230, 9), // "glm::quat"
QT_MOC_LITERAL(148, 2240, 40), // "setAbsoluteJointTranslationIn..."
QT_MOC_LITERAL(149, 2281, 11), // "translation"
QT_MOC_LITERAL(150, 2293, 37), // "setAbsoluteJointRotationInObj..."
QT_MOC_LITERAL(151, 2331, 8), // "rotation"
QT_MOC_LITERAL(152, 2340, 24), // "getLocalJointTranslation"
QT_MOC_LITERAL(153, 2365, 21), // "getLocalJointRotation"
QT_MOC_LITERAL(154, 2387, 24), // "setLocalJointTranslation"
QT_MOC_LITERAL(155, 2412, 21), // "setLocalJointRotation"
QT_MOC_LITERAL(156, 2434, 25), // "setLocalJointTranslations"
QT_MOC_LITERAL(157, 2460, 12), // "translations"
QT_MOC_LITERAL(158, 2473, 22), // "setLocalJointRotations"
QT_MOC_LITERAL(159, 2496, 18), // "QVector<glm::quat>"
QT_MOC_LITERAL(160, 2515, 9), // "rotations"
QT_MOC_LITERAL(161, 2525, 18), // "setLocalJointsData"
QT_MOC_LITERAL(162, 2544, 13), // "getJointIndex"
QT_MOC_LITERAL(163, 2558, 13), // "getJointNames"
QT_MOC_LITERAL(164, 2572, 14), // "getChildrenIDs"
QT_MOC_LITERAL(165, 2587, 8), // "parentID"
QT_MOC_LITERAL(166, 2596, 21), // "getChildrenIDsOfJoint"
QT_MOC_LITERAL(167, 2618, 15), // "isChildOfParent"
QT_MOC_LITERAL(168, 2634, 7), // "childID"
QT_MOC_LITERAL(169, 2642, 15), // "getNestableType"
QT_MOC_LITERAL(170, 2658, 22), // "getKeyboardFocusEntity"
QT_MOC_LITERAL(171, 2681, 22), // "setKeyboardFocusEntity"
QT_MOC_LITERAL(172, 2704, 2), // "id"
QT_MOC_LITERAL(173, 2707, 22), // "sendMousePressOnEntity"
QT_MOC_LITERAL(174, 2730, 21), // "sendMouseMoveOnEntity"
QT_MOC_LITERAL(175, 2752, 24), // "sendMouseReleaseOnEntity"
QT_MOC_LITERAL(176, 2777, 21), // "sendClickDownOnEntity"
QT_MOC_LITERAL(177, 2799, 24), // "sendHoldingClickOnEntity"
QT_MOC_LITERAL(178, 2824, 24), // "sendClickReleaseOnEntity"
QT_MOC_LITERAL(179, 2849, 20), // "sendHoverEnterEntity"
QT_MOC_LITERAL(180, 2870, 19), // "sendHoverOverEntity"
QT_MOC_LITERAL(181, 2890, 20), // "sendHoverLeaveEntity"
QT_MOC_LITERAL(182, 2911, 32), // "wantsHandControllerPointerEvents"
QT_MOC_LITERAL(183, 2944, 15), // "emitScriptEvent"
QT_MOC_LITERAL(184, 2960, 22), // "AABoxIntersectsCapsule"
QT_MOC_LITERAL(185, 2983, 3), // "low"
QT_MOC_LITERAL(186, 2987, 9), // "getMeshes"
QT_MOC_LITERAL(187, 2997, 18), // "getEntityTransform"
QT_MOC_LITERAL(188, 3016, 9), // "glm::mat4"
QT_MOC_LITERAL(189, 3026, 23), // "getEntityLocalTransform"
QT_MOC_LITERAL(190, 3050, 24), // "getStaticCertificateJSON"
QT_MOC_LITERAL(191, 3075, 33), // "verifyStaticCertificateProper..."
QT_MOC_LITERAL(192, 3109, 34), // "handleEntityScriptCallMethodP..."
QT_MOC_LITERAL(193, 3144, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(194, 3176, 15), // "receivedMessage"
QT_MOC_LITERAL(195, 3192, 17), // "SharedNodePointer"
QT_MOC_LITERAL(196, 3210, 10), // "senderNode"
QT_MOC_LITERAL(197, 3221, 19) // "keyboardFocusEntity"

    },
    "EntityScriptingInterface\0collisionWithEntity\0"
    "\0EntityItemID\0idA\0idB\0Collision\0"
    "collision\0canAdjustLocksChanged\0"
    "canAdjustLocks\0canRezChanged\0canRez\0"
    "canRezTmpChanged\0canRezTmp\0"
    "canRezCertifiedChanged\0canRezCertified\0"
    "canRezTmpCertifiedChanged\0canRezTmpCertified\0"
    "canWriteAssetsChanged\0canWriteAssets\0"
    "mousePressOnEntity\0entityItemID\0"
    "PointerEvent\0event\0mouseDoublePressOnEntity\0"
    "mouseMoveOnEntity\0mouseReleaseOnEntity\0"
    "mousePressOffEntity\0mouseDoublePressOffEntity\0"
    "clickDownOnEntity\0holdingClickOnEntity\0"
    "clickReleaseOnEntity\0hoverEnterEntity\0"
    "hoverOverEntity\0hoverLeaveEntity\0"
    "enterEntity\0leaveEntity\0deletingEntity\0"
    "entityID\0addingEntity\0clearingEntities\0"
    "webEventReceived\0message\0canReplaceContent\0"
    "addEntity\0EntityItemProperties\0"
    "properties\0clientOnly\0addModelEntity\0"
    "name\0modelUrl\0textures\0shapeType\0"
    "dynamic\0collisionless\0grabbable\0"
    "glm::vec3\0position\0gravity\0cloneEntity\0"
    "entityIDToClone\0getEntityProperties\0"
    "EntityPropertyFlags\0desiredProperties\0"
    "editEntity\0deleteEntity\0callEntityMethod\0"
    "method\0params\0callEntityServerMethod\0"
    "callEntityClientMethod\0clientSessionID\0"
    "findClosestEntity\0center\0radius\0"
    "findEntities\0QVector<QUuid>\0"
    "findEntitiesInBox\0corner\0dimensions\0"
    "findEntitiesInFrustum\0frustum\0"
    "findEntitiesByType\0entityType\0"
    "findEntitiesByName\0entityName\0"
    "caseSensitiveSearch\0findRayIntersection\0"
    "RayToEntityIntersectionResult\0PickRay\0"
    "ray\0precisionPicking\0QScriptValue\0"
    "entityIdsToInclude\0entityIdsToDiscard\0"
    "visibleOnly\0collidableOnly\0"
    "findRayIntersectionVector\0"
    "QVector<EntityItemID>\0findRayIntersectionBlocking\0"
    "reloadServerScripts\0getServerScriptStatus\0"
    "callback\0queryPropertyMetadata\0property\0"
    "scopeOrCallback\0methodOrName\0"
    "setLightsArePickable\0value\0"
    "getLightsArePickable\0setZonesArePickable\0"
    "getZonesArePickable\0setDrawZoneBoundaries\0"
    "getDrawZoneBoundaries\0setVoxelSphere\0"
    "setVoxelCapsule\0start\0end\0setVoxel\0"
    "setAllVoxels\0setVoxelsInCuboid\0"
    "lowPosition\0cuboidSize\0voxelCoordsToWorldCoords\0"
    "voxelCoords\0worldCoordsToVoxelCoords\0"
    "worldCoords\0voxelCoordsToLocalCoords\0"
    "localCoordsToVoxelCoords\0localCoords\0"
    "setAllPoints\0QVector<glm::vec3>\0points\0"
    "appendPoint\0point\0dumpTree\0addAction\0"
    "actionTypeString\0arguments\0updateAction\0"
    "actionID\0deleteAction\0getActionIDs\0"
    "getActionArguments\0"
    "getAbsoluteJointTranslationInObjectFrame\0"
    "jointIndex\0getAbsoluteJointRotationInObjectFrame\0"
    "glm::quat\0setAbsoluteJointTranslationInObjectFrame\0"
    "translation\0setAbsoluteJointRotationInObjectFrame\0"
    "rotation\0getLocalJointTranslation\0"
    "getLocalJointRotation\0setLocalJointTranslation\0"
    "setLocalJointRotation\0setLocalJointTranslations\0"
    "translations\0setLocalJointRotations\0"
    "QVector<glm::quat>\0rotations\0"
    "setLocalJointsData\0getJointIndex\0"
    "getJointNames\0getChildrenIDs\0parentID\0"
    "getChildrenIDsOfJoint\0isChildOfParent\0"
    "childID\0getNestableType\0getKeyboardFocusEntity\0"
    "setKeyboardFocusEntity\0id\0"
    "sendMousePressOnEntity\0sendMouseMoveOnEntity\0"
    "sendMouseReleaseOnEntity\0sendClickDownOnEntity\0"
    "sendHoldingClickOnEntity\0"
    "sendClickReleaseOnEntity\0sendHoverEnterEntity\0"
    "sendHoverOverEntity\0sendHoverLeaveEntity\0"
    "wantsHandControllerPointerEvents\0"
    "emitScriptEvent\0AABoxIntersectsCapsule\0"
    "low\0getMeshes\0getEntityTransform\0"
    "glm::mat4\0getEntityLocalTransform\0"
    "getStaticCertificateJSON\0"
    "verifyStaticCertificateProperties\0"
    "handleEntityScriptCallMethodPacket\0"
    "QSharedPointer<ReceivedMessage>\0"
    "receivedMessage\0SharedNodePointer\0"
    "senderNode\0keyboardFocusEntity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     128,   14, // methods
       1, 1282, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  654,    2, 0x06 /* Public */,
       8,    1,  661,    2, 0x06 /* Public */,
      10,    1,  664,    2, 0x06 /* Public */,
      12,    1,  667,    2, 0x06 /* Public */,
      14,    1,  670,    2, 0x06 /* Public */,
      16,    1,  673,    2, 0x06 /* Public */,
      18,    1,  676,    2, 0x06 /* Public */,
      20,    2,  679,    2, 0x06 /* Public */,
      24,    2,  684,    2, 0x06 /* Public */,
      25,    2,  689,    2, 0x06 /* Public */,
      26,    2,  694,    2, 0x06 /* Public */,
      27,    0,  699,    2, 0x06 /* Public */,
      28,    0,  700,    2, 0x06 /* Public */,
      29,    2,  701,    2, 0x06 /* Public */,
      30,    2,  706,    2, 0x06 /* Public */,
      31,    2,  711,    2, 0x06 /* Public */,
      32,    2,  716,    2, 0x06 /* Public */,
      33,    2,  721,    2, 0x06 /* Public */,
      34,    2,  726,    2, 0x06 /* Public */,
      35,    1,  731,    2, 0x06 /* Public */,
      36,    1,  734,    2, 0x06 /* Public */,
      37,    1,  737,    2, 0x06 /* Public */,
      39,    1,  740,    2, 0x06 /* Public */,
      40,    0,  743,    2, 0x06 /* Public */,
      41,    2,  744,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  749,    2, 0x0a /* Public */,
      11,    0,  750,    2, 0x0a /* Public */,
      13,    0,  751,    2, 0x0a /* Public */,
      15,    0,  752,    2, 0x0a /* Public */,
      17,    0,  753,    2, 0x0a /* Public */,
      19,    0,  754,    2, 0x0a /* Public */,
      43,    0,  755,    2, 0x0a /* Public */,
      44,    2,  756,    2, 0x0a /* Public */,
      44,    1,  761,    2, 0x2a /* Public | MethodCloned */,
      48,    9,  764,    2, 0x0a /* Public */,
      59,    1,  783,    2, 0x0a /* Public */,
      61,    1,  786,    2, 0x0a /* Public */,
      61,    2,  789,    2, 0x0a /* Public */,
      64,    2,  794,    2, 0x0a /* Public */,
      65,    1,  799,    2, 0x0a /* Public */,
      66,    3,  802,    2, 0x0a /* Public */,
      66,    2,  809,    2, 0x2a /* Public | MethodCloned */,
      69,    3,  814,    2, 0x0a /* Public */,
      69,    2,  821,    2, 0x2a /* Public | MethodCloned */,
      70,    4,  826,    2, 0x0a /* Public */,
      70,    3,  835,    2, 0x2a /* Public | MethodCloned */,
      72,    2,  842,    2, 0x0a /* Public */,
      75,    2,  847,    2, 0x0a /* Public */,
      77,    2,  852,    2, 0x0a /* Public */,
      80,    1,  857,    2, 0x0a /* Public */,
      82,    3,  860,    2, 0x0a /* Public */,
      84,    4,  867,    2, 0x0a /* Public */,
      84,    3,  876,    2, 0x2a /* Public | MethodCloned */,
      87,    6,  883,    2, 0x0a /* Public */,
      87,    5,  896,    2, 0x2a /* Public | MethodCloned */,
      87,    4,  907,    2, 0x2a /* Public | MethodCloned */,
      87,    3,  916,    2, 0x2a /* Public | MethodCloned */,
      87,    2,  923,    2, 0x2a /* Public | MethodCloned */,
      87,    1,  928,    2, 0x2a /* Public | MethodCloned */,
      97,    6,  931,    2, 0x0a /* Public */,
      99,    4,  944,    2, 0x0a /* Public */,
      99,    3,  953,    2, 0x2a /* Public | MethodCloned */,
      99,    2,  960,    2, 0x2a /* Public | MethodCloned */,
      99,    1,  965,    2, 0x2a /* Public | MethodCloned */,
     100,    1,  968,    2, 0x0a /* Public */,
     101,    2,  971,    2, 0x0a /* Public */,
     103,    4,  976,    2, 0x0a /* Public */,
     103,    3,  985,    2, 0x2a /* Public | MethodCloned */,
     107,    1,  992,    2, 0x0a /* Public */,
     109,    0,  995,    2, 0x0a /* Public */,
     110,    1,  996,    2, 0x0a /* Public */,
     111,    0,  999,    2, 0x0a /* Public */,
     112,    1, 1000,    2, 0x0a /* Public */,
     113,    0, 1003,    2, 0x0a /* Public */,
     114,    4, 1004,    2, 0x0a /* Public */,
     115,    5, 1013,    2, 0x0a /* Public */,
     118,    3, 1024,    2, 0x0a /* Public */,
     119,    2, 1031,    2, 0x0a /* Public */,
     120,    4, 1036,    2, 0x0a /* Public */,
     123,    2, 1045,    2, 0x0a /* Public */,
     125,    2, 1050,    2, 0x0a /* Public */,
     127,    2, 1055,    2, 0x0a /* Public */,
     128,    2, 1060,    2, 0x0a /* Public */,
     130,    2, 1065,    2, 0x0a /* Public */,
     133,    2, 1070,    2, 0x0a /* Public */,
     135,    0, 1075,    2, 0x0a /* Public */,
     136,    3, 1076,    2, 0x0a /* Public */,
     139,    3, 1083,    2, 0x0a /* Public */,
     141,    2, 1090,    2, 0x0a /* Public */,
     142,    1, 1095,    2, 0x0a /* Public */,
     143,    2, 1098,    2, 0x0a /* Public */,
     144,    2, 1103,    2, 0x0a /* Public */,
     146,    2, 1108,    2, 0x0a /* Public */,
     148,    3, 1113,    2, 0x0a /* Public */,
     150,    3, 1120,    2, 0x0a /* Public */,
     152,    2, 1127,    2, 0x0a /* Public */,
     153,    2, 1132,    2, 0x0a /* Public */,
     154,    3, 1137,    2, 0x0a /* Public */,
     155,    3, 1144,    2, 0x0a /* Public */,
     156,    2, 1151,    2, 0x0a /* Public */,
     158,    2, 1156,    2, 0x0a /* Public */,
     161,    3, 1161,    2, 0x0a /* Public */,
     162,    2, 1168,    2, 0x0a /* Public */,
     163,    1, 1173,    2, 0x0a /* Public */,
     164,    1, 1176,    2, 0x0a /* Public */,
     166,    2, 1179,    2, 0x0a /* Public */,
     167,    2, 1184,    2, 0x0a /* Public */,
     169,    1, 1189,    2, 0x0a /* Public */,
     170,    0, 1192,    2, 0x0a /* Public */,
     171,    1, 1193,    2, 0x0a /* Public */,
     173,    2, 1196,    2, 0x0a /* Public */,
     174,    2, 1201,    2, 0x0a /* Public */,
     175,    2, 1206,    2, 0x0a /* Public */,
     176,    2, 1211,    2, 0x0a /* Public */,
     177,    2, 1216,    2, 0x0a /* Public */,
     178,    2, 1221,    2, 0x0a /* Public */,
     179,    2, 1226,    2, 0x0a /* Public */,
     180,    2, 1231,    2, 0x0a /* Public */,
     181,    2, 1236,    2, 0x0a /* Public */,
     182,    1, 1241,    2, 0x0a /* Public */,
     183,    2, 1244,    2, 0x0a /* Public */,
     184,    5, 1249,    2, 0x0a /* Public */,
     186,    2, 1260,    2, 0x0a /* Public */,
     187,    1, 1265,    2, 0x0a /* Public */,
     189,    1, 1268,    2, 0x0a /* Public */,
     190,    1, 1271,    2, 0x0a /* Public */,
     191,    1, 1274,    2, 0x0a /* Public */,
     192,    2, 1277,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,   21,   23,
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, 0x80000000 | 3,   21,
    QMetaType::Void, 0x80000000 | 3,   38,
    QMetaType::Void, 0x80000000 | 3,   38,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,   21,   42,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QUuid, 0x80000000 | 45, QMetaType::Bool,   46,   47,
    QMetaType::QUuid, 0x80000000 | 45,   46,
    QMetaType::QUuid, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 56, 0x80000000 | 56,   49,   50,   51,   52,   53,   54,   55,   57,   58,
    QMetaType::QUuid, QMetaType::QUuid,   60,
    0x80000000 | 45, QMetaType::QUuid,   38,
    0x80000000 | 45, QMetaType::QUuid, 0x80000000 | 62,   38,   63,
    QMetaType::QUuid, QMetaType::QUuid, 0x80000000 | 45,   38,   46,
    QMetaType::Void, QMetaType::QUuid,   38,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::QStringList,   38,   67,   68,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,   38,   67,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString, QMetaType::QStringList,   38,   67,   68,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QString,   38,   67,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid, QMetaType::QString, QMetaType::QStringList,   71,   38,   67,   68,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid, QMetaType::QString,   71,   38,   67,
    QMetaType::QUuid, 0x80000000 | 56, QMetaType::Float,   73,   74,
    0x80000000 | 76, 0x80000000 | 56, QMetaType::Float,   73,   74,
    0x80000000 | 76, 0x80000000 | 56, 0x80000000 | 56,   78,   79,
    0x80000000 | 76, QMetaType::QVariantMap,   81,
    0x80000000 | 76, QMetaType::QString, 0x80000000 | 56, QMetaType::Float,   83,   73,   74,
    0x80000000 | 76, QMetaType::QString, 0x80000000 | 56, QMetaType::Float, QMetaType::Bool,   85,   73,   74,   86,
    0x80000000 | 76, QMetaType::QString, 0x80000000 | 56, QMetaType::Float,   85,   73,   74,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92, 0x80000000 | 92, QMetaType::Bool, QMetaType::Bool,   90,   91,   93,   94,   95,   96,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92, 0x80000000 | 92, QMetaType::Bool,   90,   91,   93,   94,   95,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92, 0x80000000 | 92,   90,   91,   93,   94,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92,   90,   91,   93,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool,   90,   91,
    0x80000000 | 88, 0x80000000 | 89,   90,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 98, 0x80000000 | 98, QMetaType::Bool, QMetaType::Bool,   90,   91,   93,   94,   95,   96,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92, 0x80000000 | 92,   90,   91,   93,   94,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool, 0x80000000 | 92,   90,   91,   93,
    0x80000000 | 88, 0x80000000 | 89, QMetaType::Bool,   90,   91,
    0x80000000 | 88, 0x80000000 | 89,   90,
    QMetaType::Bool, QMetaType::QUuid,   38,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 92,   38,  102,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 92, 0x80000000 | 92, 0x80000000 | 92,   38,  104,  105,  106,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 92, 0x80000000 | 92,   38,  104,  105,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  108,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 56, QMetaType::Float, QMetaType::Int,   38,   73,   74,  108,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 56, 0x80000000 | 56, QMetaType::Float, QMetaType::Int,   38,  116,  117,   74,  108,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 56, QMetaType::Int,   38,   57,  108,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int,   38,  108,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 56, 0x80000000 | 56, QMetaType::Int,   38,  121,  122,  108,
    0x80000000 | 56, QMetaType::QUuid, 0x80000000 | 56,   38,  124,
    0x80000000 | 56, QMetaType::QUuid, 0x80000000 | 56,   38,  126,
    0x80000000 | 56, QMetaType::QUuid, 0x80000000 | 56,   38,  124,
    0x80000000 | 56, QMetaType::QUuid, 0x80000000 | 56,   38,  129,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 131,   38,  132,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 56,   38,  134,
    QMetaType::Void,
    QMetaType::QUuid, QMetaType::QString, QMetaType::QUuid, QMetaType::QVariantMap,  137,   38,  138,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::QUuid, QMetaType::QVariantMap,   38,  140,  138,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::QUuid,   38,  140,
    0x80000000 | 76, QMetaType::QUuid,   38,
    QMetaType::QVariantMap, QMetaType::QUuid, QMetaType::QUuid,   38,  140,
    0x80000000 | 56, QMetaType::QUuid, QMetaType::Int,   38,  145,
    0x80000000 | 147, QMetaType::QUuid, QMetaType::Int,   38,  145,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int, 0x80000000 | 56,   38,  145,  149,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int, 0x80000000 | 147,   38,  145,  151,
    0x80000000 | 56, QMetaType::QUuid, QMetaType::Int,   38,  145,
    0x80000000 | 147, QMetaType::QUuid, QMetaType::Int,   38,  145,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int, 0x80000000 | 56,   38,  145,  149,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::Int, 0x80000000 | 147,   38,  145,  151,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 131,   38,  157,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 159,   38,  160,
    QMetaType::Bool, QMetaType::QUuid, 0x80000000 | 159, 0x80000000 | 131,   38,  160,  157,
    QMetaType::Int, QMetaType::QUuid, QMetaType::QString,   38,   49,
    QMetaType::QStringList, QMetaType::QUuid,   38,
    0x80000000 | 76, QMetaType::QUuid,  165,
    0x80000000 | 76, QMetaType::QUuid, QMetaType::Int,  165,  145,
    QMetaType::Bool, QMetaType::QUuid, QMetaType::QUuid,  168,  165,
    QMetaType::QString, QMetaType::QUuid,   38,
    QMetaType::QUuid,
    QMetaType::Void, 0x80000000 | 3,  172,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 22,  172,   23,
    QMetaType::Bool, QMetaType::QUuid,  172,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,   38,   42,
    QMetaType::Bool, 0x80000000 | 56, 0x80000000 | 56, 0x80000000 | 56, 0x80000000 | 56, QMetaType::Float,  185,   79,  116,  117,   74,
    QMetaType::Void, QMetaType::QUuid, 0x80000000 | 92,   38,  102,
    0x80000000 | 188, QMetaType::QUuid,   38,
    0x80000000 | 188, QMetaType::QUuid,   38,
    QMetaType::QString, QMetaType::QUuid,   38,
    QMetaType::Bool, QMetaType::QUuid,   38,
    QMetaType::Void, 0x80000000 | 193, 0x80000000 | 195,  194,  196,

 // properties: name, type, flags
     197, QMetaType::QUuid, 0x00095103,

       0        // eod
};

void EntityScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityScriptingInterface *_t = static_cast<EntityScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collisionWithEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const EntityItemID(*)>(_a[2])),(*reinterpret_cast< const Collision(*)>(_a[3]))); break;
        case 1: _t->canAdjustLocksChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->canRezChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canRezTmpChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canRezCertifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->canRezTmpCertifiedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->canWriteAssetsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mousePressOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 8: _t->mouseDoublePressOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 9: _t->mouseMoveOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 10: _t->mouseReleaseOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 11: _t->mousePressOffEntity(); break;
        case 12: _t->mouseDoublePressOffEntity(); break;
        case 13: _t->clickDownOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 14: _t->holdingClickOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 15: _t->clickReleaseOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 16: _t->hoverEnterEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 17: _t->hoverOverEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 18: _t->hoverLeaveEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 19: _t->enterEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 20: _t->leaveEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 21: _t->deletingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 22: _t->addingEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 23: _t->clearingEntities(); break;
        case 24: _t->webEventReceived((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 25: { bool _r = _t->canAdjustLocks();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->canRez();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->canRezTmp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->canRezCertified();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->canRezTmpCertified();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->canWriteAssets();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->canReplaceContent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { QUuid _r = _t->addEntity((*reinterpret_cast< const EntityItemProperties(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 33: { QUuid _r = _t->addEntity((*reinterpret_cast< const EntityItemProperties(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 34: { QUuid _r = _t->addModelEntity((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])),(*reinterpret_cast< const glm::vec3(*)>(_a[8])),(*reinterpret_cast< const glm::vec3(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 35: { QUuid _r = _t->cloneEntity((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 36: { EntityItemProperties _r = _t->getEntityProperties((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< EntityItemProperties*>(_a[0]) = std::move(_r); }  break;
        case 37: { EntityItemProperties _r = _t->getEntityProperties((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< EntityPropertyFlags(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< EntityItemProperties*>(_a[0]) = std::move(_r); }  break;
        case 38: { QUuid _r = _t->editEntity((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const EntityItemProperties(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->deleteEntity((*reinterpret_cast< QUuid(*)>(_a[1]))); break;
        case 40: _t->callEntityMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 41: _t->callEntityMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 42: _t->callEntityServerMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 43: _t->callEntityServerMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 44: _t->callEntityClientMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QUuid(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QStringList(*)>(_a[4]))); break;
        case 45: _t->callEntityClientMethod((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QUuid(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 46: { QUuid _r = _t->findClosestEntity((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 47: { QVector<QUuid> _r = _t->findEntities((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 48: { QVector<QUuid> _r = _t->findEntitiesInBox((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 49: { QVector<QUuid> _r = _t->findEntitiesInFrustum((*reinterpret_cast< QVariantMap(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 50: { QVector<QUuid> _r = _t->findEntitiesByType((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 51: { QVector<QUuid> _r = _t->findEntitiesByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 52: { QVector<QUuid> _r = _t->findEntitiesByName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 53: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 54: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 55: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 56: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 57: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 58: { RayToEntityIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 59: { RayToEntityIntersectionResult _r = _t->findRayIntersectionVector((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[3])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< bool(*)>(_a[6])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 60: { RayToEntityIntersectionResult _r = _t->findRayIntersectionBlocking((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])),(*reinterpret_cast< const QScriptValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 61: { RayToEntityIntersectionResult _r = _t->findRayIntersectionBlocking((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 62: { RayToEntityIntersectionResult _r = _t->findRayIntersectionBlocking((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 63: { RayToEntityIntersectionResult _r = _t->findRayIntersectionBlocking((*reinterpret_cast< const PickRay(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< RayToEntityIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 64: { bool _r = _t->reloadServerScripts((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 65: { bool _r = _t->getServerScriptStatus((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 66: { bool _r = _t->queryPropertyMetadata((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2])),(*reinterpret_cast< QScriptValue(*)>(_a[3])),(*reinterpret_cast< QScriptValue(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 67: { bool _r = _t->queryPropertyMetadata((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2])),(*reinterpret_cast< QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->setLightsArePickable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 69: { bool _r = _t->getLightsArePickable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 70: _t->setZonesArePickable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 71: { bool _r = _t->getZonesArePickable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 72: _t->setDrawZoneBoundaries((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 73: { bool _r = _t->getDrawZoneBoundaries();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 74: { bool _r = _t->setVoxelSphere((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 75: { bool _r = _t->setVoxelCapsule((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: { bool _r = _t->setVoxel((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 77: { bool _r = _t->setAllVoxels((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 78: { bool _r = _t->setVoxelsInCuboid((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 79: { glm::vec3 _r = _t->voxelCoordsToWorldCoords((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 80: { glm::vec3 _r = _t->worldCoordsToVoxelCoords((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 81: { glm::vec3 _r = _t->voxelCoordsToLocalCoords((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 82: { glm::vec3 _r = _t->localCoordsToVoxelCoords((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 83: { bool _r = _t->setAllPoints((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: { bool _r = _t->appendPoint((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 85: _t->dumpTree(); break;
        case 86: { QUuid _r = _t->addAction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 87: { bool _r = _t->updateAction((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 88: { bool _r = _t->deleteAction((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 89: { QVector<QUuid> _r = _t->getActionIDs((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 90: { QVariantMap _r = _t->getActionArguments((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 91: { glm::vec3 _r = _t->getAbsoluteJointTranslationInObjectFrame((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 92: { glm::quat _r = _t->getAbsoluteJointRotationInObjectFrame((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 93: { bool _r = _t->setAbsoluteJointTranslationInObjectFrame((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< glm::vec3(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 94: { bool _r = _t->setAbsoluteJointRotationInObjectFrame((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< glm::quat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: { glm::vec3 _r = _t->getLocalJointTranslation((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 96: { glm::quat _r = _t->getLocalJointRotation((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 97: { bool _r = _t->setLocalJointTranslation((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< glm::vec3(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 98: { bool _r = _t->setLocalJointRotation((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< glm::quat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 99: { bool _r = _t->setLocalJointTranslations((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 100: { bool _r = _t->setLocalJointRotations((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QVector<glm::quat>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 101: { bool _r = _t->setLocalJointsData((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QVector<glm::quat>(*)>(_a[2])),(*reinterpret_cast< const QVector<glm::vec3>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 102: { int _r = _t->getJointIndex((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 103: { QStringList _r = _t->getJointNames((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 104: { QVector<QUuid> _r = _t->getChildrenIDs((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 105: { QVector<QUuid> _r = _t->getChildrenIDsOfJoint((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 106: { bool _r = _t->isChildOfParent((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QUuid(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 107: { QString _r = _t->getNestableType((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 108: { QUuid _r = _t->getKeyboardFocusEntity();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 109: _t->setKeyboardFocusEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 110: _t->sendMousePressOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 111: _t->sendMouseMoveOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 112: _t->sendMouseReleaseOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 113: _t->sendClickDownOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 114: _t->sendHoldingClickOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 115: _t->sendClickReleaseOnEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 116: _t->sendHoverEnterEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 117: _t->sendHoverOverEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 118: _t->sendHoverLeaveEntity((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const PointerEvent(*)>(_a[2]))); break;
        case 119: { bool _r = _t->wantsHandControllerPointerEvents((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 120: _t->emitScriptEvent((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        case 121: { bool _r = _t->AABoxIntersectsCapsule((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::vec3(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 122: _t->getMeshes((*reinterpret_cast< QUuid(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2]))); break;
        case 123: { glm::mat4 _r = _t->getEntityTransform((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 124: { glm::mat4 _r = _t->getEntityLocalTransform((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 125: { QString _r = _t->getStaticCertificateJSON((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 126: { bool _r = _t->verifyStaticCertificateProperties((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 127: _t->handleEntityScriptCallMethodPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemProperties >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemProperties >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 8:
            case 7:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityPropertyFlags >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemProperties >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 48:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 50:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 52:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 53:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 54:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 55:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<EntityItemID> >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 61:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 75:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 81:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 82:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 83:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::vec3> >(); break;
            }
            break;
        case 84:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 93:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 94:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 97:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 98:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 99:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::vec3> >(); break;
            }
            break;
        case 100:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::quat> >(); break;
            }
            break;
        case 101:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::quat> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<glm::vec3> >(); break;
            }
            break;
        case 109:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 110:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 115:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 120:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 121:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 127:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const EntityItemID & , const Collision & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::collisionWithEntity)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canAdjustLocksChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canRezChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canRezTmpChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canRezCertifiedChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canRezTmpCertifiedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::canWriteAssetsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mousePressOnEntity)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mouseDoublePressOnEntity)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mouseMoveOnEntity)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mouseReleaseOnEntity)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mousePressOffEntity)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::mouseDoublePressOffEntity)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::clickDownOnEntity)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::holdingClickOnEntity)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::clickReleaseOnEntity)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::hoverEnterEntity)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::hoverOverEntity)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const PointerEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::hoverLeaveEntity)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::enterEntity)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::leaveEntity)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::deletingEntity)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::addingEntity)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::clearingEntities)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (EntityScriptingInterface::*)(const EntityItemID & , const QVariant & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptingInterface::webEventReceived)) {
                *result = 24;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EntityScriptingInterface *_t = static_cast<EntityScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUuid*>(_v) = _t->getKeyboardFocusEntity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EntityScriptingInterface *_t = static_cast<EntityScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeyboardFocusEntity(*reinterpret_cast< QUuid*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EntityScriptingInterface::staticMetaObject = {
    { &OctreeScriptingInterface::staticMetaObject, qt_meta_stringdata_EntityScriptingInterface.data,
      qt_meta_data_EntityScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return OctreeScriptingInterface::qt_metacast(_clname);
}

int EntityScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OctreeScriptingInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void EntityScriptingInterface::collisionWithEntity(const EntityItemID & _t1, const EntityItemID & _t2, const Collision & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EntityScriptingInterface::canAdjustLocksChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EntityScriptingInterface::canRezChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EntityScriptingInterface::canRezTmpChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EntityScriptingInterface::canRezCertifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void EntityScriptingInterface::canRezTmpCertifiedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void EntityScriptingInterface::canWriteAssetsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void EntityScriptingInterface::mousePressOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void EntityScriptingInterface::mouseDoublePressOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void EntityScriptingInterface::mouseMoveOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void EntityScriptingInterface::mouseReleaseOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void EntityScriptingInterface::mousePressOffEntity()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void EntityScriptingInterface::mouseDoublePressOffEntity()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void EntityScriptingInterface::clickDownOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void EntityScriptingInterface::holdingClickOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void EntityScriptingInterface::clickReleaseOnEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void EntityScriptingInterface::hoverEnterEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void EntityScriptingInterface::hoverOverEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void EntityScriptingInterface::hoverLeaveEntity(const EntityItemID & _t1, const PointerEvent & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void EntityScriptingInterface::enterEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void EntityScriptingInterface::leaveEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void EntityScriptingInterface::deletingEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void EntityScriptingInterface::addingEntity(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void EntityScriptingInterface::clearingEntities()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void EntityScriptingInterface::webEventReceived(const EntityItemID & _t1, const QVariant & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
