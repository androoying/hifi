/****************************************************************************
** Meta object code from reading C++ file 'Quat.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Quat.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Quat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Quat_t {
    QByteArrayData data[52];
    char stringdata0[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Quat_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Quat_t qt_meta_stringdata_Quat = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Quat"
QT_MOC_LITERAL(1, 5, 8), // "multiply"
QT_MOC_LITERAL(2, 14, 9), // "glm::quat"
QT_MOC_LITERAL(3, 24, 0), // ""
QT_MOC_LITERAL(4, 25, 2), // "q1"
QT_MOC_LITERAL(5, 28, 2), // "q2"
QT_MOC_LITERAL(6, 31, 9), // "normalize"
QT_MOC_LITERAL(7, 41, 1), // "q"
QT_MOC_LITERAL(8, 43, 9), // "conjugate"
QT_MOC_LITERAL(9, 53, 6), // "lookAt"
QT_MOC_LITERAL(10, 60, 9), // "glm::vec3"
QT_MOC_LITERAL(11, 70, 3), // "eye"
QT_MOC_LITERAL(12, 74, 6), // "center"
QT_MOC_LITERAL(13, 81, 2), // "up"
QT_MOC_LITERAL(14, 84, 12), // "lookAtSimple"
QT_MOC_LITERAL(15, 97, 15), // "rotationBetween"
QT_MOC_LITERAL(16, 113, 2), // "v1"
QT_MOC_LITERAL(17, 116, 2), // "v2"
QT_MOC_LITERAL(18, 119, 15), // "fromVec3Degrees"
QT_MOC_LITERAL(19, 135, 4), // "vec3"
QT_MOC_LITERAL(20, 140, 15), // "fromVec3Radians"
QT_MOC_LITERAL(21, 156, 23), // "fromPitchYawRollDegrees"
QT_MOC_LITERAL(22, 180, 5), // "pitch"
QT_MOC_LITERAL(23, 186, 3), // "yaw"
QT_MOC_LITERAL(24, 190, 4), // "roll"
QT_MOC_LITERAL(25, 195, 23), // "fromPitchYawRollRadians"
QT_MOC_LITERAL(26, 219, 7), // "inverse"
QT_MOC_LITERAL(27, 227, 8), // "getFront"
QT_MOC_LITERAL(28, 236, 11), // "orientation"
QT_MOC_LITERAL(29, 248, 10), // "getForward"
QT_MOC_LITERAL(30, 259, 8), // "getRight"
QT_MOC_LITERAL(31, 268, 5), // "getUp"
QT_MOC_LITERAL(32, 274, 15), // "safeEulerAngles"
QT_MOC_LITERAL(33, 290, 9), // "angleAxis"
QT_MOC_LITERAL(34, 300, 5), // "angle"
QT_MOC_LITERAL(35, 306, 1), // "v"
QT_MOC_LITERAL(36, 308, 4), // "axis"
QT_MOC_LITERAL(37, 313, 3), // "mix"
QT_MOC_LITERAL(38, 317, 5), // "alpha"
QT_MOC_LITERAL(39, 323, 5), // "slerp"
QT_MOC_LITERAL(40, 329, 5), // "squad"
QT_MOC_LITERAL(41, 335, 2), // "s1"
QT_MOC_LITERAL(42, 338, 2), // "s2"
QT_MOC_LITERAL(43, 341, 1), // "h"
QT_MOC_LITERAL(44, 343, 3), // "dot"
QT_MOC_LITERAL(45, 347, 5), // "print"
QT_MOC_LITERAL(46, 353, 5), // "label"
QT_MOC_LITERAL(47, 359, 9), // "asDegrees"
QT_MOC_LITERAL(48, 369, 5), // "equal"
QT_MOC_LITERAL(49, 375, 21), // "cancelOutRollAndPitch"
QT_MOC_LITERAL(50, 397, 13), // "cancelOutRoll"
QT_MOC_LITERAL(51, 411, 8) // "IDENTITY"

    },
    "Quat\0multiply\0glm::quat\0\0q1\0q2\0normalize\0"
    "q\0conjugate\0lookAt\0glm::vec3\0eye\0"
    "center\0up\0lookAtSimple\0rotationBetween\0"
    "v1\0v2\0fromVec3Degrees\0vec3\0fromVec3Radians\0"
    "fromPitchYawRollDegrees\0pitch\0yaw\0"
    "roll\0fromPitchYawRollRadians\0inverse\0"
    "getFront\0orientation\0getForward\0"
    "getRight\0getUp\0safeEulerAngles\0angleAxis\0"
    "angle\0v\0axis\0mix\0alpha\0slerp\0squad\0"
    "s1\0s2\0h\0dot\0print\0label\0asDegrees\0"
    "equal\0cancelOutRollAndPitch\0cancelOutRoll\0"
    "IDENTITY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Quat[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       1,  284, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  154,    3, 0x0a /* Public */,
       6,    1,  159,    3, 0x0a /* Public */,
       8,    1,  162,    3, 0x0a /* Public */,
       9,    3,  165,    3, 0x0a /* Public */,
      14,    2,  172,    3, 0x0a /* Public */,
      15,    2,  177,    3, 0x0a /* Public */,
      18,    1,  182,    3, 0x0a /* Public */,
      20,    1,  185,    3, 0x0a /* Public */,
      21,    3,  188,    3, 0x0a /* Public */,
      25,    3,  195,    3, 0x0a /* Public */,
      26,    1,  202,    3, 0x0a /* Public */,
      27,    1,  205,    3, 0x0a /* Public */,
      29,    1,  208,    3, 0x0a /* Public */,
      30,    1,  211,    3, 0x0a /* Public */,
      31,    1,  214,    3, 0x0a /* Public */,
      32,    1,  217,    3, 0x0a /* Public */,
      33,    2,  220,    3, 0x0a /* Public */,
      36,    1,  225,    3, 0x0a /* Public */,
      34,    1,  228,    3, 0x0a /* Public */,
      37,    3,  231,    3, 0x0a /* Public */,
      39,    3,  238,    3, 0x0a /* Public */,
      40,    5,  245,    3, 0x0a /* Public */,
      44,    2,  256,    3, 0x0a /* Public */,
      45,    3,  261,    3, 0x0a /* Public */,
      45,    2,  268,    3, 0x2a /* Public | MethodCloned */,
      48,    2,  273,    3, 0x0a /* Public */,
      49,    1,  278,    3, 0x0a /* Public */,
      50,    1,  281,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2,    4,    5,
    0x80000000 | 2, 0x80000000 | 2,    7,
    0x80000000 | 2, 0x80000000 | 2,    7,
    0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 10, 0x80000000 | 10,   11,   12,   13,
    0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 10,   11,   12,
    0x80000000 | 2, 0x80000000 | 10, 0x80000000 | 10,   16,   17,
    0x80000000 | 2, 0x80000000 | 10,   19,
    0x80000000 | 2, 0x80000000 | 10,   19,
    0x80000000 | 2, QMetaType::Float, QMetaType::Float, QMetaType::Float,   22,   23,   24,
    0x80000000 | 2, QMetaType::Float, QMetaType::Float, QMetaType::Float,   22,   23,   24,
    0x80000000 | 2, 0x80000000 | 2,    7,
    0x80000000 | 10, 0x80000000 | 2,   28,
    0x80000000 | 10, 0x80000000 | 2,   28,
    0x80000000 | 10, 0x80000000 | 2,   28,
    0x80000000 | 10, 0x80000000 | 2,   28,
    0x80000000 | 10, 0x80000000 | 2,   28,
    0x80000000 | 2, QMetaType::Float, 0x80000000 | 10,   34,   35,
    0x80000000 | 10, 0x80000000 | 2,   28,
    QMetaType::Float, 0x80000000 | 2,   28,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2, QMetaType::Float,    4,    5,   38,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2, QMetaType::Float,    4,    5,   38,
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2, QMetaType::Float,    4,    5,   41,   42,   43,
    QMetaType::Float, 0x80000000 | 2, 0x80000000 | 2,    4,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 2, QMetaType::Bool,   46,    7,   47,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 2,   46,    7,
    QMetaType::Bool, 0x80000000 | 2, 0x80000000 | 2,    4,    5,
    0x80000000 | 2, 0x80000000 | 2,    7,
    0x80000000 | 2, 0x80000000 | 2,    7,

 // properties: name, type, flags
      51, 0x80000000 | 2, 0x00095409,

       0        // eod
};

void Quat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Quat *_t = static_cast<Quat *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { glm::quat _r = _t->multiply((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 1: { glm::quat _r = _t->normalize((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 2: { glm::quat _r = _t->conjugate((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::quat _r = _t->lookAt((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::quat _r = _t->lookAtSimple((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::quat _r = _t->rotationBetween((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 6: { glm::quat _r = _t->fromVec3Degrees((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 7: { glm::quat _r = _t->fromVec3Radians((*reinterpret_cast< const glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 8: { glm::quat _r = _t->fromPitchYawRollDegrees((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 9: { glm::quat _r = _t->fromPitchYawRollRadians((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 10: { glm::quat _r = _t->inverse((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 11: { glm::vec3 _r = _t->getFront((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 12: { glm::vec3 _r = _t->getForward((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 13: { glm::vec3 _r = _t->getRight((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 14: { glm::vec3 _r = _t->getUp((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 15: { glm::vec3 _r = _t->safeEulerAngles((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 16: { glm::quat _r = _t->angleAxis((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 17: { glm::vec3 _r = _t->axis((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 18: { float _r = _t->angle((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 19: { glm::quat _r = _t->mix((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 20: { glm::quat _r = _t->slerp((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 21: { glm::quat _r = _t->squad((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])),(*reinterpret_cast< const glm::quat(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 22: { float _r = _t->dot((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->print((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 24: _t->print((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2]))); break;
        case 25: { bool _r = _t->equal((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { glm::quat _r = _t->cancelOutRollAndPitch((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 27: { glm::quat _r = _t->cancelOutRoll((*reinterpret_cast< const glm::quat(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Quat *_t = static_cast<Quat *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::quat*>(_v) = _t->IDENTITY(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Quat::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Quat.data,
      qt_meta_data_Quat,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Quat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Quat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Quat.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int Quat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
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
