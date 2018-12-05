/****************************************************************************
** Meta object code from reading C++ file 'ScriptAvatarData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ScriptAvatarData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptAvatarData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptAvatarData_t {
    QByteArrayData data[54];
    char stringdata0[847];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptAvatarData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptAvatarData_t qt_meta_stringdata_ScriptAvatarData = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ScriptAvatarData"
QT_MOC_LITERAL(1, 17, 18), // "displayNameChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 25), // "sessionDisplayNameChanged"
QT_MOC_LITERAL(4, 63, 23), // "skeletonModelURLChanged"
QT_MOC_LITERAL(5, 87, 21), // "lookAtSnappingChanged"
QT_MOC_LITERAL(6, 109, 7), // "enabled"
QT_MOC_LITERAL(7, 117, 37), // "getAbsoluteJointRotationInObj..."
QT_MOC_LITERAL(8, 155, 9), // "glm::quat"
QT_MOC_LITERAL(9, 165, 5), // "index"
QT_MOC_LITERAL(10, 171, 40), // "getAbsoluteJointTranslationIn..."
QT_MOC_LITERAL(11, 212, 9), // "glm::vec3"
QT_MOC_LITERAL(12, 222, 12), // "getHandState"
QT_MOC_LITERAL(13, 235, 16), // "getJointRotation"
QT_MOC_LITERAL(14, 252, 19), // "getJointTranslation"
QT_MOC_LITERAL(15, 272, 4), // "name"
QT_MOC_LITERAL(16, 277, 17), // "getJointRotations"
QT_MOC_LITERAL(17, 295, 18), // "QVector<glm::quat>"
QT_MOC_LITERAL(18, 314, 20), // "getJointTranslations"
QT_MOC_LITERAL(19, 335, 18), // "QVector<glm::vec3>"
QT_MOC_LITERAL(20, 354, 16), // "isJointDataValid"
QT_MOC_LITERAL(21, 371, 13), // "getJointIndex"
QT_MOC_LITERAL(22, 385, 13), // "getJointNames"
QT_MOC_LITERAL(23, 399, 17), // "getAttachmentData"
QT_MOC_LITERAL(24, 417, 23), // "QVector<AttachmentData>"
QT_MOC_LITERAL(25, 441, 17), // "getAvatarEntities"
QT_MOC_LITERAL(26, 459, 15), // "AvatarEntityMap"
QT_MOC_LITERAL(27, 475, 8), // "position"
QT_MOC_LITERAL(28, 484, 5), // "scale"
QT_MOC_LITERAL(29, 490, 12), // "handPosition"
QT_MOC_LITERAL(30, 503, 9), // "bodyPitch"
QT_MOC_LITERAL(31, 513, 7), // "bodyYaw"
QT_MOC_LITERAL(32, 521, 8), // "bodyRoll"
QT_MOC_LITERAL(33, 530, 11), // "orientation"
QT_MOC_LITERAL(34, 542, 15), // "headOrientation"
QT_MOC_LITERAL(35, 558, 9), // "headPitch"
QT_MOC_LITERAL(36, 568, 7), // "headYaw"
QT_MOC_LITERAL(37, 576, 8), // "headRoll"
QT_MOC_LITERAL(38, 585, 8), // "velocity"
QT_MOC_LITERAL(39, 594, 15), // "angularVelocity"
QT_MOC_LITERAL(40, 610, 11), // "sessionUUID"
QT_MOC_LITERAL(41, 622, 11), // "displayName"
QT_MOC_LITERAL(42, 634, 18), // "sessionDisplayName"
QT_MOC_LITERAL(43, 653, 12), // "isReplicated"
QT_MOC_LITERAL(44, 666, 21), // "lookAtSnappingEnabled"
QT_MOC_LITERAL(45, 688, 16), // "skeletonModelURL"
QT_MOC_LITERAL(46, 705, 14), // "attachmentData"
QT_MOC_LITERAL(47, 720, 10), // "jointNames"
QT_MOC_LITERAL(48, 731, 13), // "audioLoudness"
QT_MOC_LITERAL(49, 745, 20), // "audioAverageLoudness"
QT_MOC_LITERAL(50, 766, 19), // "sensorToWorldMatrix"
QT_MOC_LITERAL(51, 786, 9), // "glm::mat4"
QT_MOC_LITERAL(52, 796, 24), // "controllerLeftHandMatrix"
QT_MOC_LITERAL(53, 821, 25) // "controllerRightHandMatrix"

    },
    "ScriptAvatarData\0displayNameChanged\0"
    "\0sessionDisplayNameChanged\0"
    "skeletonModelURLChanged\0lookAtSnappingChanged\0"
    "enabled\0getAbsoluteJointRotationInObjectFrame\0"
    "glm::quat\0index\0"
    "getAbsoluteJointTranslationInObjectFrame\0"
    "glm::vec3\0getHandState\0getJointRotation\0"
    "getJointTranslation\0name\0getJointRotations\0"
    "QVector<glm::quat>\0getJointTranslations\0"
    "QVector<glm::vec3>\0isJointDataValid\0"
    "getJointIndex\0getJointNames\0"
    "getAttachmentData\0QVector<AttachmentData>\0"
    "getAvatarEntities\0AvatarEntityMap\0"
    "position\0scale\0handPosition\0bodyPitch\0"
    "bodyYaw\0bodyRoll\0orientation\0"
    "headOrientation\0headPitch\0headYaw\0"
    "headRoll\0velocity\0angularVelocity\0"
    "sessionUUID\0displayName\0sessionDisplayName\0"
    "isReplicated\0lookAtSnappingEnabled\0"
    "skeletonModelURL\0attachmentData\0"
    "jointNames\0audioLoudness\0audioAverageLoudness\0"
    "sensorToWorldMatrix\0glm::mat4\0"
    "controllerLeftHandMatrix\0"
    "controllerRightHandMatrix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptAvatarData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
      26,  140, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  110,    2, 0x0a /* Public */,
      10,    1,  113,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    0,  116,    2, 0x02 /* Public */,
      13,    1,  117,    2, 0x02 /* Public */,
      14,    1,  120,    2, 0x02 /* Public */,
      13,    1,  123,    2, 0x02 /* Public */,
      14,    1,  126,    2, 0x02 /* Public */,
      16,    0,  129,    2, 0x02 /* Public */,
      18,    0,  130,    2, 0x02 /* Public */,
      20,    1,  131,    2, 0x02 /* Public */,
      21,    1,  134,    2, 0x02 /* Public */,
      22,    0,  137,    2, 0x02 /* Public */,
      23,    0,  138,    2, 0x02 /* Public */,
      25,    0,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    0x80000000 | 8, QMetaType::Int,    9,
    0x80000000 | 11, QMetaType::Int,    9,

 // methods: parameters
    QMetaType::Char,
    0x80000000 | 8, QMetaType::Int,    9,
    0x80000000 | 11, QMetaType::Int,    9,
    0x80000000 | 8, QMetaType::QString,   15,
    0x80000000 | 11, QMetaType::QString,   15,
    0x80000000 | 17,
    0x80000000 | 19,
    QMetaType::Bool, QMetaType::QString,   15,
    QMetaType::Int, QMetaType::QString,   15,
    QMetaType::QStringList,
    0x80000000 | 24,
    0x80000000 | 26,

 // properties: name, type, flags
      27, 0x80000000 | 11, 0x00095009,
      28, QMetaType::Float, 0x00095001,
      29, 0x80000000 | 11, 0x00095009,
      30, QMetaType::Float, 0x00095001,
      31, QMetaType::Float, 0x00095001,
      32, QMetaType::Float, 0x00095001,
      33, 0x80000000 | 8, 0x00095009,
      34, 0x80000000 | 8, 0x00095009,
      35, QMetaType::Float, 0x00095001,
      36, QMetaType::Float, 0x00095001,
      37, QMetaType::Float, 0x00095001,
      38, 0x80000000 | 11, 0x00095009,
      39, 0x80000000 | 11, 0x00095009,
      40, QMetaType::QUuid, 0x00095001,
      41, QMetaType::QString, 0x00495001,
      42, QMetaType::QString, 0x00495001,
      43, QMetaType::Bool, 0x00095001,
      44, QMetaType::Bool, 0x00495001,
      45, QMetaType::QString, 0x00495001,
      46, 0x80000000 | 24, 0x00095009,
      47, QMetaType::QStringList, 0x00095001,
      48, QMetaType::Float, 0x00095001,
      49, QMetaType::Float, 0x00095001,
      50, 0x80000000 | 51, 0x00095009,
      52, 0x80000000 | 51, 0x00095009,
      53, 0x80000000 | 51, 0x00095009,

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
       1,
       0,
       3,
       2,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void ScriptAvatarData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptAvatarData *_t = static_cast<ScriptAvatarData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayNameChanged(); break;
        case 1: _t->sessionDisplayNameChanged(); break;
        case 2: _t->skeletonModelURLChanged(); break;
        case 3: _t->lookAtSnappingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { glm::quat _r = _t->getAbsoluteJointRotationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::vec3 _r = _t->getAbsoluteJointTranslationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 6: { char _r = _t->getHandState();
            if (_a[0]) *reinterpret_cast< char*>(_a[0]) = std::move(_r); }  break;
        case 7: { glm::quat _r = _t->getJointRotation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 8: { glm::vec3 _r = _t->getJointTranslation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 9: { glm::quat _r = _t->getJointRotation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 10: { glm::vec3 _r = _t->getJointTranslation((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 11: { QVector<glm::quat> _r = _t->getJointRotations();
            if (_a[0]) *reinterpret_cast< QVector<glm::quat>*>(_a[0]) = std::move(_r); }  break;
        case 12: { QVector<glm::vec3> _r = _t->getJointTranslations();
            if (_a[0]) *reinterpret_cast< QVector<glm::vec3>*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isJointDataValid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->getJointIndex((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { QStringList _r = _t->getJointNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVector<AttachmentData> _r = _t->getAttachmentData();
            if (_a[0]) *reinterpret_cast< QVector<AttachmentData>*>(_a[0]) = std::move(_r); }  break;
        case 17: { AvatarEntityMap _r = _t->getAvatarEntities();
            if (_a[0]) *reinterpret_cast< AvatarEntityMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptAvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAvatarData::displayNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScriptAvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAvatarData::sessionDisplayNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScriptAvatarData::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAvatarData::skeletonModelURLChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScriptAvatarData::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAvatarData::lookAtSnappingChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<AttachmentData> >(); break;
        case 25:
        case 24:
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 12:
        case 11:
        case 2:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptAvatarData *_t = static_cast<ScriptAvatarData *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getPosition(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getTargetScale(); break;
        case 2: *reinterpret_cast< glm::vec3*>(_v) = _t->getHandPosition(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getBodyPitch(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getBodyYaw(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getBodyRoll(); break;
        case 6: *reinterpret_cast< glm::quat*>(_v) = _t->getOrientation(); break;
        case 7: *reinterpret_cast< glm::quat*>(_v) = _t->getHeadOrientation(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getHeadPitch(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getHeadYaw(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getHeadRoll(); break;
        case 11: *reinterpret_cast< glm::vec3*>(_v) = _t->getVelocity(); break;
        case 12: *reinterpret_cast< glm::vec3*>(_v) = _t->getAngularVelocity(); break;
        case 13: *reinterpret_cast< QUuid*>(_v) = _t->getSessionUUID(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getDisplayName(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->getSessionDisplayName(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getIsReplicated(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->getLookAtSnappingEnabled(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getSkeletonModelURLFromScript(); break;
        case 19: *reinterpret_cast< QVector<AttachmentData>*>(_v) = _t->getAttachmentData(); break;
        case 20: *reinterpret_cast< QStringList*>(_v) = _t->getJointNames(); break;
        case 21: *reinterpret_cast< float*>(_v) = _t->getAudioLoudness(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->getAudioAverageLoudness(); break;
        case 23: *reinterpret_cast< glm::mat4*>(_v) = _t->getSensorToWorldMatrix(); break;
        case 24: *reinterpret_cast< glm::mat4*>(_v) = _t->getControllerLeftHandMatrix(); break;
        case 25: *reinterpret_cast< glm::mat4*>(_v) = _t->getControllerRightHandMatrix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptAvatarData::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScriptAvatarData.data,
      qt_meta_data_ScriptAvatarData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptAvatarData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptAvatarData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAvatarData.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScriptAvatarData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 26;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 26;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScriptAvatarData::displayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScriptAvatarData::sessionDisplayNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ScriptAvatarData::skeletonModelURLChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScriptAvatarData::lookAtSnappingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
