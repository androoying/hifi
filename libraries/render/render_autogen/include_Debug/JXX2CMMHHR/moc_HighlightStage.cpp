/****************************************************************************
** Meta object code from reading C++ file 'HighlightStage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/render/HighlightStage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HighlightStage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__HighlightStageConfig_t {
    QByteArrayData data[12];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__HighlightStageConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__HighlightStageConfig_t qt_meta_stringdata_render__HighlightStageConfig = {
    {
QT_MOC_LITERAL(0, 0, 28), // "render::HighlightStageConfig"
QT_MOC_LITERAL(1, 29, 5), // "dirty"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "selectionName"
QT_MOC_LITERAL(4, 50, 15), // "isOutlineSmooth"
QT_MOC_LITERAL(5, 66, 6), // "colorR"
QT_MOC_LITERAL(6, 73, 6), // "colorG"
QT_MOC_LITERAL(7, 80, 6), // "colorB"
QT_MOC_LITERAL(8, 87, 12), // "outlineWidth"
QT_MOC_LITERAL(9, 100, 16), // "outlineIntensity"
QT_MOC_LITERAL(10, 117, 21), // "unoccludedFillOpacity"
QT_MOC_LITERAL(11, 139, 19) // "occludedFillOpacity"

    },
    "render::HighlightStageConfig\0dirty\0\0"
    "selectionName\0isOutlineSmooth\0colorR\0"
    "colorG\0colorB\0outlineWidth\0outlineIntensity\0"
    "unoccludedFillOpacity\0occludedFillOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__HighlightStageConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       9,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       4, QMetaType::Bool, 0x00495003,
       5, QMetaType::Float, 0x00495003,
       6, QMetaType::Float, 0x00495003,
       7, QMetaType::Float, 0x00495003,
       8, QMetaType::Float, 0x00495103,
       9, QMetaType::Float, 0x00495103,
      10, QMetaType::Float, 0x00495103,
      11, QMetaType::Float, 0x00495103,

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

       0        // eod
};

void render::HighlightStageConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HighlightStageConfig *_t = static_cast<HighlightStageConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (HighlightStageConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&HighlightStageConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        HighlightStageConfig *_t = static_cast<HighlightStageConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getSelectionName(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isOutlineSmooth(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getColorRed(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getColorGreen(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getColorBlue(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getOutlineWidth(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getOutlineIntensity(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getUnoccludedFillOpacity(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getOccludedFillOpacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        HighlightStageConfig *_t = static_cast<HighlightStageConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectionName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setOutlineSmooth(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setColorRed(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setColorGreen(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setColorBlue(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setOutlineWidth(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setOutlineIntensity(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setUnoccludedFillOpacity(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setOccludedFillOpacity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::HighlightStageConfig::staticMetaObject = {
    { &render::Job::Config::staticMetaObject, qt_meta_stringdata_render__HighlightStageConfig.data,
      qt_meta_data_render__HighlightStageConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::HighlightStageConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::HighlightStageConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__HighlightStageConfig.stringdata0))
        return static_cast<void*>(this);
    return render::Job::Config::qt_metacast(_clname);
}

int render::HighlightStageConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void render::HighlightStageConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
