/****************************************************************************
** Meta object code from reading C++ file 'AudioScope.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/audio/AudioScope.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioScope.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioScope_t {
    QByteArrayData data[51];
    char stringdata0[763];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioScope_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioScope_t qt_meta_stringdata_AudioScope = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AudioScope"
QT_MOC_LITERAL(1, 11, 12), // "pauseChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "triggered"
QT_MOC_LITERAL(4, 35, 6), // "toggle"
QT_MOC_LITERAL(5, 42, 10), // "setVisible"
QT_MOC_LITERAL(6, 53, 7), // "visible"
QT_MOC_LITERAL(7, 61, 10), // "getVisible"
QT_MOC_LITERAL(8, 72, 11), // "togglePause"
QT_MOC_LITERAL(9, 84, 8), // "setPause"
QT_MOC_LITERAL(10, 93, 6), // "paused"
QT_MOC_LITERAL(11, 100, 8), // "getPause"
QT_MOC_LITERAL(12, 109, 13), // "toggleTrigger"
QT_MOC_LITERAL(13, 123, 14), // "getAutoTrigger"
QT_MOC_LITERAL(14, 138, 14), // "setAutoTrigger"
QT_MOC_LITERAL(15, 153, 11), // "autoTrigger"
QT_MOC_LITERAL(16, 165, 16), // "setTriggerValues"
QT_MOC_LITERAL(17, 182, 1), // "x"
QT_MOC_LITERAL(18, 184, 1), // "y"
QT_MOC_LITERAL(19, 186, 12), // "setTriggered"
QT_MOC_LITERAL(20, 199, 12), // "getTriggered"
QT_MOC_LITERAL(21, 212, 18), // "getFramesPerSecond"
QT_MOC_LITERAL(22, 231, 17), // "getFramesPerScope"
QT_MOC_LITERAL(23, 249, 26), // "selectAudioScopeFiveFrames"
QT_MOC_LITERAL(24, 276, 28), // "selectAudioScopeTwentyFrames"
QT_MOC_LITERAL(25, 305, 27), // "selectAudioScopeFiftyFrames"
QT_MOC_LITERAL(26, 333, 13), // "getScopeInput"
QT_MOC_LITERAL(27, 347, 12), // "QVector<int>"
QT_MOC_LITERAL(28, 360, 18), // "getScopeOutputLeft"
QT_MOC_LITERAL(29, 379, 19), // "getScopeOutputRight"
QT_MOC_LITERAL(30, 399, 15), // "getTriggerInput"
QT_MOC_LITERAL(31, 415, 20), // "getTriggerOutputLeft"
QT_MOC_LITERAL(32, 436, 21), // "getTriggerOutputRight"
QT_MOC_LITERAL(33, 458, 12), // "setLocalEcho"
QT_MOC_LITERAL(34, 471, 9), // "localEcho"
QT_MOC_LITERAL(35, 481, 13), // "setServerEcho"
QT_MOC_LITERAL(36, 495, 10), // "serverEcho"
QT_MOC_LITERAL(37, 506, 23), // "addStereoSilenceToScope"
QT_MOC_LITERAL(38, 530, 23), // "silentSamplesPerChannel"
QT_MOC_LITERAL(39, 554, 35), // "addLastFrameRepeatedWithFadeT..."
QT_MOC_LITERAL(40, 590, 17), // "samplesPerChannel"
QT_MOC_LITERAL(41, 608, 23), // "addStereoSamplesToScope"
QT_MOC_LITERAL(42, 632, 7), // "samples"
QT_MOC_LITERAL(43, 640, 15), // "addInputToScope"
QT_MOC_LITERAL(44, 656, 12), // "inputSamples"
QT_MOC_LITERAL(45, 669, 10), // "scopeInput"
QT_MOC_LITERAL(46, 680, 15), // "scopeOutputLeft"
QT_MOC_LITERAL(47, 696, 16), // "scopeOutputRight"
QT_MOC_LITERAL(48, 713, 12), // "triggerInput"
QT_MOC_LITERAL(49, 726, 17), // "triggerOutputLeft"
QT_MOC_LITERAL(50, 744, 18) // "triggerOutputRight"

    },
    "AudioScope\0pauseChanged\0\0triggered\0"
    "toggle\0setVisible\0visible\0getVisible\0"
    "togglePause\0setPause\0paused\0getPause\0"
    "toggleTrigger\0getAutoTrigger\0"
    "setAutoTrigger\0autoTrigger\0setTriggerValues\0"
    "x\0y\0setTriggered\0getTriggered\0"
    "getFramesPerSecond\0getFramesPerScope\0"
    "selectAudioScopeFiveFrames\0"
    "selectAudioScopeTwentyFrames\0"
    "selectAudioScopeFiftyFrames\0getScopeInput\0"
    "QVector<int>\0getScopeOutputLeft\0"
    "getScopeOutputRight\0getTriggerInput\0"
    "getTriggerOutputLeft\0getTriggerOutputRight\0"
    "setLocalEcho\0localEcho\0setServerEcho\0"
    "serverEcho\0addStereoSilenceToScope\0"
    "silentSamplesPerChannel\0"
    "addLastFrameRepeatedWithFadeToScope\0"
    "samplesPerChannel\0addStereoSamplesToScope\0"
    "samples\0addInputToScope\0inputSamples\0"
    "scopeInput\0scopeOutputLeft\0scopeOutputRight\0"
    "triggerInput\0triggerOutputLeft\0"
    "triggerOutputRight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioScope[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       6,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    0,  170,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  171,    2, 0x0a /* Public */,
       5,    1,  172,    2, 0x0a /* Public */,
       7,    0,  175,    2, 0x0a /* Public */,
       8,    0,  176,    2, 0x0a /* Public */,
       9,    1,  177,    2, 0x0a /* Public */,
      11,    0,  180,    2, 0x0a /* Public */,
      12,    0,  181,    2, 0x0a /* Public */,
      13,    0,  182,    2, 0x0a /* Public */,
      14,    1,  183,    2, 0x0a /* Public */,
      16,    2,  186,    2, 0x0a /* Public */,
      19,    1,  191,    2, 0x0a /* Public */,
      20,    0,  194,    2, 0x0a /* Public */,
      21,    0,  195,    2, 0x0a /* Public */,
      22,    0,  196,    2, 0x0a /* Public */,
      23,    0,  197,    2, 0x0a /* Public */,
      24,    0,  198,    2, 0x0a /* Public */,
      25,    0,  199,    2, 0x0a /* Public */,
      26,    0,  200,    2, 0x0a /* Public */,
      28,    0,  201,    2, 0x0a /* Public */,
      29,    0,  202,    2, 0x0a /* Public */,
      30,    0,  203,    2, 0x0a /* Public */,
      31,    0,  204,    2, 0x0a /* Public */,
      32,    0,  205,    2, 0x0a /* Public */,
      33,    1,  206,    2, 0x0a /* Public */,
      35,    1,  209,    2, 0x0a /* Public */,
      37,    1,  212,    2, 0x08 /* Private */,
      39,    1,  215,    2, 0x08 /* Private */,
      41,    1,  218,    2, 0x08 /* Private */,
      43,    1,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Bool,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    0x80000000 | 27,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void, QMetaType::Int,   40,
    QMetaType::Void, QMetaType::QByteArray,   42,
    QMetaType::Void, QMetaType::QByteArray,   44,

 // properties: name, type, flags
      45, 0x80000000 | 27, 0x00095009,
      46, 0x80000000 | 27, 0x00095009,
      47, 0x80000000 | 27, 0x00095009,
      48, 0x80000000 | 27, 0x00095009,
      49, 0x80000000 | 27, 0x00095009,
      50, 0x80000000 | 27, 0x00095009,

       0        // eod
};

void AudioScope::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioScope *_t = static_cast<AudioScope *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pauseChanged(); break;
        case 1: _t->triggered(); break;
        case 2: _t->toggle(); break;
        case 3: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { bool _r = _t->getVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->togglePause(); break;
        case 6: _t->setPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->getPause();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->toggleTrigger(); break;
        case 9: { bool _r = _t->getAutoTrigger();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setAutoTrigger((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setTriggerValues((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->setTriggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: { bool _r = _t->getTriggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { float _r = _t->getFramesPerSecond();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->getFramesPerScope();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->selectAudioScopeFiveFrames(); break;
        case 17: _t->selectAudioScopeTwentyFrames(); break;
        case 18: _t->selectAudioScopeFiftyFrames(); break;
        case 19: { QVector<int> _r = _t->getScopeInput();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 20: { QVector<int> _r = _t->getScopeOutputLeft();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 21: { QVector<int> _r = _t->getScopeOutputRight();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 22: { QVector<int> _r = _t->getTriggerInput();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 23: { QVector<int> _r = _t->getTriggerOutputLeft();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 24: { QVector<int> _r = _t->getTriggerOutputRight();
            if (_a[0]) *reinterpret_cast< QVector<int>*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->setLocalEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->setServerEcho((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->addStereoSilenceToScope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->addLastFrameRepeatedWithFadeToScope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->addStereoSamplesToScope((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 30: _t->addInputToScope((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioScope::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScope::pauseChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioScope::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioScope::triggered)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AudioScope *_t = static_cast<AudioScope *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVector<int>*>(_v) = _t->getScopeInput(); break;
        case 1: *reinterpret_cast< QVector<int>*>(_v) = _t->getScopeOutputLeft(); break;
        case 2: *reinterpret_cast< QVector<int>*>(_v) = _t->getScopeOutputRight(); break;
        case 3: *reinterpret_cast< QVector<int>*>(_v) = _t->getTriggerInput(); break;
        case 4: *reinterpret_cast< QVector<int>*>(_v) = _t->getTriggerOutputLeft(); break;
        case 5: *reinterpret_cast< QVector<int>*>(_v) = _t->getTriggerOutputRight(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AudioScope::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioScope.data,
      qt_meta_data_AudioScope,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioScope::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioScope::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioScope.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioScope::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
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
void AudioScope::pauseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AudioScope::triggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
