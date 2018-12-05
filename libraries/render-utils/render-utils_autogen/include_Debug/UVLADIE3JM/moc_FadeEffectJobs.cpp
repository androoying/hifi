/****************************************************************************
** Meta object code from reading C++ file 'FadeEffectJobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/FadeEffectJobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FadeEffectJobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FadeEditConfig_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FadeEditConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FadeEditConfig_t qt_meta_stringdata_FadeEditConfig = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FadeEditConfig"
QT_MOC_LITERAL(1, 15, 5), // "dirty"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8) // "editFade"

    },
    "FadeEditConfig\0dirty\0\0editFade"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FadeEditConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
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

 // properties: notify_signal_id
       0,

       0        // eod
};

void FadeEditConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FadeEditConfig *_t = static_cast<FadeEditConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FadeEditConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FadeEditConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FadeEditConfig *_t = static_cast<FadeEditConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->editFade; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FadeEditConfig *_t = static_cast<FadeEditConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->editFade != *reinterpret_cast< bool*>(_v)) {
                _t->editFade = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject FadeEditConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_FadeEditConfig.data,
      qt_meta_data_FadeEditConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FadeEditConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FadeEditConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FadeEditConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int FadeEditConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FadeEditConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FadeConfig_t {
    QByteArrayData data[30];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FadeConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FadeConfig_t qt_meta_stringdata_FadeConfig = {
    {
QT_MOC_LITERAL(0, 0, 10), // "FadeConfig"
QT_MOC_LITERAL(1, 11, 5), // "dirty"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 13), // "dirtyCategory"
QT_MOC_LITERAL(4, 32, 4), // "save"
QT_MOC_LITERAL(5, 37, 8), // "filePath"
QT_MOC_LITERAL(6, 46, 4), // "load"
QT_MOC_LITERAL(7, 51, 14), // "editedCategory"
QT_MOC_LITERAL(8, 66, 8), // "duration"
QT_MOC_LITERAL(9, 75, 9), // "baseSizeX"
QT_MOC_LITERAL(10, 85, 9), // "baseSizeY"
QT_MOC_LITERAL(11, 95, 9), // "baseSizeZ"
QT_MOC_LITERAL(12, 105, 9), // "baseLevel"
QT_MOC_LITERAL(13, 115, 10), // "isInverted"
QT_MOC_LITERAL(14, 126, 10), // "noiseSizeX"
QT_MOC_LITERAL(15, 137, 10), // "noiseSizeY"
QT_MOC_LITERAL(16, 148, 10), // "noiseSizeZ"
QT_MOC_LITERAL(17, 159, 10), // "noiseLevel"
QT_MOC_LITERAL(18, 170, 9), // "edgeWidth"
QT_MOC_LITERAL(19, 180, 14), // "edgeInnerColor"
QT_MOC_LITERAL(20, 195, 18), // "edgeInnerIntensity"
QT_MOC_LITERAL(21, 214, 14), // "edgeOuterColor"
QT_MOC_LITERAL(22, 229, 18), // "edgeOuterIntensity"
QT_MOC_LITERAL(23, 248, 6), // "timing"
QT_MOC_LITERAL(24, 255, 11), // "noiseSpeedX"
QT_MOC_LITERAL(25, 267, 11), // "noiseSpeedY"
QT_MOC_LITERAL(26, 279, 11), // "noiseSpeedZ"
QT_MOC_LITERAL(27, 291, 9), // "threshold"
QT_MOC_LITERAL(28, 301, 10), // "manualFade"
QT_MOC_LITERAL(29, 312, 15) // "manualThreshold"

    },
    "FadeConfig\0dirty\0\0dirtyCategory\0save\0"
    "filePath\0load\0editedCategory\0duration\0"
    "baseSizeX\0baseSizeY\0baseSizeZ\0baseLevel\0"
    "isInverted\0noiseSizeX\0noiseSizeY\0"
    "noiseSizeZ\0noiseLevel\0edgeWidth\0"
    "edgeInnerColor\0edgeInnerIntensity\0"
    "edgeOuterColor\0edgeOuterIntensity\0"
    "timing\0noiseSpeedX\0noiseSpeedY\0"
    "noiseSpeedZ\0threshold\0manualFade\0"
    "manualThreshold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FadeConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      23,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x02 /* Public */,
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495103,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,
      12, QMetaType::Float, 0x00495103,
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::Float, 0x00495103,
      15, QMetaType::Float, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,
      18, QMetaType::Float, 0x00495103,
      19, QMetaType::QColor, 0x00495103,
      20, QMetaType::Float, 0x00495103,
      21, QMetaType::QColor, 0x00495103,
      22, QMetaType::Float, 0x00495103,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Float, 0x00495103,
      25, QMetaType::Float, 0x00495103,
      26, QMetaType::Float, 0x00495103,
      27, QMetaType::Float, 0x00495003,
      28, QMetaType::Bool, 0x00495003,
      29, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       1,
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
       0,
       0,

       0        // eod
};

void FadeConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FadeConfig *_t = static_cast<FadeConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: _t->dirtyCategory(); break;
        case 2: _t->save((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FadeConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FadeConfig::dirty)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FadeConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FadeConfig::dirtyCategory)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FadeConfig *_t = static_cast<FadeConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->editedCategory; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getDuration(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getBaseSizeX(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getBaseSizeY(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getBaseSizeZ(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getBaseLevel(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isInverted(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getNoiseSizeX(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getNoiseSizeY(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getNoiseSizeZ(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getNoiseLevel(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getEdgeWidth(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->getEdgeInnerColor(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getEdgeInnerIntensity(); break;
        case 14: *reinterpret_cast< QColor*>(_v) = _t->getEdgeOuterColor(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getEdgeOuterIntensity(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getTiming(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getNoiseSpeedX(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getNoiseSpeedY(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getNoiseSpeedZ(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->threshold; break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->manualFade; break;
        case 22: *reinterpret_cast< float*>(_v) = _t->manualThreshold; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        FadeConfig *_t = static_cast<FadeConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEditedCategory(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDuration(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setBaseSizeX(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setBaseSizeY(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setBaseSizeZ(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setBaseLevel(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setInverted(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setNoiseSizeX(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setNoiseSizeY(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setNoiseSizeZ(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setNoiseLevel(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setEdgeWidth(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setEdgeInnerColor(*reinterpret_cast< QColor*>(_v)); break;
        case 13: _t->setEdgeInnerIntensity(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setEdgeOuterColor(*reinterpret_cast< QColor*>(_v)); break;
        case 15: _t->setEdgeOuterIntensity(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setTiming(*reinterpret_cast< int*>(_v)); break;
        case 17: _t->setNoiseSpeedX(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setNoiseSpeedY(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setNoiseSpeedZ(*reinterpret_cast< float*>(_v)); break;
        case 20:
            if (_t->threshold != *reinterpret_cast< float*>(_v)) {
                _t->threshold = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 21:
            if (_t->manualFade != *reinterpret_cast< bool*>(_v)) {
                _t->manualFade = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 22:
            if (_t->manualThreshold != *reinterpret_cast< float*>(_v)) {
                _t->manualThreshold = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FadeConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_FadeConfig.data,
      qt_meta_data_FadeConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FadeConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FadeConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FadeConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int FadeConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FadeConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FadeConfig::dirtyCategory()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
