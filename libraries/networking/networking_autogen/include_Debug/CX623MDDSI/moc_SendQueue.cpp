/****************************************************************************
** Meta object code from reading C++ file 'SendQueue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/udt/SendQueue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SendQueue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_udt__SendQueue_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_udt__SendQueue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_udt__SendQueue_t qt_meta_stringdata_udt__SendQueue = {
    {
QT_MOC_LITERAL(0, 0, 14), // "udt::SendQueue"
QT_MOC_LITERAL(1, 15, 10), // "packetSent"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "wireSize"
QT_MOC_LITERAL(4, 36, 11), // "payloadSize"
QT_MOC_LITERAL(5, 48, 14), // "SequenceNumber"
QT_MOC_LITERAL(6, 63, 6), // "seqNum"
QT_MOC_LITERAL(7, 70, 35), // "p_high_resolution_clock::time..."
QT_MOC_LITERAL(8, 106, 9), // "timePoint"
QT_MOC_LITERAL(9, 116, 19), // "packetRetransmitted"
QT_MOC_LITERAL(10, 136, 13), // "queueInactive"
QT_MOC_LITERAL(11, 150, 7), // "timeout"
QT_MOC_LITERAL(12, 158, 4), // "stop"
QT_MOC_LITERAL(13, 163, 3), // "ack"
QT_MOC_LITERAL(14, 167, 14), // "fastRetransmit"
QT_MOC_LITERAL(15, 182, 12), // "handshakeACK"
QT_MOC_LITERAL(16, 195, 3) // "run"

    },
    "udt::SendQueue\0packetSent\0\0wireSize\0"
    "payloadSize\0SequenceNumber\0seqNum\0"
    "p_high_resolution_clock::time_point\0"
    "timePoint\0packetRetransmitted\0"
    "queueInactive\0timeout\0stop\0ack\0"
    "fastRetransmit\0handshakeACK\0run"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_udt__SendQueue[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   59,    2, 0x06 /* Public */,
       9,    3,   68,    2, 0x06 /* Public */,
      10,    0,   75,    2, 0x06 /* Public */,
      11,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   77,    2, 0x0a /* Public */,
      13,    1,   78,    2, 0x0a /* Public */,
      14,    1,   81,    2, 0x0a /* Public */,
      15,    0,   84,    2, 0x0a /* Public */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 7,    3,    4,    6,    8,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5, 0x80000000 | 7,    3,    6,    8,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void, 0x80000000 | 5,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void udt::SendQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendQueue *_t = static_cast<SendQueue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->packetSent((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< SequenceNumber(*)>(_a[3])),(*reinterpret_cast< p_high_resolution_clock::time_point(*)>(_a[4]))); break;
        case 1: _t->packetRetransmitted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SequenceNumber(*)>(_a[2])),(*reinterpret_cast< p_high_resolution_clock::time_point(*)>(_a[3]))); break;
        case 2: _t->queueInactive(); break;
        case 3: _t->timeout(); break;
        case 4: _t->stop(); break;
        case 5: _t->ack((*reinterpret_cast< SequenceNumber(*)>(_a[1]))); break;
        case 6: _t->fastRetransmit((*reinterpret_cast< SequenceNumber(*)>(_a[1]))); break;
        case 7: _t->handshakeACK(); break;
        case 8: _t->run(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< p_high_resolution_clock::time_point >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< p_high_resolution_clock::time_point >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SendQueue::*)(int , int , SequenceNumber , p_high_resolution_clock::time_point );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendQueue::packetSent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SendQueue::*)(int , SequenceNumber , p_high_resolution_clock::time_point );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendQueue::packetRetransmitted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SendQueue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendQueue::queueInactive)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SendQueue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SendQueue::timeout)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject udt::SendQueue::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_udt__SendQueue.data,
      qt_meta_data_udt__SendQueue,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *udt::SendQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *udt::SendQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_udt__SendQueue.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int udt::SendQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void udt::SendQueue::packetSent(int _t1, int _t2, SequenceNumber _t3, p_high_resolution_clock::time_point _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void udt::SendQueue::packetRetransmitted(int _t1, SequenceNumber _t2, p_high_resolution_clock::time_point _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void udt::SendQueue::queueInactive()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void udt::SendQueue::timeout()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
