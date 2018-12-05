/****************************************************************************
** Meta object code from reading C++ file 'ViewTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/workload/ViewTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_workload__SetupViewsConfig_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_workload__SetupViewsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_workload__SetupViewsConfig_t qt_meta_stringdata_workload__SetupViewsConfig = {
    {
QT_MOC_LITERAL(0, 0, 26), // "workload::SetupViewsConfig"
QT_MOC_LITERAL(1, 27, 5), // "dirty"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "r1Front"
QT_MOC_LITERAL(4, 42, 6), // "r1Back"
QT_MOC_LITERAL(5, 49, 7), // "r2Front"
QT_MOC_LITERAL(6, 57, 6), // "r2Back"
QT_MOC_LITERAL(7, 64, 7), // "r3Front"
QT_MOC_LITERAL(8, 72, 6), // "r3Back"
QT_MOC_LITERAL(9, 79, 11), // "freezeViews"
QT_MOC_LITERAL(10, 91, 13), // "useAvatarView"
QT_MOC_LITERAL(11, 105, 19), // "forceViewHorizontal"
QT_MOC_LITERAL(12, 125, 23) // "simulateSecondaryCamera"

    },
    "workload::SetupViewsConfig\0dirty\0\0"
    "r1Front\0r1Back\0r2Front\0r2Back\0r3Front\0"
    "r3Back\0freezeViews\0useAvatarView\0"
    "forceViewHorizontal\0simulateSecondaryCamera"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_workload__SetupViewsConfig[] = {

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
       3, QMetaType::Float, 0x00495103,
       4, QMetaType::Float, 0x00495103,
       5, QMetaType::Float, 0x00495103,
       6, QMetaType::Float, 0x00495103,
       7, QMetaType::Float, 0x00495103,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,

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

void workload::SetupViewsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SetupViewsConfig *_t = static_cast<SetupViewsConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SetupViewsConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SetupViewsConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SetupViewsConfig *_t = static_cast<SetupViewsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getR1Front(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getR1Back(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getR2Front(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getR2Back(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getR3Front(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getR3Back(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getFreezeView(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->useAvatarView(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->forceViewHorizontal(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->simulateSecondaryCamera(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SetupViewsConfig *_t = static_cast<SetupViewsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setR1Front(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setR1Back(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setR2Front(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setR2Back(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setR3Front(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setR3Back(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setFreezeView(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setUseAvatarView(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setForceViewHorizontal(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSimulateSecondaryCamera(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject workload::SetupViewsConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_workload__SetupViewsConfig.data,
      qt_meta_data_workload__SetupViewsConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *workload::SetupViewsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workload::SetupViewsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_workload__SetupViewsConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int workload::SetupViewsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
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
void workload::SetupViewsConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_workload__ControlViewsConfig_t {
    QByteArrayData data[14];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_workload__ControlViewsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_workload__ControlViewsConfig_t qt_meta_stringdata_workload__ControlViewsConfig = {
    {
QT_MOC_LITERAL(0, 0, 28), // "workload::ControlViewsConfig"
QT_MOC_LITERAL(1, 29, 5), // "dirty"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "getTimings"
QT_MOC_LITERAL(4, 47, 18), // "regulateViewRanges"
QT_MOC_LITERAL(5, 66, 8), // "r1Timing"
QT_MOC_LITERAL(6, 75, 8), // "r2Timing"
QT_MOC_LITERAL(7, 84, 8), // "r3Timing"
QT_MOC_LITERAL(8, 93, 11), // "r1RangeBack"
QT_MOC_LITERAL(9, 105, 11), // "r2RangeBack"
QT_MOC_LITERAL(10, 117, 11), // "r3RangeBack"
QT_MOC_LITERAL(11, 129, 12), // "r1RangeFront"
QT_MOC_LITERAL(12, 142, 12), // "r2RangeFront"
QT_MOC_LITERAL(13, 155, 12) // "r3RangeFront"

    },
    "workload::ControlViewsConfig\0dirty\0\0"
    "getTimings\0regulateViewRanges\0r1Timing\0"
    "r2Timing\0r3Timing\0r1RangeBack\0r2RangeBack\0"
    "r3RangeBack\0r1RangeFront\0r2RangeFront\0"
    "r3RangeFront"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_workload__ControlViewsConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
      10,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QVariantList,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495103,
       5, QMetaType::Float, 0x00495001,
       6, QMetaType::Float, 0x00495001,
       7, QMetaType::Float, 0x00495001,
       8, QMetaType::Float, 0x00495001,
       9, QMetaType::Float, 0x00495001,
      10, QMetaType::Float, 0x00495001,
      11, QMetaType::Float, 0x00495001,
      12, QMetaType::Float, 0x00495001,
      13, QMetaType::Float, 0x00495001,

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

void workload::ControlViewsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ControlViewsConfig *_t = static_cast<ControlViewsConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: { QVariantList _r = _t->getTimings();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ControlViewsConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ControlViewsConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ControlViewsConfig *_t = static_cast<ControlViewsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->regulateViewRanges(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->r1Timing(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->r2Timing(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->r3Timing(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->r1RangeBack(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->r2RangeBack(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->r3RangeBack(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->r1RangeFront(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->r2RangeFront(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->r3RangeFront(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ControlViewsConfig *_t = static_cast<ControlViewsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegulateViewRanges(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject workload::ControlViewsConfig::staticMetaObject = {
    { &workload::Job::Config::staticMetaObject, qt_meta_stringdata_workload__ControlViewsConfig.data,
      qt_meta_data_workload__ControlViewsConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *workload::ControlViewsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *workload::ControlViewsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_workload__ControlViewsConfig.stringdata0))
        return static_cast<void*>(this);
    return workload::Job::Config::qt_metacast(_clname);
}

int workload::ControlViewsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = workload::Job::Config::qt_metacall(_c, _id, _a);
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
void workload::ControlViewsConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
