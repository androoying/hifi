/****************************************************************************
** Meta object code from reading C++ file 'CullTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/render/CullTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CullTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__FetchSpatialTreeConfig_t {
    QByteArrayData data[8];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__FetchSpatialTreeConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__FetchSpatialTreeConfig_t qt_meta_stringdata_render__FetchSpatialTreeConfig = {
    {
QT_MOC_LITERAL(0, 0, 30), // "render::FetchSpatialTreeConfig"
QT_MOC_LITERAL(1, 31, 5), // "dirty"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "setFreezeFrustum"
QT_MOC_LITERAL(4, 55, 7), // "enabled"
QT_MOC_LITERAL(5, 63, 8), // "numItems"
QT_MOC_LITERAL(6, 72, 13), // "freezeFrustum"
QT_MOC_LITERAL(7, 86, 8) // "LODAngle"

    },
    "render::FetchSpatialTreeConfig\0dirty\0"
    "\0setFreezeFrustum\0enabled\0numItems\0"
    "freezeFrustum\0LODAngle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__FetchSpatialTreeConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       5, QMetaType::Int, 0x00095001,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void render::FetchSpatialTreeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FetchSpatialTreeConfig *_t = static_cast<FetchSpatialTreeConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: _t->setFreezeFrustum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FetchSpatialTreeConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FetchSpatialTreeConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FetchSpatialTreeConfig *_t = static_cast<FetchSpatialTreeConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumItems(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->freezeFrustum; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->lodAngle; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FetchSpatialTreeConfig *_t = static_cast<FetchSpatialTreeConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFreezeFrustum(*reinterpret_cast< bool*>(_v)); break;
        case 2:
            if (_t->lodAngle != *reinterpret_cast< float*>(_v)) {
                _t->lodAngle = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject render::FetchSpatialTreeConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_render__FetchSpatialTreeConfig.data,
      qt_meta_data_render__FetchSpatialTreeConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::FetchSpatialTreeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::FetchSpatialTreeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__FetchSpatialTreeConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int render::FetchSpatialTreeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
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
void render::FetchSpatialTreeConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_render__CullSpatialSelectionConfig_t {
    QByteArrayData data[9];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__CullSpatialSelectionConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__CullSpatialSelectionConfig_t qt_meta_stringdata_render__CullSpatialSelectionConfig = {
    {
QT_MOC_LITERAL(0, 0, 34), // "render::CullSpatialSelectionC..."
QT_MOC_LITERAL(1, 35, 5), // "dirty"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "setFreezeFrustum"
QT_MOC_LITERAL(4, 59, 7), // "enabled"
QT_MOC_LITERAL(5, 67, 14), // "setSkipCulling"
QT_MOC_LITERAL(6, 82, 8), // "numItems"
QT_MOC_LITERAL(7, 91, 13), // "freezeFrustum"
QT_MOC_LITERAL(8, 105, 11) // "skipCulling"

    },
    "render::CullSpatialSelectionConfig\0"
    "dirty\0\0setFreezeFrustum\0enabled\0"
    "setSkipCulling\0numItems\0freezeFrustum\0"
    "skipCulling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__CullSpatialSelectionConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095001,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,

       0        // eod
};

void render::CullSpatialSelectionConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CullSpatialSelectionConfig *_t = static_cast<CullSpatialSelectionConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: _t->setFreezeFrustum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setSkipCulling((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CullSpatialSelectionConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CullSpatialSelectionConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        CullSpatialSelectionConfig *_t = static_cast<CullSpatialSelectionConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumItems(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->freezeFrustum; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->skipCulling; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        CullSpatialSelectionConfig *_t = static_cast<CullSpatialSelectionConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setFreezeFrustum(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSkipCulling(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject render::CullSpatialSelectionConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_render__CullSpatialSelectionConfig.data,
      qt_meta_data_render__CullSpatialSelectionConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::CullSpatialSelectionConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::CullSpatialSelectionConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__CullSpatialSelectionConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int render::CullSpatialSelectionConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void render::CullSpatialSelectionConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
