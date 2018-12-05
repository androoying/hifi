/****************************************************************************
** Meta object code from reading C++ file 'AmbientOcclusionEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AmbientOcclusionEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AmbientOcclusionEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AmbientOcclusionEffectConfig_t {
    QByteArrayData data[20];
    char stringdata0[300];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AmbientOcclusionEffectConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AmbientOcclusionEffectConfig_t qt_meta_stringdata_AmbientOcclusionEffectConfig = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AmbientOcclusionEffectConfig"
QT_MOC_LITERAL(1, 29, 5), // "dirty"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "horizonBased"
QT_MOC_LITERAL(4, 49, 16), // "ditheringEnabled"
QT_MOC_LITERAL(5, 66, 16), // "borderingEnabled"
QT_MOC_LITERAL(6, 83, 16), // "fetchMipsEnabled"
QT_MOC_LITERAL(7, 100, 13), // "jitterEnabled"
QT_MOC_LITERAL(8, 114, 15), // "resolutionLevel"
QT_MOC_LITERAL(9, 130, 13), // "edgeSharpness"
QT_MOC_LITERAL(10, 144, 10), // "blurRadius"
QT_MOC_LITERAL(11, 155, 10), // "ssaoRadius"
QT_MOC_LITERAL(12, 166, 19), // "ssaoObscuranceLevel"
QT_MOC_LITERAL(13, 186, 16), // "ssaoFalloffAngle"
QT_MOC_LITERAL(14, 203, 18), // "ssaoNumSpiralTurns"
QT_MOC_LITERAL(15, 222, 14), // "ssaoNumSamples"
QT_MOC_LITERAL(16, 237, 10), // "hbaoRadius"
QT_MOC_LITERAL(17, 248, 19), // "hbaoObscuranceLevel"
QT_MOC_LITERAL(18, 268, 16), // "hbaoFalloffAngle"
QT_MOC_LITERAL(19, 285, 14) // "hbaoNumSamples"

    },
    "AmbientOcclusionEffectConfig\0dirty\0\0"
    "horizonBased\0ditheringEnabled\0"
    "borderingEnabled\0fetchMipsEnabled\0"
    "jitterEnabled\0resolutionLevel\0"
    "edgeSharpness\0blurRadius\0ssaoRadius\0"
    "ssaoObscuranceLevel\0ssaoFalloffAngle\0"
    "ssaoNumSpiralTurns\0ssaoNumSamples\0"
    "hbaoRadius\0hbaoObscuranceLevel\0"
    "hbaoFalloffAngle\0hbaoNumSamples"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AmbientOcclusionEffectConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      17,   20, // properties
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
       6, QMetaType::Bool, 0x00495003,
       7, QMetaType::Bool, 0x00495003,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Float, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Float, 0x00095003,
      12, QMetaType::Float, 0x00095003,
      13, QMetaType::Float, 0x00095003,
      14, QMetaType::Float, 0x00095003,
      15, QMetaType::Int, 0x00095003,
      16, QMetaType::Float, 0x00095003,
      17, QMetaType::Float, 0x00095003,
      18, QMetaType::Float, 0x00095003,
      19, QMetaType::Int, 0x00095003,

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
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void AmbientOcclusionEffectConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AmbientOcclusionEffectConfig *_t = static_cast<AmbientOcclusionEffectConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AmbientOcclusionEffectConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AmbientOcclusionEffectConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AmbientOcclusionEffectConfig *_t = static_cast<AmbientOcclusionEffectConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->horizonBased; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->ditheringEnabled; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->borderingEnabled; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fetchMipsEnabled; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->jitterEnabled; break;
        case 5: *reinterpret_cast< int*>(_v) = _t->resolutionLevel; break;
        case 6: *reinterpret_cast< float*>(_v) = _t->edgeSharpness; break;
        case 7: *reinterpret_cast< int*>(_v) = _t->blurRadius; break;
        case 8: *reinterpret_cast< float*>(_v) = _t->ssaoRadius; break;
        case 9: *reinterpret_cast< float*>(_v) = _t->ssaoObscuranceLevel; break;
        case 10: *reinterpret_cast< float*>(_v) = _t->ssaoFalloffAngle; break;
        case 11: *reinterpret_cast< float*>(_v) = _t->ssaoNumSpiralTurns; break;
        case 12: *reinterpret_cast< int*>(_v) = _t->ssaoNumSamples; break;
        case 13: *reinterpret_cast< float*>(_v) = _t->hbaoRadius; break;
        case 14: *reinterpret_cast< float*>(_v) = _t->hbaoObscuranceLevel; break;
        case 15: *reinterpret_cast< float*>(_v) = _t->hbaoFalloffAngle; break;
        case 16: *reinterpret_cast< int*>(_v) = _t->hbaoNumSamples; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AmbientOcclusionEffectConfig *_t = static_cast<AmbientOcclusionEffectConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->horizonBased != *reinterpret_cast< bool*>(_v)) {
                _t->horizonBased = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->ditheringEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->ditheringEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->borderingEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->borderingEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->fetchMipsEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->fetchMipsEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->jitterEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->jitterEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5: _t->setResolutionLevel(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setEdgeSharpness(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setBlurRadius(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setSSAORadius(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setSSAOObscuranceLevel(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setSSAOFalloffAngle(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setSSAONumSpiralTurns(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setSSAONumSamples(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setHBAORadius(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setHBAOObscuranceLevel(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setHBAOFalloffAngle(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setHBAONumSamples(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AmbientOcclusionEffectConfig::staticMetaObject = {
    { &render::GPUJobConfig::Persistent::staticMetaObject, qt_meta_stringdata_AmbientOcclusionEffectConfig.data,
      qt_meta_data_AmbientOcclusionEffectConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AmbientOcclusionEffectConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AmbientOcclusionEffectConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AmbientOcclusionEffectConfig.stringdata0))
        return static_cast<void*>(this);
    return render::GPUJobConfig::Persistent::qt_metacast(_clname);
}

int AmbientOcclusionEffectConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::GPUJobConfig::Persistent::qt_metacall(_c, _id, _a);
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
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AmbientOcclusionEffectConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_DebugAmbientOcclusionConfig_t {
    QByteArrayData data[6];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugAmbientOcclusionConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugAmbientOcclusionConfig_t qt_meta_stringdata_DebugAmbientOcclusionConfig = {
    {
QT_MOC_LITERAL(0, 0, 27), // "DebugAmbientOcclusionConfig"
QT_MOC_LITERAL(1, 28, 5), // "dirty"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 15), // "showCursorPixel"
QT_MOC_LITERAL(4, 51, 19), // "debugCursorTexcoord"
QT_MOC_LITERAL(5, 71, 9) // "glm::vec2"

    },
    "DebugAmbientOcclusionConfig\0dirty\0\0"
    "showCursorPixel\0debugCursorTexcoord\0"
    "glm::vec2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugAmbientOcclusionConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       2,   20, // properties
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
       4, 0x80000000 | 5, 0x0049500b,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void DebugAmbientOcclusionConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugAmbientOcclusionConfig *_t = static_cast<DebugAmbientOcclusionConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugAmbientOcclusionConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugAmbientOcclusionConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec2 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DebugAmbientOcclusionConfig *_t = static_cast<DebugAmbientOcclusionConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showCursorPixel; break;
        case 1: *reinterpret_cast< glm::vec2*>(_v) = _t->debugCursorTexcoord; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DebugAmbientOcclusionConfig *_t = static_cast<DebugAmbientOcclusionConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->showCursorPixel != *reinterpret_cast< bool*>(_v)) {
                _t->showCursorPixel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->debugCursorTexcoord != *reinterpret_cast< glm::vec2*>(_v)) {
                _t->debugCursorTexcoord = *reinterpret_cast< glm::vec2*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DebugAmbientOcclusionConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DebugAmbientOcclusionConfig.data,
      qt_meta_data_DebugAmbientOcclusionConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebugAmbientOcclusionConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugAmbientOcclusionConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugAmbientOcclusionConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DebugAmbientOcclusionConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DebugAmbientOcclusionConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
