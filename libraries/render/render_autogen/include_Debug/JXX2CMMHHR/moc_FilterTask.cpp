/****************************************************************************
** Meta object code from reading C++ file 'FilterTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/render/FilterTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__MultiFilterItemsConfig_t {
    QByteArrayData data[2];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__MultiFilterItemsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__MultiFilterItemsConfig_t qt_meta_stringdata_render__MultiFilterItemsConfig = {
    {
QT_MOC_LITERAL(0, 0, 30), // "render::MultiFilterItemsConfig"
QT_MOC_LITERAL(1, 31, 8) // "numItems"

    },
    "render::MultiFilterItemsConfig\0numItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__MultiFilterItemsConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095001,

       0        // eod
};

void render::MultiFilterItemsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        MultiFilterItemsConfig *_t = static_cast<MultiFilterItemsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumItems(); break;
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

QT_INIT_METAOBJECT const QMetaObject render::MultiFilterItemsConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_render__MultiFilterItemsConfig.data,
      qt_meta_data_render__MultiFilterItemsConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::MultiFilterItemsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::MultiFilterItemsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__MultiFilterItemsConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int render::MultiFilterItemsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_render__SliceItemsConfig_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__SliceItemsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__SliceItemsConfig_t qt_meta_stringdata_render__SliceItemsConfig = {
    {
QT_MOC_LITERAL(0, 0, 24), // "render::SliceItemsConfig"
QT_MOC_LITERAL(1, 25, 5), // "dirty"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "rangeOffset"
QT_MOC_LITERAL(4, 44, 11), // "rangeLength"
QT_MOC_LITERAL(5, 56, 8) // "numItems"

    },
    "render::SliceItemsConfig\0dirty\0\0"
    "rangeOffset\0rangeLength\0numItems"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__SliceItemsConfig[] = {

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
       3, QMetaType::Int, 0x00095003,
       4, QMetaType::Int, 0x00095003,
       5, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void render::SliceItemsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SliceItemsConfig *_t = static_cast<SliceItemsConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SliceItemsConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SliceItemsConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SliceItemsConfig *_t = static_cast<SliceItemsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rangeOffset; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->rangeLength; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getNumItems(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SliceItemsConfig *_t = static_cast<SliceItemsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->rangeOffset != *reinterpret_cast< int*>(_v)) {
                _t->rangeOffset = *reinterpret_cast< int*>(_v);
            }
            break;
        case 1:
            if (_t->rangeLength != *reinterpret_cast< int*>(_v)) {
                _t->rangeLength = *reinterpret_cast< int*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::SliceItemsConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_render__SliceItemsConfig.data,
      qt_meta_data_render__SliceItemsConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::SliceItemsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::SliceItemsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__SliceItemsConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int render::SliceItemsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void render::SliceItemsConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
