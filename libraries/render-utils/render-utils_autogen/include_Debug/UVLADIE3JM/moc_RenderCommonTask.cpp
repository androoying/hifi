/****************************************************************************
** Meta object code from reading C++ file 'RenderCommonTask.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RenderCommonTask.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderCommonTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DrawOverlay3DConfig_t {
    QByteArrayData data[6];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DrawOverlay3DConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DrawOverlay3DConfig_t qt_meta_stringdata_DrawOverlay3DConfig = {
    {
QT_MOC_LITERAL(0, 0, 19), // "DrawOverlay3DConfig"
QT_MOC_LITERAL(1, 20, 15), // "numDrawnChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "dirty"
QT_MOC_LITERAL(4, 43, 8), // "numDrawn"
QT_MOC_LITERAL(5, 52, 8) // "maxDrawn"

    },
    "DrawOverlay3DConfig\0numDrawnChanged\0"
    "\0dirty\0numDrawn\0maxDrawn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DrawOverlay3DConfig[] = {

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

void DrawOverlay3DConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DrawOverlay3DConfig *_t = static_cast<DrawOverlay3DConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numDrawnChanged(); break;
        case 1: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawOverlay3DConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOverlay3DConfig::numDrawnChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawOverlay3DConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DrawOverlay3DConfig::dirty)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DrawOverlay3DConfig *_t = static_cast<DrawOverlay3DConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNumDrawn(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maxDrawn; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        DrawOverlay3DConfig *_t = static_cast<DrawOverlay3DConfig *>(_o);
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

QT_INIT_METAOBJECT const QMetaObject DrawOverlay3DConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_DrawOverlay3DConfig.data,
      qt_meta_data_DrawOverlay3DConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DrawOverlay3DConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawOverlay3DConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DrawOverlay3DConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int DrawOverlay3DConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DrawOverlay3DConfig::numDrawnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DrawOverlay3DConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
