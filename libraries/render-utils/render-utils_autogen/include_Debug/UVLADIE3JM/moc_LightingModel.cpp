/****************************************************************************
** Meta object code from reading C++ file 'LightingModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/LightingModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightingModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MakeLightingModelConfig_t {
    QByteArrayData data[23];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MakeLightingModelConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MakeLightingModelConfig_t qt_meta_stringdata_MakeLightingModelConfig = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MakeLightingModelConfig"
QT_MOC_LITERAL(1, 24, 5), // "dirty"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "enableUnlit"
QT_MOC_LITERAL(4, 43, 14), // "enableEmissive"
QT_MOC_LITERAL(5, 58, 14), // "enableLightmap"
QT_MOC_LITERAL(6, 73, 16), // "enableBackground"
QT_MOC_LITERAL(7, 90, 10), // "enableHaze"
QT_MOC_LITERAL(8, 101, 16), // "enableObscurance"
QT_MOC_LITERAL(9, 118, 16), // "enableScattering"
QT_MOC_LITERAL(10, 135, 13), // "enableDiffuse"
QT_MOC_LITERAL(11, 149, 14), // "enableSpecular"
QT_MOC_LITERAL(12, 164, 12), // "enableAlbedo"
QT_MOC_LITERAL(13, 177, 23), // "enableMaterialTexturing"
QT_MOC_LITERAL(14, 201, 18), // "enableAmbientLight"
QT_MOC_LITERAL(15, 220, 22), // "enableDirectionalLight"
QT_MOC_LITERAL(16, 243, 16), // "enablePointLight"
QT_MOC_LITERAL(17, 260, 15), // "enableSpotLight"
QT_MOC_LITERAL(18, 276, 15), // "enableWireframe"
QT_MOC_LITERAL(19, 292, 16), // "showLightContour"
QT_MOC_LITERAL(20, 309, 11), // "enableBloom"
QT_MOC_LITERAL(21, 321, 14), // "enableSkinning"
QT_MOC_LITERAL(22, 336, 16) // "enableBlendshape"

    },
    "MakeLightingModelConfig\0dirty\0\0"
    "enableUnlit\0enableEmissive\0enableLightmap\0"
    "enableBackground\0enableHaze\0"
    "enableObscurance\0enableScattering\0"
    "enableDiffuse\0enableSpecular\0enableAlbedo\0"
    "enableMaterialTexturing\0enableAmbientLight\0"
    "enableDirectionalLight\0enablePointLight\0"
    "enableSpotLight\0enableWireframe\0"
    "showLightContour\0enableBloom\0"
    "enableSkinning\0enableBlendshape"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MakeLightingModelConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      20,   20, // properties
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
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::Bool, 0x00495003,
      12, QMetaType::Bool, 0x00495003,
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::Bool, 0x00495003,
      15, QMetaType::Bool, 0x00495003,
      16, QMetaType::Bool, 0x00495003,
      17, QMetaType::Bool, 0x00495003,
      18, QMetaType::Bool, 0x00495003,
      19, QMetaType::Bool, 0x00495003,
      20, QMetaType::Bool, 0x00495003,
      21, QMetaType::Bool, 0x00495003,
      22, QMetaType::Bool, 0x00495003,

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
       0,
       0,
       0,

       0        // eod
};

void MakeLightingModelConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MakeLightingModelConfig *_t = static_cast<MakeLightingModelConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MakeLightingModelConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MakeLightingModelConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        MakeLightingModelConfig *_t = static_cast<MakeLightingModelConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->enableUnlit; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->enableEmissive; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->enableLightmap; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->enableBackground; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enableHaze; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->enableObscurance; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableScattering; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->enableDiffuse; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->enableSpecular; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->enableAlbedo; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->enableMaterialTexturing; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->enableAmbientLight; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->enableDirectionalLight; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->enablePointLight; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->enableSpotLight; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->enableWireframe; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->showLightContour; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->enableBloom; break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->enableSkinning; break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->enableBlendshape; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        MakeLightingModelConfig *_t = static_cast<MakeLightingModelConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->enableUnlit != *reinterpret_cast< bool*>(_v)) {
                _t->enableUnlit = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->enableEmissive != *reinterpret_cast< bool*>(_v)) {
                _t->enableEmissive = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->enableLightmap != *reinterpret_cast< bool*>(_v)) {
                _t->enableLightmap = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->enableBackground != *reinterpret_cast< bool*>(_v)) {
                _t->enableBackground = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->enableHaze != *reinterpret_cast< bool*>(_v)) {
                _t->enableHaze = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->enableObscurance != *reinterpret_cast< bool*>(_v)) {
                _t->enableObscurance = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->enableScattering != *reinterpret_cast< bool*>(_v)) {
                _t->enableScattering = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 7:
            if (_t->enableDiffuse != *reinterpret_cast< bool*>(_v)) {
                _t->enableDiffuse = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 8:
            if (_t->enableSpecular != *reinterpret_cast< bool*>(_v)) {
                _t->enableSpecular = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 9:
            if (_t->enableAlbedo != *reinterpret_cast< bool*>(_v)) {
                _t->enableAlbedo = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 10:
            if (_t->enableMaterialTexturing != *reinterpret_cast< bool*>(_v)) {
                _t->enableMaterialTexturing = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 11:
            if (_t->enableAmbientLight != *reinterpret_cast< bool*>(_v)) {
                _t->enableAmbientLight = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 12:
            if (_t->enableDirectionalLight != *reinterpret_cast< bool*>(_v)) {
                _t->enableDirectionalLight = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 13:
            if (_t->enablePointLight != *reinterpret_cast< bool*>(_v)) {
                _t->enablePointLight = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 14:
            if (_t->enableSpotLight != *reinterpret_cast< bool*>(_v)) {
                _t->enableSpotLight = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 15:
            if (_t->enableWireframe != *reinterpret_cast< bool*>(_v)) {
                _t->enableWireframe = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 16:
            if (_t->showLightContour != *reinterpret_cast< bool*>(_v)) {
                _t->showLightContour = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 17:
            if (_t->enableBloom != *reinterpret_cast< bool*>(_v)) {
                _t->enableBloom = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 18:
            if (_t->enableSkinning != *reinterpret_cast< bool*>(_v)) {
                _t->enableSkinning = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 19:
            if (_t->enableBlendshape != *reinterpret_cast< bool*>(_v)) {
                _t->enableBlendshape = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject MakeLightingModelConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_MakeLightingModelConfig.data,
      qt_meta_data_MakeLightingModelConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MakeLightingModelConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MakeLightingModelConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MakeLightingModelConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int MakeLightingModelConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MakeLightingModelConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
