/****************************************************************************
** Meta object code from reading C++ file 'AntialiasingEffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AntialiasingEffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AntialiasingEffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JitterSampleConfig_t {
    QByteArrayData data[15];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JitterSampleConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JitterSampleConfig_t qt_meta_stringdata_JitterSampleConfig = {
    {
QT_MOC_LITERAL(0, 0, 18), // "JitterSampleConfig"
QT_MOC_LITERAL(1, 19, 5), // "dirty"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "cycleStopPauseRun"
QT_MOC_LITERAL(4, 44, 4), // "prev"
QT_MOC_LITERAL(5, 49, 4), // "next"
QT_MOC_LITERAL(6, 54, 4), // "none"
QT_MOC_LITERAL(7, 59, 5), // "pause"
QT_MOC_LITERAL(8, 65, 4), // "play"
QT_MOC_LITERAL(9, 70, 8), // "getIndex"
QT_MOC_LITERAL(10, 79, 8), // "getState"
QT_MOC_LITERAL(11, 88, 5), // "scale"
QT_MOC_LITERAL(12, 94, 6), // "freeze"
QT_MOC_LITERAL(13, 101, 4), // "stop"
QT_MOC_LITERAL(14, 106, 5) // "index"

    },
    "JitterSampleConfig\0dirty\0\0cycleStopPauseRun\0"
    "prev\0next\0none\0pause\0play\0getIndex\0"
    "getState\0scale\0freeze\0stop\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JitterSampleConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      11, QMetaType::Float, 0x00495003,
      12, QMetaType::Bool, 0x00495003,
      13, QMetaType::Bool, 0x00495003,
      14, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void JitterSampleConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        JitterSampleConfig *_t = static_cast<JitterSampleConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: { int _r = _t->cycleStopPauseRun();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->prev();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { int _r = _t->next();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { int _r = _t->none();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->pause();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->play();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->getState();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JitterSampleConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&JitterSampleConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        JitterSampleConfig *_t = static_cast<JitterSampleConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->scale; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->freeze; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->stop; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        JitterSampleConfig *_t = static_cast<JitterSampleConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->scale != *reinterpret_cast< float*>(_v)) {
                _t->scale = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->freeze != *reinterpret_cast< bool*>(_v)) {
                _t->freeze = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->stop != *reinterpret_cast< bool*>(_v)) {
                _t->stop = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject JitterSampleConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_JitterSampleConfig.data,
      qt_meta_data_JitterSampleConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *JitterSampleConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JitterSampleConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JitterSampleConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int JitterSampleConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void JitterSampleConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AntialiasingConfig_t {
    QByteArrayData data[17];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AntialiasingConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AntialiasingConfig_t qt_meta_stringdata_AntialiasingConfig = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AntialiasingConfig"
QT_MOC_LITERAL(1, 19, 5), // "dirty"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "blend"
QT_MOC_LITERAL(4, 32, 7), // "sharpen"
QT_MOC_LITERAL(5, 40, 15), // "covarianceGamma"
QT_MOC_LITERAL(6, 56, 14), // "constrainColor"
QT_MOC_LITERAL(7, 71, 13), // "feedbackColor"
QT_MOC_LITERAL(8, 85, 5), // "debug"
QT_MOC_LITERAL(9, 91, 6), // "debugX"
QT_MOC_LITERAL(10, 98, 9), // "fxaaOnOff"
QT_MOC_LITERAL(11, 108, 26), // "debugShowVelocityThreshold"
QT_MOC_LITERAL(12, 135, 15), // "showCursorPixel"
QT_MOC_LITERAL(13, 151, 19), // "debugCursorTexcoord"
QT_MOC_LITERAL(14, 171, 9), // "glm::vec2"
QT_MOC_LITERAL(15, 181, 12), // "debugOrbZoom"
QT_MOC_LITERAL(16, 194, 19) // "showClosestFragment"

    },
    "AntialiasingConfig\0dirty\0\0blend\0sharpen\0"
    "covarianceGamma\0constrainColor\0"
    "feedbackColor\0debug\0debugX\0fxaaOnOff\0"
    "debugShowVelocityThreshold\0showCursorPixel\0"
    "debugCursorTexcoord\0glm::vec2\0"
    "debugOrbZoom\0showClosestFragment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AntialiasingConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      13,   20, // properties
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
       6, QMetaType::Bool, 0x00495003,
       7, QMetaType::Bool, 0x00495003,
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::Float, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::Float, 0x00495003,
      12, QMetaType::Bool, 0x00495003,
      13, 0x80000000 | 14, 0x0049500b,
      15, QMetaType::Float, 0x00495003,
      16, QMetaType::Bool, 0x00495003,

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

       0        // eod
};

void AntialiasingConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AntialiasingConfig *_t = static_cast<AntialiasingConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AntialiasingConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AntialiasingConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec2 >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AntialiasingConfig *_t = static_cast<AntialiasingConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->blend; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->sharpen; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->covarianceGamma; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->constrainColor; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->feedbackColor; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->debug; break;
        case 6: *reinterpret_cast< float*>(_v) = _t->debugX; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->debugFXAA(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->debugShowVelocityThreshold; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->showCursorPixel; break;
        case 10: *reinterpret_cast< glm::vec2*>(_v) = _t->debugCursorTexcoord; break;
        case 11: *reinterpret_cast< float*>(_v) = _t->debugOrbZoom; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->showClosestFragment; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AntialiasingConfig *_t = static_cast<AntialiasingConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->blend != *reinterpret_cast< float*>(_v)) {
                _t->blend = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->sharpen != *reinterpret_cast< float*>(_v)) {
                _t->sharpen = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->covarianceGamma != *reinterpret_cast< float*>(_v)) {
                _t->covarianceGamma = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->constrainColor != *reinterpret_cast< bool*>(_v)) {
                _t->constrainColor = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->feedbackColor != *reinterpret_cast< bool*>(_v)) {
                _t->feedbackColor = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->debug != *reinterpret_cast< bool*>(_v)) {
                _t->debug = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->debugX != *reinterpret_cast< float*>(_v)) {
                _t->debugX = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 7: _t->setDebugFXAA(*reinterpret_cast< bool*>(_v)); break;
        case 8:
            if (_t->debugShowVelocityThreshold != *reinterpret_cast< float*>(_v)) {
                _t->debugShowVelocityThreshold = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 9:
            if (_t->showCursorPixel != *reinterpret_cast< bool*>(_v)) {
                _t->showCursorPixel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 10:
            if (_t->debugCursorTexcoord != *reinterpret_cast< glm::vec2*>(_v)) {
                _t->debugCursorTexcoord = *reinterpret_cast< glm::vec2*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 11:
            if (_t->debugOrbZoom != *reinterpret_cast< float*>(_v)) {
                _t->debugOrbZoom = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 12:
            if (_t->showClosestFragment != *reinterpret_cast< bool*>(_v)) {
                _t->showClosestFragment = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AntialiasingConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_AntialiasingConfig.data,
      qt_meta_data_AntialiasingConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AntialiasingConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AntialiasingConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AntialiasingConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int AntialiasingConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AntialiasingConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
