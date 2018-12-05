/****************************************************************************
** Meta object code from reading C++ file 'AudioScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AudioScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioScriptingInterface_t {
    QByteArrayData data[30];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioScriptingInterface_t qt_meta_stringdata_AudioScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AudioScriptingInterface"
QT_MOC_LITERAL(1, 24, 12), // "mutedByMixer"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 16), // "environmentMuted"
QT_MOC_LITERAL(4, 55, 19), // "receivedFirstPacket"
QT_MOC_LITERAL(5, 75, 12), // "disconnected"
QT_MOC_LITERAL(6, 88, 15), // "noiseGateOpened"
QT_MOC_LITERAL(7, 104, 15), // "noiseGateClosed"
QT_MOC_LITERAL(8, 120, 13), // "inputReceived"
QT_MOC_LITERAL(9, 134, 12), // "inputSamples"
QT_MOC_LITERAL(10, 147, 20), // "isStereoInputChanged"
QT_MOC_LITERAL(11, 168, 8), // "isStereo"
QT_MOC_LITERAL(12, 177, 13), // "addToSoloList"
QT_MOC_LITERAL(13, 191, 14), // "QVector<QUuid>"
QT_MOC_LITERAL(14, 206, 8), // "uuidList"
QT_MOC_LITERAL(15, 215, 18), // "removeFromSoloList"
QT_MOC_LITERAL(16, 234, 13), // "resetSoloList"
QT_MOC_LITERAL(17, 248, 9), // "playSound"
QT_MOC_LITERAL(18, 258, 20), // "ScriptAudioInjector*"
QT_MOC_LITERAL(19, 279, 18), // "SharedSoundPointer"
QT_MOC_LITERAL(20, 298, 5), // "sound"
QT_MOC_LITERAL(21, 304, 20), // "AudioInjectorOptions"
QT_MOC_LITERAL(22, 325, 15), // "injectorOptions"
QT_MOC_LITERAL(23, 341, 15), // "playSystemSound"
QT_MOC_LITERAL(24, 357, 8), // "position"
QT_MOC_LITERAL(25, 366, 14), // "setStereoInput"
QT_MOC_LITERAL(26, 381, 6), // "stereo"
QT_MOC_LITERAL(27, 388, 13), // "isStereoInput"
QT_MOC_LITERAL(28, 402, 9), // "isSoloing"
QT_MOC_LITERAL(29, 412, 8) // "soloList"

    },
    "AudioScriptingInterface\0mutedByMixer\0"
    "\0environmentMuted\0receivedFirstPacket\0"
    "disconnected\0noiseGateOpened\0"
    "noiseGateClosed\0inputReceived\0"
    "inputSamples\0isStereoInputChanged\0"
    "isStereo\0addToSoloList\0QVector<QUuid>\0"
    "uuidList\0removeFromSoloList\0resetSoloList\0"
    "playSound\0ScriptAudioInjector*\0"
    "SharedSoundPointer\0sound\0AudioInjectorOptions\0"
    "injectorOptions\0playSystemSound\0"
    "position\0setStereoInput\0stereo\0"
    "isStereoInput\0isSoloing\0soloList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       3,  130, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    1,  100,    2, 0x06 /* Public */,
      10,    1,  103,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      12,    1,  106,    2, 0x02 /* Public */,
      15,    1,  109,    2, 0x02 /* Public */,
      16,    0,  112,    2, 0x02 /* Public */,
      17,    2,  113,    2, 0x01 /* Protected */,
      17,    1,  118,    2, 0x21 /* Protected | MethodCloned */,
      23,    2,  121,    2, 0x01 /* Protected */,
      25,    1,  126,    2, 0x01 /* Protected */,
      27,    0,  129,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    0x80000000 | 18, 0x80000000 | 19, 0x80000000 | 21,   20,   22,
    0x80000000 | 18, 0x80000000 | 19,   20,
    0x80000000 | 18, 0x80000000 | 19, QMetaType::QVector3D,   20,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Bool,

 // properties: name, type, flags
      27, QMetaType::Bool, 0x00495003,
      28, QMetaType::Bool, 0x00095001,
      29, 0x80000000 | 13, 0x00095009,

 // properties: notify_signal_id
       7,
       0,
       0,

       0        // eod
};

void AudioScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioScriptingInterface *_t = static_cast<AudioScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mutedByMixer(); break;
        case 1: _t->environmentMuted(); break;
        case 2: _t->receivedFirstPacket(); break;
        case 3: _t->disconnected(); break;
        case 4: _t->noiseGateOpened(); break;
        case 5: _t->noiseGateClosed(); break;
        case 6: _t->inputReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->isStereoInputChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->addToSoloList((*reinterpret_cast< QVector<QUuid>(*)>(_a[1]))); break;
        case 9: _t->removeFromSoloList((*reinterpret_cast< QVector<QUuid>(*)>(_a[1]))); break;
        case 10: _t->resetSoloList(); break;
        case 11: { ScriptAudioInjector* _r = _t->playSound((*reinterpret_cast< SharedSoundPointer(*)>(_a[1])),(*reinterpret_cast< const AudioInjectorOptions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ScriptAudioInjector**>(_a[0]) = std::move(_r); }  break;
        case 12: { ScriptAudioInjector* _r = _t->playSound((*reinterpret_cast< SharedSoundPointer(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ScriptAudioInjector**>(_a[0]) = std::move(_r); }  break;
        case 13: { ScriptAudioInjector* _r = _t->playSystemSound((*reinterpret_cast< SharedSoundPointer(*)>(_a[1])),(*reinterpret_cast< const QVector3D(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ScriptAudioInjector**>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setStereoInput((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: { bool _r = _t->isStereoInput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QUuid> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QUuid> >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInjectorOptions >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedSoundPointer >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedSoundPointer >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedSoundPointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::mutedByMixer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::environmentMuted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::receivedFirstPacket)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::disconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::noiseGateOpened)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::noiseGateClosed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::inputReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AudioScriptingInterface::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScriptingInterface::isStereoInputChanged)) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QUuid> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AudioScriptingInterface *_t = static_cast<AudioScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isStereoInput(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isSoloing(); break;
        case 2: *reinterpret_cast< QVector<QUuid>*>(_v) = _t->getSoloList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AudioScriptingInterface *_t = static_cast<AudioScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStereoInput(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AudioScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioScriptingInterface.data,
      qt_meta_data_AudioScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
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
void AudioScriptingInterface::mutedByMixer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioScriptingInterface::environmentMuted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AudioScriptingInterface::receivedFirstPacket()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AudioScriptingInterface::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AudioScriptingInterface::noiseGateOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void AudioScriptingInterface::noiseGateClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AudioScriptingInterface::inputReceived(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AudioScriptingInterface::isStereoInputChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
