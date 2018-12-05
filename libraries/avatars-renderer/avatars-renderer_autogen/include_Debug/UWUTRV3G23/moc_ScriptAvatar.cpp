/****************************************************************************
** Meta object code from reading C++ file 'ScriptAvatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatars-renderer/ScriptAvatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptAvatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptAvatar_t {
    QByteArrayData data[22];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptAvatar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptAvatar_t qt_meta_stringdata_ScriptAvatar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ScriptAvatar"
QT_MOC_LITERAL(1, 13, 23), // "getDefaultJointRotation"
QT_MOC_LITERAL(2, 37, 9), // "glm::quat"
QT_MOC_LITERAL(3, 47, 0), // ""
QT_MOC_LITERAL(4, 48, 5), // "index"
QT_MOC_LITERAL(5, 54, 26), // "getDefaultJointTranslation"
QT_MOC_LITERAL(6, 81, 9), // "glm::vec3"
QT_MOC_LITERAL(7, 91, 17), // "getSkeletonOffset"
QT_MOC_LITERAL(8, 109, 16), // "getJointPosition"
QT_MOC_LITERAL(9, 126, 4), // "name"
QT_MOC_LITERAL(10, 131, 15), // "getNeckPosition"
QT_MOC_LITERAL(11, 147, 15), // "getAcceleration"
QT_MOC_LITERAL(12, 163, 11), // "getParentID"
QT_MOC_LITERAL(13, 175, 19), // "getParentJointIndex"
QT_MOC_LITERAL(14, 195, 11), // "getSkeleton"
QT_MOC_LITERAL(15, 207, 17), // "getSimulationRate"
QT_MOC_LITERAL(16, 225, 8), // "rateName"
QT_MOC_LITERAL(17, 234, 19), // "getLeftPalmPosition"
QT_MOC_LITERAL(18, 254, 19), // "getLeftPalmRotation"
QT_MOC_LITERAL(19, 274, 20), // "getRightPalmPosition"
QT_MOC_LITERAL(20, 295, 20), // "getRightPalmRotation"
QT_MOC_LITERAL(21, 316, 14) // "skeletonOffset"

    },
    "ScriptAvatar\0getDefaultJointRotation\0"
    "glm::quat\0\0index\0getDefaultJointTranslation\0"
    "glm::vec3\0getSkeletonOffset\0"
    "getJointPosition\0name\0getNeckPosition\0"
    "getAcceleration\0getParentID\0"
    "getParentJointIndex\0getSkeleton\0"
    "getSimulationRate\0rateName\0"
    "getLeftPalmPosition\0getLeftPalmRotation\0"
    "getRightPalmPosition\0getRightPalmRotation\0"
    "skeletonOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptAvatar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       1,  120, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    3, 0x0a /* Public */,
       5,    1,   97,    3, 0x0a /* Public */,
       7,    0,  100,    3, 0x0a /* Public */,
       8,    1,  101,    3, 0x0a /* Public */,
       8,    1,  104,    3, 0x0a /* Public */,
      10,    0,  107,    3, 0x0a /* Public */,
      11,    0,  108,    3, 0x0a /* Public */,
      12,    0,  109,    3, 0x0a /* Public */,
      13,    0,  110,    3, 0x0a /* Public */,
      14,    0,  111,    3, 0x0a /* Public */,
      15,    1,  112,    3, 0x0a /* Public */,
      15,    0,  115,    3, 0x2a /* Public | MethodCloned */,
      17,    0,  116,    3, 0x0a /* Public */,
      18,    0,  117,    3, 0x0a /* Public */,
      19,    0,  118,    3, 0x0a /* Public */,
      20,    0,  119,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::Int,    4,
    0x80000000 | 6, QMetaType::Int,    4,
    0x80000000 | 6,
    0x80000000 | 6, QMetaType::Int,    4,
    0x80000000 | 6, QMetaType::QString,    9,
    0x80000000 | 6,
    0x80000000 | 6,
    QMetaType::QUuid,
    QMetaType::UShort,
    QMetaType::QVariantList,
    QMetaType::Float, QMetaType::QString,   16,
    QMetaType::Float,
    0x80000000 | 6,
    0x80000000 | 2,
    0x80000000 | 6,
    0x80000000 | 2,

 // properties: name, type, flags
      21, 0x80000000 | 6, 0x00095009,

       0        // eod
};

void ScriptAvatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptAvatar *_t = static_cast<ScriptAvatar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { glm::quat _r = _t->getDefaultJointRotation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 1: { glm::vec3 _r = _t->getDefaultJointTranslation((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 2: { glm::vec3 _r = _t->getSkeletonOffset();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::vec3 _r = _t->getJointPosition((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::vec3 _r = _t->getJointPosition((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::vec3 _r = _t->getNeckPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 6: { glm::vec3 _r = _t->getAcceleration();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 7: { QUuid _r = _t->getParentID();
            if (_a[0]) *reinterpret_cast< QUuid*>(_a[0]) = std::move(_r); }  break;
        case 8: { quint16 _r = _t->getParentJointIndex();
            if (_a[0]) *reinterpret_cast< quint16*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantList _r = _t->getSkeleton();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 10: { float _r = _t->getSimulationRate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->getSimulationRate();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { glm::vec3 _r = _t->getLeftPalmPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 13: { glm::quat _r = _t->getLeftPalmRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 14: { glm::vec3 _r = _t->getRightPalmPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 15: { glm::quat _r = _t->getRightPalmRotation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        default: ;
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
        ScriptAvatar *_t = static_cast<ScriptAvatar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getSkeletonOffset(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptAvatar::staticMetaObject = {
    { &ScriptAvatarData::staticMetaObject, qt_meta_stringdata_ScriptAvatar.data,
      qt_meta_data_ScriptAvatar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptAvatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptAvatar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAvatar.stringdata0))
        return static_cast<void*>(this);
    return ScriptAvatarData::qt_metacast(_clname);
}

int ScriptAvatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptAvatarData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
