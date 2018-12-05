/****************************************************************************
** Meta object code from reading C++ file 'InboundAudioStream.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/InboundAudioStream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InboundAudioStream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InboundAudioStream_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InboundAudioStream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InboundAudioStream_t qt_meta_stringdata_InboundAudioStream = {
    {
QT_MOC_LITERAL(0, 0, 18), // "InboundAudioStream"
QT_MOC_LITERAL(1, 19, 20), // "mismatchedAudioCodec"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "SharedNodePointer"
QT_MOC_LITERAL(4, 59, 11), // "sendingNode"
QT_MOC_LITERAL(5, 71, 12), // "currentCodec"
QT_MOC_LITERAL(6, 84, 13), // "recievedCodec"
QT_MOC_LITERAL(7, 98, 33) // "perSecondCallbackForUpdatingS..."

    },
    "InboundAudioStream\0mismatchedAudioCodec\0"
    "\0SharedNodePointer\0sendingNode\0"
    "currentCodec\0recievedCodec\0"
    "perSecondCallbackForUpdatingStats"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InboundAudioStream[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InboundAudioStream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InboundAudioStream *_t = static_cast<InboundAudioStream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mismatchedAudioCodec((*reinterpret_cast< SharedNodePointer(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->perSecondCallbackForUpdatingStats(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
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
            using _t = void (InboundAudioStream::*)(SharedNodePointer , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InboundAudioStream::mismatchedAudioCodec)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InboundAudioStream::staticMetaObject = {
    { &NodeData::staticMetaObject, qt_meta_stringdata_InboundAudioStream.data,
      qt_meta_data_InboundAudioStream,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *InboundAudioStream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InboundAudioStream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InboundAudioStream.stringdata0))
        return static_cast<void*>(this);
    return NodeData::qt_metacast(_clname);
}

int InboundAudioStream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeData::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void InboundAudioStream::mismatchedAudioCodec(SharedNodePointer _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
