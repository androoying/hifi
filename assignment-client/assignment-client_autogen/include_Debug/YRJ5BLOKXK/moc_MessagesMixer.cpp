/****************************************************************************
** Meta object code from reading C++ file 'MessagesMixer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/messages/MessagesMixer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessagesMixer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessagesMixer_t {
    QByteArrayData data[13];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessagesMixer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessagesMixer_t qt_meta_stringdata_MessagesMixer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MessagesMixer"
QT_MOC_LITERAL(1, 14, 3), // "run"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "nodeKilled"
QT_MOC_LITERAL(4, 30, 17), // "SharedNodePointer"
QT_MOC_LITERAL(5, 48, 10), // "killedNode"
QT_MOC_LITERAL(6, 59, 15), // "sendStatsPacket"
QT_MOC_LITERAL(7, 75, 14), // "handleMessages"
QT_MOC_LITERAL(8, 90, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(9, 122, 7), // "message"
QT_MOC_LITERAL(10, 130, 10), // "senderNode"
QT_MOC_LITERAL(11, 141, 23), // "handleMessagesSubscribe"
QT_MOC_LITERAL(12, 165, 25) // "handleMessagesUnsubscribe"

    },
    "MessagesMixer\0run\0\0nodeKilled\0"
    "SharedNodePointer\0killedNode\0"
    "sendStatsPacket\0handleMessages\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "senderNode\0handleMessagesSubscribe\0"
    "handleMessagesUnsubscribe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagesMixer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    1,   45,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    2,   49,    2, 0x08 /* Private */,
      11,    2,   54,    2, 0x08 /* Private */,
      12,    2,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   10,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   10,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 4,    9,   10,

       0        // eod
};

void MessagesMixer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagesMixer *_t = static_cast<MessagesMixer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->run(); break;
        case 1: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->sendStatsPacket(); break;
        case 3: _t->handleMessages((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 4: _t->handleMessagesSubscribe((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 5: _t->handleMessagesUnsubscribe((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
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
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessagesMixer::staticMetaObject = {
    { &ThreadedAssignment::staticMetaObject, qt_meta_stringdata_MessagesMixer.data,
      qt_meta_data_MessagesMixer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MessagesMixer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagesMixer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesMixer.stringdata0))
        return static_cast<void*>(this);
    return ThreadedAssignment::qt_metacast(_clname);
}

int MessagesMixer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ThreadedAssignment::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
