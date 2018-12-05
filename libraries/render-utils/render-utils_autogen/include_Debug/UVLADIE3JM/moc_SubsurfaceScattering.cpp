/****************************************************************************
** Meta object code from reading C++ file 'SubsurfaceScattering.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/SubsurfaceScattering.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SubsurfaceScattering.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubsurfaceScatteringConfig_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubsurfaceScatteringConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubsurfaceScatteringConfig_t qt_meta_stringdata_SubsurfaceScatteringConfig = {
    {
QT_MOC_LITERAL(0, 0, 26), // "SubsurfaceScatteringConfig"
QT_MOC_LITERAL(1, 27, 5), // "dirty"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "bentRed"
QT_MOC_LITERAL(4, 42, 9), // "bentGreen"
QT_MOC_LITERAL(5, 52, 8), // "bentBlue"
QT_MOC_LITERAL(6, 61, 9), // "bentScale"
QT_MOC_LITERAL(7, 71, 15), // "curvatureOffset"
QT_MOC_LITERAL(8, 87, 14), // "curvatureScale"
QT_MOC_LITERAL(9, 102, 16), // "enableScattering"
QT_MOC_LITERAL(10, 119, 18), // "showScatteringBRDF"
QT_MOC_LITERAL(11, 138, 13), // "showCurvature"
QT_MOC_LITERAL(12, 152, 18) // "showDiffusedNormal"

    },
    "SubsurfaceScatteringConfig\0dirty\0\0"
    "bentRed\0bentGreen\0bentBlue\0bentScale\0"
    "curvatureOffset\0curvatureScale\0"
    "enableScattering\0showScatteringBRDF\0"
    "showCurvature\0showDiffusedNormal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubsurfaceScatteringConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      10,   20, // properties
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
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::Bool, 0x00495003,
      12, QMetaType::Bool, 0x00495003,

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

       0        // eod
};

void SubsurfaceScatteringConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SubsurfaceScatteringConfig *_t = static_cast<SubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsurfaceScatteringConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubsurfaceScatteringConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SubsurfaceScatteringConfig *_t = static_cast<SubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->bentRed; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->bentGreen; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->bentBlue; break;
        case 3: *reinterpret_cast< float*>(_v) = _t->bentScale; break;
        case 4: *reinterpret_cast< float*>(_v) = _t->curvatureOffset; break;
        case 5: *reinterpret_cast< float*>(_v) = _t->curvatureScale; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->enableScattering; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->showScatteringBRDF; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->showCurvature; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showDiffusedNormal; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SubsurfaceScatteringConfig *_t = static_cast<SubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->bentRed != *reinterpret_cast< float*>(_v)) {
                _t->bentRed = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->bentGreen != *reinterpret_cast< float*>(_v)) {
                _t->bentGreen = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->bentBlue != *reinterpret_cast< float*>(_v)) {
                _t->bentBlue = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->bentScale != *reinterpret_cast< float*>(_v)) {
                _t->bentScale = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->curvatureOffset != *reinterpret_cast< float*>(_v)) {
                _t->curvatureOffset = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->curvatureScale != *reinterpret_cast< float*>(_v)) {
                _t->curvatureScale = *reinterpret_cast< float*>(_v);
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
            if (_t->showScatteringBRDF != *reinterpret_cast< bool*>(_v)) {
                _t->showScatteringBRDF = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 8:
            if (_t->showCurvature != *reinterpret_cast< bool*>(_v)) {
                _t->showCurvature = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 9:
            if (_t->showDiffusedNormal != *reinterpret_cast< bool*>(_v)) {
                _t->showDiffusedNormal = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject SubsurfaceScatteringConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_SubsurfaceScatteringConfig.data,
      qt_meta_data_SubsurfaceScatteringConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SubsurfaceScatteringConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsurfaceScatteringConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsurfaceScatteringConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int SubsurfaceScatteringConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SubsurfaceScatteringConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_DebugSubsurfaceScatteringConfig_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DebugSubsurfaceScatteringConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DebugSubsurfaceScatteringConfig_t qt_meta_stringdata_DebugSubsurfaceScatteringConfig = {
    {
QT_MOC_LITERAL(0, 0, 31), // "DebugSubsurfaceScatteringConfig"
QT_MOC_LITERAL(1, 32, 5), // "dirty"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 11), // "showProfile"
QT_MOC_LITERAL(4, 51, 7), // "showLUT"
QT_MOC_LITERAL(5, 59, 17), // "showSpecularTable"
QT_MOC_LITERAL(6, 77, 15), // "showCursorPixel"
QT_MOC_LITERAL(7, 93, 19), // "debugCursorTexcoord"
QT_MOC_LITERAL(8, 113, 9) // "glm::vec2"

    },
    "DebugSubsurfaceScatteringConfig\0dirty\0"
    "\0showProfile\0showLUT\0showSpecularTable\0"
    "showCursorPixel\0debugCursorTexcoord\0"
    "glm::vec2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DebugSubsurfaceScatteringConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   20, // properties
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
       7, 0x80000000 | 8, 0x0049500b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void DebugSubsurfaceScatteringConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DebugSubsurfaceScatteringConfig *_t = static_cast<DebugSubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DebugSubsurfaceScatteringConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DebugSubsurfaceScatteringConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec2 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DebugSubsurfaceScatteringConfig *_t = static_cast<DebugSubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->showProfile; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showLUT; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showSpecularTable; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showCursorPixel; break;
        case 4: *reinterpret_cast< glm::vec2*>(_v) = _t->debugCursorTexcoord; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DebugSubsurfaceScatteringConfig *_t = static_cast<DebugSubsurfaceScatteringConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->showProfile != *reinterpret_cast< bool*>(_v)) {
                _t->showProfile = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->showLUT != *reinterpret_cast< bool*>(_v)) {
                _t->showLUT = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->showSpecularTable != *reinterpret_cast< bool*>(_v)) {
                _t->showSpecularTable = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->showCursorPixel != *reinterpret_cast< bool*>(_v)) {
                _t->showCursorPixel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
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

QT_INIT_METAOBJECT const QMetaObject DebugSubsurfaceScatteringConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DebugSubsurfaceScatteringConfig.data,
      qt_meta_data_DebugSubsurfaceScatteringConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DebugSubsurfaceScatteringConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DebugSubsurfaceScatteringConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DebugSubsurfaceScatteringConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DebugSubsurfaceScatteringConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DebugSubsurfaceScatteringConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
