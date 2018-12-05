/****************************************************************************
** Meta object code from reading C++ file 'Camera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/shared/Camera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Camera_t {
    QByteArrayData data[23];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Camera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Camera_t qt_meta_stringdata_Camera = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Camera"
QT_MOC_LITERAL(1, 7, 11), // "modeUpdated"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "newMode"
QT_MOC_LITERAL(4, 28, 13), // "getModeString"
QT_MOC_LITERAL(5, 42, 13), // "setModeString"
QT_MOC_LITERAL(6, 56, 4), // "mode"
QT_MOC_LITERAL(7, 61, 11), // "getPosition"
QT_MOC_LITERAL(8, 73, 9), // "glm::vec3"
QT_MOC_LITERAL(9, 83, 11), // "setPosition"
QT_MOC_LITERAL(10, 95, 8), // "position"
QT_MOC_LITERAL(11, 104, 14), // "getOrientation"
QT_MOC_LITERAL(12, 119, 9), // "glm::quat"
QT_MOC_LITERAL(13, 129, 14), // "setOrientation"
QT_MOC_LITERAL(14, 144, 11), // "orientation"
QT_MOC_LITERAL(15, 156, 14), // "computePickRay"
QT_MOC_LITERAL(16, 171, 7), // "PickRay"
QT_MOC_LITERAL(17, 179, 1), // "x"
QT_MOC_LITERAL(18, 181, 1), // "y"
QT_MOC_LITERAL(19, 183, 6), // "lookAt"
QT_MOC_LITERAL(20, 190, 13), // "keepLookingAt"
QT_MOC_LITERAL(21, 204, 11), // "stopLooking"
QT_MOC_LITERAL(22, 216, 7) // "frustum"

    },
    "Camera\0modeUpdated\0\0newMode\0getModeString\0"
    "setModeString\0mode\0getPosition\0glm::vec3\0"
    "setPosition\0position\0getOrientation\0"
    "glm::quat\0setOrientation\0orientation\0"
    "computePickRay\0PickRay\0x\0y\0lookAt\0"
    "keepLookingAt\0stopLooking\0frustum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Camera[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    0,   76,    2, 0x0a /* Public */,
       9,    1,   77,    2, 0x0a /* Public */,
      11,    0,   80,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,
      15,    2,   84,    2, 0x0a /* Public */,
      19,    1,   89,    2, 0x0a /* Public */,
      20,    1,   92,    2, 0x0a /* Public */,
      21,    0,   95,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    6,
    0x80000000 | 8,
    QMetaType::Void, 0x80000000 | 8,   10,
    0x80000000 | 12,
    QMetaType::Void, 0x80000000 | 12,   14,
    0x80000000 | 16, QMetaType::Float, QMetaType::Float,   17,   18,
    QMetaType::Void, 0x80000000 | 8,   10,
    QMetaType::Void, 0x80000000 | 8,   10,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 8, 0x0009510b,
      14, 0x80000000 | 12, 0x0009510b,
       6, QMetaType::QString, 0x00095003,
      22, QMetaType::QVariantMap, 0x00095401,

       0        // eod
};

void Camera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeUpdated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getModeString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setModeString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { glm::vec3 _r = _t->getPosition();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setPosition((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 5: { glm::quat _r = _t->getOrientation();
            if (_a[0]) *reinterpret_cast< glm::quat*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setOrientation((*reinterpret_cast< const glm::quat(*)>(_a[1]))); break;
        case 7: { PickRay _r = _t->computePickRay((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< PickRay*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->lookAt((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 9: _t->keepLookingAt((*reinterpret_cast< const glm::vec3(*)>(_a[1]))); break;
        case 10: _t->stopLooking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        case 9:
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
            using _t = void (Camera::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Camera::modeUpdated)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::quat >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< glm::vec3*>(_v) = _t->getPosition(); break;
        case 1: *reinterpret_cast< glm::quat*>(_v) = _t->getOrientation(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getModeString(); break;
        case 3: *reinterpret_cast< QVariantMap*>(_v) = _t->getViewFrustum(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Camera *_t = static_cast<Camera *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< glm::vec3*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< glm::quat*>(_v)); break;
        case 2: _t->setModeString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Camera::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Camera.data,
      qt_meta_data_Camera,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Camera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Camera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Camera.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Camera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Camera::modeUpdated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
