/****************************************************************************
** Meta object code from reading C++ file 'ScriptAudioInjector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ScriptAudioInjector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScriptAudioInjector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptAudioInjector_t {
    QByteArrayData data[14];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptAudioInjector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptAudioInjector_t qt_meta_stringdata_ScriptAudioInjector = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ScriptAudioInjector"
QT_MOC_LITERAL(1, 20, 8), // "finished"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "restart"
QT_MOC_LITERAL(4, 38, 4), // "stop"
QT_MOC_LITERAL(5, 43, 10), // "getOptions"
QT_MOC_LITERAL(6, 54, 10), // "setOptions"
QT_MOC_LITERAL(7, 65, 20), // "AudioInjectorOptions"
QT_MOC_LITERAL(8, 86, 7), // "options"
QT_MOC_LITERAL(9, 94, 11), // "getLoudness"
QT_MOC_LITERAL(10, 106, 9), // "isPlaying"
QT_MOC_LITERAL(11, 116, 23), // "stopInjectorImmediately"
QT_MOC_LITERAL(12, 140, 7), // "playing"
QT_MOC_LITERAL(13, 148, 8) // "loudness"

    },
    "ScriptAudioInjector\0finished\0\0restart\0"
    "stop\0getOptions\0setOptions\0"
    "AudioInjectorOptions\0options\0getLoudness\0"
    "isPlaying\0stopInjectorImmediately\0"
    "playing\0loudness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptAudioInjector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,
      10,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Float,
    QMetaType::Bool,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::Bool, 0x00095001,
      13, QMetaType::Float, 0x00095001,
       8, 0x80000000 | 7, 0x0009510b,

       0        // eod
};

void ScriptAudioInjector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptAudioInjector *_t = static_cast<ScriptAudioInjector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->restart(); break;
        case 2: _t->stop(); break;
        case 3: _t->getOptions(); break;
        case 4: _t->setOptions((*reinterpret_cast< const AudioInjectorOptions(*)>(_a[1]))); break;
        case 5: { float _r = _t->getLoudness();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->isPlaying();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->stopInjectorImmediately(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInjectorOptions >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptAudioInjector::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptAudioInjector::finished)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInjectorOptions >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptAudioInjector *_t = static_cast<ScriptAudioInjector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isPlaying(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getLoudness(); break;
        case 2: *reinterpret_cast< AudioInjectorOptions*>(_v) = _t->getOptions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ScriptAudioInjector *_t = static_cast<ScriptAudioInjector *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setOptions(*reinterpret_cast< AudioInjectorOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptAudioInjector::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScriptAudioInjector.data,
      qt_meta_data_ScriptAudioInjector,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptAudioInjector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptAudioInjector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptAudioInjector.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScriptAudioInjector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void ScriptAudioInjector::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
