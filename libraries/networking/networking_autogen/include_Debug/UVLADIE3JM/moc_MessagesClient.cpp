/****************************************************************************
** Meta object code from reading C++ file 'MessagesClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/MessagesClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MessagesClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MessagesClient_t {
    QByteArrayData data[21];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MessagesClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MessagesClient_t qt_meta_stringdata_MessagesClient = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MessagesClient"
QT_MOC_LITERAL(1, 15, 15), // "messageReceived"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "channel"
QT_MOC_LITERAL(4, 40, 7), // "message"
QT_MOC_LITERAL(5, 48, 10), // "senderUUID"
QT_MOC_LITERAL(6, 59, 9), // "localOnly"
QT_MOC_LITERAL(7, 69, 12), // "dataReceived"
QT_MOC_LITERAL(8, 82, 4), // "data"
QT_MOC_LITERAL(9, 87, 20), // "handleMessagesPacket"
QT_MOC_LITERAL(10, 108, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(11, 140, 15), // "receivedMessage"
QT_MOC_LITERAL(12, 156, 17), // "SharedNodePointer"
QT_MOC_LITERAL(13, 174, 10), // "senderNode"
QT_MOC_LITERAL(14, 185, 19), // "handleNodeActivated"
QT_MOC_LITERAL(15, 205, 4), // "node"
QT_MOC_LITERAL(16, 210, 11), // "sendMessage"
QT_MOC_LITERAL(17, 222, 16), // "sendLocalMessage"
QT_MOC_LITERAL(18, 239, 8), // "sendData"
QT_MOC_LITERAL(19, 248, 9), // "subscribe"
QT_MOC_LITERAL(20, 258, 11) // "unsubscribe"

    },
    "MessagesClient\0messageReceived\0\0channel\0"
    "message\0senderUUID\0localOnly\0dataReceived\0"
    "data\0handleMessagesPacket\0"
    "QSharedPointer<ReceivedMessage>\0"
    "receivedMessage\0SharedNodePointer\0"
    "senderNode\0handleNodeActivated\0node\0"
    "sendMessage\0sendLocalMessage\0sendData\0"
    "subscribe\0unsubscribe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MessagesClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   69,    2, 0x06 /* Public */,
       7,    4,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   87,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      16,    3,   95,    2, 0x02 /* Public */,
      16,    2,  102,    2, 0x22 /* Public | MethodCloned */,
      17,    2,  107,    2, 0x02 /* Public */,
      18,    3,  112,    2, 0x02 /* Public */,
      18,    2,  119,    2, 0x22 /* Public | MethodCloned */,
      19,    1,  124,    2, 0x02 /* Public */,
      20,    1,  127,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUuid, QMetaType::Bool,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QUuid, QMetaType::Bool,    3,    8,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, 0x80000000 | 12,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::Bool,    3,    8,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,    3,    8,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void MessagesClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MessagesClient *_t = static_cast<MessagesClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QUuid(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 1: _t->dataReceived((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QUuid(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->handleMessagesPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 3: _t->handleNodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 4: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->sendMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->sendLocalMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->sendData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->sendData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 9: _t->subscribe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->unsubscribe((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MessagesClient::*)(QString , QString , QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesClient::messageReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MessagesClient::*)(QString , QByteArray , QUuid , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MessagesClient::dataReceived)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MessagesClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MessagesClient.data,
      qt_meta_data_MessagesClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MessagesClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MessagesClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MessagesClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int MessagesClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MessagesClient::messageReceived(QString _t1, QString _t2, QUuid _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MessagesClient::dataReceived(QString _t1, QByteArray _t2, QUuid _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
