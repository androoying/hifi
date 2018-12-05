/****************************************************************************
** Meta object code from reading C++ file 'GameWorkloadRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/workload/GameWorkloadRenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameWorkloadRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameSpaceToRenderConfig_t {
    QByteArrayData data[6];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameSpaceToRenderConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameSpaceToRenderConfig_t qt_meta_stringdata_GameSpaceToRenderConfig = {
    {
QT_MOC_LITERAL(0, 0, 23), // "GameSpaceToRenderConfig"
QT_MOC_LITERAL(1, 24, 5), // "dirty"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "freezeViews"
QT_MOC_LITERAL(4, 43, 11), // "showProxies"
QT_MOC_LITERAL(5, 55, 9) // "showViews"

    },
    "GameSpaceToRenderConfig\0dirty\0\0"
    "freezeViews\0showProxies\0showViews"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameSpaceToRenderConfig[] = {

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

void GameSpaceToRenderConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameSpaceToRenderConfig *_t = static_cast<GameSpaceToRenderConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameSpaceToRenderConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameSpaceToRenderConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GameSpaceToRenderConfig *_t = static_cast<GameSpaceToRenderConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->freezeViews; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showProxies; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->showViews; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GameSpaceToRenderConfig *_t = static_cast<GameSpaceToRenderConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->freezeViews != *reinterpret_cast< bool*>(_v)) {
                _t->freezeViews = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->showProxies != *reinterpret_cast< bool*>(_v)) {
                _t->showProxies = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->showViews != *reinterpret_cast< bool*>(_v)) {
                _t->showViews = *reinterpret_cast< bool*>(_v);
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

QT_INIT_METAOBJECT const QMetaObject GameSpaceToRenderConfig::staticMetaObject = {
    { &workload::Job::Config::staticMetaObject, qt_meta_stringdata_GameSpaceToRenderConfig.data,
      qt_meta_data_GameSpaceToRenderConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GameSpaceToRenderConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameSpaceToRenderConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameSpaceToRenderConfig.stringdata0))
        return static_cast<void*>(this);
    return workload::Job::Config::qt_metacast(_clname);
}

int GameSpaceToRenderConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = workload::Job::Config::qt_metacall(_c, _id, _a);
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
void GameSpaceToRenderConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
