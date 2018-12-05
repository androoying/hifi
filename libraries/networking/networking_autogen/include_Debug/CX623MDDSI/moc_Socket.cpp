/****************************************************************************
** Meta object code from reading C++ file 'Socket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/udt/Socket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_udt__Socket_t {
    QByteArrayData data[21];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_udt__Socket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_udt__Socket_t qt_meta_stringdata_udt__Socket = {
    {
QT_MOC_LITERAL(0, 0, 11), // "udt::Socket"
QT_MOC_LITERAL(1, 12, 30), // "clientHandshakeRequestComplete"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "HifiSockAddr"
QT_MOC_LITERAL(4, 57, 8), // "sockAddr"
QT_MOC_LITERAL(5, 66, 17), // "cleanupConnection"
QT_MOC_LITERAL(6, 84, 16), // "clearConnections"
QT_MOC_LITERAL(7, 101, 20), // "readPendingDatagrams"
QT_MOC_LITERAL(8, 122, 23), // "checkForReadyReadBackup"
QT_MOC_LITERAL(9, 146, 17), // "handleSocketError"
QT_MOC_LITERAL(10, 164, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 193, 11), // "socketError"
QT_MOC_LITERAL(12, 205, 18), // "handleStateChanged"
QT_MOC_LITERAL(13, 224, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(14, 253, 11), // "socketState"
QT_MOC_LITERAL(15, 265, 19), // "writeReliablePacket"
QT_MOC_LITERAL(16, 285, 7), // "Packet*"
QT_MOC_LITERAL(17, 293, 6), // "packet"
QT_MOC_LITERAL(18, 300, 23), // "writeReliablePacketList"
QT_MOC_LITERAL(19, 324, 11), // "PacketList*"
QT_MOC_LITERAL(20, 336, 10) // "packetList"

    },
    "udt::Socket\0clientHandshakeRequestComplete\0"
    "\0HifiSockAddr\0sockAddr\0cleanupConnection\0"
    "clearConnections\0readPendingDatagrams\0"
    "checkForReadyReadBackup\0handleSocketError\0"
    "QAbstractSocket::SocketError\0socketError\0"
    "handleStateChanged\0QAbstractSocket::SocketState\0"
    "socketState\0writeReliablePacket\0Packet*\0"
    "packet\0writeReliablePacketList\0"
    "PacketList*\0packetList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_udt__Socket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      12,    1,   71,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    2,   74,    2, 0x00 /* Private */,
      18,    2,   79,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 3,   17,    4,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 3,   20,    4,

       0        // eod
};

void udt::Socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Socket *_t = static_cast<Socket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientHandshakeRequestComplete((*reinterpret_cast< const HifiSockAddr(*)>(_a[1]))); break;
        case 1: _t->cleanupConnection((*reinterpret_cast< HifiSockAddr(*)>(_a[1]))); break;
        case 2: _t->clearConnections(); break;
        case 3: _t->readPendingDatagrams(); break;
        case 4: _t->checkForReadyReadBackup(); break;
        case 5: _t->handleSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->handleStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 7: _t->writeReliablePacket((*reinterpret_cast< Packet*(*)>(_a[1])),(*reinterpret_cast< const HifiSockAddr(*)>(_a[2]))); break;
        case 8: _t->writeReliablePacketList((*reinterpret_cast< PacketList*(*)>(_a[1])),(*reinterpret_cast< const HifiSockAddr(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Packet* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< HifiSockAddr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Socket::*)(const HifiSockAddr & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Socket::clientHandshakeRequestComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject udt::Socket::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_udt__Socket.data,
      qt_meta_data_udt__Socket,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *udt::Socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *udt::Socket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_udt__Socket.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int udt::Socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void udt::Socket::clientHandshakeRequestComplete(const HifiSockAddr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
