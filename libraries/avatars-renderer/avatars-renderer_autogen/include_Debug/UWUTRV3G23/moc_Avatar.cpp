/****************************************************************************
** Meta object code from reading C++ file 'Avatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatars-renderer/Avatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Avatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Avatar_t {
    QByteArrayData data[38];
    char stringdata0[612];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Avatar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Avatar_t qt_meta_stringdata_Avatar = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Avatar"
QT_MOC_LITERAL(1, 7, 18), // "targetScaleChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "targetScale"
QT_MOC_LITERAL(4, 39, 19), // "getLeftPalmPosition"
QT_MOC_LITERAL(5, 59, 9), // "glm::vec3"
QT_MOC_LITERAL(6, 69, 19), // "getLeftPalmRotation"
QT_MOC_LITERAL(7, 89, 9), // "glm::quat"
QT_MOC_LITERAL(8, 99, 20), // "getRightPalmPosition"
QT_MOC_LITERAL(9, 120, 20), // "getRightPalmRotation"
QT_MOC_LITERAL(10, 141, 19), // "setModelURLFinished"
QT_MOC_LITERAL(11, 161, 7), // "success"
QT_MOC_LITERAL(12, 169, 8), // "rigReady"
QT_MOC_LITERAL(13, 178, 8), // "rigReset"
QT_MOC_LITERAL(14, 187, 23), // "getDefaultJointRotation"
QT_MOC_LITERAL(15, 211, 5), // "index"
QT_MOC_LITERAL(16, 217, 26), // "getDefaultJointTranslation"
QT_MOC_LITERAL(17, 244, 44), // "getAbsoluteDefaultJointRotati..."
QT_MOC_LITERAL(18, 289, 47), // "getAbsoluteDefaultJointTransl..."
QT_MOC_LITERAL(19, 337, 17), // "setSkeletonOffset"
QT_MOC_LITERAL(20, 355, 6), // "offset"
QT_MOC_LITERAL(21, 362, 17), // "getSkeletonOffset"
QT_MOC_LITERAL(22, 380, 16), // "getJointPosition"
QT_MOC_LITERAL(23, 397, 4), // "name"
QT_MOC_LITERAL(24, 402, 15), // "getNeckPosition"
QT_MOC_LITERAL(25, 418, 15), // "getAcceleration"
QT_MOC_LITERAL(26, 434, 20), // "getWorldFeetPosition"
QT_MOC_LITERAL(27, 455, 11), // "getParentID"
QT_MOC_LITERAL(28, 467, 11), // "setParentID"
QT_MOC_LITERAL(29, 479, 8), // "parentID"
QT_MOC_LITERAL(30, 488, 19), // "getParentJointIndex"
QT_MOC_LITERAL(31, 508, 19), // "setParentJointIndex"
QT_MOC_LITERAL(32, 528, 16), // "parentJointIndex"
QT_MOC_LITERAL(33, 545, 11), // "getSkeleton"
QT_MOC_LITERAL(34, 557, 17), // "getSimulationRate"
QT_MOC_LITERAL(35, 575, 8), // "rateName"
QT_MOC_LITERAL(36, 584, 12), // "getEyeHeight"
QT_MOC_LITERAL(37, 597, 14) // "skeletonOffset"

    },
    "Avatar\0targetScaleChanged\0\0targetScale\0"
    "getLeftPalmPosition\0glm::vec3\0"
    "getLeftPalmRotation\0glm::quat\0"
    "getRightPalmPosition\0getRightPalmRotation\0"
    "setModelURLFinished\0success\0rigReady\0"
    "rigReset\0getDefaultJointRotation\0index\0"
    "getDefaultJointTranslation\0"
    "getAbsoluteDefaultJointRotationInObjectFrame\0"
    "getAbsoluteDefaultJointTranslationInObjectFrame\0"
    "setSkeletonOffset\0offset\0getSkeletonOffset\0"
    "getJointPosition\0name\0getNeckPosition\0"
    "getAcceleration\0getWorldFeetPosition\0"
    "getParentID\0setParentID\0parentID\0"
    "getParentJointIndex\0setParentJointIndex\0"
    "parentJointIndex\0getSkeleton\0"
    "getSimulationRate\0rateName\0getEyeHeight\0"
    "skeletonOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Avatar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       1,  200, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  152,    2, 0x0a /* Public */,
       6,    0,  153,    2, 0x0a /* Public */,
       8,    0,  154,    2, 0x0a /* Public */,
       9,    0,  155,    2, 0x0a /* Public */,
      10,    1,  156,    2, 0x0a /* Public */,
      12,    0,  159,    2, 0x0a /* Public */,
      13,    0,  160,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,  161,    2, 0x02 /* Public */,
      16,    1,  164,    2, 0x02 /* Public */,
      17,    1,  167,    2, 0x02 /* Public */,
      18,    1,  170,    2, 0x02 /* Public */,
      19,    1,  173,    2, 0x02 /* Public */,
      21,    0,  176,    2, 0x02 /* Public */,
      22,    1,  177,    2, 0x02 /* Public */,
      22,    1,  180,    2, 0x02 /* Public */,
      24,    0,  183,    2, 0x02 /* Public */,
      25,    0,  184,    2, 0x02 /* Public */,
      26,    0,  185,    2, 0x02 /* Public */,
      27,    0,  186,    2, 0x02 /* Public */,
      28,    1,  187,    2, 0x02 /* Public */,
      30,    0,  190,    2, 0x02 /* Public */,
      31,    1,  191,    2, 0x02 /* Public */,
      33,    0,  194,    2, 0x02 /* Public */,
      34,    1,  195,    2, 0x02 /* Public */,
      34,    0,  198,    2, 0x22 /* Public | MethodCloned */,
      36,    0,  199,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // slots: parameters
    0x80000000 | 5,
    0x80000000 | 7,
    0x80000000 | 5,
    0x80000000 | 7,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 7, QMetaType::Int,   15,
    0x80000000 | 5, QMetaType::Int,   15,
    0x80000000 | 7, QMetaType::Int,   15,
    0x80000000 | 5, QMetaType::Int,   15,
    QMetaType::Void, 0x80000000 | 5,   20,
    0x80000000 | 5,
    0x80000000 | 5, QMetaType::Int,   15,
    0x80000000 | 5, QMetaType::QString,   23,
    0x80000000 | 5,
    0x80000000 | 5,
    0x80000000 | 5,
    QMetaType::QUuid,
    QMetaType::Void, QMetaType::QUuid,   29,
    QMetaType::UShort,
    QMetaType::Void, QMetaType::UShort,   32,
    QMetaType::QVariantList,
    QMetaType::Float, QMetaType::QString,   35,
    QMetaType::Float,
    QMetaType::Float,

 // properties: name, type, flags
      37, 0x80000000 | 5, 0x0009510b,

       0        // eod
};

void Avatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Avatar *_t = static_cast<Avatar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->targetScaleChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: { glm::vec3 _r = _t->getLeftPalmPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 2: { glm::quat _r = _t->getLeftPalmRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::vec3 _r = _t->getRightPalmPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::quat _r = _t->getRightPalmRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->setModelURLFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->rigReady(); break;
        case 7: _t->rigReset(); break;
        case 8: { glm::quat _r = _t->getDefaultJointRotation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 9: { glm::vec3 _r = _t->getDefaultJointTranslation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 10: { glm::quat _r = _t->getAbsoluteDefaultJointRotationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 11: { glm::vec3 _r = _t->getAbsoluteDefaultJointTranslationInObjectFrame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setSkeletonOffset((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 13: { glm::vec3 _r = _t->getSkeletonOffset();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 14: { glm::vec3 _r = _t->getJointPosition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 15: { glm::vec3 _r = _t->getJointPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 16: { glm::vec3 _r = _t->getNeckPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 17: { glm::vec3 _r = _t->getAcceleration();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 18: { glm::vec3 _r = _t->getWorldFeetPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 19: { QUuid _r = _t->getParentID();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setParentID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 21: { quint16 _r = _t->getParentJointIndex();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setParentJointIndex((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 23: { QList<QVariant> _r = _t->getSkeleton();
            if (_a[0]) *reinterpret_cast< QList<QVariant>*>(_a[0]) = std::move(_r); }  break;
        case 24: { float _r = _t->getSimulationRate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 25: { float _r = _t->getSimulationRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 26: { float _r = _t->getEyeHeight();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
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
            using _t = void (Avatar::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Avatar::targetScaleChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Avatar *_t = static_cast<Avatar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getSkeletonOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Avatar *_t = static_cast<Avatar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSkeletonOffset(*reinterpret_cast< glm::vec3*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Avatar::staticMetaObject = {
    { &AvatarData::staticMetaObject, qt_meta_stringdata_Avatar.data,
      qt_meta_data_Avatar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Avatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Avatar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Avatar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "scriptable::ModelProvider"))
        return static_cast< scriptable::ModelProvider*>(this);
    if (!strcmp(_clname, "MetaModelPayload"))
        return static_cast< MetaModelPayload*>(this);
    return AvatarData::qt_metacast(_clname);
}

int Avatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AvatarData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
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
void Avatar::targetScaleChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
