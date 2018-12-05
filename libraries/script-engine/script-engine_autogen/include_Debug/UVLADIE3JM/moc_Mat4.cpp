/****************************************************************************
** Meta object code from reading C++ file 'Mat4.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Mat4.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mat4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Mat4_t {
    QByteArrayData data[38];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Mat4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Mat4_t qt_meta_stringdata_Mat4 = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Mat4"
QT_MOC_LITERAL(1, 5, 8), // "multiply"
QT_MOC_LITERAL(2, 14, 9), // "glm::mat4"
QT_MOC_LITERAL(3, 24, 0), // ""
QT_MOC_LITERAL(4, 25, 2), // "m1"
QT_MOC_LITERAL(5, 28, 2), // "m2"
QT_MOC_LITERAL(6, 31, 21), // "createFromRotAndTrans"
QT_MOC_LITERAL(7, 53, 9), // "glm::quat"
QT_MOC_LITERAL(8, 63, 3), // "rot"
QT_MOC_LITERAL(9, 67, 9), // "glm::vec3"
QT_MOC_LITERAL(10, 77, 5), // "trans"
QT_MOC_LITERAL(11, 83, 26), // "createFromScaleRotAndTrans"
QT_MOC_LITERAL(12, 110, 5), // "scale"
QT_MOC_LITERAL(13, 116, 17), // "createFromColumns"
QT_MOC_LITERAL(14, 134, 9), // "glm::vec4"
QT_MOC_LITERAL(15, 144, 4), // "col0"
QT_MOC_LITERAL(16, 149, 4), // "col1"
QT_MOC_LITERAL(17, 154, 4), // "col2"
QT_MOC_LITERAL(18, 159, 4), // "col3"
QT_MOC_LITERAL(19, 164, 15), // "createFromArray"
QT_MOC_LITERAL(20, 180, 14), // "QVector<float>"
QT_MOC_LITERAL(21, 195, 6), // "floats"
QT_MOC_LITERAL(22, 202, 18), // "extractTranslation"
QT_MOC_LITERAL(23, 221, 1), // "m"
QT_MOC_LITERAL(24, 223, 15), // "extractRotation"
QT_MOC_LITERAL(25, 239, 12), // "extractScale"
QT_MOC_LITERAL(26, 252, 14), // "transformPoint"
QT_MOC_LITERAL(27, 267, 5), // "point"
QT_MOC_LITERAL(28, 273, 15), // "transformVector"
QT_MOC_LITERAL(29, 289, 6), // "vector"
QT_MOC_LITERAL(30, 296, 7), // "inverse"
QT_MOC_LITERAL(31, 304, 8), // "getFront"
QT_MOC_LITERAL(32, 313, 10), // "getForward"
QT_MOC_LITERAL(33, 324, 8), // "getRight"
QT_MOC_LITERAL(34, 333, 5), // "getUp"
QT_MOC_LITERAL(35, 339, 5), // "print"
QT_MOC_LITERAL(36, 345, 5), // "label"
QT_MOC_LITERAL(37, 351, 9) // "transpose"

    },
    "Mat4\0multiply\0glm::mat4\0\0m1\0m2\0"
    "createFromRotAndTrans\0glm::quat\0rot\0"
    "glm::vec3\0trans\0createFromScaleRotAndTrans\0"
    "scale\0createFromColumns\0glm::vec4\0"
    "col0\0col1\0col2\0col3\0createFromArray\0"
    "QVector<float>\0floats\0extractTranslation\0"
    "m\0extractRotation\0extractScale\0"
    "transformPoint\0point\0transformVector\0"
    "vector\0inverse\0getFront\0getForward\0"
    "getRight\0getUp\0print\0label\0transpose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Mat4[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   99,    3, 0x0a /* Public */,
       6,    2,  104,    3, 0x0a /* Public */,
      11,    3,  109,    3, 0x0a /* Public */,
      13,    4,  116,    3, 0x0a /* Public */,
      19,    1,  125,    3, 0x0a /* Public */,
      22,    1,  128,    3, 0x0a /* Public */,
      24,    1,  131,    3, 0x0a /* Public */,
      25,    1,  134,    3, 0x0a /* Public */,
      26,    2,  137,    3, 0x0a /* Public */,
      28,    2,  142,    3, 0x0a /* Public */,
      30,    1,  147,    3, 0x0a /* Public */,
      31,    1,  150,    3, 0x0a /* Public */,
      32,    1,  153,    3, 0x0a /* Public */,
      33,    1,  156,    3, 0x0a /* Public */,
      34,    1,  159,    3, 0x0a /* Public */,
      35,    3,  162,    3, 0x0a /* Public */,
      35,    2,  169,    3, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 2, 0x80000000 | 2,    4,    5,
    0x80000000 | 2, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    0x80000000 | 2, 0x80000000 | 9, 0x80000000 | 7, 0x80000000 | 9,   12,    8,   10,
    0x80000000 | 2, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,   18,
    0x80000000 | 2, 0x80000000 | 20,   21,
    0x80000000 | 9, 0x80000000 | 2,   23,
    0x80000000 | 7, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 9,   23,   27,
    0x80000000 | 9, 0x80000000 | 2, 0x80000000 | 9,   23,   29,
    0x80000000 | 2, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2,   23,
    0x80000000 | 9, 0x80000000 | 2,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 2, QMetaType::Bool,   36,   23,   37,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 2,   36,   23,

       0        // eod
};

void Mat4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Mat4 *_t = static_cast<Mat4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { glm::mat4 _r = _t->multiply((*reinterpret_cast< const glm::mat4(*)>(_a[1])),(*reinterpret_cast< const glm::mat4(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 1: { glm::mat4 _r = _t->createFromRotAndTrans((*reinterpret_cast< const glm::quat(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 2: { glm::mat4 _r = _t->createFromScaleRotAndTrans((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 3: { glm::mat4 _r = _t->createFromColumns((*reinterpret_cast< const glm::vec4(*)>(_a[1])),(*reinterpret_cast< const glm::vec4(*)>(_a[2])),(*reinterpret_cast< const glm::vec4(*)>(_a[3])),(*reinterpret_cast< const glm::vec4(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 4: { glm::mat4 _r = _t->createFromArray((*reinterpret_cast< const QVector<float>(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 5: { glm::vec3 _r = _t->extractTranslation((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 6: { glm::quat _r = _t->extractRotation((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 7: { glm::vec3 _r = _t->extractScale((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 8: { glm::vec3 _r = _t->transformPoint((*reinterpret_cast< const glm::mat4(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 9: { glm::vec3 _r = _t->transformVector((*reinterpret_cast< const glm::mat4(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 10: { glm::mat4 _r = _t->inverse((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::mat4*>(_a[0]) = std::move(_r); }  break;
        case 11: { glm::vec3 _r = _t->getFront((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 12: { glm::vec3 _r = _t->getForward((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 13: { glm::vec3 _r = _t->getRight((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 14: { glm::vec3 _r = _t->getUp((*reinterpret_cast< const glm::mat4(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->print((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::mat4(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 16: _t->print((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::mat4(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            case 2:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec4 >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::mat4 >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Mat4::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Mat4.data,
      qt_meta_data_Mat4,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Mat4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Mat4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Mat4.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QScriptable"))
        return static_cast< QScriptable*>(this);
    return QObject::qt_metacast(_clname);
}

int Mat4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
