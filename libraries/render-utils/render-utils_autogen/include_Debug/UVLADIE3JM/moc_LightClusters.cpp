/****************************************************************************
** Meta object code from reading C++ file 'LightClusters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/LightClusters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightClusters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LightClusteringPassConfig_t {
    QByteArrayData data[15];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LightClusteringPassConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LightClusteringPassConfig_t qt_meta_stringdata_LightClusteringPassConfig = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LightClusteringPassConfig"
QT_MOC_LITERAL(1, 26, 5), // "dirty"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9), // "rangeNear"
QT_MOC_LITERAL(4, 43, 8), // "rangeFar"
QT_MOC_LITERAL(5, 52, 4), // "dimX"
QT_MOC_LITERAL(6, 57, 4), // "dimY"
QT_MOC_LITERAL(7, 62, 4), // "dimZ"
QT_MOC_LITERAL(8, 67, 6), // "freeze"
QT_MOC_LITERAL(9, 74, 27), // "numClusteredLightReferences"
QT_MOC_LITERAL(10, 102, 14), // "numInputLights"
QT_MOC_LITERAL(11, 117, 18), // "numClusteredLights"
QT_MOC_LITERAL(12, 136, 14), // "numSceneLights"
QT_MOC_LITERAL(13, 151, 18), // "numFreeSceneLights"
QT_MOC_LITERAL(14, 170, 23) // "numAllocatedSceneLights"

    },
    "LightClusteringPassConfig\0dirty\0\0"
    "rangeNear\0rangeFar\0dimX\0dimY\0dimZ\0"
    "freeze\0numClusteredLightReferences\0"
    "numInputLights\0numClusteredLights\0"
    "numSceneLights\0numFreeSceneLights\0"
    "numAllocatedSceneLights"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LightClusteringPassConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      12,   20, // properties
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
       5, QMetaType::Int, 0x00495003,
       6, QMetaType::Int, 0x00495003,
       7, QMetaType::Int, 0x00495003,
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::Int, 0x00495003,
      11, QMetaType::Int, 0x00495003,
      12, QMetaType::Int, 0x00495003,
      13, QMetaType::Int, 0x00495003,
      14, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
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

void LightClusteringPassConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LightClusteringPassConfig *_t = static_cast<LightClusteringPassConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LightClusteringPassConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LightClusteringPassConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        LightClusteringPassConfig *_t = static_cast<LightClusteringPassConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->rangeNear; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->rangeFar; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->dimX; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->dimY; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->dimZ; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->freeze; break;
        case 6: *reinterpret_cast< int*>(_v) = _t->numClusteredLightReferences; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->numInputLights; break;
        case 8: *reinterpret_cast< int*>(_v) = _t->numClusteredLights; break;
        case 9: *reinterpret_cast< int*>(_v) = _t->numSceneLights; break;
        case 10: *reinterpret_cast< int*>(_v) = _t->numFreeSceneLights; break;
        case 11: *reinterpret_cast< int*>(_v) = _t->numAllocatedSceneLights; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        LightClusteringPassConfig *_t = static_cast<LightClusteringPassConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->rangeNear != *reinterpret_cast< float*>(_v)) {
                _t->rangeNear = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->rangeFar != *reinterpret_cast< float*>(_v)) {
                _t->rangeFar = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->dimX != *reinterpret_cast< int*>(_v)) {
                _t->dimX = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->dimY != *reinterpret_cast< int*>(_v)) {
                _t->dimY = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->dimZ != *reinterpret_cast< int*>(_v)) {
                _t->dimZ = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->freeze != *reinterpret_cast< bool*>(_v)) {
                _t->freeze = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->numClusteredLightReferences != *reinterpret_cast< int*>(_v)) {
                _t->numClusteredLightReferences = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 7:
            if (_t->numInputLights != *reinterpret_cast< int*>(_v)) {
                _t->numInputLights = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 8:
            if (_t->numClusteredLights != *reinterpret_cast< int*>(_v)) {
                _t->numClusteredLights = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 9:
            if (_t->numSceneLights != *reinterpret_cast< int*>(_v)) {
                _t->numSceneLights = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 10:
            if (_t->numFreeSceneLights != *reinterpret_cast< int*>(_v)) {
                _t->numFreeSceneLights = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 11:
            if (_t->numAllocatedSceneLights != *reinterpret_cast< int*>(_v)) {
                _t->numAllocatedSceneLights = *reinterpret_cast< int*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject LightClusteringPassConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_LightClusteringPassConfig.data,
      qt_meta_data_LightClusteringPassConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LightClusteringPassConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LightClusteringPassConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LightClusteringPassConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int LightClusteringPassConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LightClusteringPassConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_DebugLightClustersConfig_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugLightClustersConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugLightClustersConfig_t qt_meta_stringdata_DebugLightClustersConfig = {
    {
QT_MOC_LITERAL(0, 0, 24), // "DebugLightClustersConfig"
QT_MOC_LITERAL(1, 25, 5), // "dirty"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 10), // "doDrawGrid"
QT_MOC_LITERAL(4, 43, 22), // "doDrawClusterFromDepth"
QT_MOC_LITERAL(5, 66, 13) // "doDrawContent"

    },
    "DebugLightClustersConfig\0dirty\0\0"
    "doDrawGrid\0doDrawClusterFromDepth\0"
    "doDrawContent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugLightClustersConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495003,
       4, QMetaType::Bool, 0x00495003,
       5, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void DebugLightClustersConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugLightClustersConfig *_t = static_cast<DebugLightClustersConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugLightClustersConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugLightClustersConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DebugLightClustersConfig *_t = static_cast<DebugLightClustersConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->doDrawGrid; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->doDrawClusterFromDepth; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->doDrawContent; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DebugLightClustersConfig *_t = static_cast<DebugLightClustersConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->doDrawGrid != *reinterpret_cast< bool*>(_v)) {
                _t->doDrawGrid = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->doDrawClusterFromDepth != *reinterpret_cast< bool*>(_v)) {
                _t->doDrawClusterFromDepth = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->doDrawContent != *reinterpret_cast< bool*>(_v)) {
                _t->doDrawContent = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject DebugLightClustersConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DebugLightClustersConfig.data,
      qt_meta_data_DebugLightClustersConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebugLightClustersConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugLightClustersConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugLightClustersConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DebugLightClustersConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DebugLightClustersConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
