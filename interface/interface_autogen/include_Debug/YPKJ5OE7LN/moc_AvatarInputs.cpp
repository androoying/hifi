/****************************************************************************
** Meta object code from reading C++ file 'AvatarInputs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/AvatarInputs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarInputs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarInputs_t {
    QByteArrayData data[16];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarInputs_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarInputs_t qt_meta_stringdata_AvatarInputs = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AvatarInputs"
QT_MOC_LITERAL(1, 13, 20), // "cameraEnabledChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "cameraMutedChanged"
QT_MOC_LITERAL(4, 54, 12), // "isHMDChanged"
QT_MOC_LITERAL(5, 67, 21), // "showAudioToolsChanged"
QT_MOC_LITERAL(6, 89, 4), // "show"
QT_MOC_LITERAL(7, 94, 17), // "setShowAudioTools"
QT_MOC_LITERAL(8, 112, 14), // "showAudioTools"
QT_MOC_LITERAL(9, 127, 20), // "loudnessToAudioLevel"
QT_MOC_LITERAL(10, 148, 8), // "loudness"
QT_MOC_LITERAL(11, 157, 12), // "resetSensors"
QT_MOC_LITERAL(12, 170, 16), // "toggleCameraMute"
QT_MOC_LITERAL(13, 187, 13), // "cameraEnabled"
QT_MOC_LITERAL(14, 201, 11), // "cameraMuted"
QT_MOC_LITERAL(15, 213, 5) // "isHMD"

    },
    "AvatarInputs\0cameraEnabledChanged\0\0"
    "cameraMutedChanged\0isHMDChanged\0"
    "showAudioToolsChanged\0show\0setShowAudioTools\0"
    "showAudioTools\0loudnessToAudioLevel\0"
    "loudness\0resetSensors\0toggleCameraMute\0"
    "cameraEnabled\0cameraMuted\0isHMD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarInputs[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   68, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   63,    2, 0x02 /* Public */,
      11,    0,   66,    2, 0x01 /* Protected */,
      12,    0,   67,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,

 // methods: parameters
    QMetaType::Float, QMetaType::Float,   10,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void AvatarInputs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarInputs *_t = static_cast<AvatarInputs *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraEnabledChanged(); break;
        case 1: _t->cameraMutedChanged(); break;
        case 2: _t->isHMDChanged(); break;
        case 3: _t->showAudioToolsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setShowAudioTools((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { float _r = _t->loudnessToAudioLevel((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->resetSensors(); break;
        case 7: _t->toggleCameraMute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarInputs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarInputs::cameraEnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarInputs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarInputs::cameraMutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AvatarInputs::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarInputs::isHMDChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AvatarInputs::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarInputs::showAudioToolsChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AvatarInputs *_t = static_cast<AvatarInputs *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->cameraEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->cameraMuted(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isHMD(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->showAudioTools(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AvatarInputs *_t = static_cast<AvatarInputs *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setShowAudioTools(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AvatarInputs::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AvatarInputs.data,
      qt_meta_data_AvatarInputs,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarInputs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarInputs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarInputs.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarInputs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void AvatarInputs::cameraEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AvatarInputs::cameraMutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AvatarInputs::isHMDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AvatarInputs::showAudioToolsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
