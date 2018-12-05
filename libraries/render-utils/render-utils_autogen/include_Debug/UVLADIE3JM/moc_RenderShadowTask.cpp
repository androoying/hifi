/****************************************************************************
** Meta object code from reading C++ file 'RenderShadowTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RenderShadowTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderShadowTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RenderShadowTaskConfig_t {
    QByteArrayData data[3];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderShadowTaskConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderShadowTaskConfig_t qt_meta_stringdata_RenderShadowTaskConfig = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RenderShadowTaskConfig"
QT_MOC_LITERAL(1, 23, 5), // "dirty"
QT_MOC_LITERAL(2, 29, 0) // ""

    },
    "RenderShadowTaskConfig\0dirty\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderShadowTaskConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void RenderShadowTaskConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderShadowTaskConfig *_t = static_cast<RenderShadowTaskConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenderShadowTaskConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenderShadowTaskConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RenderShadowTaskConfig::staticMetaObject = {
    { &render::Task::Config::Persistent::staticMetaObject, qt_meta_stringdata_RenderShadowTaskConfig.data,
      qt_meta_data_RenderShadowTaskConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RenderShadowTaskConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderShadowTaskConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderShadowTaskConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Task::Config::Persistent::qt_metacast(_clname);
}

int RenderShadowTaskConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Task::Config::Persistent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RenderShadowTaskConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_RenderShadowSetupConfig_t {
    QByteArrayData data[11];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderShadowSetupConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderShadowSetupConfig_t qt_meta_stringdata_RenderShadowSetupConfig = {
    {
QT_MOC_LITERAL(0, 0, 23), // "RenderShadowSetupConfig"
QT_MOC_LITERAL(1, 24, 5), // "dirty"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "constantBias0"
QT_MOC_LITERAL(4, 45, 13), // "constantBias1"
QT_MOC_LITERAL(5, 59, 13), // "constantBias2"
QT_MOC_LITERAL(6, 73, 13), // "constantBias3"
QT_MOC_LITERAL(7, 87, 10), // "slopeBias0"
QT_MOC_LITERAL(8, 98, 10), // "slopeBias1"
QT_MOC_LITERAL(9, 109, 10), // "slopeBias2"
QT_MOC_LITERAL(10, 120, 10) // "slopeBias3"

    },
    "RenderShadowSetupConfig\0dirty\0\0"
    "constantBias0\0constantBias1\0constantBias2\0"
    "constantBias3\0slopeBias0\0slopeBias1\0"
    "slopeBias2\0slopeBias3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderShadowSetupConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       8,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Float, 0x00495003,
       4, QMetaType::Float, 0x00495003,
       5, QMetaType::Float, 0x00495003,
       6, QMetaType::Float, 0x00495003,
       7, QMetaType::Float, 0x00495003,
       8, QMetaType::Float, 0x00495003,
       9, QMetaType::Float, 0x00495003,
      10, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void RenderShadowSetupConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderShadowSetupConfig *_t = static_cast<RenderShadowSetupConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenderShadowSetupConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenderShadowSetupConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RenderShadowSetupConfig *_t = static_cast<RenderShadowSetupConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->constantBias0; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->constantBias1; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->constantBias2; break;
        case 3: *reinterpret_cast< float*>(_v) = _t->constantBias3; break;
        case 4: *reinterpret_cast< float*>(_v) = _t->slopeBias0; break;
        case 5: *reinterpret_cast< float*>(_v) = _t->slopeBias1; break;
        case 6: *reinterpret_cast< float*>(_v) = _t->slopeBias2; break;
        case 7: *reinterpret_cast< float*>(_v) = _t->slopeBias3; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RenderShadowSetupConfig *_t = static_cast<RenderShadowSetupConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->constantBias0 != *reinterpret_cast< float*>(_v)) {
                _t->constantBias0 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->constantBias1 != *reinterpret_cast< float*>(_v)) {
                _t->constantBias1 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->constantBias2 != *reinterpret_cast< float*>(_v)) {
                _t->constantBias2 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->constantBias3 != *reinterpret_cast< float*>(_v)) {
                _t->constantBias3 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->slopeBias0 != *reinterpret_cast< float*>(_v)) {
                _t->slopeBias0 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->slopeBias1 != *reinterpret_cast< float*>(_v)) {
                _t->slopeBias1 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->slopeBias2 != *reinterpret_cast< float*>(_v)) {
                _t->slopeBias2 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 7:
            if (_t->slopeBias3 != *reinterpret_cast< float*>(_v)) {
                _t->slopeBias3 = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RenderShadowSetupConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_RenderShadowSetupConfig.data,
      qt_meta_data_RenderShadowSetupConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RenderShadowSetupConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderShadowSetupConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderShadowSetupConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int RenderShadowSetupConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RenderShadowSetupConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
