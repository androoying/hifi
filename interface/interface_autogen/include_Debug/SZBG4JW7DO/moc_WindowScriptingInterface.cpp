/****************************************************************************
** Meta object code from reading C++ file 'WindowScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/WindowScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WindowScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WindowScriptingInterface_t {
    QByteArrayData data[110];
    char stringdata0[1506];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WindowScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WindowScriptingInterface_t qt_meta_stringdata_WindowScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WindowScriptingInterface"
QT_MOC_LITERAL(1, 25, 13), // "domainChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "domainURL"
QT_MOC_LITERAL(4, 50, 18), // "svoImportRequested"
QT_MOC_LITERAL(5, 69, 3), // "url"
QT_MOC_LITERAL(6, 73, 23), // "domainConnectionRefused"
QT_MOC_LITERAL(7, 97, 13), // "reasonMessage"
QT_MOC_LITERAL(8, 111, 10), // "reasonCode"
QT_MOC_LITERAL(9, 122, 9), // "extraInfo"
QT_MOC_LITERAL(10, 132, 25), // "redirectErrorStateChanged"
QT_MOC_LITERAL(11, 158, 14), // "isInErrorState"
QT_MOC_LITERAL(12, 173, 23), // "interstitialModeChanged"
QT_MOC_LITERAL(13, 197, 16), // "interstitialMode"
QT_MOC_LITERAL(14, 214, 18), // "stillSnapshotTaken"
QT_MOC_LITERAL(15, 233, 17), // "pathStillSnapshot"
QT_MOC_LITERAL(16, 251, 6), // "notify"
QT_MOC_LITERAL(17, 258, 16), // "snapshot360Taken"
QT_MOC_LITERAL(18, 275, 15), // "path360Snapshot"
QT_MOC_LITERAL(19, 291, 14), // "snapshotShared"
QT_MOC_LITERAL(20, 306, 7), // "isError"
QT_MOC_LITERAL(21, 314, 5), // "reply"
QT_MOC_LITERAL(22, 320, 20), // "processingGifStarted"
QT_MOC_LITERAL(23, 341, 22), // "processingGifCompleted"
QT_MOC_LITERAL(24, 364, 20), // "pathAnimatedSnapshot"
QT_MOC_LITERAL(25, 385, 15), // "connectionAdded"
QT_MOC_LITERAL(26, 401, 14), // "connectionName"
QT_MOC_LITERAL(27, 416, 15), // "connectionError"
QT_MOC_LITERAL(28, 432, 11), // "errorString"
QT_MOC_LITERAL(29, 444, 12), // "announcement"
QT_MOC_LITERAL(30, 457, 7), // "message"
QT_MOC_LITERAL(31, 465, 16), // "messageBoxClosed"
QT_MOC_LITERAL(32, 482, 2), // "id"
QT_MOC_LITERAL(33, 485, 6), // "button"
QT_MOC_LITERAL(34, 492, 16), // "browseDirChanged"
QT_MOC_LITERAL(35, 509, 9), // "browseDir"
QT_MOC_LITERAL(36, 519, 16), // "assetsDirChanged"
QT_MOC_LITERAL(37, 536, 9), // "assetsDir"
QT_MOC_LITERAL(38, 546, 15), // "saveFileChanged"
QT_MOC_LITERAL(39, 562, 8), // "filename"
QT_MOC_LITERAL(40, 571, 13), // "browseChanged"
QT_MOC_LITERAL(41, 585, 17), // "promptTextChanged"
QT_MOC_LITERAL(42, 603, 4), // "text"
QT_MOC_LITERAL(43, 608, 15), // "geometryChanged"
QT_MOC_LITERAL(44, 624, 8), // "geometry"
QT_MOC_LITERAL(45, 633, 8), // "hasFocus"
QT_MOC_LITERAL(46, 642, 12), // "QScriptValue"
QT_MOC_LITERAL(47, 655, 8), // "setFocus"
QT_MOC_LITERAL(48, 664, 5), // "raise"
QT_MOC_LITERAL(49, 670, 5), // "alert"
QT_MOC_LITERAL(50, 676, 7), // "confirm"
QT_MOC_LITERAL(51, 684, 6), // "prompt"
QT_MOC_LITERAL(52, 691, 11), // "defaultText"
QT_MOC_LITERAL(53, 703, 11), // "promptAsync"
QT_MOC_LITERAL(54, 715, 5), // "title"
QT_MOC_LITERAL(55, 721, 9), // "directory"
QT_MOC_LITERAL(56, 731, 14), // "browseDirAsync"
QT_MOC_LITERAL(57, 746, 6), // "browse"
QT_MOC_LITERAL(58, 753, 10), // "nameFilter"
QT_MOC_LITERAL(59, 764, 11), // "browseAsync"
QT_MOC_LITERAL(60, 776, 4), // "save"
QT_MOC_LITERAL(61, 781, 9), // "saveAsync"
QT_MOC_LITERAL(62, 791, 12), // "browseAssets"
QT_MOC_LITERAL(63, 804, 17), // "browseAssetsAsync"
QT_MOC_LITERAL(64, 822, 15), // "showAssetServer"
QT_MOC_LITERAL(65, 838, 6), // "upload"
QT_MOC_LITERAL(66, 845, 12), // "checkVersion"
QT_MOC_LITERAL(67, 858, 17), // "protocolSignature"
QT_MOC_LITERAL(68, 876, 15), // "copyToClipboard"
QT_MOC_LITERAL(69, 892, 12), // "takeSnapshot"
QT_MOC_LITERAL(70, 905, 15), // "includeAnimated"
QT_MOC_LITERAL(71, 921, 11), // "aspectRatio"
QT_MOC_LITERAL(72, 933, 27), // "takeSecondaryCameraSnapshot"
QT_MOC_LITERAL(73, 961, 30), // "takeSecondaryCamera360Snapshot"
QT_MOC_LITERAL(74, 992, 9), // "glm::vec3"
QT_MOC_LITERAL(75, 1002, 14), // "cameraPosition"
QT_MOC_LITERAL(76, 1017, 19), // "cubemapOutputFormat"
QT_MOC_LITERAL(77, 1037, 14), // "makeConnection"
QT_MOC_LITERAL(78, 1052, 7), // "success"
QT_MOC_LITERAL(79, 1060, 15), // "userNameOrError"
QT_MOC_LITERAL(80, 1076, 19), // "displayAnnouncement"
QT_MOC_LITERAL(81, 1096, 13), // "shareSnapshot"
QT_MOC_LITERAL(82, 1110, 4), // "path"
QT_MOC_LITERAL(83, 1115, 4), // "href"
QT_MOC_LITERAL(84, 1120, 16), // "isPhysicsEnabled"
QT_MOC_LITERAL(85, 1137, 17), // "setDisplayTexture"
QT_MOC_LITERAL(86, 1155, 4), // "name"
QT_MOC_LITERAL(87, 1160, 22), // "isPointOnDesktopWindow"
QT_MOC_LITERAL(88, 1183, 5), // "point"
QT_MOC_LITERAL(89, 1189, 13), // "getDeviceSize"
QT_MOC_LITERAL(90, 1203, 9), // "glm::vec2"
QT_MOC_LITERAL(91, 1213, 28), // "getLastDomainConnectionError"
QT_MOC_LITERAL(92, 1242, 14), // "openMessageBox"
QT_MOC_LITERAL(93, 1257, 7), // "buttons"
QT_MOC_LITERAL(94, 1265, 13), // "defaultButton"
QT_MOC_LITERAL(95, 1279, 7), // "openUrl"
QT_MOC_LITERAL(96, 1287, 19), // "openAndroidActivity"
QT_MOC_LITERAL(97, 1307, 12), // "activityName"
QT_MOC_LITERAL(98, 1320, 11), // "backToScene"
QT_MOC_LITERAL(99, 1332, 16), // "updateMessageBox"
QT_MOC_LITERAL(100, 1349, 15), // "closeMessageBox"
QT_MOC_LITERAL(101, 1365, 21), // "domainLoadingProgress"
QT_MOC_LITERAL(102, 1387, 23), // "onWindowGeometryChanged"
QT_MOC_LITERAL(103, 1411, 20), // "onMessageBoxSelected"
QT_MOC_LITERAL(104, 1432, 22), // "disconnectedFromDomain"
QT_MOC_LITERAL(105, 1455, 10), // "innerWidth"
QT_MOC_LITERAL(106, 1466, 11), // "innerHeight"
QT_MOC_LITERAL(107, 1478, 1), // "x"
QT_MOC_LITERAL(108, 1480, 1), // "y"
QT_MOC_LITERAL(109, 1482, 23) // "interstitialModeEnabled"

    },
    "WindowScriptingInterface\0domainChanged\0"
    "\0domainURL\0svoImportRequested\0url\0"
    "domainConnectionRefused\0reasonMessage\0"
    "reasonCode\0extraInfo\0redirectErrorStateChanged\0"
    "isInErrorState\0interstitialModeChanged\0"
    "interstitialMode\0stillSnapshotTaken\0"
    "pathStillSnapshot\0notify\0snapshot360Taken\0"
    "path360Snapshot\0snapshotShared\0isError\0"
    "reply\0processingGifStarted\0"
    "processingGifCompleted\0pathAnimatedSnapshot\0"
    "connectionAdded\0connectionName\0"
    "connectionError\0errorString\0announcement\0"
    "message\0messageBoxClosed\0id\0button\0"
    "browseDirChanged\0browseDir\0assetsDirChanged\0"
    "assetsDir\0saveFileChanged\0filename\0"
    "browseChanged\0promptTextChanged\0text\0"
    "geometryChanged\0geometry\0hasFocus\0"
    "QScriptValue\0setFocus\0raise\0alert\0"
    "confirm\0prompt\0defaultText\0promptAsync\0"
    "title\0directory\0browseDirAsync\0browse\0"
    "nameFilter\0browseAsync\0save\0saveAsync\0"
    "browseAssets\0browseAssetsAsync\0"
    "showAssetServer\0upload\0checkVersion\0"
    "protocolSignature\0copyToClipboard\0"
    "takeSnapshot\0includeAnimated\0aspectRatio\0"
    "takeSecondaryCameraSnapshot\0"
    "takeSecondaryCamera360Snapshot\0glm::vec3\0"
    "cameraPosition\0cubemapOutputFormat\0"
    "makeConnection\0success\0userNameOrError\0"
    "displayAnnouncement\0shareSnapshot\0"
    "path\0href\0isPhysicsEnabled\0setDisplayTexture\0"
    "name\0isPointOnDesktopWindow\0point\0"
    "getDeviceSize\0glm::vec2\0"
    "getLastDomainConnectionError\0"
    "openMessageBox\0buttons\0defaultButton\0"
    "openUrl\0openAndroidActivity\0activityName\0"
    "backToScene\0updateMessageBox\0"
    "closeMessageBox\0domainLoadingProgress\0"
    "onWindowGeometryChanged\0onMessageBoxSelected\0"
    "disconnectedFromDomain\0innerWidth\0"
    "innerHeight\0x\0y\0interstitialModeEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WindowScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      96,   14, // methods
       5,  836, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  494,    2, 0x06 /* Public */,
       4,    1,  497,    2, 0x06 /* Public */,
       6,    3,  500,    2, 0x06 /* Public */,
      10,    1,  507,    2, 0x06 /* Public */,
      12,    1,  510,    2, 0x06 /* Public */,
      14,    2,  513,    2, 0x06 /* Public */,
      17,    2,  518,    2, 0x06 /* Public */,
      19,    2,  523,    2, 0x06 /* Public */,
      22,    1,  528,    2, 0x06 /* Public */,
      23,    1,  531,    2, 0x06 /* Public */,
      25,    1,  534,    2, 0x06 /* Public */,
      27,    1,  537,    2, 0x06 /* Public */,
      29,    1,  540,    2, 0x06 /* Public */,
      31,    2,  543,    2, 0x06 /* Public */,
      34,    1,  548,    2, 0x06 /* Public */,
      36,    1,  551,    2, 0x06 /* Public */,
      38,    1,  554,    2, 0x06 /* Public */,
      40,    1,  557,    2, 0x06 /* Public */,
      41,    1,  560,    2, 0x06 /* Public */,
      43,    1,  563,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      45,    0,  566,    2, 0x0a /* Public */,
      47,    0,  567,    2, 0x0a /* Public */,
      48,    0,  568,    2, 0x0a /* Public */,
      49,    1,  569,    2, 0x0a /* Public */,
      49,    0,  572,    2, 0x2a /* Public | MethodCloned */,
      50,    1,  573,    2, 0x0a /* Public */,
      50,    0,  576,    2, 0x2a /* Public | MethodCloned */,
      51,    2,  577,    2, 0x0a /* Public */,
      53,    2,  582,    2, 0x0a /* Public */,
      53,    1,  587,    2, 0x2a /* Public | MethodCloned */,
      53,    0,  590,    2, 0x2a /* Public | MethodCloned */,
      35,    2,  591,    2, 0x0a /* Public */,
      35,    1,  596,    2, 0x2a /* Public | MethodCloned */,
      35,    0,  599,    2, 0x2a /* Public | MethodCloned */,
      56,    2,  600,    2, 0x0a /* Public */,
      56,    1,  605,    2, 0x2a /* Public | MethodCloned */,
      56,    0,  608,    2, 0x2a /* Public | MethodCloned */,
      57,    3,  609,    2, 0x0a /* Public */,
      57,    2,  616,    2, 0x2a /* Public | MethodCloned */,
      57,    1,  621,    2, 0x2a /* Public | MethodCloned */,
      57,    0,  624,    2, 0x2a /* Public | MethodCloned */,
      59,    3,  625,    2, 0x0a /* Public */,
      59,    2,  632,    2, 0x2a /* Public | MethodCloned */,
      59,    1,  637,    2, 0x2a /* Public | MethodCloned */,
      59,    0,  640,    2, 0x2a /* Public | MethodCloned */,
      60,    3,  641,    2, 0x0a /* Public */,
      60,    2,  648,    2, 0x2a /* Public | MethodCloned */,
      60,    1,  653,    2, 0x2a /* Public | MethodCloned */,
      60,    0,  656,    2, 0x2a /* Public | MethodCloned */,
      61,    3,  657,    2, 0x0a /* Public */,
      61,    2,  664,    2, 0x2a /* Public | MethodCloned */,
      61,    1,  669,    2, 0x2a /* Public | MethodCloned */,
      61,    0,  672,    2, 0x2a /* Public | MethodCloned */,
      62,    3,  673,    2, 0x0a /* Public */,
      62,    2,  680,    2, 0x2a /* Public | MethodCloned */,
      62,    1,  685,    2, 0x2a /* Public | MethodCloned */,
      62,    0,  688,    2, 0x2a /* Public | MethodCloned */,
      63,    3,  689,    2, 0x0a /* Public */,
      63,    2,  696,    2, 0x2a /* Public | MethodCloned */,
      63,    1,  701,    2, 0x2a /* Public | MethodCloned */,
      63,    0,  704,    2, 0x2a /* Public | MethodCloned */,
      64,    1,  705,    2, 0x0a /* Public */,
      64,    0,  708,    2, 0x2a /* Public | MethodCloned */,
      66,    0,  709,    2, 0x0a /* Public */,
      67,    0,  710,    2, 0x0a /* Public */,
      68,    1,  711,    2, 0x0a /* Public */,
      69,    4,  714,    2, 0x0a /* Public */,
      69,    3,  723,    2, 0x2a /* Public | MethodCloned */,
      69,    2,  730,    2, 0x2a /* Public | MethodCloned */,
      69,    1,  735,    2, 0x2a /* Public | MethodCloned */,
      69,    0,  738,    2, 0x2a /* Public | MethodCloned */,
      72,    2,  739,    2, 0x0a /* Public */,
      72,    1,  744,    2, 0x2a /* Public | MethodCloned */,
      72,    0,  747,    2, 0x2a /* Public | MethodCloned */,
      73,    4,  748,    2, 0x0a /* Public */,
      73,    3,  757,    2, 0x2a /* Public | MethodCloned */,
      73,    2,  764,    2, 0x2a /* Public | MethodCloned */,
      73,    1,  769,    2, 0x2a /* Public | MethodCloned */,
      77,    2,  772,    2, 0x0a /* Public */,
      80,    1,  777,    2, 0x0a /* Public */,
      81,    2,  780,    2, 0x0a /* Public */,
      81,    1,  785,    2, 0x2a /* Public | MethodCloned */,
      84,    0,  788,    2, 0x0a /* Public */,
      85,    1,  789,    2, 0x0a /* Public */,
      87,    1,  792,    2, 0x0a /* Public */,
      89,    0,  795,    2, 0x0a /* Public */,
      91,    0,  796,    2, 0x0a /* Public */,
      92,    4,  797,    2, 0x0a /* Public */,
      95,    1,  806,    2, 0x0a /* Public */,
      96,    2,  809,    2, 0x0a /* Public */,
      99,    5,  814,    2, 0x0a /* Public */,
     100,    1,  825,    2, 0x0a /* Public */,
     101,    0,  828,    2, 0x0a /* Public */,
     102,    1,  829,    2, 0x08 /* Private */,
     103,    1,  832,    2, 0x08 /* Private */,
     104,    0,  835,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   18,   16,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   20,   21,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   32,   33,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   39,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QRect,   44,

 // slots: parameters
    0x80000000 | 46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    0x80000000 | 46, QMetaType::QString,   30,
    0x80000000 | 46,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString,   30,   52,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   30,   52,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString,   54,   55,
    0x80000000 | 46, QMetaType::QString,   54,
    0x80000000 | 46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   54,   55,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString,   54,   55,
    0x80000000 | 46, QMetaType::QString,   54,
    0x80000000 | 46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   54,   55,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString,   54,   55,
    0x80000000 | 46, QMetaType::QString,   54,
    0x80000000 | 46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   54,   55,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    0x80000000 | 46, QMetaType::QString, QMetaType::QString,   54,   55,
    0x80000000 | 46, QMetaType::QString,   54,
    0x80000000 | 46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   54,   55,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   54,   55,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::Void,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::QString,   16,   70,   71,   39,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Float,   16,   70,   71,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   16,   70,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   16,   39,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 74, QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   75,   76,   16,   39,
    QMetaType::Void, 0x80000000 | 74, QMetaType::Bool, QMetaType::Bool,   75,   76,   16,
    QMetaType::Void, 0x80000000 | 74, QMetaType::Bool,   75,   76,
    QMetaType::Void, 0x80000000 | 74,   75,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   78,   79,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   82,   83,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString,   86,
    QMetaType::Bool, QMetaType::QVariant,   88,
    0x80000000 | 90,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   54,   42,   93,   94,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   97,   98,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   32,   54,   42,   93,   94,
    QMetaType::Void, QMetaType::Int,   32,
    QMetaType::Float,
    QMetaType::Void, QMetaType::QRect,   44,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,

 // properties: name, type, flags
     105, QMetaType::Int, 0x00095001,
     106, QMetaType::Int, 0x00095001,
     107, QMetaType::Int, 0x00095001,
     108, QMetaType::Int, 0x00095001,
     109, QMetaType::Bool, 0x00095103,

       0        // eod
};

void WindowScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WindowScriptingInterface *_t = static_cast<WindowScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->domainChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->svoImportRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->domainConnectionRefused((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->redirectErrorStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->interstitialModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->stillSnapshotTaken((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->snapshot360Taken((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->snapshotShared((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->processingGifStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->processingGifCompleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->connectionAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->connectionError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->announcement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->messageBoxClosed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->browseDirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->assetsDirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->saveFileChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->browseChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->promptTextChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->geometryChanged((*reinterpret_cast< QRect(*)>(_a[1]))); break;
        case 20: { QScriptValue _r = _t->hasFocus();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setFocus(); break;
        case 22: _t->raise(); break;
        case 23: _t->alert((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->alert(); break;
        case 25: { QScriptValue _r = _t->confirm((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 26: { QScriptValue _r = _t->confirm();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 27: { QScriptValue _r = _t->prompt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->promptAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->promptAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->promptAsync(); break;
        case 31: { QScriptValue _r = _t->browseDir((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 32: { QScriptValue _r = _t->browseDir((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 33: { QScriptValue _r = _t->browseDir();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->browseDirAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 35: _t->browseDirAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->browseDirAsync(); break;
        case 37: { QScriptValue _r = _t->browse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 38: { QScriptValue _r = _t->browse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 39: { QScriptValue _r = _t->browse((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 40: { QScriptValue _r = _t->browse();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 41: _t->browseAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 42: _t->browseAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 43: _t->browseAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->browseAsync(); break;
        case 45: { QScriptValue _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 46: { QScriptValue _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 47: { QScriptValue _r = _t->save((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 48: { QScriptValue _r = _t->save();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->saveAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 50: _t->saveAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 51: _t->saveAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->saveAsync(); break;
        case 53: { QScriptValue _r = _t->browseAssets((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 54: { QScriptValue _r = _t->browseAssets((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 55: { QScriptValue _r = _t->browseAssets((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 56: { QScriptValue _r = _t->browseAssets();
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = std::move(_r); }  break;
        case 57: _t->browseAssetsAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 58: _t->browseAssetsAsync((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 59: _t->browseAssetsAsync((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: _t->browseAssetsAsync(); break;
        case 61: _t->showAssetServer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 62: _t->showAssetServer(); break;
        case 63: { QString _r = _t->checkVersion();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->protocolSignature();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: _t->copyToClipboard((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 66: _t->takeSnapshot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 67: _t->takeSnapshot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 68: _t->takeSnapshot((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 69: _t->takeSnapshot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 70: _t->takeSnapshot(); break;
        case 71: _t->takeSecondaryCameraSnapshot((*reinterpret_cast< const bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 72: _t->takeSecondaryCameraSnapshot((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 73: _t->takeSecondaryCameraSnapshot(); break;
        case 74: _t->takeSecondaryCamera360Snapshot((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 75: _t->takeSecondaryCamera360Snapshot((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 76: _t->takeSecondaryCamera360Snapshot((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 77: _t->takeSecondaryCamera360Snapshot((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 78: _t->makeConnection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 79: _t->displayAnnouncement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 80: _t->shareSnapshot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 81: _t->shareSnapshot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 82: { bool _r = _t->isPhysicsEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 83: { bool _r = _t->setDisplayTexture((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 84: { bool _r = _t->isPointOnDesktopWindow((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 85: { glm::vec2 _r = _t->getDeviceSize();
            if (_a[0]) *reinterpret_cast< glm::vec2*>(_a[0]) = std::move(_r); }  break;
        case 86: { int _r = _t->getLastDomainConnectionError();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 87: { int _r = _t->openMessageBox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 88: _t->openUrl((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 89: _t->openAndroidActivity((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2]))); break;
        case 90: _t->updateMessageBox((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 91: _t->closeMessageBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 92: { float _r = _t->domainLoadingProgress();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 93: _t->onWindowGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 94: _t->onMessageBoxSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 95: _t->disconnectedFromDomain(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WindowScriptingInterface::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::domainChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::svoImportRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::domainConnectionRefused)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::redirectErrorStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::interstitialModeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::stillSnapshotTaken)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::snapshot360Taken)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::snapshotShared)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::processingGifStarted)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::processingGifCompleted)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::connectionAdded)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::connectionError)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::announcement)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::messageBoxClosed)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::browseDirChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::assetsDirChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::saveFileChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::browseChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::promptTextChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (WindowScriptingInterface::*)(QRect );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WindowScriptingInterface::geometryChanged)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WindowScriptingInterface *_t = static_cast<WindowScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getInnerWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getInnerHeight(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getX(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getY(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getInterstitialModeEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        WindowScriptingInterface *_t = static_cast<WindowScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setInterstitialModeEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WindowScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WindowScriptingInterface.data,
      qt_meta_data_WindowScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WindowScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WindowScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int WindowScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 96)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 96;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 96)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 96;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WindowScriptingInterface::domainChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WindowScriptingInterface::svoImportRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WindowScriptingInterface::domainConnectionRefused(const QString & _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WindowScriptingInterface::redirectErrorStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WindowScriptingInterface::interstitialModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WindowScriptingInterface::stillSnapshotTaken(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WindowScriptingInterface::snapshot360Taken(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WindowScriptingInterface::snapshotShared(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WindowScriptingInterface::processingGifStarted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WindowScriptingInterface::processingGifCompleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WindowScriptingInterface::connectionAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WindowScriptingInterface::connectionError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WindowScriptingInterface::announcement(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WindowScriptingInterface::messageBoxClosed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WindowScriptingInterface::browseDirChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WindowScriptingInterface::assetsDirChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WindowScriptingInterface::saveFileChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void WindowScriptingInterface::browseChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void WindowScriptingInterface::promptTextChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void WindowScriptingInterface::geometryChanged(QRect _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
