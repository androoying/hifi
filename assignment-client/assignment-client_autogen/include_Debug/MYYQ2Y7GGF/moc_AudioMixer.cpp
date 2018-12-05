/****************************************************************************
** Meta object code from reading C++ file 'AudioMixer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/audio/AudioMixer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AudioMixer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AudioMixer_t {
    QByteArrayData data[18];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AudioMixer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AudioMixer_t qt_meta_stringdata_AudioMixer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AudioMixer"
QT_MOC_LITERAL(1, 11, 3), // "run"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 15), // "sendStatsPacket"
QT_MOC_LITERAL(4, 32, 27), // "handleMuteEnvironmentPacket"
QT_MOC_LITERAL(5, 60, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(6, 92, 6), // "packet"
QT_MOC_LITERAL(7, 99, 17), // "SharedNodePointer"
QT_MOC_LITERAL(8, 117, 11), // "sendingNode"
QT_MOC_LITERAL(9, 129, 27), // "handleNodeMuteRequestPacket"
QT_MOC_LITERAL(10, 157, 16), // "handleNodeKilled"
QT_MOC_LITERAL(11, 174, 10), // "killedNode"
QT_MOC_LITERAL(12, 185, 22), // "handleKillAvatarPacket"
QT_MOC_LITERAL(13, 208, 16), // "queueAudioPacket"
QT_MOC_LITERAL(14, 225, 26), // "queueReplicatedAudioPacket"
QT_MOC_LITERAL(15, 252, 30), // "removeHRTFsForFinishedInjector"
QT_MOC_LITERAL(16, 283, 8), // "streamID"
QT_MOC_LITERAL(17, 292, 5) // "start"

    },
    "AudioMixer\0run\0\0sendStatsPacket\0"
    "handleMuteEnvironmentPacket\0"
    "QSharedPointer<ReceivedMessage>\0packet\0"
    "SharedNodePointer\0sendingNode\0"
    "handleNodeMuteRequestPacket\0"
    "handleNodeKilled\0killedNode\0"
    "handleKillAvatarPacket\0queueAudioPacket\0"
    "queueReplicatedAudioPacket\0"
    "removeHRTFsForFinishedInjector\0streamID\0"
    "start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AudioMixer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x0a /* Public */,
       4,    2,   66,    2, 0x08 /* Private */,
       9,    2,   71,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      12,    2,   79,    2, 0x08 /* Private */,
      13,    2,   84,    2, 0x08 /* Private */,
      14,    1,   89,    2, 0x08 /* Private */,
      15,    1,   92,    2, 0x08 /* Private */,
      17,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 7,   11,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QUuid,   16,
    QMetaType::Void,

       0        // eod
};

void AudioMixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AudioMixer *_t = static_cast<AudioMixer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->sendStatsPacket(); break;
        case 2: _t->handleMuteEnvironmentPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 3: _t->handleNodeMuteRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 4: _t->handleNodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 5: _t->handleKillAvatarPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 6: _t->queueAudioPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 7: _t->queueReplicatedAudioPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 8: _t->removeHRTFsForFinishedInjector((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 9: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AudioMixer::staticMetaObject = {
    { &ThreadedAssignment::staticMetaObject, qt_meta_stringdata_AudioMixer.data,
      qt_meta_data_AudioMixer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AudioMixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AudioMixer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AudioMixer.stringdata0))
        return static_cast<void*>(this);
    return ThreadedAssignment::qt_metacast(_clname);
}

int AudioMixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedAssignment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
