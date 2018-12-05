/****************************************************************************
** Meta object code from reading C++ file 'ScriptableAvatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatars/ScriptableAvatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptableAvatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptableAvatar_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptableAvatar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptableAvatar_t qt_meta_stringdata_ScriptableAvatar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ScriptableAvatar"
QT_MOC_LITERAL(1, 17, 6), // "update"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "deltatime"
QT_MOC_LITERAL(4, 35, 14), // "startAnimation"
QT_MOC_LITERAL(5, 50, 3), // "url"
QT_MOC_LITERAL(6, 54, 3), // "fps"
QT_MOC_LITERAL(7, 58, 8), // "priority"
QT_MOC_LITERAL(8, 67, 4), // "loop"
QT_MOC_LITERAL(9, 72, 4), // "hold"
QT_MOC_LITERAL(10, 77, 10), // "firstFrame"
QT_MOC_LITERAL(11, 88, 9), // "lastFrame"
QT_MOC_LITERAL(12, 98, 12), // "maskedJoints"
QT_MOC_LITERAL(13, 111, 13), // "stopAnimation"
QT_MOC_LITERAL(14, 125, 19), // "getAnimationDetails"
QT_MOC_LITERAL(15, 145, 16) // "AnimationDetails"

    },
    "ScriptableAvatar\0update\0\0deltatime\0"
    "startAnimation\0url\0fps\0priority\0loop\0"
    "hold\0firstFrame\0lastFrame\0maskedJoints\0"
    "stopAnimation\0getAnimationDetails\0"
    "AnimationDetails"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptableAvatar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    8,   72,    2, 0x02 /* Public */,
       4,    7,   89,    2, 0x22 /* Public | MethodCloned */,
       4,    6,  104,    2, 0x22 /* Public | MethodCloned */,
       4,    5,  117,    2, 0x22 /* Public | MethodCloned */,
       4,    4,  128,    2, 0x22 /* Public | MethodCloned */,
       4,    3,  137,    2, 0x22 /* Public | MethodCloned */,
       4,    2,  144,    2, 0x22 /* Public | MethodCloned */,
       4,    1,  149,    2, 0x22 /* Public | MethodCloned */,
      13,    0,  152,    2, 0x02 /* Public */,
      14,    0,  153,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float, QMetaType::QStringList,    5,    6,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Float, QMetaType::Float,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool, QMetaType::Float,    5,    6,    7,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool, QMetaType::Bool,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::Float,    5,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    0x80000000 | 15,

       0        // eod
};

void ScriptableAvatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableAvatar *_t = static_cast<ScriptableAvatar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7])),(*reinterpret_cast< const QStringList(*)>(_a[8]))); break;
        case 2: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6])),(*reinterpret_cast< float(*)>(_a[7]))); break;
        case 3: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])),(*reinterpret_cast< float(*)>(_a[6]))); break;
        case 4: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 5: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 7: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 8: _t->startAnimation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->stopAnimation(); break;
        case 10: { AnimationDetails _r = _t->getAnimationDetails();
            if (_a[0]) *reinterpret_cast< AnimationDetails*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ScriptableAvatar::staticMetaObject = {
    { &AvatarData::staticMetaObject, qt_meta_stringdata_ScriptableAvatar.data,
      qt_meta_data_ScriptableAvatar,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptableAvatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptableAvatar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptableAvatar.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return AvatarData::qt_metacast(_clname);
}

int ScriptableAvatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AvatarData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
