/****************************************************************************
** Meta object code from reading C++ file 'AudioMixerClientData.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/audio/AudioMixerClientData.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioMixerClientData.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioMixerClientData_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioMixerClientData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioMixerClientData_t qt_meta_stringdata_AudioMixerClientData = {
    {
QT_MOC_LITERAL(0, 0, 20), // "AudioMixerClientData"
QT_MOC_LITERAL(1, 21, 22), // "injectorStreamFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "streamIdentifier"
QT_MOC_LITERAL(4, 62, 25), // "handleMismatchAudioFormat"
QT_MOC_LITERAL(5, 88, 17), // "SharedNodePointer"
QT_MOC_LITERAL(6, 106, 4), // "node"
QT_MOC_LITERAL(7, 111, 12), // "currentCodec"
QT_MOC_LITERAL(8, 124, 13), // "recievedCodec"
QT_MOC_LITERAL(9, 138, 21), // "sendSelectAudioFormat"
QT_MOC_LITERAL(10, 160, 17) // "selectedCodecName"

    },
    "AudioMixerClientData\0injectorStreamFinished\0"
    "\0streamIdentifier\0handleMismatchAudioFormat\0"
    "SharedNodePointer\0node\0currentCodec\0"
    "recievedCodec\0sendSelectAudioFormat\0"
    "selectedCodecName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioMixerClientData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    3,   32,    2, 0x0a /* Public */,
       9,    2,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,   10,

       0        // eod
};

void AudioMixerClientData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioMixerClientData *_t = static_cast<AudioMixerClientData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->injectorStreamFinished((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 1: _t->handleMismatchAudioFormat((*reinterpret_cast< SharedNodePointer(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->sendSelectAudioFormat((*reinterpret_cast< SharedNodePointer(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AudioMixerClientData::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AudioMixerClientData::injectorStreamFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioMixerClientData::staticMetaObject = {
    { &NodeData::staticMetaObject, qt_meta_stringdata_AudioMixerClientData.data,
      qt_meta_data_AudioMixerClientData,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioMixerClientData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioMixerClientData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioMixerClientData.stringdata0))
        return static_cast<void*>(this);
    return NodeData::qt_metacast(_clname);
}

int AudioMixerClientData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AudioMixerClientData::injectorStreamFinished(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
