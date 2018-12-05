/****************************************************************************
** Meta object code from reading C++ file 'AudioEffectOptions.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AudioEffectOptions.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioEffectOptions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioEffectOptions_t {
    QByteArrayData data[22];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioEffectOptions_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioEffectOptions_t qt_meta_stringdata_AudioEffectOptions = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AudioEffectOptions"
QT_MOC_LITERAL(1, 19, 9), // "bandwidth"
QT_MOC_LITERAL(2, 29, 8), // "preDelay"
QT_MOC_LITERAL(3, 38, 9), // "lateDelay"
QT_MOC_LITERAL(4, 48, 10), // "reverbTime"
QT_MOC_LITERAL(5, 59, 14), // "earlyDiffusion"
QT_MOC_LITERAL(6, 74, 13), // "lateDiffusion"
QT_MOC_LITERAL(7, 88, 8), // "roomSize"
QT_MOC_LITERAL(8, 97, 7), // "density"
QT_MOC_LITERAL(9, 105, 8), // "bassMult"
QT_MOC_LITERAL(10, 114, 8), // "bassFreq"
QT_MOC_LITERAL(11, 123, 8), // "highGain"
QT_MOC_LITERAL(12, 132, 8), // "highFreq"
QT_MOC_LITERAL(13, 141, 7), // "modRate"
QT_MOC_LITERAL(14, 149, 8), // "modDepth"
QT_MOC_LITERAL(15, 158, 9), // "earlyGain"
QT_MOC_LITERAL(16, 168, 8), // "lateGain"
QT_MOC_LITERAL(17, 177, 12), // "earlyMixLeft"
QT_MOC_LITERAL(18, 190, 13), // "earlyMixRight"
QT_MOC_LITERAL(19, 204, 11), // "lateMixLeft"
QT_MOC_LITERAL(20, 216, 12), // "lateMixRight"
QT_MOC_LITERAL(21, 229, 9) // "wetDryMix"

    },
    "AudioEffectOptions\0bandwidth\0preDelay\0"
    "lateDelay\0reverbTime\0earlyDiffusion\0"
    "lateDiffusion\0roomSize\0density\0bassMult\0"
    "bassFreq\0highGain\0highFreq\0modRate\0"
    "modDepth\0earlyGain\0lateGain\0earlyMixLeft\0"
    "earlyMixRight\0lateMixLeft\0lateMixRight\0"
    "wetDryMix"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioEffectOptions[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      21,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Float, 0x00095103,
       2, QMetaType::Float, 0x00095103,
       3, QMetaType::Float, 0x00095103,
       4, QMetaType::Float, 0x00095103,
       5, QMetaType::Float, 0x00095103,
       6, QMetaType::Float, 0x00095103,
       7, QMetaType::Float, 0x00095103,
       8, QMetaType::Float, 0x00095103,
       9, QMetaType::Float, 0x00095103,
      10, QMetaType::Float, 0x00095103,
      11, QMetaType::Float, 0x00095103,
      12, QMetaType::Float, 0x00095103,
      13, QMetaType::Float, 0x00095103,
      14, QMetaType::Float, 0x00095103,
      15, QMetaType::Float, 0x00095103,
      16, QMetaType::Float, 0x00095103,
      17, QMetaType::Float, 0x00095103,
      18, QMetaType::Float, 0x00095103,
      19, QMetaType::Float, 0x00095103,
      20, QMetaType::Float, 0x00095103,
      21, QMetaType::Float, 0x00095103,

       0        // eod
};

void AudioEffectOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        AudioEffectOptions *_t = static_cast<AudioEffectOptions *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->getBandwidth(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->getPreDelay(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->getLateDelay(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->getReverbTime(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->getEarlyDiffusion(); break;
        case 5: *reinterpret_cast< float*>(_v) = _t->getLateDiffusion(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->getRoomSize(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->getDensity(); break;
        case 8: *reinterpret_cast< float*>(_v) = _t->getBassMult(); break;
        case 9: *reinterpret_cast< float*>(_v) = _t->getBassFreq(); break;
        case 10: *reinterpret_cast< float*>(_v) = _t->getHighGain(); break;
        case 11: *reinterpret_cast< float*>(_v) = _t->getHighFreq(); break;
        case 12: *reinterpret_cast< float*>(_v) = _t->getModRate(); break;
        case 13: *reinterpret_cast< float*>(_v) = _t->getModDepth(); break;
        case 14: *reinterpret_cast< float*>(_v) = _t->getEarlyGain(); break;
        case 15: *reinterpret_cast< float*>(_v) = _t->getLateGain(); break;
        case 16: *reinterpret_cast< float*>(_v) = _t->getEarlyMixLeft(); break;
        case 17: *reinterpret_cast< float*>(_v) = _t->getEarlyMixRight(); break;
        case 18: *reinterpret_cast< float*>(_v) = _t->getLateMixLeft(); break;
        case 19: *reinterpret_cast< float*>(_v) = _t->getLateMixRight(); break;
        case 20: *reinterpret_cast< float*>(_v) = _t->getWetDryMix(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AudioEffectOptions *_t = static_cast<AudioEffectOptions *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBandwidth(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setPreDelay(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setLateDelay(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setReverbTime(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setEarlyDiffusion(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setLateDiffusion(*reinterpret_cast< float*>(_v)); break;
        case 6: _t->setRoomSize(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setDensity(*reinterpret_cast< float*>(_v)); break;
        case 8: _t->setBassMult(*reinterpret_cast< float*>(_v)); break;
        case 9: _t->setBassFreq(*reinterpret_cast< float*>(_v)); break;
        case 10: _t->setHighGain(*reinterpret_cast< float*>(_v)); break;
        case 11: _t->setHighFreq(*reinterpret_cast< float*>(_v)); break;
        case 12: _t->setModRate(*reinterpret_cast< float*>(_v)); break;
        case 13: _t->setModDepth(*reinterpret_cast< float*>(_v)); break;
        case 14: _t->setEarlyGain(*reinterpret_cast< float*>(_v)); break;
        case 15: _t->setLateGain(*reinterpret_cast< float*>(_v)); break;
        case 16: _t->setEarlyMixLeft(*reinterpret_cast< float*>(_v)); break;
        case 17: _t->setEarlyMixRight(*reinterpret_cast< float*>(_v)); break;
        case 18: _t->setLateMixLeft(*reinterpret_cast< float*>(_v)); break;
        case 19: _t->setLateMixRight(*reinterpret_cast< float*>(_v)); break;
        case 20: _t->setWetDryMix(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AudioEffectOptions::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AudioEffectOptions.data,
      qt_meta_data_AudioEffectOptions,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioEffectOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioEffectOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioEffectOptions.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AudioEffectOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 21;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 21;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
