/****************************************************************************
** Meta object code from reading C++ file 'Engine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/render/Engine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Engine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__GPUJobConfig_t {
    QByteArrayData data[3];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__GPUJobConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__GPUJobConfig_t qt_meta_stringdata_render__GPUJobConfig = {
    {
QT_MOC_LITERAL(0, 0, 20), // "render::GPUJobConfig"
QT_MOC_LITERAL(1, 21, 10), // "gpuRunTime"
QT_MOC_LITERAL(2, 32, 12) // "batchRunTime"

    },
    "render::GPUJobConfig\0gpuRunTime\0"
    "batchRunTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__GPUJobConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00095001,
       2, QMetaType::Double, 0x00095001,

       0        // eod
};

void render::GPUJobConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        GPUJobConfig *_t = static_cast<GPUJobConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getGPURunTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getBatchRunTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::GPUJobConfig::staticMetaObject = {
    { &JobConfig::staticMetaObject, qt_meta_stringdata_render__GPUJobConfig.data,
      qt_meta_data_render__GPUJobConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::GPUJobConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::GPUJobConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__GPUJobConfig.stringdata0))
        return static_cast<void*>(this);
    return JobConfig::qt_metacast(_clname);
}

int render::GPUJobConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = JobConfig::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_render__GPUTaskConfig_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__GPUTaskConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__GPUTaskConfig_t qt_meta_stringdata_render__GPUTaskConfig = {
    {
QT_MOC_LITERAL(0, 0, 21), // "render::GPUTaskConfig"
QT_MOC_LITERAL(1, 22, 10), // "gpuRunTime"
QT_MOC_LITERAL(2, 33, 12) // "batchRunTime"

    },
    "render::GPUTaskConfig\0gpuRunTime\0"
    "batchRunTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__GPUTaskConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00095001,
       2, QMetaType::Double, 0x00095001,

       0        // eod
};

void render::GPUTaskConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        GPUTaskConfig *_t = static_cast<GPUTaskConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->getGPURunTime(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getBatchRunTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::GPUTaskConfig::staticMetaObject = {
    { &TaskConfig::staticMetaObject, qt_meta_stringdata_render__GPUTaskConfig.data,
      qt_meta_data_render__GPUTaskConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::GPUTaskConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::GPUTaskConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__GPUTaskConfig.stringdata0))
        return static_cast<void*>(this);
    return TaskConfig::qt_metacast(_clname);
}

int render::GPUTaskConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskConfig::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
