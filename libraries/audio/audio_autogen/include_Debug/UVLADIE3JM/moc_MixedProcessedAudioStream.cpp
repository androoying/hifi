/****************************************************************************
** Meta object code from reading C++ file 'MixedProcessedAudioStream.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MixedProcessedAudioStream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MixedProcessedAudioStream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MixedProcessedAudioStream_t {
    QByteArrayData data[12];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MixedProcessedAudioStream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MixedProcessedAudioStream_t qt_meta_stringdata_MixedProcessedAudioStream = {
    {
QT_MOC_LITERAL(0, 0, 25), // "MixedProcessedAudioStream"
QT_MOC_LITERAL(1, 26, 12), // "addedSilence"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "silentSamplesPerChannel"
QT_MOC_LITERAL(4, 64, 30), // "addedLastFrameRepeatedWithFade"
QT_MOC_LITERAL(5, 95, 17), // "samplesPerChannel"
QT_MOC_LITERAL(6, 113, 18), // "addedStereoSamples"
QT_MOC_LITERAL(7, 132, 7), // "samples"
QT_MOC_LITERAL(8, 140, 14), // "processSamples"
QT_MOC_LITERAL(9, 155, 11), // "inputBuffer"
QT_MOC_LITERAL(10, 167, 11), // "QByteArray&"
QT_MOC_LITERAL(11, 179, 12) // "outputBuffer"

    },
    "MixedProcessedAudioStream\0addedSilence\0"
    "\0silentSamplesPerChannel\0"
    "addedLastFrameRepeatedWithFade\0"
    "samplesPerChannel\0addedStereoSamples\0"
    "samples\0processSamples\0inputBuffer\0"
    "QByteArray&\0outputBuffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MixedProcessedAudioStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    2,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 10,    9,   11,

       0        // eod
};

void MixedProcessedAudioStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MixedProcessedAudioStream *_t = static_cast<MixedProcessedAudioStream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addedSilence((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addedLastFrameRepeatedWithFade((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addedStereoSamples((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: _t->processSamples((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MixedProcessedAudioStream::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixedProcessedAudioStream::addedSilence)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MixedProcessedAudioStream::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixedProcessedAudioStream::addedLastFrameRepeatedWithFade)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MixedProcessedAudioStream::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixedProcessedAudioStream::addedStereoSamples)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MixedProcessedAudioStream::*)(const QByteArray & , QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MixedProcessedAudioStream::processSamples)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MixedProcessedAudioStream::staticMetaObject = {
    { &InboundAudioStream::staticMetaObject, qt_meta_stringdata_MixedProcessedAudioStream.data,
      qt_meta_data_MixedProcessedAudioStream,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MixedProcessedAudioStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MixedProcessedAudioStream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MixedProcessedAudioStream.stringdata0))
        return static_cast<void*>(this);
    return InboundAudioStream::qt_metacast(_clname);
}

int MixedProcessedAudioStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InboundAudioStream::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MixedProcessedAudioStream::addedSilence(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MixedProcessedAudioStream::addedLastFrameRepeatedWithFade(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MixedProcessedAudioStream::addedStereoSamples(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MixedProcessedAudioStream::processSamples(const QByteArray & _t1, QByteArray & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
