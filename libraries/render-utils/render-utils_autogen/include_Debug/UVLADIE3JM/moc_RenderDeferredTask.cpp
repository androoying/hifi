/****************************************************************************
** Meta object code from reading C++ file 'RenderDeferredTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RenderDeferredTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderDeferredTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawDeferredConfig_t {
    QByteArrayData data[6];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawDeferredConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawDeferredConfig_t qt_meta_stringdata_DrawDeferredConfig = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DrawDeferredConfig"
QT_MOC_LITERAL(1, 19, 8), // "newStats"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "dirty"
QT_MOC_LITERAL(4, 35, 8), // "numDrawn"
QT_MOC_LITERAL(5, 44, 8) // "maxDrawn"

    },
    "DrawDeferredConfig\0newStats\0\0dirty\0"
    "numDrawn\0maxDrawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawDeferredConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495001,
       5, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void DrawDeferredConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawDeferredConfig *_t = static_cast<DrawDeferredConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newStats(); break;
        case 1: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawDeferredConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawDeferredConfig::newStats)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawDeferredConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawDeferredConfig::dirty)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DrawDeferredConfig *_t = static_cast<DrawDeferredConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumDrawn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxDrawn; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DrawDeferredConfig *_t = static_cast<DrawDeferredConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->maxDrawn != *reinterpret_cast< int*>(_v)) {
                _t->maxDrawn = *reinterpret_cast< int*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject DrawDeferredConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DrawDeferredConfig.data,
      qt_meta_data_DrawDeferredConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DrawDeferredConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawDeferredConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawDeferredConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DrawDeferredConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Job::Config::qt_metacall(_c, _id, _a);
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
void DrawDeferredConfig::newStats()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DrawDeferredConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_DrawStateSortConfig_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawStateSortConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawStateSortConfig_t qt_meta_stringdata_DrawStateSortConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DrawStateSortConfig"
QT_MOC_LITERAL(1, 20, 15), // "numDrawnChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "dirty"
QT_MOC_LITERAL(4, 43, 8), // "numDrawn"
QT_MOC_LITERAL(5, 52, 8), // "maxDrawn"
QT_MOC_LITERAL(6, 61, 9) // "stateSort"

    },
    "DrawStateSortConfig\0numDrawnChanged\0"
    "\0dirty\0numDrawn\0maxDrawn\0stateSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawStateSortConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00495001,
       5, QMetaType::Int, 0x00495003,
       6, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       1,

       0        // eod
};

void DrawStateSortConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawStateSortConfig *_t = static_cast<DrawStateSortConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numDrawnChanged(); break;
        case 1: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawStateSortConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawStateSortConfig::numDrawnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawStateSortConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawStateSortConfig::dirty)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DrawStateSortConfig *_t = static_cast<DrawStateSortConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumDrawn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxDrawn; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->stateSort; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DrawStateSortConfig *_t = static_cast<DrawStateSortConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->maxDrawn != *reinterpret_cast< int*>(_v)) {
                _t->maxDrawn = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->stateSort != *reinterpret_cast< bool*>(_v)) {
                _t->stateSort = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject DrawStateSortConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DrawStateSortConfig.data,
      qt_meta_data_DrawStateSortConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DrawStateSortConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawStateSortConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawStateSortConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DrawStateSortConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Job::Config::qt_metacall(_c, _id, _a);
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
void DrawStateSortConfig::numDrawnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DrawStateSortConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_RenderDeferredTaskConfig_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderDeferredTaskConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderDeferredTaskConfig_t qt_meta_stringdata_RenderDeferredTaskConfig = {
    {
QT_MOC_LITERAL(0, 0, 24), // "RenderDeferredTaskConfig"
QT_MOC_LITERAL(1, 25, 5), // "dirty"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "fadeScale"
QT_MOC_LITERAL(4, 42, 12), // "fadeDuration"
QT_MOC_LITERAL(5, 55, 15), // "resolutionScale"
QT_MOC_LITERAL(6, 71, 9), // "debugFade"
QT_MOC_LITERAL(7, 81, 16) // "debugFadePercent"

    },
    "RenderDeferredTaskConfig\0dirty\0\0"
    "fadeScale\0fadeDuration\0resolutionScale\0"
    "debugFade\0debugFadePercent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderDeferredTaskConfig[] = {

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
       3, QMetaType::Float, 0x00495003,
       4, QMetaType::Float, 0x00495003,
       5, QMetaType::Float, 0x00495003,
       6, QMetaType::Bool, 0x00495003,
       7, QMetaType::Float, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void RenderDeferredTaskConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RenderDeferredTaskConfig *_t = static_cast<RenderDeferredTaskConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RenderDeferredTaskConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RenderDeferredTaskConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        RenderDeferredTaskConfig *_t = static_cast<RenderDeferredTaskConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->fadeScale; break;
        case 1: *reinterpret_cast< float*>(_v) = _t->fadeDuration; break;
        case 2: *reinterpret_cast< float*>(_v) = _t->resolutionScale; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->debugFade; break;
        case 4: *reinterpret_cast< float*>(_v) = _t->debugFadePercent; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        RenderDeferredTaskConfig *_t = static_cast<RenderDeferredTaskConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->fadeScale != *reinterpret_cast< float*>(_v)) {
                _t->fadeScale = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->fadeDuration != *reinterpret_cast< float*>(_v)) {
                _t->fadeDuration = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->resolutionScale != *reinterpret_cast< float*>(_v)) {
                _t->resolutionScale = *reinterpret_cast< float*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->debugFade != *reinterpret_cast< bool*>(_v)) {
                _t->debugFade = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->debugFadePercent != *reinterpret_cast< float*>(_v)) {
                _t->debugFadePercent = *reinterpret_cast< float*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject RenderDeferredTaskConfig::staticMetaObject = {
    { &render::Task::Config::staticMetaObject, qt_meta_stringdata_RenderDeferredTaskConfig.data,
      qt_meta_data_RenderDeferredTaskConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RenderDeferredTaskConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderDeferredTaskConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderDeferredTaskConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Task::Config::qt_metacast(_clname);
}

int RenderDeferredTaskConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = render::Task::Config::qt_metacall(_c, _id, _a);
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
void RenderDeferredTaskConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
