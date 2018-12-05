/****************************************************************************
** Meta object code from reading C++ file 'AudioDevices.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/AudioDevices.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioDevices.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_scripting__AudioDeviceList_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scripting__AudioDeviceList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scripting__AudioDeviceList_t qt_meta_stringdata_scripting__AudioDeviceList = {
    {
QT_MOC_LITERAL(0, 0, 26), // "scripting::AudioDeviceList"
QT_MOC_LITERAL(1, 27, 13), // "deviceChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(4, 59, 6), // "device"
QT_MOC_LITERAL(5, 66, 21), // "selectedDevicePlugged"
QT_MOC_LITERAL(6, 88, 5), // "isHMD"
QT_MOC_LITERAL(7, 94, 15), // "onDeviceChanged"
QT_MOC_LITERAL(8, 110, 16), // "onDevicesChanged"
QT_MOC_LITERAL(9, 127, 23), // "QList<QAudioDeviceInfo>"
QT_MOC_LITERAL(10, 151, 7) // "devices"

    },
    "scripting::AudioDeviceList\0deviceChanged\0"
    "\0QAudioDeviceInfo\0device\0selectedDevicePlugged\0"
    "isHMD\0onDeviceChanged\0onDevicesChanged\0"
    "QList<QAudioDeviceInfo>\0devices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scripting__AudioDeviceList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   42,    2, 0x09 /* Protected */,
       8,    1,   47,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void scripting::AudioDeviceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioDeviceList *_t = static_cast<AudioDeviceList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceChanged((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1]))); break;
        case 1: _t->selectedDevicePlugged((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->onDeviceChanged((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onDevicesChanged((*reinterpret_cast< const QList<QAudioDeviceInfo>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAudioDeviceInfo> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDeviceList::*)(const QAudioDeviceInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDeviceList::deviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AudioDeviceList::*)(const QAudioDeviceInfo & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDeviceList::selectedDevicePlugged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject scripting::AudioDeviceList::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_scripting__AudioDeviceList.data,
      qt_meta_data_scripting__AudioDeviceList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scripting::AudioDeviceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scripting::AudioDeviceList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scripting__AudioDeviceList.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int scripting::AudioDeviceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void scripting::AudioDeviceList::deviceChanged(const QAudioDeviceInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void scripting::AudioDeviceList::selectedDevicePlugged(const QAudioDeviceInfo & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_scripting__AudioInputDeviceList_t {
    QByteArrayData data[9];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scripting__AudioInputDeviceList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scripting__AudioInputDeviceList_t qt_meta_stringdata_scripting__AudioInputDeviceList = {
    {
QT_MOC_LITERAL(0, 0, 31), // "scripting::AudioInputDeviceList"
QT_MOC_LITERAL(1, 32, 24), // "peakValuesEnabledChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 7), // "enabled"
QT_MOC_LITERAL(4, 66, 22), // "onPeakValueListChanged"
QT_MOC_LITERAL(5, 89, 12), // "QList<float>"
QT_MOC_LITERAL(6, 102, 13), // "peakValueList"
QT_MOC_LITERAL(7, 116, 19), // "peakValuesAvailable"
QT_MOC_LITERAL(8, 136, 17) // "peakValuesEnabled"

    },
    "scripting::AudioInputDeviceList\0"
    "peakValuesEnabledChanged\0\0enabled\0"
    "onPeakValueListChanged\0QList<float>\0"
    "peakValueList\0peakValuesAvailable\0"
    "peakValuesEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scripting__AudioInputDeviceList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095001,
       8, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void scripting::AudioInputDeviceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioInputDeviceList *_t = static_cast<AudioInputDeviceList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->peakValuesEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onPeakValueListChanged((*reinterpret_cast< const QList<float>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioInputDeviceList::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioInputDeviceList::peakValuesEnabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AudioInputDeviceList *_t = static_cast<AudioInputDeviceList *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->peakValuesAvailable(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->peakValuesEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AudioInputDeviceList *_t = static_cast<AudioInputDeviceList *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPeakValuesEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scripting::AudioInputDeviceList::staticMetaObject = {
    { &AudioDeviceList::staticMetaObject, qt_meta_stringdata_scripting__AudioInputDeviceList.data,
      qt_meta_data_scripting__AudioInputDeviceList,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scripting::AudioInputDeviceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scripting::AudioInputDeviceList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scripting__AudioInputDeviceList.stringdata0))
        return static_cast<void*>(this);
    return AudioDeviceList::qt_metacast(_clname);
}

int scripting::AudioInputDeviceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AudioDeviceList::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
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
void scripting::AudioInputDeviceList::peakValuesEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_scripting__AudioDevices_t {
    QByteArrayData data[22];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_scripting__AudioDevices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_scripting__AudioDevices_t qt_meta_stringdata_scripting__AudioDevices = {
    {
QT_MOC_LITERAL(0, 0, 23), // "scripting::AudioDevices"
QT_MOC_LITERAL(1, 24, 3), // "nop"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 17), // "chooseInputDevice"
QT_MOC_LITERAL(4, 47, 16), // "QAudioDeviceInfo"
QT_MOC_LITERAL(5, 64, 6), // "device"
QT_MOC_LITERAL(6, 71, 5), // "isHMD"
QT_MOC_LITERAL(7, 77, 18), // "chooseOutputDevice"
QT_MOC_LITERAL(8, 96, 16), // "onContextChanged"
QT_MOC_LITERAL(9, 113, 7), // "context"
QT_MOC_LITERAL(10, 121, 16), // "onDeviceSelected"
QT_MOC_LITERAL(11, 138, 12), // "QAudio::Mode"
QT_MOC_LITERAL(12, 151, 4), // "mode"
QT_MOC_LITERAL(13, 156, 14), // "previousDevice"
QT_MOC_LITERAL(14, 171, 15), // "onDeviceChanged"
QT_MOC_LITERAL(15, 187, 16), // "onDevicesChanged"
QT_MOC_LITERAL(16, 204, 23), // "QList<QAudioDeviceInfo>"
QT_MOC_LITERAL(17, 228, 7), // "devices"
QT_MOC_LITERAL(18, 236, 5), // "input"
QT_MOC_LITERAL(19, 242, 21), // "AudioInputDeviceList*"
QT_MOC_LITERAL(20, 264, 6), // "output"
QT_MOC_LITERAL(21, 271, 16) // "AudioDeviceList*"

    },
    "scripting::AudioDevices\0nop\0\0"
    "chooseInputDevice\0QAudioDeviceInfo\0"
    "device\0isHMD\0chooseOutputDevice\0"
    "onContextChanged\0context\0onDeviceSelected\0"
    "QAudio::Mode\0mode\0previousDevice\0"
    "onDeviceChanged\0onDevicesChanged\0"
    "QList<QAudioDeviceInfo>\0devices\0input\0"
    "AudioInputDeviceList*\0output\0"
    "AudioDeviceList*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_scripting__AudioDevices[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   50,    2, 0x08 /* Private */,
       7,    2,   55,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    4,   63,    2, 0x08 /* Private */,
      14,    2,   72,    2, 0x08 /* Private */,
      15,    2,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 4, 0x80000000 | 4, QMetaType::Bool,   12,    5,   13,    6,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 4,   12,    5,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 16,   12,   17,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x00495009,
      20, 0x80000000 | 21, 0x00495009,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void scripting::AudioDevices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioDevices *_t = static_cast<AudioDevices *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nop(); break;
        case 1: _t->chooseInputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->chooseOutputDevice((*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->onContextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onDeviceSelected((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[2])),(*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->onDeviceChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QAudioDeviceInfo(*)>(_a[2]))); break;
        case 6: _t->onDevicesChanged((*reinterpret_cast< QAudio::Mode(*)>(_a[1])),(*reinterpret_cast< const QList<QAudioDeviceInfo>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudioDeviceInfo >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAudio::Mode >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QAudioDeviceInfo> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioDevices::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioDevices::nop)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioDeviceList* >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AudioInputDeviceList* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AudioDevices *_t = static_cast<AudioDevices *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AudioInputDeviceList**>(_v) = _t->getInputList(); break;
        case 1: *reinterpret_cast< AudioDeviceList**>(_v) = _t->getOutputList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject scripting::AudioDevices::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_scripting__AudioDevices.data,
      qt_meta_data_scripting__AudioDevices,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *scripting::AudioDevices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *scripting::AudioDevices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_scripting__AudioDevices.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int scripting::AudioDevices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void scripting::AudioDevices::nop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
