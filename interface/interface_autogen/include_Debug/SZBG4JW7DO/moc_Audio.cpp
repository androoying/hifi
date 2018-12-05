/****************************************************************************
** Meta object code from reading C++ file 'Audio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/Audio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Audio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scripting__Audio_t {
    QByteArrayData data[39];
    char stringdata0[488];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scripting__Audio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scripting__Audio_t qt_meta_stringdata_scripting__Audio = {
    {
QT_MOC_LITERAL(0, 0, 16), // "scripting::Audio"
QT_MOC_LITERAL(1, 17, 3), // "nop"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "mutedChanged"
QT_MOC_LITERAL(4, 35, 7), // "isMuted"
QT_MOC_LITERAL(5, 43, 21), // "noiseReductionChanged"
QT_MOC_LITERAL(6, 65, 9), // "isEnabled"
QT_MOC_LITERAL(7, 75, 18), // "inputVolumeChanged"
QT_MOC_LITERAL(8, 94, 6), // "volume"
QT_MOC_LITERAL(9, 101, 17), // "inputLevelChanged"
QT_MOC_LITERAL(10, 119, 5), // "level"
QT_MOC_LITERAL(11, 125, 14), // "contextChanged"
QT_MOC_LITERAL(12, 140, 7), // "context"
QT_MOC_LITERAL(13, 148, 16), // "onContextChanged"
QT_MOC_LITERAL(14, 165, 8), // "setMuted"
QT_MOC_LITERAL(15, 174, 5), // "muted"
QT_MOC_LITERAL(16, 180, 20), // "enableNoiseReduction"
QT_MOC_LITERAL(17, 201, 6), // "enable"
QT_MOC_LITERAL(18, 208, 14), // "setInputVolume"
QT_MOC_LITERAL(19, 223, 22), // "onInputLoudnessChanged"
QT_MOC_LITERAL(20, 246, 8), // "loudness"
QT_MOC_LITERAL(21, 255, 14), // "setInputDevice"
QT_MOC_LITERAL(22, 270, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(23, 287, 6), // "device"
QT_MOC_LITERAL(24, 294, 5), // "isHMD"
QT_MOC_LITERAL(25, 300, 15), // "setOutputDevice"
QT_MOC_LITERAL(26, 316, 9), // "setReverb"
QT_MOC_LITERAL(27, 326, 16), // "setReverbOptions"
QT_MOC_LITERAL(28, 343, 25), // "const AudioEffectOptions*"
QT_MOC_LITERAL(29, 369, 7), // "options"
QT_MOC_LITERAL(30, 377, 14), // "startRecording"
QT_MOC_LITERAL(31, 392, 8), // "filename"
QT_MOC_LITERAL(32, 401, 13), // "stopRecording"
QT_MOC_LITERAL(33, 415, 12), // "getRecording"
QT_MOC_LITERAL(34, 428, 14), // "noiseReduction"
QT_MOC_LITERAL(35, 443, 11), // "inputVolume"
QT_MOC_LITERAL(36, 455, 10), // "inputLevel"
QT_MOC_LITERAL(37, 466, 7), // "devices"
QT_MOC_LITERAL(38, 474, 13) // "AudioDevices*"

    },
    "scripting::Audio\0nop\0\0mutedChanged\0"
    "isMuted\0noiseReductionChanged\0isEnabled\0"
    "inputVolumeChanged\0volume\0inputLevelChanged\0"
    "level\0contextChanged\0context\0"
    "onContextChanged\0setMuted\0muted\0"
    "enableNoiseReduction\0enable\0setInputVolume\0"
    "onInputLoudnessChanged\0loudness\0"
    "setInputDevice\0QAudioDeviceInfo\0device\0"
    "isHMD\0setOutputDevice\0setReverb\0"
    "setReverbOptions\0const AudioEffectOptions*\0"
    "options\0startRecording\0filename\0"
    "stopRecording\0getRecording\0noiseReduction\0"
    "inputVolume\0inputLevel\0devices\0"
    "AudioDevices*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scripting__Audio[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       6,  154, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       7,    1,  111,    2, 0x06 /* Public */,
       9,    1,  114,    2, 0x06 /* Public */,
      11,    1,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  120,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x08 /* Private */,
      16,    1,  124,    2, 0x08 /* Private */,
      18,    1,  127,    2, 0x08 /* Private */,
      19,    1,  130,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    2,  133,    2, 0x02 /* Public */,
      25,    2,  138,    2, 0x02 /* Public */,
      26,    1,  143,    2, 0x02 /* Public */,
      27,    1,  146,    2, 0x02 /* Public */,
      30,    1,  149,    2, 0x02 /* Public */,
      32,    0,  152,    2, 0x02 /* Public */,
      33,    0,  153,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,   10,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Float,    8,
    QMetaType::Void, QMetaType::Float,   20,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 22, QMetaType::Bool,   23,   24,
    QMetaType::Void, 0x80000000 | 22, QMetaType::Bool,   23,   24,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Bool, QMetaType::QString,   31,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495103,
      34, QMetaType::Bool, 0x00495003,
      35, QMetaType::Float, 0x00495103,
      36, QMetaType::Float, 0x00495001,
      12, QMetaType::QString, 0x00495001,
      37, 0x80000000 | 38, 0x00495009,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       0,

       0        // eod
};

void scripting::Audio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Audio *_t = static_cast<Audio *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nop(); break;
        case 1: _t->mutedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->noiseReductionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->inputVolumeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->inputLevelChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->contextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onContextChanged(); break;
        case 7: _t->setMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableNoiseReduction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setInputVolume((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->onInputLoudnessChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->setInputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->setOutputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 13: _t->setReverb((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setReverbOptions((*reinterpret_cast< const AudioEffectOptions*(*)>(_a[1]))); break;
        case 15: { bool _r = _t->startRecording((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->stopRecording(); break;
        case 17: { bool _r = _t->getRecording();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Audio::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::nop)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Audio::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::mutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Audio::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::noiseReductionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Audio::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::inputVolumeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Audio::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::inputLevelChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Audio::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Audio::contextChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDevices* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Audio *_t = static_cast<Audio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->noiseReductionEnabled(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getInputVolume(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getInputLevel(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getContext(); break;
        case 5: *reinterpret_cast< AudioDevices**>(_v) = _t->getDevices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Audio *_t = static_cast<Audio *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->enableNoiseReduction(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setInputVolume(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scripting::Audio::staticMetaObject = {
    { &AudioScriptingInterface::staticMetaObject, qt_meta_stringdata_scripting__Audio.data,
      qt_meta_data_scripting__Audio,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scripting::Audio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scripting::Audio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scripting__Audio.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ReadWriteLockable"))
        return static_cast< ReadWriteLockable*>(this);
    return AudioScriptingInterface::qt_metacast(_clname);
}

int scripting::Audio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioScriptingInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void scripting::Audio::nop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void scripting::Audio::mutedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void scripting::Audio::noiseReductionChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void scripting::Audio::inputVolumeChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void scripting::Audio::inputLevelChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void scripting::Audio::contextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
