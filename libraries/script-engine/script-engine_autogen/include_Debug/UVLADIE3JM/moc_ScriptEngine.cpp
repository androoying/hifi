/****************************************************************************
** Meta object code from reading C++ file 'ScriptEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ScriptEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptEngine_t {
    QByteArrayData data[127];
    char stringdata0[1664];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptEngine_t qt_meta_stringdata_ScriptEngine = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ScriptEngine"
QT_MOC_LITERAL(1, 13, 12), // "scriptLoaded"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "scriptFilename"
QT_MOC_LITERAL(4, 42, 18), // "errorLoadingScript"
QT_MOC_LITERAL(5, 61, 6), // "update"
QT_MOC_LITERAL(6, 68, 9), // "deltaTime"
QT_MOC_LITERAL(7, 78, 12), // "scriptEnding"
QT_MOC_LITERAL(8, 91, 8), // "finished"
QT_MOC_LITERAL(9, 100, 14), // "fileNameString"
QT_MOC_LITERAL(10, 115, 19), // "ScriptEnginePointer"
QT_MOC_LITERAL(11, 135, 15), // "cleanupMenuItem"
QT_MOC_LITERAL(12, 151, 14), // "menuItemString"
QT_MOC_LITERAL(13, 166, 14), // "printedMessage"
QT_MOC_LITERAL(14, 181, 7), // "message"
QT_MOC_LITERAL(15, 189, 10), // "scriptName"
QT_MOC_LITERAL(16, 200, 12), // "errorMessage"
QT_MOC_LITERAL(17, 213, 14), // "warningMessage"
QT_MOC_LITERAL(18, 228, 11), // "infoMessage"
QT_MOC_LITERAL(19, 240, 19), // "runningStateChanged"
QT_MOC_LITERAL(20, 260, 16), // "clearDebugWindow"
QT_MOC_LITERAL(21, 277, 10), // "loadScript"
QT_MOC_LITERAL(22, 288, 12), // "isUserLoaded"
QT_MOC_LITERAL(23, 301, 12), // "reloadScript"
QT_MOC_LITERAL(24, 314, 11), // "doneRunning"
QT_MOC_LITERAL(25, 326, 26), // "entityScriptDetailsUpdated"
QT_MOC_LITERAL(26, 353, 27), // "entityScriptPreloadFinished"
QT_MOC_LITERAL(27, 381, 12), // "EntityItemID"
QT_MOC_LITERAL(28, 394, 8), // "entityID"
QT_MOC_LITERAL(29, 403, 25), // "callAnimationStateHandler"
QT_MOC_LITERAL(30, 429, 12), // "QScriptValue"
QT_MOC_LITERAL(31, 442, 8), // "callback"
QT_MOC_LITERAL(32, 451, 14), // "AnimVariantMap"
QT_MOC_LITERAL(33, 466, 10), // "parameters"
QT_MOC_LITERAL(34, 477, 5), // "names"
QT_MOC_LITERAL(35, 483, 8), // "useNames"
QT_MOC_LITERAL(36, 492, 24), // "AnimVariantResultHandler"
QT_MOC_LITERAL(37, 517, 13), // "resultHandler"
QT_MOC_LITERAL(38, 531, 16), // "updateMemoryCost"
QT_MOC_LITERAL(39, 548, 4), // "stop"
QT_MOC_LITERAL(40, 553, 7), // "marshal"
QT_MOC_LITERAL(41, 561, 20), // "registerGlobalObject"
QT_MOC_LITERAL(42, 582, 4), // "name"
QT_MOC_LITERAL(43, 587, 6), // "object"
QT_MOC_LITERAL(44, 594, 20), // "registerGetterSetter"
QT_MOC_LITERAL(45, 615, 32), // "QScriptEngine::FunctionSignature"
QT_MOC_LITERAL(46, 648, 6), // "getter"
QT_MOC_LITERAL(47, 655, 6), // "setter"
QT_MOC_LITERAL(48, 662, 6), // "parent"
QT_MOC_LITERAL(49, 669, 16), // "registerFunction"
QT_MOC_LITERAL(50, 686, 3), // "fun"
QT_MOC_LITERAL(51, 690, 12), // "numArguments"
QT_MOC_LITERAL(52, 703, 13), // "registerValue"
QT_MOC_LITERAL(53, 717, 9), // "valueName"
QT_MOC_LITERAL(54, 727, 5), // "value"
QT_MOC_LITERAL(55, 733, 8), // "evaluate"
QT_MOC_LITERAL(56, 742, 7), // "program"
QT_MOC_LITERAL(57, 750, 8), // "fileName"
QT_MOC_LITERAL(58, 759, 10), // "lineNumber"
QT_MOC_LITERAL(59, 770, 17), // "evaluateInClosure"
QT_MOC_LITERAL(60, 788, 6), // "locals"
QT_MOC_LITERAL(61, 795, 14), // "QScriptProgram"
QT_MOC_LITERAL(62, 810, 10), // "getContext"
QT_MOC_LITERAL(63, 821, 14), // "isClientScript"
QT_MOC_LITERAL(64, 836, 11), // "isDebugMode"
QT_MOC_LITERAL(65, 848, 20), // "isEntityClientScript"
QT_MOC_LITERAL(66, 869, 20), // "isEntityServerScript"
QT_MOC_LITERAL(67, 890, 13), // "isAgentScript"
QT_MOC_LITERAL(68, 904, 15), // "addEventHandler"
QT_MOC_LITERAL(69, 920, 9), // "eventName"
QT_MOC_LITERAL(70, 930, 7), // "handler"
QT_MOC_LITERAL(71, 938, 18), // "removeEventHandler"
QT_MOC_LITERAL(72, 957, 4), // "load"
QT_MOC_LITERAL(73, 962, 8), // "loadfile"
QT_MOC_LITERAL(74, 971, 7), // "include"
QT_MOC_LITERAL(75, 979, 12), // "includeFiles"
QT_MOC_LITERAL(76, 992, 11), // "includeFile"
QT_MOC_LITERAL(77, 1004, 7), // "require"
QT_MOC_LITERAL(78, 1012, 8), // "moduleId"
QT_MOC_LITERAL(79, 1021, 16), // "resetModuleCache"
QT_MOC_LITERAL(80, 1038, 17), // "deleteScriptCache"
QT_MOC_LITERAL(81, 1056, 11), // "setInterval"
QT_MOC_LITERAL(82, 1068, 8), // "function"
QT_MOC_LITERAL(83, 1077, 10), // "intervalMS"
QT_MOC_LITERAL(84, 1088, 10), // "setTimeout"
QT_MOC_LITERAL(85, 1099, 9), // "timeoutMS"
QT_MOC_LITERAL(86, 1109, 13), // "clearInterval"
QT_MOC_LITERAL(87, 1123, 5), // "timer"
QT_MOC_LITERAL(88, 1129, 12), // "clearTimeout"
QT_MOC_LITERAL(89, 1142, 5), // "print"
QT_MOC_LITERAL(90, 1148, 11), // "resolvePath"
QT_MOC_LITERAL(91, 1160, 4), // "path"
QT_MOC_LITERAL(92, 1165, 13), // "resourcesPath"
QT_MOC_LITERAL(93, 1179, 17), // "beginProfileRange"
QT_MOC_LITERAL(94, 1197, 5), // "label"
QT_MOC_LITERAL(95, 1203, 15), // "endProfileRange"
QT_MOC_LITERAL(96, 1219, 21), // "isEntityScriptRunning"
QT_MOC_LITERAL(97, 1241, 16), // "loadEntityScript"
QT_MOC_LITERAL(98, 1258, 12), // "entityScript"
QT_MOC_LITERAL(99, 1271, 15), // "forceRedownload"
QT_MOC_LITERAL(100, 1287, 18), // "unloadEntityScript"
QT_MOC_LITERAL(101, 1306, 19), // "shouldRemoveFromMap"
QT_MOC_LITERAL(102, 1326, 22), // "unloadAllEntityScripts"
QT_MOC_LITERAL(103, 1349, 22), // "callEntityScriptMethod"
QT_MOC_LITERAL(104, 1372, 10), // "methodName"
QT_MOC_LITERAL(105, 1383, 6), // "params"
QT_MOC_LITERAL(106, 1390, 14), // "remoteCallerID"
QT_MOC_LITERAL(107, 1405, 12), // "PointerEvent"
QT_MOC_LITERAL(108, 1418, 5), // "event"
QT_MOC_LITERAL(109, 1424, 7), // "otherID"
QT_MOC_LITERAL(110, 1432, 9), // "Collision"
QT_MOC_LITERAL(111, 1442, 9), // "collision"
QT_MOC_LITERAL(112, 1452, 24), // "requestGarbageCollection"
QT_MOC_LITERAL(113, 1477, 12), // "generateUUID"
QT_MOC_LITERAL(114, 1490, 21), // "executeOnScriptThread"
QT_MOC_LITERAL(115, 1512, 21), // "std::function<void()>"
QT_MOC_LITERAL(116, 1534, 18), // "Qt::ConnectionType"
QT_MOC_LITERAL(117, 1553, 4), // "type"
QT_MOC_LITERAL(118, 1558, 15), // "_requireResolve"
QT_MOC_LITERAL(119, 1574, 10), // "relativeTo"
QT_MOC_LITERAL(120, 1585, 28), // "entityScriptContentAvailable"
QT_MOC_LITERAL(121, 1614, 11), // "scriptOrURL"
QT_MOC_LITERAL(122, 1626, 8), // "contents"
QT_MOC_LITERAL(123, 1635, 5), // "isURL"
QT_MOC_LITERAL(124, 1641, 7), // "success"
QT_MOC_LITERAL(125, 1649, 6), // "status"
QT_MOC_LITERAL(126, 1656, 7) // "context"

    },
    "ScriptEngine\0scriptLoaded\0\0scriptFilename\0"
    "errorLoadingScript\0update\0deltaTime\0"
    "scriptEnding\0finished\0fileNameString\0"
    "ScriptEnginePointer\0cleanupMenuItem\0"
    "menuItemString\0printedMessage\0message\0"
    "scriptName\0errorMessage\0warningMessage\0"
    "infoMessage\0runningStateChanged\0"
    "clearDebugWindow\0loadScript\0isUserLoaded\0"
    "reloadScript\0doneRunning\0"
    "entityScriptDetailsUpdated\0"
    "entityScriptPreloadFinished\0EntityItemID\0"
    "entityID\0callAnimationStateHandler\0"
    "QScriptValue\0callback\0AnimVariantMap\0"
    "parameters\0names\0useNames\0"
    "AnimVariantResultHandler\0resultHandler\0"
    "updateMemoryCost\0stop\0marshal\0"
    "registerGlobalObject\0name\0object\0"
    "registerGetterSetter\0"
    "QScriptEngine::FunctionSignature\0"
    "getter\0setter\0parent\0registerFunction\0"
    "fun\0numArguments\0registerValue\0valueName\0"
    "value\0evaluate\0program\0fileName\0"
    "lineNumber\0evaluateInClosure\0locals\0"
    "QScriptProgram\0getContext\0isClientScript\0"
    "isDebugMode\0isEntityClientScript\0"
    "isEntityServerScript\0isAgentScript\0"
    "addEventHandler\0eventName\0handler\0"
    "removeEventHandler\0load\0loadfile\0"
    "include\0includeFiles\0includeFile\0"
    "require\0moduleId\0resetModuleCache\0"
    "deleteScriptCache\0setInterval\0function\0"
    "intervalMS\0setTimeout\0timeoutMS\0"
    "clearInterval\0timer\0clearTimeout\0print\0"
    "resolvePath\0path\0resourcesPath\0"
    "beginProfileRange\0label\0endProfileRange\0"
    "isEntityScriptRunning\0loadEntityScript\0"
    "entityScript\0forceRedownload\0"
    "unloadEntityScript\0shouldRemoveFromMap\0"
    "unloadAllEntityScripts\0callEntityScriptMethod\0"
    "methodName\0params\0remoteCallerID\0"
    "PointerEvent\0event\0otherID\0Collision\0"
    "collision\0requestGarbageCollection\0"
    "generateUUID\0executeOnScriptThread\0"
    "std::function<void()>\0Qt::ConnectionType\0"
    "type\0_requireResolve\0relativeTo\0"
    "entityScriptContentAvailable\0scriptOrURL\0"
    "contents\0isURL\0success\0status\0context"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
       1,  690, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  384,    2, 0x06 /* Public */,
       4,    1,  387,    2, 0x06 /* Public */,
       5,    1,  390,    2, 0x06 /* Public */,
       7,    0,  393,    2, 0x06 /* Public */,
       8,    2,  394,    2, 0x06 /* Public */,
      11,    1,  399,    2, 0x06 /* Public */,
      13,    2,  402,    2, 0x06 /* Public */,
      16,    2,  407,    2, 0x06 /* Public */,
      17,    2,  412,    2, 0x06 /* Public */,
      18,    2,  417,    2, 0x06 /* Public */,
      19,    0,  422,    2, 0x06 /* Public */,
      20,    0,  423,    2, 0x06 /* Public */,
      21,    2,  424,    2, 0x06 /* Public */,
      23,    2,  429,    2, 0x06 /* Public */,
      24,    0,  434,    2, 0x06 /* Public */,
      25,    0,  435,    2, 0x06 /* Public */,
      26,    1,  436,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    5,  439,    2, 0x0a /* Public */,
      38,    1,  450,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      39,    1,  453,    2, 0x02 /* Public */,
      39,    0,  456,    2, 0x22 /* Public | MethodCloned */,
      41,    2,  457,    2, 0x02 /* Public */,
      44,    4,  462,    2, 0x02 /* Public */,
      44,    3,  471,    2, 0x22 /* Public | MethodCloned */,
      49,    3,  478,    2, 0x02 /* Public */,
      49,    2,  485,    2, 0x22 /* Public | MethodCloned */,
      49,    4,  490,    2, 0x02 /* Public */,
      49,    3,  499,    2, 0x22 /* Public | MethodCloned */,
      52,    2,  506,    2, 0x02 /* Public */,
      55,    3,  511,    2, 0x02 /* Public */,
      55,    2,  518,    2, 0x22 /* Public | MethodCloned */,
      59,    2,  523,    2, 0x02 /* Public */,
      62,    0,  528,    2, 0x02 /* Public */,
      63,    0,  529,    2, 0x02 /* Public */,
      64,    0,  530,    2, 0x02 /* Public */,
      65,    0,  531,    2, 0x02 /* Public */,
      66,    0,  532,    2, 0x02 /* Public */,
      67,    0,  533,    2, 0x02 /* Public */,
      68,    3,  534,    2, 0x02 /* Public */,
      71,    3,  541,    2, 0x02 /* Public */,
      72,    1,  548,    2, 0x02 /* Public */,
      74,    2,  551,    2, 0x02 /* Public */,
      74,    1,  556,    2, 0x22 /* Public | MethodCloned */,
      74,    2,  559,    2, 0x02 /* Public */,
      74,    1,  564,    2, 0x22 /* Public | MethodCloned */,
      77,    1,  567,    2, 0x02 /* Public */,
      79,    1,  570,    2, 0x02 /* Public */,
      79,    0,  573,    2, 0x22 /* Public | MethodCloned */,
      81,    2,  574,    2, 0x02 /* Public */,
      84,    2,  579,    2, 0x02 /* Public */,
      86,    1,  584,    2, 0x02 /* Public */,
      88,    1,  587,    2, 0x02 /* Public */,
      89,    1,  590,    2, 0x02 /* Public */,
      90,    1,  593,    2, 0x02 /* Public */,
      92,    0,  596,    2, 0x02 /* Public */,
      93,    1,  597,    2, 0x02 /* Public */,
      95,    1,  600,    2, 0x02 /* Public */,
      96,    1,  603,    2, 0x02 /* Public */,
      97,    3,  606,    2, 0x02 /* Public */,
     100,    2,  613,    2, 0x02 /* Public */,
     100,    1,  618,    2, 0x22 /* Public | MethodCloned */,
     102,    0,  621,    2, 0x02 /* Public */,
     103,    4,  622,    2, 0x02 /* Public */,
     103,    3,  631,    2, 0x22 /* Public | MethodCloned */,
     103,    2,  638,    2, 0x22 /* Public | MethodCloned */,
     103,    3,  643,    2, 0x02 /* Public */,
     103,    4,  650,    2, 0x02 /* Public */,
     112,    0,  659,    2, 0x02 /* Public */,
     113,    0,  660,    2, 0x02 /* Public */,
     114,    2,  661,    2, 0x01 /* Protected */,
     114,    1,  666,    2, 0x21 /* Protected | MethodCloned */,
     118,    2,  669,    2, 0x01 /* Protected */,
     118,    1,  674,    2, 0x21 /* Protected | MethodCloned */,
     120,    6,  677,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,    2,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 32, QMetaType::QStringList, QMetaType::Bool, 0x80000000 | 36,   31,   33,   34,   35,   37,
    QMetaType::Void, QMetaType::LongLong,    2,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,   42,   43,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45, 0x80000000 | 45, QMetaType::QString,   42,   46,   47,   48,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45, 0x80000000 | 45,   42,   46,   47,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45, QMetaType::Int,   42,   50,   51,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 45,   42,   50,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 45, QMetaType::Int,   48,   42,   50,   51,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 45,   48,   42,   50,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   53,   54,
    0x80000000 | 30, QMetaType::QString, QMetaType::QString, QMetaType::Int,   56,   57,   58,
    0x80000000 | 30, QMetaType::QString, QMetaType::QString,   56,   57,
    0x80000000 | 30, 0x80000000 | 30, 0x80000000 | 61,   60,   56,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, 0x80000000 | 30,   28,   69,   70,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, 0x80000000 | 30,   28,   69,   70,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 30,   75,   31,
    QMetaType::Void, QMetaType::QStringList,   75,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30,   76,   31,
    QMetaType::Void, QMetaType::QString,   76,
    0x80000000 | 30, QMetaType::QString,   78,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void,
    QMetaType::QObjectStar, 0x80000000 | 30, QMetaType::Int,   82,   83,
    QMetaType::QObjectStar, 0x80000000 | 30, QMetaType::Int,   82,   85,
    QMetaType::Void, QMetaType::QObjectStar,   87,
    QMetaType::Void, QMetaType::QObjectStar,   87,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::QUrl, QMetaType::QString,   91,
    QMetaType::QUrl,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Void, QMetaType::QString,   94,
    QMetaType::Bool, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::Bool,   28,   98,   99,
    QMetaType::Void, 0x80000000 | 27, QMetaType::Bool,   28,  101,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::QStringList, QMetaType::QUuid,   28,  104,  105,  106,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::QStringList,   28,  104,  105,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString,   28,  104,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, 0x80000000 | 107,   28,  104,  108,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 110,   28,  104,  109,  111,
    QMetaType::Void,
    QMetaType::QUuid,
    QMetaType::Void, 0x80000000 | 115, 0x80000000 | 116,   82,  117,
    QMetaType::Void, 0x80000000 | 115,   82,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   78,  119,
    QMetaType::QString, QMetaType::QString,   78,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   28,  121,  122,  123,  124,  125,

 // properties: name, type, flags
     126, QMetaType::QString, 0x00095001,

       0        // eod
};

void ScriptEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptEngine *_t = static_cast<ScriptEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scriptLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->errorLoadingScript((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->update((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->scriptEnding(); break;
        case 4: _t->finished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ScriptEnginePointer(*)>(_a[2]))); break;
        case 5: _t->cleanupMenuItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->printedMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->warningMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->runningStateChanged(); break;
        case 11: _t->clearDebugWindow(); break;
        case 12: _t->loadScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->reloadScript((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->doneRunning(); break;
        case 15: _t->entityScriptDetailsUpdated(); break;
        case 16: _t->entityScriptPreloadFinished((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 17: _t->callAnimationStateHandler((*reinterpret_cast< QScriptValue(*)>(_a[1])),(*reinterpret_cast< AnimVariantMap(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< AnimVariantResultHandler(*)>(_a[5]))); break;
        case 18: _t->updateMemoryCost((*reinterpret_cast< const qint64(*)>(_a[1]))); break;
        case 19: _t->stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->stop(); break;
        case 21: _t->registerGlobalObject((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 22: _t->registerGetterSetter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[2])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 23: _t->registerGetterSetter((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[2])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[3]))); break;
        case 24: _t->registerFunction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 25: _t->registerFunction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[2]))); break;
        case 26: _t->registerFunction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 27: _t->registerFunction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QScriptEngine::FunctionSignature(*)>(_a[3]))); break;
        case 28: _t->registerValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2]))); break;
        case 29: { QScriptValue _r = _t->evaluate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 30: { QScriptValue _r = _t->evaluate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 31: { QScriptValue _r = _t->evaluateInClosure((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< const QScriptProgram(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 32: { QString _r = _t->getContext();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->isClientScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->isDebugMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->isEntityClientScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->isEntityServerScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->isAgentScript();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->addEventHandler((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QScriptValue(*)>(_a[3]))); break;
        case 39: _t->removeEventHandler((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QScriptValue(*)>(_a[3]))); break;
        case 40: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->include((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2]))); break;
        case 42: _t->include((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 43: _t->include((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QScriptValue(*)>(_a[2]))); break;
        case 44: _t->include((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: { QScriptValue _r = _t->require((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->resetModuleCache((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->resetModuleCache(); break;
        case 48: { QObject* _r = _t->setInterval((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 49: { QObject* _r = _t->setTimeout((*reinterpret_cast< const QScriptValue(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 50: _t->clearInterval((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 51: _t->clearTimeout((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 52: _t->print((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: { QUrl _r = _t->resolvePath((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 54: { QUrl _r = _t->resourcesPath();
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 55: _t->beginProfileRange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->endProfileRange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 57: { bool _r = _t->isEntityScriptRunning((*reinterpret_cast< const EntityItemID(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: _t->loadEntityScript((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 59: _t->unloadEntityScript((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 60: _t->unloadEntityScript((*reinterpret_cast< const EntityItemID(*)>(_a[1]))); break;
        case 61: _t->unloadAllEntityScripts(); break;
        case 62: _t->callEntityScriptMethod((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< const QUuid(*)>(_a[4]))); break;
        case 63: _t->callEntityScriptMethod((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 64: _t->callEntityScriptMethod((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 65: _t->callEntityScriptMethod((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const PointerEvent(*)>(_a[3]))); break;
        case 66: _t->callEntityScriptMethod((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const EntityItemID(*)>(_a[3])),(*reinterpret_cast< const Collision(*)>(_a[4]))); break;
        case 67: _t->requestGarbageCollection(); break;
        case 68: { QUuid _r = _t->generateUUID();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 69: _t->executeOnScriptThread((*reinterpret_cast< std::function<void()>(*)>(_a[1])),(*reinterpret_cast< const Qt::ConnectionType(*)>(_a[2]))); break;
        case 70: _t->executeOnScriptThread((*reinterpret_cast< std::function<void()>(*)>(_a[1]))); break;
        case 71: { QString _r = _t->_requireResolve((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 72: { QString _r = _t->_requireResolve((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 73: _t->entityScriptContentAvailable((*reinterpret_cast< const EntityItemID(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ScriptEnginePointer >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnimVariantMap >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AnimVariantResultHandler >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 59:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PointerEvent >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Collision >(); break;
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        case 69:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::function<void()> >(); break;
            }
            break;
        case 70:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::function<void()> >(); break;
            }
            break;
        case 73:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EntityItemID >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::scriptLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::errorLoadingScript)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::update)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::scriptEnding)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , ScriptEnginePointer );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::finished)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::cleanupMenuItem)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::printedMessage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::errorMessage)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::warningMessage)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::infoMessage)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::runningStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::clearDebugWindow)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::loadScript)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::reloadScript)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::doneRunning)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::entityScriptDetailsUpdated)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ScriptEngine::*)(const EntityItemID & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptEngine::entityScriptPreloadFinished)) {
                *result = 16;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptEngine *_t = static_cast<ScriptEngine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getContext(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptEngine::staticMetaObject = {
    { &BaseScriptEngine::staticMetaObject, qt_meta_stringdata_ScriptEngine.data,
      qt_meta_data_ScriptEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptEngine.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EntitiesScriptEngineProvider"))
        return static_cast< EntitiesScriptEngineProvider*>(this);
    return BaseScriptEngine::qt_metacast(_clname);
}

int ScriptEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseScriptEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
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
void ScriptEngine::scriptLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptEngine::errorLoadingScript(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScriptEngine::update(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ScriptEngine::scriptEnding()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ScriptEngine::finished(const QString & _t1, ScriptEnginePointer _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ScriptEngine::cleanupMenuItem(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ScriptEngine::printedMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ScriptEngine::errorMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ScriptEngine::warningMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ScriptEngine::infoMessage(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ScriptEngine::runningStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ScriptEngine::clearDebugWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ScriptEngine::loadScript(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ScriptEngine::reloadScript(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ScriptEngine::doneRunning()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void ScriptEngine::entityScriptDetailsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void ScriptEngine::entityScriptPreloadFinished(const EntityItemID & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
