/****************************************************************************
** Meta object code from reading C++ file 'DebugDraw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DebugDraw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebugDraw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DebugDraw_t {
    QByteArrayData data[16];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugDraw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugDraw_t qt_meta_stringdata_DebugDraw = {
    {
QT_MOC_LITERAL(0, 0, 9), // "DebugDraw"
QT_MOC_LITERAL(1, 10, 7), // "drawRay"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "glm::vec3"
QT_MOC_LITERAL(4, 29, 5), // "start"
QT_MOC_LITERAL(5, 35, 3), // "end"
QT_MOC_LITERAL(6, 39, 9), // "glm::vec4"
QT_MOC_LITERAL(7, 49, 5), // "color"
QT_MOC_LITERAL(8, 55, 9), // "addMarker"
QT_MOC_LITERAL(9, 65, 3), // "key"
QT_MOC_LITERAL(10, 69, 9), // "glm::quat"
QT_MOC_LITERAL(11, 79, 8), // "rotation"
QT_MOC_LITERAL(12, 88, 8), // "position"
QT_MOC_LITERAL(13, 97, 12), // "removeMarker"
QT_MOC_LITERAL(14, 110, 17), // "addMyAvatarMarker"
QT_MOC_LITERAL(15, 128, 20) // "removeMyAvatarMarker"

    },
    "DebugDraw\0drawRay\0\0glm::vec3\0start\0"
    "end\0glm::vec4\0color\0addMarker\0key\0"
    "glm::quat\0rotation\0position\0removeMarker\0"
    "addMyAvatarMarker\0removeMyAvatarMarker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugDraw[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x02 /* Public */,
       8,    4,   46,    2, 0x02 /* Public */,
      13,    1,   55,    2, 0x02 /* Public */,
      14,    4,   58,    2, 0x02 /* Public */,
      15,    1,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 3, 0x80000000 | 6,    9,   11,   12,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 3, 0x80000000 | 6,    9,   11,   12,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void DebugDraw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugDraw *_t = static_cast<DebugDraw *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->drawRay((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const glm::vec3(*)>(_a[2])),(*reinterpret_cast< const glm::vec4(*)>(_a[3]))); break;
        case 1: _t->addMarker((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::vec4(*)>(_a[4]))); break;
        case 2: _t->removeMarker((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addMyAvatarMarker((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const glm::quat(*)>(_a[2])),(*reinterpret_cast< const glm::vec3(*)>(_a[3])),(*reinterpret_cast< const glm::vec4(*)>(_a[4]))); break;
        case 4: _t->removeMyAvatarMarker((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DebugDraw::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DebugDraw.data,
      qt_meta_data_DebugDraw,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebugDraw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugDraw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugDraw.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DebugDraw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
