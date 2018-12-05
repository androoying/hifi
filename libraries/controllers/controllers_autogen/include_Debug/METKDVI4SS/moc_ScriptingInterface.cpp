/****************************************************************************
** Meta object code from reading C++ file 'ScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/controllers/ScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controller__InputController_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller__InputController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller__InputController_t qt_meta_stringdata_controller__InputController = {
    {
QT_MOC_LITERAL(0, 0, 27), // "controller::InputController"
QT_MOC_LITERAL(1, 28, 8), // "isActive"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "getAbsTranslation"
QT_MOC_LITERAL(4, 56, 9), // "glm::vec3"
QT_MOC_LITERAL(5, 66, 14), // "getAbsRotation"
QT_MOC_LITERAL(6, 81, 9), // "glm::quat"
QT_MOC_LITERAL(7, 91, 17), // "getLocTranslation"
QT_MOC_LITERAL(8, 109, 14) // "getLocRotation"

    },
    "controller::InputController\0isActive\0"
    "\0getAbsTranslation\0glm::vec3\0"
    "getAbsRotation\0glm::quat\0getLocTranslation\0"
    "getLocRotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller__InputController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       5,    0,   41,    2, 0x0a /* Public */,
       7,    0,   42,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool,
    0x80000000 | 4,
    0x80000000 | 6,
    0x80000000 | 4,
    0x80000000 | 6,

       0        // eod
};

void controller::InputController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InputController *_t = static_cast<InputController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->isActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { glm::vec3 _r = _t->getAbsTranslation();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 2: { glm::quat _r = _t->getAbsRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::vec3 _r = _t->getLocTranslation();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::quat _r = _t->getLocRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject controller::InputController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller__InputController.data,
      qt_meta_data_controller__InputController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *controller::InputController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::InputController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controller__InputController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int controller::InputController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_controller__ScriptingInterface_t {
    QByteArrayData data[71];
    char stringdata0[1045];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controller__ScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controller__ScriptingInterface_t qt_meta_stringdata_controller__ScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "controller::ScriptingInterface"
QT_MOC_LITERAL(1, 31, 11), // "actionEvent"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "action"
QT_MOC_LITERAL(4, 51, 5), // "state"
QT_MOC_LITERAL(5, 57, 10), // "inputEvent"
QT_MOC_LITERAL(6, 68, 15), // "hardwareChanged"
QT_MOC_LITERAL(7, 84, 25), // "inputDeviceRunningChanged"
QT_MOC_LITERAL(8, 110, 10), // "deviceName"
QT_MOC_LITERAL(9, 121, 9), // "isRunning"
QT_MOC_LITERAL(10, 131, 18), // "captureMouseEvents"
QT_MOC_LITERAL(11, 150, 18), // "releaseMouseEvents"
QT_MOC_LITERAL(12, 169, 18), // "captureTouchEvents"
QT_MOC_LITERAL(13, 188, 18), // "releaseTouchEvents"
QT_MOC_LITERAL(14, 207, 18), // "captureWheelEvents"
QT_MOC_LITERAL(15, 226, 18), // "releaseWheelEvents"
QT_MOC_LITERAL(16, 245, 19), // "captureActionEvents"
QT_MOC_LITERAL(17, 265, 19), // "releaseActionEvents"
QT_MOC_LITERAL(18, 285, 25), // "updateRunningInputDevices"
QT_MOC_LITERAL(19, 311, 14), // "runningDevices"
QT_MOC_LITERAL(20, 326, 13), // "getAllActions"
QT_MOC_LITERAL(21, 340, 15), // "QVector<Action>"
QT_MOC_LITERAL(22, 356, 18), // "getAvailableInputs"
QT_MOC_LITERAL(23, 375, 25), // "QVector<Input::NamedPair>"
QT_MOC_LITERAL(24, 401, 6), // "device"
QT_MOC_LITERAL(25, 408, 13), // "getDeviceName"
QT_MOC_LITERAL(26, 422, 14), // "getActionValue"
QT_MOC_LITERAL(27, 437, 10), // "findDevice"
QT_MOC_LITERAL(28, 448, 4), // "name"
QT_MOC_LITERAL(29, 453, 14), // "getDeviceNames"
QT_MOC_LITERAL(30, 468, 16), // "QVector<QString>"
QT_MOC_LITERAL(31, 485, 10), // "findAction"
QT_MOC_LITERAL(32, 496, 10), // "actionName"
QT_MOC_LITERAL(33, 507, 14), // "getActionNames"
QT_MOC_LITERAL(34, 522, 8), // "getValue"
QT_MOC_LITERAL(35, 531, 6), // "source"
QT_MOC_LITERAL(36, 538, 12), // "getAxisValue"
QT_MOC_LITERAL(37, 551, 12), // "getPoseValue"
QT_MOC_LITERAL(38, 564, 4), // "Pose"
QT_MOC_LITERAL(39, 569, 18), // "triggerHapticPulse"
QT_MOC_LITERAL(40, 588, 8), // "strength"
QT_MOC_LITERAL(41, 597, 8), // "duration"
QT_MOC_LITERAL(42, 606, 16), // "controller::Hand"
QT_MOC_LITERAL(43, 623, 4), // "hand"
QT_MOC_LITERAL(44, 628, 23), // "triggerShortHapticPulse"
QT_MOC_LITERAL(45, 652, 26), // "triggerHapticPulseOnDevice"
QT_MOC_LITERAL(46, 679, 31), // "triggerShortHapticPulseOnDevice"
QT_MOC_LITERAL(47, 711, 10), // "newMapping"
QT_MOC_LITERAL(48, 722, 11), // "mappingName"
QT_MOC_LITERAL(49, 734, 13), // "enableMapping"
QT_MOC_LITERAL(50, 748, 6), // "enable"
QT_MOC_LITERAL(51, 755, 14), // "disableMapping"
QT_MOC_LITERAL(52, 770, 12), // "parseMapping"
QT_MOC_LITERAL(53, 783, 4), // "json"
QT_MOC_LITERAL(54, 788, 11), // "loadMapping"
QT_MOC_LITERAL(55, 800, 7), // "jsonUrl"
QT_MOC_LITERAL(56, 808, 11), // "getHardware"
QT_MOC_LITERAL(57, 820, 10), // "getActions"
QT_MOC_LITERAL(58, 831, 11), // "getStandard"
QT_MOC_LITERAL(59, 843, 19), // "startInputRecording"
QT_MOC_LITERAL(60, 863, 18), // "stopInputRecording"
QT_MOC_LITERAL(61, 882, 18), // "startInputPlayback"
QT_MOC_LITERAL(62, 901, 17), // "stopInputPlayback"
QT_MOC_LITERAL(63, 919, 18), // "saveInputRecording"
QT_MOC_LITERAL(64, 938, 18), // "loadInputRecording"
QT_MOC_LITERAL(65, 957, 4), // "file"
QT_MOC_LITERAL(66, 962, 29), // "getInputRecorderSaveDirectory"
QT_MOC_LITERAL(67, 992, 26), // "getRunningInputDeviceNames"
QT_MOC_LITERAL(68, 1019, 8), // "Hardware"
QT_MOC_LITERAL(69, 1028, 7), // "Actions"
QT_MOC_LITERAL(70, 1036, 8) // "Standard"

    },
    "controller::ScriptingInterface\0"
    "actionEvent\0\0action\0state\0inputEvent\0"
    "hardwareChanged\0inputDeviceRunningChanged\0"
    "deviceName\0isRunning\0captureMouseEvents\0"
    "releaseMouseEvents\0captureTouchEvents\0"
    "releaseTouchEvents\0captureWheelEvents\0"
    "releaseWheelEvents\0captureActionEvents\0"
    "releaseActionEvents\0updateRunningInputDevices\0"
    "runningDevices\0getAllActions\0"
    "QVector<Action>\0getAvailableInputs\0"
    "QVector<Input::NamedPair>\0device\0"
    "getDeviceName\0getActionValue\0findDevice\0"
    "name\0getDeviceNames\0QVector<QString>\0"
    "findAction\0actionName\0getActionNames\0"
    "getValue\0source\0getAxisValue\0getPoseValue\0"
    "Pose\0triggerHapticPulse\0strength\0"
    "duration\0controller::Hand\0hand\0"
    "triggerShortHapticPulse\0"
    "triggerHapticPulseOnDevice\0"
    "triggerShortHapticPulseOnDevice\0"
    "newMapping\0mappingName\0enableMapping\0"
    "enable\0disableMapping\0parseMapping\0"
    "json\0loadMapping\0jsonUrl\0getHardware\0"
    "getActions\0getStandard\0startInputRecording\0"
    "stopInputRecording\0startInputPlayback\0"
    "stopInputPlayback\0saveInputRecording\0"
    "loadInputRecording\0file\0"
    "getInputRecorderSaveDirectory\0"
    "getRunningInputDeviceNames\0Hardware\0"
    "Actions\0Standard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controller__ScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       3,  404, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  264,    2, 0x06 /* Public */,
       5,    2,  269,    2, 0x06 /* Public */,
       6,    0,  274,    2, 0x06 /* Public */,
       7,    2,  275,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  280,    2, 0x0a /* Public */,
      11,    0,  281,    2, 0x0a /* Public */,
      12,    0,  282,    2, 0x0a /* Public */,
      13,    0,  283,    2, 0x0a /* Public */,
      14,    0,  284,    2, 0x0a /* Public */,
      15,    0,  285,    2, 0x0a /* Public */,
      16,    0,  286,    2, 0x0a /* Public */,
      17,    0,  287,    2, 0x0a /* Public */,
      18,    3,  288,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  295,    2, 0x02 /* Public */,
      22,    1,  296,    2, 0x02 /* Public */,
      25,    1,  299,    2, 0x02 /* Public */,
      26,    1,  302,    2, 0x02 /* Public */,
      27,    1,  305,    2, 0x02 /* Public */,
      29,    0,  308,    2, 0x02 /* Public */,
      31,    1,  309,    2, 0x02 /* Public */,
      33,    0,  312,    2, 0x02 /* Public */,
      34,    1,  313,    2, 0x02 /* Public */,
      36,    1,  316,    2, 0x02 /* Public */,
      37,    1,  319,    2, 0x02 /* Public */,
      39,    3,  322,    2, 0x02 /* Public */,
      39,    2,  329,    2, 0x22 /* Public | MethodCloned */,
      44,    2,  334,    2, 0x02 /* Public */,
      44,    1,  339,    2, 0x22 /* Public | MethodCloned */,
      45,    4,  342,    2, 0x02 /* Public */,
      45,    3,  351,    2, 0x22 /* Public | MethodCloned */,
      46,    3,  358,    2, 0x02 /* Public */,
      46,    2,  365,    2, 0x22 /* Public | MethodCloned */,
      47,    1,  370,    2, 0x02 /* Public */,
      47,    0,  373,    2, 0x22 /* Public | MethodCloned */,
      49,    2,  374,    2, 0x02 /* Public */,
      49,    1,  379,    2, 0x22 /* Public | MethodCloned */,
      51,    1,  382,    2, 0x02 /* Public */,
      52,    1,  385,    2, 0x02 /* Public */,
      54,    1,  388,    2, 0x02 /* Public */,
      56,    0,  391,    2, 0x02 /* Public */,
      57,    0,  392,    2, 0x02 /* Public */,
      58,    0,  393,    2, 0x02 /* Public */,
      59,    0,  394,    2, 0x02 /* Public */,
      60,    0,  395,    2, 0x02 /* Public */,
      61,    0,  396,    2, 0x02 /* Public */,
      62,    0,  397,    2, 0x02 /* Public */,
      63,    0,  398,    2, 0x02 /* Public */,
      64,    1,  399,    2, 0x02 /* Public */,
      66,    0,  402,    2, 0x02 /* Public */,
      67,    0,  403,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::QStringList,    8,    9,   19,

 // methods: parameters
    0x80000000 | 21,
    0x80000000 | 23, QMetaType::UInt,   24,
    QMetaType::QString, QMetaType::UInt,   24,
    QMetaType::Float, QMetaType::Int,    3,
    QMetaType::Int, QMetaType::QString,   28,
    0x80000000 | 30,
    QMetaType::Int, QMetaType::QString,   32,
    0x80000000 | 30,
    QMetaType::Float, QMetaType::Int,   35,
    QMetaType::Float, QMetaType::Int,   35,
    0x80000000 | 38, QMetaType::Int,   35,
    QMetaType::Bool, QMetaType::Float, QMetaType::Float, 0x80000000 | 42,   40,   41,   43,
    QMetaType::Bool, QMetaType::Float, QMetaType::Float,   40,   41,
    QMetaType::Bool, QMetaType::Float, 0x80000000 | 42,   40,   43,
    QMetaType::Bool, QMetaType::Float,   40,
    QMetaType::Bool, QMetaType::UInt, QMetaType::Float, QMetaType::Float, 0x80000000 | 42,   24,   40,   41,   43,
    QMetaType::Bool, QMetaType::UInt, QMetaType::Float, QMetaType::Float,   24,   40,   41,
    QMetaType::Bool, QMetaType::UInt, QMetaType::Float, 0x80000000 | 42,   24,   40,   43,
    QMetaType::Bool, QMetaType::UInt, QMetaType::Float,   24,   40,
    QMetaType::QObjectStar, QMetaType::QString,   48,
    QMetaType::QObjectStar,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   48,   50,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::QObjectStar, QMetaType::QString,   53,
    QMetaType::QObjectStar, QMetaType::QString,   55,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::QVariantMap,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   65,
    QMetaType::QString,
    QMetaType::QStringList,

 // properties: name, type, flags
      68, QMetaType::QVariantMap, 0x00095c01,
      69, QMetaType::QVariantMap, 0x00095c01,
      70, QMetaType::QVariantMap, 0x00095c01,

       0        // eod
};

void controller::ScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptingInterface *_t = static_cast<ScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->inputEvent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 2: _t->hardwareChanged(); break;
        case 3: _t->inputDeviceRunningChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->captureMouseEvents(); break;
        case 5: _t->releaseMouseEvents(); break;
        case 6: _t->captureTouchEvents(); break;
        case 7: _t->releaseTouchEvents(); break;
        case 8: _t->captureWheelEvents(); break;
        case 9: _t->releaseWheelEvents(); break;
        case 10: _t->captureActionEvents(); break;
        case 11: _t->releaseActionEvents(); break;
        case 12: _t->updateRunningInputDevices((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 13: { QVector<Action> _r = _t->getAllActions();
            if (_a[0]) *reinterpret_cast< QVector<Action>*>(_a[0]) = std::move(_r); }  break;
        case 14: { QVector<Input::NamedPair> _r = _t->getAvailableInputs((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<Input::NamedPair>*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->getDeviceName((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { float _r = _t->getActionValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->findDevice((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { QVector<QString> _r = _t->getDeviceNames();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 19: { int _r = _t->findAction((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { QVector<QString> _r = _t->getActionNames();
            if (_a[0]) *reinterpret_cast< QVector<QString>*>(_a[0]) = std::move(_r); }  break;
        case 21: { float _r = _t->getValue((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 22: { float _r = _t->getAxisValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 23: { Pose _r = _t->getPoseValue((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Pose*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->triggerHapticPulse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< controller::Hand(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->triggerHapticPulse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->triggerShortHapticPulse((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< controller::Hand(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->triggerShortHapticPulse((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->triggerHapticPulseOnDevice((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< controller::Hand(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: { bool _r = _t->triggerHapticPulseOnDevice((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: { bool _r = _t->triggerShortHapticPulseOnDevice((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< controller::Hand(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: { bool _r = _t->triggerShortHapticPulseOnDevice((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: { QObject* _r = _t->newMapping((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 33: { QObject* _r = _t->newMapping();
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 34: _t->enableMapping((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->enableMapping((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->disableMapping((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: { QObject* _r = _t->parseMapping((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 38: { QObject* _r = _t->loadMapping((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        case 39: { QVariantMap _r = _t->getHardware();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 40: { QVariantMap _r = _t->getActions();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 41: { QVariantMap _r = _t->getStandard();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 42: _t->startInputRecording(); break;
        case 43: _t->stopInputRecording(); break;
        case 44: _t->startInputPlayback(); break;
        case 45: _t->stopInputPlayback(); break;
        case 46: _t->saveInputRecording(); break;
        case 47: _t->loadInputRecording((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: { QString _r = _t->getInputRecorderSaveDirectory();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QStringList _r = _t->getRunningInputDeviceNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< controller::Hand >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< controller::Hand >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< controller::Hand >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< controller::Hand >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptingInterface::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptingInterface::actionEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScriptingInterface::*)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptingInterface::inputEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptingInterface::hardwareChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScriptingInterface::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptingInterface::inputDeviceRunningChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptingInterface *_t = static_cast<ScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->getHardware(); break;
        case 1: *reinterpret_cast< QVariantMap*>(_v) = _t->getActions(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->getStandard(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject controller::ScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_controller__ScriptingInterface.data,
      qt_meta_data_controller__ScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *controller::ScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controller::ScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_controller__ScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int controller::ScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void controller::ScriptingInterface::actionEvent(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controller::ScriptingInterface::inputEvent(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void controller::ScriptingInterface::hardwareChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void controller::ScriptingInterface::inputDeviceRunningChanged(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
