/****************************************************************************
** Meta object code from reading C++ file 'MyAvatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatar/MyAvatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyAvatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyAvatar_t {
    QByteArrayData data[255];
    char stringdata0[4427];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyAvatar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyAvatar_t qt_meta_stringdata_MyAvatar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "MyAvatar"
QT_MOC_LITERAL(1, 9, 24), // "audioListenerModeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "transformChanged"
QT_MOC_LITERAL(4, 52, 20), // "newCollisionSoundURL"
QT_MOC_LITERAL(5, 73, 3), // "url"
QT_MOC_LITERAL(6, 77, 19), // "collisionWithEntity"
QT_MOC_LITERAL(7, 97, 9), // "Collision"
QT_MOC_LITERAL(8, 107, 9), // "collision"
QT_MOC_LITERAL(9, 117, 24), // "collisionsEnabledChanged"
QT_MOC_LITERAL(10, 142, 7), // "enabled"
QT_MOC_LITERAL(11, 150, 19), // "animGraphUrlChanged"
QT_MOC_LITERAL(12, 170, 13), // "energyChanged"
QT_MOC_LITERAL(13, 184, 9), // "newEnergy"
QT_MOC_LITERAL(14, 194, 14), // "positionGoneTo"
QT_MOC_LITERAL(15, 209, 14), // "onLoadComplete"
QT_MOC_LITERAL(16, 224, 8), // "wentAway"
QT_MOC_LITERAL(17, 233, 10), // "wentActive"
QT_MOC_LITERAL(18, 244, 15), // "skeletonChanged"
QT_MOC_LITERAL(19, 260, 19), // "dominantHandChanged"
QT_MOC_LITERAL(20, 280, 4), // "hand"
QT_MOC_LITERAL(21, 285, 25), // "sensorToWorldScaleChanged"
QT_MOC_LITERAL(22, 311, 18), // "sensorToWorldScale"
QT_MOC_LITERAL(23, 330, 18), // "attachmentsChanged"
QT_MOC_LITERAL(24, 349, 12), // "scaleChanged"
QT_MOC_LITERAL(25, 362, 29), // "shouldDisableHandTouchChanged"
QT_MOC_LITERAL(26, 392, 13), // "shouldDisable"
QT_MOC_LITERAL(27, 406, 28), // "disableHandTouchForIDChanged"
QT_MOC_LITERAL(28, 435, 8), // "entityID"
QT_MOC_LITERAL(29, 444, 7), // "disable"
QT_MOC_LITERAL(30, 452, 12), // "increaseSize"
QT_MOC_LITERAL(31, 465, 12), // "decreaseSize"
QT_MOC_LITERAL(32, 478, 9), // "resetSize"
QT_MOC_LITERAL(33, 488, 15), // "animGraphLoaded"
QT_MOC_LITERAL(34, 504, 10), // "setGravity"
QT_MOC_LITERAL(35, 515, 7), // "gravity"
QT_MOC_LITERAL(36, 523, 10), // "getGravity"
QT_MOC_LITERAL(37, 534, 16), // "goToFeetLocation"
QT_MOC_LITERAL(38, 551, 9), // "glm::vec3"
QT_MOC_LITERAL(39, 561, 11), // "newPosition"
QT_MOC_LITERAL(40, 573, 14), // "hasOrientation"
QT_MOC_LITERAL(41, 588, 9), // "glm::quat"
QT_MOC_LITERAL(42, 598, 14), // "newOrientation"
QT_MOC_LITERAL(43, 613, 18), // "shouldFaceLocation"
QT_MOC_LITERAL(44, 632, 12), // "goToLocation"
QT_MOC_LITERAL(45, 645, 15), // "withSafeLanding"
QT_MOC_LITERAL(46, 661, 10), // "properties"
QT_MOC_LITERAL(47, 672, 31), // "goToLocationAndEnableCollisions"
QT_MOC_LITERAL(48, 704, 11), // "safeLanding"
QT_MOC_LITERAL(49, 716, 8), // "position"
QT_MOC_LITERAL(50, 725, 31), // "restrictScaleFromDomainSettings"
QT_MOC_LITERAL(51, 757, 20), // "domainSettingsObject"
QT_MOC_LITERAL(52, 778, 21), // "clearScaleRestriction"
QT_MOC_LITERAL(53, 800, 9), // "addThrust"
QT_MOC_LITERAL(54, 810, 9), // "newThrust"
QT_MOC_LITERAL(55, 820, 9), // "getThrust"
QT_MOC_LITERAL(56, 830, 9), // "setThrust"
QT_MOC_LITERAL(57, 840, 28), // "updateMotionBehaviorFromMenu"
QT_MOC_LITERAL(58, 869, 13), // "setToggleHips"
QT_MOC_LITERAL(59, 883, 10), // "followHead"
QT_MOC_LITERAL(60, 894, 31), // "setEnableDebugDrawBaseOfSupport"
QT_MOC_LITERAL(61, 926, 9), // "isEnabled"
QT_MOC_LITERAL(62, 936, 29), // "setEnableDebugDrawDefaultPose"
QT_MOC_LITERAL(63, 966, 26), // "setEnableDebugDrawAnimPose"
QT_MOC_LITERAL(64, 993, 26), // "setEnableDebugDrawPosition"
QT_MOC_LITERAL(65, 1020, 33), // "setEnableDebugDrawHandControl..."
QT_MOC_LITERAL(66, 1054, 37), // "setEnableDebugDrawSensorToWor..."
QT_MOC_LITERAL(67, 1092, 27), // "setEnableDebugDrawIKTargets"
QT_MOC_LITERAL(68, 1120, 31), // "setEnableDebugDrawIKConstraints"
QT_MOC_LITERAL(69, 1152, 26), // "setEnableDebugDrawIKChains"
QT_MOC_LITERAL(70, 1179, 35), // "setEnableDebugDrawDetailedCol..."
QT_MOC_LITERAL(71, 1215, 20), // "getEnableMeshVisible"
QT_MOC_LITERAL(72, 1236, 20), // "setEnableMeshVisible"
QT_MOC_LITERAL(73, 1257, 26), // "setEnableInverseKinematics"
QT_MOC_LITERAL(74, 1284, 23), // "getAnimGraphOverrideUrl"
QT_MOC_LITERAL(75, 1308, 23), // "setAnimGraphOverrideUrl"
QT_MOC_LITERAL(76, 1332, 5), // "value"
QT_MOC_LITERAL(77, 1338, 15), // "getAnimGraphUrl"
QT_MOC_LITERAL(78, 1354, 15), // "setAnimGraphUrl"
QT_MOC_LITERAL(79, 1370, 19), // "getPositionForAudio"
QT_MOC_LITERAL(80, 1390, 22), // "getOrientationForAudio"
QT_MOC_LITERAL(81, 1413, 13), // "setModelScale"
QT_MOC_LITERAL(82, 1427, 5), // "scale"
QT_MOC_LITERAL(83, 1433, 11), // "leaveDomain"
QT_MOC_LITERAL(84, 1445, 27), // "updateCollisionCapsuleCache"
QT_MOC_LITERAL(85, 1473, 19), // "resetSensorsAndBody"
QT_MOC_LITERAL(86, 1493, 10), // "centerBody"
QT_MOC_LITERAL(87, 1504, 24), // "clearIKJointLimitHistory"
QT_MOC_LITERAL(88, 1529, 17), // "setOrientationVar"
QT_MOC_LITERAL(89, 1547, 17), // "newOrientationVar"
QT_MOC_LITERAL(90, 1565, 17), // "getOrientationVar"
QT_MOC_LITERAL(91, 1583, 21), // "getDefaultEyePosition"
QT_MOC_LITERAL(92, 1605, 17), // "overrideAnimation"
QT_MOC_LITERAL(93, 1623, 3), // "fps"
QT_MOC_LITERAL(94, 1627, 4), // "loop"
QT_MOC_LITERAL(95, 1632, 10), // "firstFrame"
QT_MOC_LITERAL(96, 1643, 9), // "lastFrame"
QT_MOC_LITERAL(97, 1653, 16), // "restoreAnimation"
QT_MOC_LITERAL(98, 1670, 17), // "getAnimationRoles"
QT_MOC_LITERAL(99, 1688, 21), // "overrideRoleAnimation"
QT_MOC_LITERAL(100, 1710, 4), // "role"
QT_MOC_LITERAL(101, 1715, 20), // "restoreRoleAnimation"
QT_MOC_LITERAL(102, 1736, 24), // "addAnimationStateHandler"
QT_MOC_LITERAL(103, 1761, 12), // "QScriptValue"
QT_MOC_LITERAL(104, 1774, 7), // "handler"
QT_MOC_LITERAL(105, 1782, 14), // "propertiesList"
QT_MOC_LITERAL(106, 1797, 27), // "removeAnimationStateHandler"
QT_MOC_LITERAL(107, 1825, 11), // "getSnapTurn"
QT_MOC_LITERAL(108, 1837, 11), // "setSnapTurn"
QT_MOC_LITERAL(109, 1849, 2), // "on"
QT_MOC_LITERAL(110, 1852, 15), // "setDominantHand"
QT_MOC_LITERAL(111, 1868, 15), // "getDominantHand"
QT_MOC_LITERAL(112, 1884, 30), // "setCenterOfGravityModelEnabled"
QT_MOC_LITERAL(113, 1915, 30), // "getCenterOfGravityModelEnabled"
QT_MOC_LITERAL(114, 1946, 25), // "setHMDLeanRecenterEnabled"
QT_MOC_LITERAL(115, 1972, 25), // "getHMDLeanRecenterEnabled"
QT_MOC_LITERAL(116, 1998, 22), // "requestEnableHandTouch"
QT_MOC_LITERAL(117, 2021, 23), // "requestDisableHandTouch"
QT_MOC_LITERAL(118, 2045, 21), // "disableHandTouchForID"
QT_MOC_LITERAL(119, 2067, 20), // "enableHandTouchForID"
QT_MOC_LITERAL(120, 2088, 14), // "getRawDriveKey"
QT_MOC_LITERAL(121, 2103, 9), // "DriveKeys"
QT_MOC_LITERAL(122, 2113, 3), // "key"
QT_MOC_LITERAL(123, 2117, 15), // "disableDriveKey"
QT_MOC_LITERAL(124, 2133, 14), // "enableDriveKey"
QT_MOC_LITERAL(125, 2148, 18), // "isDriveKeyDisabled"
QT_MOC_LITERAL(126, 2167, 23), // "triggerVerticalRecenter"
QT_MOC_LITERAL(127, 2191, 25), // "triggerHorizontalRecenter"
QT_MOC_LITERAL(128, 2217, 23), // "triggerRotationRecenter"
QT_MOC_LITERAL(129, 2241, 25), // "isRecenteringHorizontally"
QT_MOC_LITERAL(130, 2267, 15), // "getHeadPosition"
QT_MOC_LITERAL(131, 2283, 15), // "getHeadFinalYaw"
QT_MOC_LITERAL(132, 2299, 16), // "getHeadFinalRoll"
QT_MOC_LITERAL(133, 2316, 17), // "getHeadFinalPitch"
QT_MOC_LITERAL(134, 2334, 17), // "getHeadDeltaPitch"
QT_MOC_LITERAL(135, 2352, 14), // "getEyePosition"
QT_MOC_LITERAL(136, 2367, 23), // "getTargetAvatarPosition"
QT_MOC_LITERAL(137, 2391, 15), // "getTargetAvatar"
QT_MOC_LITERAL(138, 2407, 17), // "ScriptAvatarData*"
QT_MOC_LITERAL(139, 2425, 19), // "getLeftHandPosition"
QT_MOC_LITERAL(140, 2445, 20), // "getRightHandPosition"
QT_MOC_LITERAL(141, 2466, 22), // "getLeftHandTipPosition"
QT_MOC_LITERAL(142, 2489, 23), // "getRightHandTipPosition"
QT_MOC_LITERAL(143, 2513, 15), // "getLeftHandPose"
QT_MOC_LITERAL(144, 2529, 16), // "controller::Pose"
QT_MOC_LITERAL(145, 2546, 16), // "getRightHandPose"
QT_MOC_LITERAL(146, 2563, 18), // "getLeftHandTipPose"
QT_MOC_LITERAL(147, 2582, 19), // "getRightHandTipPose"
QT_MOC_LITERAL(148, 2602, 17), // "worldToJointPoint"
QT_MOC_LITERAL(149, 2620, 10), // "jointIndex"
QT_MOC_LITERAL(150, 2631, 21), // "worldToJointDirection"
QT_MOC_LITERAL(151, 2653, 9), // "direction"
QT_MOC_LITERAL(152, 2663, 20), // "worldToJointRotation"
QT_MOC_LITERAL(153, 2684, 8), // "rotation"
QT_MOC_LITERAL(154, 2693, 17), // "jointToWorldPoint"
QT_MOC_LITERAL(155, 2711, 21), // "jointToWorldDirection"
QT_MOC_LITERAL(156, 2733, 20), // "jointToWorldRotation"
QT_MOC_LITERAL(157, 2754, 8), // "pinJoint"
QT_MOC_LITERAL(158, 2763, 5), // "index"
QT_MOC_LITERAL(159, 2769, 11), // "orientation"
QT_MOC_LITERAL(160, 2781, 15), // "clearPinOnJoint"
QT_MOC_LITERAL(161, 2797, 21), // "getIKErrorOnLastSolve"
QT_MOC_LITERAL(162, 2819, 16), // "useFullAvatarURL"
QT_MOC_LITERAL(163, 2836, 13), // "fullAvatarURL"
QT_MOC_LITERAL(164, 2850, 9), // "modelName"
QT_MOC_LITERAL(165, 2860, 31), // "getFullAvatarURLFromPreferences"
QT_MOC_LITERAL(166, 2892, 22), // "getFullAvatarModelName"
QT_MOC_LITERAL(167, 2915, 24), // "getAvatarEntitiesVariant"
QT_MOC_LITERAL(168, 2940, 8), // "isFlying"
QT_MOC_LITERAL(169, 2949, 7), // "isInAir"
QT_MOC_LITERAL(170, 2957, 16), // "setFlyingEnabled"
QT_MOC_LITERAL(171, 2974, 16), // "getFlyingEnabled"
QT_MOC_LITERAL(172, 2991, 20), // "setFlyingDesktopPref"
QT_MOC_LITERAL(173, 3012, 20), // "getFlyingDesktopPref"
QT_MOC_LITERAL(174, 3033, 16), // "setFlyingHMDPref"
QT_MOC_LITERAL(175, 3050, 16), // "getFlyingHMDPref"
QT_MOC_LITERAL(176, 3067, 14), // "getAvatarScale"
QT_MOC_LITERAL(177, 3082, 14), // "setAvatarScale"
QT_MOC_LITERAL(178, 3097, 20), // "setCollisionsEnabled"
QT_MOC_LITERAL(179, 3118, 20), // "getCollisionsEnabled"
QT_MOC_LITERAL(180, 3139, 19), // "getCollisionCapsule"
QT_MOC_LITERAL(181, 3159, 29), // "setCharacterControllerEnabled"
QT_MOC_LITERAL(182, 3189, 29), // "getCharacterControllerEnabled"
QT_MOC_LITERAL(183, 3219, 4), // "isUp"
QT_MOC_LITERAL(184, 3224, 6), // "isDown"
QT_MOC_LITERAL(185, 3231, 11), // "qmlPosition"
QT_MOC_LITERAL(186, 3243, 19), // "shouldRenderLocally"
QT_MOC_LITERAL(187, 3263, 13), // "motorVelocity"
QT_MOC_LITERAL(188, 3277, 14), // "motorTimescale"
QT_MOC_LITERAL(189, 3292, 19), // "motorReferenceFrame"
QT_MOC_LITERAL(190, 3312, 9), // "motorMode"
QT_MOC_LITERAL(191, 3322, 17), // "collisionSoundURL"
QT_MOC_LITERAL(192, 3340, 17), // "audioListenerMode"
QT_MOC_LITERAL(193, 3358, 17), // "AudioListenerMode"
QT_MOC_LITERAL(194, 3376, 20), // "customListenPosition"
QT_MOC_LITERAL(195, 3397, 23), // "customListenOrientation"
QT_MOC_LITERAL(196, 3421, 21), // "audioListenerModeHead"
QT_MOC_LITERAL(197, 3443, 23), // "audioListenerModeCamera"
QT_MOC_LITERAL(198, 3467, 23), // "audioListenerModeCustom"
QT_MOC_LITERAL(199, 3491, 22), // "hasScriptedBlendshapes"
QT_MOC_LITERAL(200, 3514, 30), // "hasProceduralBlinkFaceMovement"
QT_MOC_LITERAL(201, 3545, 28), // "hasProceduralEyeFaceMovement"
QT_MOC_LITERAL(202, 3574, 27), // "hasAudioEnabledFaceMovement"
QT_MOC_LITERAL(203, 3602, 28), // "rotationRecenterFilterLength"
QT_MOC_LITERAL(204, 3631, 17), // "rotationThreshold"
QT_MOC_LITERAL(205, 3649, 23), // "enableStepResetRotation"
QT_MOC_LITERAL(206, 3673, 23), // "enableDrawAverageFacing"
QT_MOC_LITERAL(207, 3697, 16), // "leftHandPosition"
QT_MOC_LITERAL(208, 3714, 17), // "rightHandPosition"
QT_MOC_LITERAL(209, 3732, 19), // "leftHandTipPosition"
QT_MOC_LITERAL(210, 3752, 20), // "rightHandTipPosition"
QT_MOC_LITERAL(211, 3773, 12), // "leftHandPose"
QT_MOC_LITERAL(212, 3786, 13), // "rightHandPose"
QT_MOC_LITERAL(213, 3800, 15), // "leftHandTipPose"
QT_MOC_LITERAL(214, 3816, 16), // "rightHandTipPose"
QT_MOC_LITERAL(215, 3833, 6), // "energy"
QT_MOC_LITERAL(216, 3840, 6), // "isAway"
QT_MOC_LITERAL(217, 3847, 27), // "centerOfGravityModelEnabled"
QT_MOC_LITERAL(218, 3875, 22), // "hmdLeanRecenterEnabled"
QT_MOC_LITERAL(219, 3898, 17), // "collisionsEnabled"
QT_MOC_LITERAL(220, 3916, 26), // "characterControllerEnabled"
QT_MOC_LITERAL(221, 3943, 27), // "useAdvancedMovementControls"
QT_MOC_LITERAL(222, 3971, 12), // "showPlayArea"
QT_MOC_LITERAL(223, 3984, 8), // "yawSpeed"
QT_MOC_LITERAL(224, 3993, 10), // "pitchSpeed"
QT_MOC_LITERAL(225, 4004, 21), // "hmdRollControlEnabled"
QT_MOC_LITERAL(226, 4026, 22), // "hmdRollControlDeadZone"
QT_MOC_LITERAL(227, 4049, 18), // "hmdRollControlRate"
QT_MOC_LITERAL(228, 4068, 10), // "userHeight"
QT_MOC_LITERAL(229, 4079, 13), // "userEyeHeight"
QT_MOC_LITERAL(230, 4093, 7), // "SELF_ID"
QT_MOC_LITERAL(231, 4101, 9), // "walkSpeed"
QT_MOC_LITERAL(232, 4111, 17), // "walkBackwardSpeed"
QT_MOC_LITERAL(233, 4129, 11), // "sprintSpeed"
QT_MOC_LITERAL(234, 4141, 16), // "isInSittingState"
QT_MOC_LITERAL(235, 4158, 17), // "userRecenterModel"
QT_MOC_LITERAL(236, 4176, 27), // "MyAvatar::SitStandModelType"
QT_MOC_LITERAL(237, 4204, 21), // "isSitStandStateLocked"
QT_MOC_LITERAL(238, 4226, 11), // "TRANSLATE_X"
QT_MOC_LITERAL(239, 4238, 11), // "TRANSLATE_Y"
QT_MOC_LITERAL(240, 4250, 11), // "TRANSLATE_Z"
QT_MOC_LITERAL(241, 4262, 3), // "YAW"
QT_MOC_LITERAL(242, 4266, 16), // "STEP_TRANSLATE_X"
QT_MOC_LITERAL(243, 4283, 16), // "STEP_TRANSLATE_Y"
QT_MOC_LITERAL(244, 4300, 16), // "STEP_TRANSLATE_Z"
QT_MOC_LITERAL(245, 4317, 8), // "STEP_YAW"
QT_MOC_LITERAL(246, 4326, 5), // "PITCH"
QT_MOC_LITERAL(247, 4332, 4), // "ZOOM"
QT_MOC_LITERAL(248, 4337, 14), // "MAX_DRIVE_KEYS"
QT_MOC_LITERAL(249, 4352, 17), // "SitStandModelType"
QT_MOC_LITERAL(250, 4370, 8), // "ForceSit"
QT_MOC_LITERAL(251, 4379, 10), // "ForceStand"
QT_MOC_LITERAL(252, 4390, 4), // "Auto"
QT_MOC_LITERAL(253, 4395, 14), // "DisableHMDLean"
QT_MOC_LITERAL(254, 4410, 16) // "NumSitStandTypes"

    },
    "MyAvatar\0audioListenerModeChanged\0\0"
    "transformChanged\0newCollisionSoundURL\0"
    "url\0collisionWithEntity\0Collision\0"
    "collision\0collisionsEnabledChanged\0"
    "enabled\0animGraphUrlChanged\0energyChanged\0"
    "newEnergy\0positionGoneTo\0onLoadComplete\0"
    "wentAway\0wentActive\0skeletonChanged\0"
    "dominantHandChanged\0hand\0"
    "sensorToWorldScaleChanged\0sensorToWorldScale\0"
    "attachmentsChanged\0scaleChanged\0"
    "shouldDisableHandTouchChanged\0"
    "shouldDisable\0disableHandTouchForIDChanged\0"
    "entityID\0disable\0increaseSize\0"
    "decreaseSize\0resetSize\0animGraphLoaded\0"
    "setGravity\0gravity\0getGravity\0"
    "goToFeetLocation\0glm::vec3\0newPosition\0"
    "hasOrientation\0glm::quat\0newOrientation\0"
    "shouldFaceLocation\0goToLocation\0"
    "withSafeLanding\0properties\0"
    "goToLocationAndEnableCollisions\0"
    "safeLanding\0position\0"
    "restrictScaleFromDomainSettings\0"
    "domainSettingsObject\0clearScaleRestriction\0"
    "addThrust\0newThrust\0getThrust\0setThrust\0"
    "updateMotionBehaviorFromMenu\0setToggleHips\0"
    "followHead\0setEnableDebugDrawBaseOfSupport\0"
    "isEnabled\0setEnableDebugDrawDefaultPose\0"
    "setEnableDebugDrawAnimPose\0"
    "setEnableDebugDrawPosition\0"
    "setEnableDebugDrawHandControllers\0"
    "setEnableDebugDrawSensorToWorldMatrix\0"
    "setEnableDebugDrawIKTargets\0"
    "setEnableDebugDrawIKConstraints\0"
    "setEnableDebugDrawIKChains\0"
    "setEnableDebugDrawDetailedCollision\0"
    "getEnableMeshVisible\0setEnableMeshVisible\0"
    "setEnableInverseKinematics\0"
    "getAnimGraphOverrideUrl\0setAnimGraphOverrideUrl\0"
    "value\0getAnimGraphUrl\0setAnimGraphUrl\0"
    "getPositionForAudio\0getOrientationForAudio\0"
    "setModelScale\0scale\0leaveDomain\0"
    "updateCollisionCapsuleCache\0"
    "resetSensorsAndBody\0centerBody\0"
    "clearIKJointLimitHistory\0setOrientationVar\0"
    "newOrientationVar\0getOrientationVar\0"
    "getDefaultEyePosition\0overrideAnimation\0"
    "fps\0loop\0firstFrame\0lastFrame\0"
    "restoreAnimation\0getAnimationRoles\0"
    "overrideRoleAnimation\0role\0"
    "restoreRoleAnimation\0addAnimationStateHandler\0"
    "QScriptValue\0handler\0propertiesList\0"
    "removeAnimationStateHandler\0getSnapTurn\0"
    "setSnapTurn\0on\0setDominantHand\0"
    "getDominantHand\0setCenterOfGravityModelEnabled\0"
    "getCenterOfGravityModelEnabled\0"
    "setHMDLeanRecenterEnabled\0"
    "getHMDLeanRecenterEnabled\0"
    "requestEnableHandTouch\0requestDisableHandTouch\0"
    "disableHandTouchForID\0enableHandTouchForID\0"
    "getRawDriveKey\0DriveKeys\0key\0"
    "disableDriveKey\0enableDriveKey\0"
    "isDriveKeyDisabled\0triggerVerticalRecenter\0"
    "triggerHorizontalRecenter\0"
    "triggerRotationRecenter\0"
    "isRecenteringHorizontally\0getHeadPosition\0"
    "getHeadFinalYaw\0getHeadFinalRoll\0"
    "getHeadFinalPitch\0getHeadDeltaPitch\0"
    "getEyePosition\0getTargetAvatarPosition\0"
    "getTargetAvatar\0ScriptAvatarData*\0"
    "getLeftHandPosition\0getRightHandPosition\0"
    "getLeftHandTipPosition\0getRightHandTipPosition\0"
    "getLeftHandPose\0controller::Pose\0"
    "getRightHandPose\0getLeftHandTipPose\0"
    "getRightHandTipPose\0worldToJointPoint\0"
    "jointIndex\0worldToJointDirection\0"
    "direction\0worldToJointRotation\0rotation\0"
    "jointToWorldPoint\0jointToWorldDirection\0"
    "jointToWorldRotation\0pinJoint\0index\0"
    "orientation\0clearPinOnJoint\0"
    "getIKErrorOnLastSolve\0useFullAvatarURL\0"
    "fullAvatarURL\0modelName\0"
    "getFullAvatarURLFromPreferences\0"
    "getFullAvatarModelName\0getAvatarEntitiesVariant\0"
    "isFlying\0isInAir\0setFlyingEnabled\0"
    "getFlyingEnabled\0setFlyingDesktopPref\0"
    "getFlyingDesktopPref\0setFlyingHMDPref\0"
    "getFlyingHMDPref\0getAvatarScale\0"
    "setAvatarScale\0setCollisionsEnabled\0"
    "getCollisionsEnabled\0getCollisionCapsule\0"
    "setCharacterControllerEnabled\0"
    "getCharacterControllerEnabled\0isUp\0"
    "isDown\0qmlPosition\0shouldRenderLocally\0"
    "motorVelocity\0motorTimescale\0"
    "motorReferenceFrame\0motorMode\0"
    "collisionSoundURL\0audioListenerMode\0"
    "AudioListenerMode\0customListenPosition\0"
    "customListenOrientation\0audioListenerModeHead\0"
    "audioListenerModeCamera\0audioListenerModeCustom\0"
    "hasScriptedBlendshapes\0"
    "hasProceduralBlinkFaceMovement\0"
    "hasProceduralEyeFaceMovement\0"
    "hasAudioEnabledFaceMovement\0"
    "rotationRecenterFilterLength\0"
    "rotationThreshold\0enableStepResetRotation\0"
    "enableDrawAverageFacing\0leftHandPosition\0"
    "rightHandPosition\0leftHandTipPosition\0"
    "rightHandTipPosition\0leftHandPose\0"
    "rightHandPose\0leftHandTipPose\0"
    "rightHandTipPose\0energy\0isAway\0"
    "centerOfGravityModelEnabled\0"
    "hmdLeanRecenterEnabled\0collisionsEnabled\0"
    "characterControllerEnabled\0"
    "useAdvancedMovementControls\0showPlayArea\0"
    "yawSpeed\0pitchSpeed\0hmdRollControlEnabled\0"
    "hmdRollControlDeadZone\0hmdRollControlRate\0"
    "userHeight\0userEyeHeight\0SELF_ID\0"
    "walkSpeed\0walkBackwardSpeed\0sprintSpeed\0"
    "isInSittingState\0userRecenterModel\0"
    "MyAvatar::SitStandModelType\0"
    "isSitStandStateLocked\0TRANSLATE_X\0"
    "TRANSLATE_Y\0TRANSLATE_Z\0YAW\0"
    "STEP_TRANSLATE_X\0STEP_TRANSLATE_Y\0"
    "STEP_TRANSLATE_Z\0STEP_YAW\0PITCH\0ZOOM\0"
    "MAX_DRIVE_KEYS\0SitStandModelType\0"
    "ForceSit\0ForceStand\0Auto\0DisableHMDLean\0"
    "NumSitStandTypes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyAvatar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
      51, 1124, // properties
       2, 1277, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  754,    2, 0x06 /* Public */,
       3,    0,  755,    2, 0x06 /* Public */,
       4,    1,  756,    2, 0x06 /* Public */,
       6,    1,  759,    2, 0x06 /* Public */,
       9,    1,  762,    2, 0x06 /* Public */,
      11,    1,  765,    2, 0x06 /* Public */,
      12,    1,  768,    2, 0x06 /* Public */,
      14,    0,  771,    2, 0x06 /* Public */,
      15,    0,  772,    2, 0x06 /* Public */,
      16,    0,  773,    2, 0x06 /* Public */,
      17,    0,  774,    2, 0x06 /* Public */,
      18,    0,  775,    2, 0x06 /* Public */,
      19,    1,  776,    2, 0x06 /* Public */,
      21,    1,  779,    2, 0x06 /* Public */,
      23,    0,  782,    2, 0x06 /* Public */,
      24,    0,  783,    2, 0x06 /* Public */,
      25,    1,  784,    2, 0x06 /* Public */,
      27,    2,  787,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    0,  792,    2, 0x0a /* Public */,
      31,    0,  793,    2, 0x0a /* Public */,
      32,    0,  794,    2, 0x0a /* Public */,
      33,    0,  795,    2, 0x0a /* Public */,
      34,    1,  796,    2, 0x0a /* Public */,
      36,    0,  799,    2, 0x0a /* Public */,
      37,    4,  800,    2, 0x0a /* Public */,
      44,    5,  809,    2, 0x0a /* Public */,
      44,    4,  820,    2, 0x2a /* Public | MethodCloned */,
      44,    3,  829,    2, 0x2a /* Public | MethodCloned */,
      44,    2,  836,    2, 0x2a /* Public | MethodCloned */,
      44,    1,  841,    2, 0x2a /* Public | MethodCloned */,
      44,    1,  844,    2, 0x0a /* Public */,
      47,    1,  847,    2, 0x0a /* Public */,
      48,    1,  850,    2, 0x0a /* Public */,
      50,    1,  853,    2, 0x0a /* Public */,
      52,    0,  856,    2, 0x0a /* Public */,
      53,    1,  857,    2, 0x0a /* Public */,
      55,    0,  860,    2, 0x0a /* Public */,
      56,    1,  861,    2, 0x0a /* Public */,
      57,    0,  864,    2, 0x0a /* Public */,
      58,    1,  865,    2, 0x0a /* Public */,
      60,    1,  868,    2, 0x0a /* Public */,
      62,    1,  871,    2, 0x0a /* Public */,
      63,    1,  874,    2, 0x0a /* Public */,
      64,    1,  877,    2, 0x0a /* Public */,
      65,    1,  880,    2, 0x0a /* Public */,
      66,    1,  883,    2, 0x0a /* Public */,
      67,    1,  886,    2, 0x0a /* Public */,
      68,    1,  889,    2, 0x0a /* Public */,
      69,    1,  892,    2, 0x0a /* Public */,
      70,    1,  895,    2, 0x0a /* Public */,
      71,    0,  898,    2, 0x0a /* Public */,
      72,    1,  899,    2, 0x0a /* Public */,
      73,    1,  902,    2, 0x0a /* Public */,
      74,    0,  905,    2, 0x0a /* Public */,
      75,    1,  906,    2, 0x0a /* Public */,
      77,    0,  909,    2, 0x0a /* Public */,
      78,    1,  910,    2, 0x0a /* Public */,
      79,    0,  913,    2, 0x0a /* Public */,
      80,    0,  914,    2, 0x0a /* Public */,
      81,    1,  915,    2, 0x0a /* Public */,
      83,    0,  918,    2, 0x08 /* Private */,
      84,    0,  919,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      85,    0,  920,    2, 0x02 /* Public */,
      86,    0,  921,    2, 0x02 /* Public */,
      87,    0,  922,    2, 0x02 /* Public */,
      88,    1,  923,    2, 0x02 /* Public */,
      90,    0,  926,    2, 0x02 /* Public */,
      91,    0,  927,    2, 0x02 /* Public */,
      92,    5,  928,    2, 0x02 /* Public */,
      97,    0,  939,    2, 0x02 /* Public */,
      98,    0,  940,    2, 0x02 /* Public */,
      99,    6,  941,    2, 0x02 /* Public */,
     101,    1,  954,    2, 0x02 /* Public */,
     102,    2,  957,    2, 0x02 /* Public */,
     106,    1,  962,    2, 0x02 /* Public */,
     107,    0,  965,    2, 0x02 /* Public */,
     108,    1,  966,    2, 0x02 /* Public */,
     110,    1,  969,    2, 0x02 /* Public */,
     111,    0,  972,    2, 0x02 /* Public */,
     112,    1,  973,    2, 0x02 /* Public */,
     113,    0,  976,    2, 0x02 /* Public */,
     114,    1,  977,    2, 0x02 /* Public */,
     115,    0,  980,    2, 0x02 /* Public */,
     116,    0,  981,    2, 0x02 /* Public */,
     117,    0,  982,    2, 0x02 /* Public */,
     118,    1,  983,    2, 0x02 /* Public */,
     119,    1,  986,    2, 0x02 /* Public */,
     120,    1,  989,    2, 0x02 /* Public */,
     123,    1,  992,    2, 0x02 /* Public */,
     124,    1,  995,    2, 0x02 /* Public */,
     125,    1,  998,    2, 0x02 /* Public */,
     126,    0, 1001,    2, 0x02 /* Public */,
     127,    0, 1002,    2, 0x02 /* Public */,
     128,    0, 1003,    2, 0x02 /* Public */,
     129,    0, 1004,    2, 0x02 /* Public */,
     130,    0, 1005,    2, 0x02 /* Public */,
     131,    0, 1006,    2, 0x02 /* Public */,
     132,    0, 1007,    2, 0x02 /* Public */,
     133,    0, 1008,    2, 0x02 /* Public */,
     134,    0, 1009,    2, 0x02 /* Public */,
     135,    0, 1010,    2, 0x02 /* Public */,
     136,    0, 1011,    2, 0x02 /* Public */,
     137,    0, 1012,    2, 0x02 /* Public */,
     139,    0, 1013,    2, 0x02 /* Public */,
     140,    0, 1014,    2, 0x02 /* Public */,
     141,    0, 1015,    2, 0x02 /* Public */,
     142,    0, 1016,    2, 0x02 /* Public */,
     143,    0, 1017,    2, 0x02 /* Public */,
     145,    0, 1018,    2, 0x02 /* Public */,
     146,    0, 1019,    2, 0x02 /* Public */,
     147,    0, 1020,    2, 0x02 /* Public */,
     148,    2, 1021,    2, 0x02 /* Public */,
     148,    1, 1026,    2, 0x22 /* Public | MethodCloned */,
     150,    2, 1029,    2, 0x02 /* Public */,
     150,    1, 1034,    2, 0x22 /* Public | MethodCloned */,
     152,    2, 1037,    2, 0x02 /* Public */,
     152,    1, 1042,    2, 0x22 /* Public | MethodCloned */,
     154,    2, 1045,    2, 0x02 /* Public */,
     154,    1, 1050,    2, 0x22 /* Public | MethodCloned */,
     155,    2, 1053,    2, 0x02 /* Public */,
     155,    1, 1058,    2, 0x22 /* Public | MethodCloned */,
     156,    2, 1061,    2, 0x02 /* Public */,
     156,    1, 1066,    2, 0x22 /* Public | MethodCloned */,
     157,    3, 1069,    2, 0x02 /* Public */,
     160,    1, 1076,    2, 0x02 /* Public */,
     161,    0, 1079,    2, 0x02 /* Public */,
     162,    2, 1080,    2, 0x02 /* Public */,
     162,    1, 1085,    2, 0x22 /* Public | MethodCloned */,
     165,    0, 1088,    2, 0x02 /* Public */,
     166,    0, 1089,    2, 0x02 /* Public */,
     167,    0, 1090,    2, 0x02 /* Public */,
     168,    0, 1091,    2, 0x02 /* Public */,
     169,    0, 1092,    2, 0x02 /* Public */,
     170,    1, 1093,    2, 0x02 /* Public */,
     171,    0, 1096,    2, 0x02 /* Public */,
     172,    1, 1097,    2, 0x02 /* Public */,
     173,    0, 1100,    2, 0x02 /* Public */,
     174,    1, 1101,    2, 0x02 /* Public */,
     175,    0, 1104,    2, 0x02 /* Public */,
     176,    0, 1105,    2, 0x02 /* Public */,
     177,    1, 1106,    2, 0x02 /* Public */,
     178,    1, 1109,    2, 0x02 /* Public */,
     179,    0, 1112,    2, 0x02 /* Public */,
     180,    0, 1113,    2, 0x02 /* Public */,
     181,    1, 1114,    2, 0x02 /* Public */,
     182,    0, 1117,    2, 0x02 /* Public */,
     183,    1, 1118,    2, 0x02 /* Public */,
     184,    1, 1121,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::Float,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Float,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::QUuid, QMetaType::Bool,   28,   29,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   35,
    QMetaType::Float,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool, 0x80000000 | 41, QMetaType::Bool,   39,   40,   42,   43,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool, 0x80000000 | 41, QMetaType::Bool, QMetaType::Bool,   39,   40,   42,   43,   45,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool, 0x80000000 | 41, QMetaType::Bool,   39,   40,   42,   43,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool, 0x80000000 | 41,   39,   40,   42,
    QMetaType::Void, 0x80000000 | 38, QMetaType::Bool,   39,   40,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, QMetaType::QVariant,   46,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Bool, 0x80000000 | 38,   49,
    QMetaType::Void, QMetaType::QJsonObject,   51,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   54,
    0x80000000 | 38,
    QMetaType::Void, 0x80000000 | 38,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::Void, QMetaType::Bool,   61,
    QMetaType::QUrl,
    QMetaType::Void, QMetaType::QUrl,   76,
    QMetaType::QUrl,
    QMetaType::Void, QMetaType::QUrl,    5,
    0x80000000 | 38,
    0x80000000 | 41,
    QMetaType::Void, QMetaType::Float,   82,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   89,
    QMetaType::QVariant,
    0x80000000 | 38,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Bool, QMetaType::Float, QMetaType::Float,    5,   93,   94,   95,   96,
    QMetaType::Void,
    QMetaType::QStringList,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Float, QMetaType::Bool, QMetaType::Float, QMetaType::Float,  100,    5,   93,   94,   95,   96,
    QMetaType::Void, QMetaType::QString,  100,
    0x80000000 | 103, 0x80000000 | 103, 0x80000000 | 103,  104,  105,
    QMetaType::Void, 0x80000000 | 103,  104,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,  109,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   76,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,   28,
    QMetaType::Void, QMetaType::QUuid,   28,
    QMetaType::Float, 0x80000000 | 121,  122,
    QMetaType::Void, 0x80000000 | 121,  122,
    QMetaType::Void, 0x80000000 | 121,  122,
    QMetaType::Bool, 0x80000000 | 121,  122,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    0x80000000 | 38,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    0x80000000 | 38,
    0x80000000 | 38,
    0x80000000 | 138,
    0x80000000 | 38,
    0x80000000 | 38,
    0x80000000 | 38,
    0x80000000 | 38,
    0x80000000 | 144,
    0x80000000 | 144,
    0x80000000 | 144,
    0x80000000 | 144,
    0x80000000 | 38, 0x80000000 | 38, QMetaType::Int,   49,  149,
    0x80000000 | 38, 0x80000000 | 38,   49,
    0x80000000 | 38, 0x80000000 | 38, QMetaType::Int,  151,  149,
    0x80000000 | 38, 0x80000000 | 38,  151,
    0x80000000 | 41, 0x80000000 | 41, QMetaType::Int,  153,  149,
    0x80000000 | 41, 0x80000000 | 41,  153,
    0x80000000 | 38, 0x80000000 | 38, QMetaType::Int,   49,  149,
    0x80000000 | 38, 0x80000000 | 38,   49,
    0x80000000 | 38, 0x80000000 | 38, QMetaType::Int,  151,  149,
    0x80000000 | 38, 0x80000000 | 38,  151,
    0x80000000 | 41, 0x80000000 | 41, QMetaType::Int,  153,  149,
    0x80000000 | 41, 0x80000000 | 41,  153,
    QMetaType::Bool, QMetaType::Int, 0x80000000 | 38, 0x80000000 | 41,  158,   49,  159,
    QMetaType::Bool, QMetaType::Int,  158,
    QMetaType::Float,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,  163,  164,
    QMetaType::Void, QMetaType::QUrl,  163,
    QMetaType::QUrl,
    QMetaType::QString,
    QMetaType::QVariantList,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Void, QMetaType::Float,   82,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::QVariantMap,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Bool, 0x80000000 | 38,  151,
    QMetaType::Bool, 0x80000000 | 38,  151,

 // properties: name, type, flags
     185, QMetaType::QVector3D, 0x00095001,
     186, QMetaType::Bool, 0x00095103,
     187, 0x80000000 | 38, 0x0009500b,
     188, QMetaType::Float, 0x00095003,
     189, QMetaType::QString, 0x00095003,
     190, QMetaType::QString, 0x00095003,
     191, QMetaType::QString, 0x00095103,
     192, 0x80000000 | 193, 0x0009510b,
     194, 0x80000000 | 38, 0x0009510b,
     195, 0x80000000 | 41, 0x0009510b,
     196, 0x80000000 | 193, 0x00095009,
     197, 0x80000000 | 193, 0x00095009,
     198, 0x80000000 | 193, 0x00095009,
     199, QMetaType::Bool, 0x00095103,
     200, QMetaType::Bool, 0x00095103,
     201, QMetaType::Bool, 0x00095103,
     202, QMetaType::Bool, 0x00095103,
     203, QMetaType::Float, 0x00095103,
     204, QMetaType::Float, 0x00095103,
     205, QMetaType::Bool, 0x00095103,
     206, QMetaType::Bool, 0x00095103,
     207, 0x80000000 | 38, 0x00095009,
     208, 0x80000000 | 38, 0x00095009,
     209, 0x80000000 | 38, 0x00095009,
     210, 0x80000000 | 38, 0x00095009,
     211, 0x80000000 | 144, 0x00095009,
     212, 0x80000000 | 144, 0x00095009,
     213, 0x80000000 | 144, 0x00095009,
     214, 0x80000000 | 144, 0x00095009,
     215, QMetaType::Float, 0x00095103,
     216, QMetaType::Bool, 0x00095003,
     217, QMetaType::Bool, 0x00095103,
     218, QMetaType::Bool, 0x00095003,
     219, QMetaType::Bool, 0x00095103,
     220, QMetaType::Bool, 0x00095103,
     221, QMetaType::Bool, 0x00095103,
     222, QMetaType::Bool, 0x00095103,
     223, QMetaType::Float, 0x00095003,
     224, QMetaType::Float, 0x00095003,
     225, QMetaType::Bool, 0x00095003,
     226, QMetaType::Float, 0x00095003,
     227, QMetaType::Float, 0x00095003,
     228, QMetaType::Float, 0x00095103,
     229, QMetaType::Float, 0x00095001,
     230, QMetaType::QUuid, 0x00095401,
     231, QMetaType::Float, 0x00095103,
     232, QMetaType::Float, 0x00095103,
     233, QMetaType::Float, 0x00095103,
     234, QMetaType::Bool, 0x00095103,
     235, 0x80000000 | 236, 0x0009510b,
     237, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
     121, 0x0,   11, 1285,
     249, 0x0,    5, 1307,

 // enum data: key, value
     238, uint(MyAvatar::TRANSLATE_X),
     239, uint(MyAvatar::TRANSLATE_Y),
     240, uint(MyAvatar::TRANSLATE_Z),
     241, uint(MyAvatar::YAW),
     242, uint(MyAvatar::STEP_TRANSLATE_X),
     243, uint(MyAvatar::STEP_TRANSLATE_Y),
     244, uint(MyAvatar::STEP_TRANSLATE_Z),
     245, uint(MyAvatar::STEP_YAW),
     246, uint(MyAvatar::PITCH),
     247, uint(MyAvatar::ZOOM),
     248, uint(MyAvatar::MAX_DRIVE_KEYS),
     250, uint(MyAvatar::ForceSit),
     251, uint(MyAvatar::ForceStand),
     252, uint(MyAvatar::Auto),
     253, uint(MyAvatar::DisableHMDLean),
     254, uint(MyAvatar::NumSitStandTypes),

       0        // eod
};

void MyAvatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyAvatar *_t = static_cast<MyAvatar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->audioListenerModeChanged(); break;
        case 1: _t->transformChanged(); break;
        case 2: _t->newCollisionSoundURL((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->collisionWithEntity((*reinterpret_cast< const Collision(*)>(_a[1]))); break;
        case 4: _t->collisionsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->animGraphUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 6: _t->energyChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 7: _t->positionGoneTo(); break;
        case 8: _t->onLoadComplete(); break;
        case 9: _t->wentAway(); break;
        case 10: _t->wentActive(); break;
        case 11: _t->skeletonChanged(); break;
        case 12: _t->dominantHandChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->sensorToWorldScaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 14: _t->attachmentsChanged(); break;
        case 15: _t->scaleChanged(); break;
        case 16: _t->shouldDisableHandTouchChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->disableHandTouchForIDChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 18: _t->increaseSize(); break;
        case 19: _t->decreaseSize(); break;
        case 20: _t->resetSize(); break;
        case 21: _t->animGraphLoaded(); break;
        case 22: _t->setGravity((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 23: { float _r = _t->getGravity();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->goToFeetLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 25: _t->goToLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 26: _t->goToLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 27: _t->goToLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3]))); break;
        case 28: _t->goToLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->goToLocation((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 30: _t->goToLocation((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 31: _t->goToLocationAndEnableCollisions((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 32: { bool _r = _t->safeLanding((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: _t->restrictScaleFromDomainSettings((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 34: _t->clearScaleRestriction(); break;
        case 35: _t->addThrust((*reinterpret_cast< glm::vec3(*)>(_a[1]))); break;
        case 36: { glm::vec3 _r = _t->getThrust();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setThrust((*reinterpret_cast< glm::vec3(*)>(_a[1]))); break;
        case 38: _t->updateMotionBehaviorFromMenu(); break;
        case 39: _t->setToggleHips((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->setEnableDebugDrawBaseOfSupport((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->setEnableDebugDrawDefaultPose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->setEnableDebugDrawAnimPose((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->setEnableDebugDrawPosition((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->setEnableDebugDrawHandControllers((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->setEnableDebugDrawSensorToWorldMatrix((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->setEnableDebugDrawIKTargets((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->setEnableDebugDrawIKConstraints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->setEnableDebugDrawIKChains((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->setEnableDebugDrawDetailedCollision((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: { bool _r = _t->getEnableMeshVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setEnableMeshVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->setEnableInverseKinematics((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: { QUrl _r = _t->getAnimGraphOverrideUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->setAnimGraphOverrideUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 55: { QUrl _r = _t->getAnimGraphUrl();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->setAnimGraphUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 57: { glm::vec3 _r = _t->getPositionForAudio();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 58: { glm::quat _r = _t->getOrientationForAudio();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->setModelScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 60: _t->leaveDomain(); break;
        case 61: _t->updateCollisionCapsuleCache(); break;
        case 62: _t->resetSensorsAndBody(); break;
        case 63: _t->centerBody(); break;
        case 64: _t->clearIKJointLimitHistory(); break;
        case 65: _t->setOrientationVar((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 66: { QVariant _r = _t->getOrientationVar();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 67: { glm::vec3 _r = _t->getDefaultEyePosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 68: _t->overrideAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5]))); break;
        case 69: _t->restoreAnimation(); break;
        case 70: { QStringList _r = _t->getAnimationRoles();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 71: _t->overrideRoleAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 72: _t->restoreRoleAnimation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 73: { QScriptValue _r = _t->addAnimationStateHandler((*reinterpret_cast< QScriptValue(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 74: _t->removeAnimationStateHandler((*reinterpret_cast< QScriptValue(*)>(_a[1]))); break;
        case 75: { bool _r = _t->getSnapTurn();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 76: _t->setSnapTurn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 77: _t->setDominantHand((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 78: { QString _r = _t->getDominantHand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 79: _t->setCenterOfGravityModelEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 80: { bool _r = _t->getCenterOfGravityModelEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->setHMDLeanRecenterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 82: { bool _r = _t->getHMDLeanRecenterEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: _t->requestEnableHandTouch(); break;
        case 84: _t->requestDisableHandTouch(); break;
        case 85: _t->disableHandTouchForID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 86: _t->enableHandTouchForID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 87: { float _r = _t->getRawDriveKey((*reinterpret_cast< DriveKeys(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->disableDriveKey((*reinterpret_cast< DriveKeys(*)>(_a[1]))); break;
        case 89: _t->enableDriveKey((*reinterpret_cast< DriveKeys(*)>(_a[1]))); break;
        case 90: { bool _r = _t->isDriveKeyDisabled((*reinterpret_cast< DriveKeys(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 91: _t->triggerVerticalRecenter(); break;
        case 92: _t->triggerHorizontalRecenter(); break;
        case 93: _t->triggerRotationRecenter(); break;
        case 94: { bool _r = _t->isRecenteringHorizontally();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 95: { glm::vec3 _r = _t->getHeadPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 96: { float _r = _t->getHeadFinalYaw();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 97: { float _r = _t->getHeadFinalRoll();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 98: { float _r = _t->getHeadFinalPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 99: { float _r = _t->getHeadDeltaPitch();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 100: { glm::vec3 _r = _t->getEyePosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 101: { glm::vec3 _r = _t->getTargetAvatarPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 102: { ScriptAvatarData* _r = _t->getTargetAvatar();
            if (_a[0]) *reinterpret_cast< ScriptAvatarData**>(_a[0]) = std::move(_r); }  break;
        case 103: { glm::vec3 _r = _t->getLeftHandPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 104: { glm::vec3 _r = _t->getRightHandPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 105: { glm::vec3 _r = _t->getLeftHandTipPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 106: { glm::vec3 _r = _t->getRightHandTipPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 107: { controller::Pose _r = _t->getLeftHandPose();
            if (_a[0]) *reinterpret_cast< controller::Pose*>(_a[0]) = std::move(_r); }  break;
        case 108: { controller::Pose _r = _t->getRightHandPose();
            if (_a[0]) *reinterpret_cast< controller::Pose*>(_a[0]) = std::move(_r); }  break;
        case 109: { controller::Pose _r = _t->getLeftHandTipPose();
            if (_a[0]) *reinterpret_cast< controller::Pose*>(_a[0]) = std::move(_r); }  break;
        case 110: { controller::Pose _r = _t->getRightHandTipPose();
            if (_a[0]) *reinterpret_cast< controller::Pose*>(_a[0]) = std::move(_r); }  break;
        case 111: { glm::vec3 _r = _t->worldToJointPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 112: { glm::vec3 _r = _t->worldToJointPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 113: { glm::vec3 _r = _t->worldToJointDirection((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 114: { glm::vec3 _r = _t->worldToJointDirection((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 115: { glm::quat _r = _t->worldToJointRotation((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 116: { glm::quat _r = _t->worldToJointRotation((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 117: { glm::vec3 _r = _t->jointToWorldPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 118: { glm::vec3 _r = _t->jointToWorldPoint((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 119: { glm::vec3 _r = _t->jointToWorldDirection((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 120: { glm::vec3 _r = _t->jointToWorldDirection((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 121: { glm::quat _r = _t->jointToWorldRotation((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 122: { glm::quat _r = _t->jointToWorldRotation((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 123: { bool _r = _t->pinJoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 124: { bool _r = _t->clearPinOnJoint((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 125: { float _r = _t->getIKErrorOnLastSolve();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 126: _t->useFullAvatarURL((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 127: _t->useFullAvatarURL((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 128: { QUrl _r = _t->getFullAvatarURLFromPreferences();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 129: { QString _r = _t->getFullAvatarModelName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 130: { QVariantList _r = _t->getAvatarEntitiesVariant();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 131: { bool _r = _t->isFlying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 132: { bool _r = _t->isInAir();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 133: _t->setFlyingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 134: { bool _r = _t->getFlyingEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 135: _t->setFlyingDesktopPref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 136: { bool _r = _t->getFlyingDesktopPref();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 137: _t->setFlyingHMDPref((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 138: { bool _r = _t->getFlyingHMDPref();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 139: { float _r = _t->getAvatarScale();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 140: _t->setAvatarScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 141: _t->setCollisionsEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 142: { bool _r = _t->getCollisionsEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 143: { QVariantMap _r = _t->getCollisionCapsule();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 144: _t->setCharacterControllerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 145: { bool _r = _t->getCharacterControllerEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 146: { bool _r = _t->isUp((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 147: { bool _r = _t->isDown((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 111:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 112:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 113:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 114:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 115:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 116:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 117:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 118:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 119:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 120:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 121:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 122:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 123:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 146:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 147:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::audioListenerModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::transformChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::newCollisionSoundURL)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(const Collision & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::collisionWithEntity)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::collisionsEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::animGraphUrlChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::energyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::positionGoneTo)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::onLoadComplete)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::wentAway)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::wentActive)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::skeletonChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::dominantHandChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::sensorToWorldScaleChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::attachmentsChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::scaleChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::shouldDisableHandTouchChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (MyAvatar::*)(const QUuid & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyAvatar::disableHandTouchForIDChanged)) {
                *result = 17;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
        case 11:
        case 10:
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioListenerMode >(); break;
        case 9:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 24:
        case 23:
        case 22:
        case 21:
        case 8:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MyAvatar *_t = static_cast<MyAvatar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector3D*>(_v) = _t->getQmlPosition(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getShouldRenderLocally(); break;
        case 2: *reinterpret_cast< glm::vec3*>(_v) = _t->getScriptedMotorVelocity(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getScriptedMotorTimescale(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getScriptedMotorFrame(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getScriptedMotorMode(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getCollisionSoundURL(); break;
        case 7: *reinterpret_cast< AudioListenerMode*>(_v) = _t->getAudioListenerMode(); break;
        case 8: *reinterpret_cast< glm::vec3*>(_v) = _t->getCustomListenPosition(); break;
        case 9: *reinterpret_cast< glm::quat*>(_v) = _t->getCustomListenOrientation(); break;
        case 10: *reinterpret_cast< AudioListenerMode*>(_v) = _t->getAudioListenerModeHead(); break;
        case 11: *reinterpret_cast< AudioListenerMode*>(_v) = _t->getAudioListenerModeCamera(); break;
        case 12: *reinterpret_cast< AudioListenerMode*>(_v) = _t->getAudioListenerModeCustom(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getHasScriptedBlendshapes(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->getHasProceduralBlinkFaceMovement(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->getHasProceduralEyeFaceMovement(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getHasAudioEnabledFaceMovement(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getRotationRecenterFilterLength(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getRotationThreshold(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->getEnableStepResetRotation(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getEnableDrawAverageFacing(); break;
        case 21: *reinterpret_cast< glm::vec3*>(_v) = _t->getLeftHandPosition(); break;
        case 22: *reinterpret_cast< glm::vec3*>(_v) = _t->getRightHandPosition(); break;
        case 23: *reinterpret_cast< glm::vec3*>(_v) = _t->getLeftHandTipPosition(); break;
        case 24: *reinterpret_cast< glm::vec3*>(_v) = _t->getRightHandTipPosition(); break;
        case 25: *reinterpret_cast< controller::Pose*>(_v) = _t->getLeftHandPose(); break;
        case 26: *reinterpret_cast< controller::Pose*>(_v) = _t->getRightHandPose(); break;
        case 27: *reinterpret_cast< controller::Pose*>(_v) = _t->getLeftHandTipPose(); break;
        case 28: *reinterpret_cast< controller::Pose*>(_v) = _t->getRightHandTipPose(); break;
        case 29: *reinterpret_cast< float*>(_v) = _t->getEnergy(); break;
        case 30: *reinterpret_cast< bool*>(_v) = _t->getIsAway(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->getCenterOfGravityModelEnabled(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->getHMDLeanRecenterEnabled(); break;
        case 33: *reinterpret_cast< bool*>(_v) = _t->getCollisionsEnabled(); break;
        case 34: *reinterpret_cast< bool*>(_v) = _t->getCharacterControllerEnabled(); break;
        case 35: *reinterpret_cast< bool*>(_v) = _t->useAdvancedMovementControls(); break;
        case 36: *reinterpret_cast< bool*>(_v) = _t->getShowPlayArea(); break;
        case 37: *reinterpret_cast< float*>(_v) = _t->_yawSpeed; break;
        case 38: *reinterpret_cast< float*>(_v) = _t->_pitchSpeed; break;
        case 39: *reinterpret_cast< bool*>(_v) = _t->getHMDRollControlEnabled(); break;
        case 40: *reinterpret_cast< float*>(_v) = _t->getHMDRollControlDeadZone(); break;
        case 41: *reinterpret_cast< float*>(_v) = _t->getHMDRollControlRate(); break;
        case 42: *reinterpret_cast< float*>(_v) = _t->getUserHeight(); break;
        case 43: *reinterpret_cast< float*>(_v) = _t->getUserEyeHeight(); break;
        case 44: *reinterpret_cast< QUuid*>(_v) = _t->getSelfID(); break;
        case 45: *reinterpret_cast< float*>(_v) = _t->getWalkSpeed(); break;
        case 46: *reinterpret_cast< float*>(_v) = _t->getWalkBackwardSpeed(); break;
        case 47: *reinterpret_cast< float*>(_v) = _t->getSprintSpeed(); break;
        case 48: *reinterpret_cast< bool*>(_v) = _t->getIsInSittingState(); break;
        case 49: *reinterpret_cast< MyAvatar::SitStandModelType*>(_v) = _t->getUserRecenterModel(); break;
        case 50: *reinterpret_cast< bool*>(_v) = _t->getIsSitStandStateLocked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MyAvatar *_t = static_cast<MyAvatar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setShouldRenderLocally(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setScriptedMotorVelocity(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 3: _t->setScriptedMotorTimescale(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setScriptedMotorFrame(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setScriptedMotorMode(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setCollisionSoundURL(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setAudioListenerMode(*reinterpret_cast< AudioListenerMode*>(_v)); break;
        case 8: _t->setCustomListenPosition(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 9: _t->setCustomListenOrientation(*reinterpret_cast< glm::quat*>(_v)); break;
        case 13: _t->setHasScriptedBlendshapes(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setHasProceduralBlinkFaceMovement(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setHasProceduralEyeFaceMovement(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setHasAudioEnabledFaceMovement(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setRotationRecenterFilterLength(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setRotationThreshold(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setEnableStepResetRotation(*reinterpret_cast< bool*>(_v)); break;
        case 20: _t->setEnableDrawAverageFacing(*reinterpret_cast< bool*>(_v)); break;
        case 29: _t->setEnergy(*reinterpret_cast< float*>(_v)); break;
        case 30: _t->setAway(*reinterpret_cast< bool*>(_v)); break;
        case 31: _t->setCenterOfGravityModelEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 32: _t->setHMDLeanRecenterEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 33: _t->setCollisionsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 34: _t->setCharacterControllerEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 35: _t->setUseAdvancedMovementControls(*reinterpret_cast< bool*>(_v)); break;
        case 36: _t->setShowPlayArea(*reinterpret_cast< bool*>(_v)); break;
        case 37:
            if (_t->_yawSpeed != *reinterpret_cast< float*>(_v)) {
                _t->_yawSpeed = *reinterpret_cast< float*>(_v);
            }
            break;
        case 38:
            if (_t->_pitchSpeed != *reinterpret_cast< float*>(_v)) {
                _t->_pitchSpeed = *reinterpret_cast< float*>(_v);
            }
            break;
        case 39: _t->setHMDRollControlEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 40: _t->setHMDRollControlDeadZone(*reinterpret_cast< float*>(_v)); break;
        case 41: _t->setHMDRollControlRate(*reinterpret_cast< float*>(_v)); break;
        case 42: _t->setUserHeight(*reinterpret_cast< float*>(_v)); break;
        case 45: _t->setWalkSpeed(*reinterpret_cast< float*>(_v)); break;
        case 46: _t->setWalkBackwardSpeed(*reinterpret_cast< float*>(_v)); break;
        case 47: _t->setSprintSpeed(*reinterpret_cast< float*>(_v)); break;
        case 48: _t->setIsInSittingState(*reinterpret_cast< bool*>(_v)); break;
        case 49: _t->setUserRecenterModel(*reinterpret_cast< MyAvatar::SitStandModelType*>(_v)); break;
        case 50: _t->setIsSitStandStateLocked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MyAvatar::staticMetaObject = {
    { &Avatar::staticMetaObject, qt_meta_stringdata_MyAvatar.data,
      qt_meta_data_MyAvatar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyAvatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyAvatar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyAvatar.stringdata0))
        return static_cast<void*>(this);
    return Avatar::qt_metacast(_clname);
}

int MyAvatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Avatar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 51;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 51;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MyAvatar::audioListenerModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MyAvatar::transformChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MyAvatar::newCollisionSoundURL(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyAvatar::collisionWithEntity(const Collision & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyAvatar::collisionsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyAvatar::animGraphUrlChanged(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyAvatar::energyChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyAvatar::positionGoneTo()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MyAvatar::onLoadComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void MyAvatar::wentAway()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void MyAvatar::wentActive()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void MyAvatar::skeletonChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void MyAvatar::dominantHandChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MyAvatar::sensorToWorldScaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MyAvatar::attachmentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MyAvatar::scaleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MyAvatar::shouldDisableHandTouchChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MyAvatar::disableHandTouchForIDChanged(const QUuid & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
