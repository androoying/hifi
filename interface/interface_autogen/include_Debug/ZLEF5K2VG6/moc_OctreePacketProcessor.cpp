/****************************************************************************
** Meta object code from reading C++ file 'OctreePacketProcessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/octree/OctreePacketProcessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OctreePacketProcessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OctreePacketProcessor_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OctreePacketProcessor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OctreePacketProcessor_t qt_meta_stringdata_OctreePacketProcessor = {
    {
QT_MOC_LITERAL(0, 0, 21), // "OctreePacketProcessor"
QT_MOC_LITERAL(1, 22, 21), // "packetVersionMismatch"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "handleOctreePacket"
QT_MOC_LITERAL(4, 64, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(5, 96, 7), // "message"
QT_MOC_LITERAL(6, 104, 17), // "SharedNodePointer"
QT_MOC_LITERAL(7, 122, 10) // "senderNode"

    },
    "OctreePacketProcessor\0packetVersionMismatch\0"
    "\0handleOctreePacket\0QSharedPointer<ReceivedMessage>\0"
    "message\0SharedNodePointer\0senderNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OctreePacketProcessor[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 6,    5,    7,

       0        // eod
};

void OctreePacketProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OctreePacketProcessor *_t = static_cast<OctreePacketProcessor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->packetVersionMismatch(); break;
        case 1: _t->handleOctreePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OctreePacketProcessor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OctreePacketProcessor::packetVersionMismatch)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OctreePacketProcessor::staticMetaObject = {
    { &ReceivedPacketProcessor::staticMetaObject, qt_meta_stringdata_OctreePacketProcessor.data,
      qt_meta_data_OctreePacketProcessor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OctreePacketProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OctreePacketProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OctreePacketProcessor.stringdata0))
        return static_cast<void*>(this);
    return ReceivedPacketProcessor::qt_metacast(_clname);
}

int OctreePacketProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReceivedPacketProcessor::qt_metacall(_c, _id, _a);
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
void OctreePacketProcessor::packetVersionMismatch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
