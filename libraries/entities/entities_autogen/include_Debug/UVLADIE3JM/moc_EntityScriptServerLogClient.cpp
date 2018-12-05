/****************************************************************************
** Meta object code from reading C++ file 'EntityScriptServerLogClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityScriptServerLogClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityScriptServerLogClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EntityScriptServerLogClient_t {
    QByteArrayData data[18];
    char stringdata0[288];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptServerLogClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptServerLogClient_t qt_meta_stringdata_EntityScriptServerLogClient = {
    {
QT_MOC_LITERAL(0, 0, 27), // "EntityScriptServerLogClient"
QT_MOC_LITERAL(1, 28, 19), // "receivedNewLogLines"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 8), // "logLines"
QT_MOC_LITERAL(4, 58, 29), // "enableToEntityServerScriptLog"
QT_MOC_LITERAL(5, 88, 6), // "enable"
QT_MOC_LITERAL(6, 95, 33), // "handleEntityServerScriptLogPa..."
QT_MOC_LITERAL(7, 129, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(8, 161, 7), // "message"
QT_MOC_LITERAL(9, 169, 17), // "SharedNodePointer"
QT_MOC_LITERAL(10, 187, 10), // "senderNode"
QT_MOC_LITERAL(11, 198, 13), // "nodeActivated"
QT_MOC_LITERAL(12, 212, 13), // "activatedNode"
QT_MOC_LITERAL(13, 226, 10), // "nodeKilled"
QT_MOC_LITERAL(14, 237, 10), // "killedNode"
QT_MOC_LITERAL(15, 248, 13), // "canRezChanged"
QT_MOC_LITERAL(16, 262, 6), // "canRez"
QT_MOC_LITERAL(17, 269, 18) // "connectionsChanged"

    },
    "EntityScriptServerLogClient\0"
    "receivedNewLogLines\0\0logLines\0"
    "enableToEntityServerScriptLog\0enable\0"
    "handleEntityServerScriptLogPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "SharedNodePointer\0senderNode\0nodeActivated\0"
    "activatedNode\0nodeKilled\0killedNode\0"
    "canRezChanged\0canRez\0connectionsChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptServerLogClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x08 /* Private */,
       6,    2,   55,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,
      15,    1,   66,    2, 0x08 /* Private */,
      17,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 9,   12,
    QMetaType::Void, 0x80000000 | 9,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,

       0        // eod
};

void EntityScriptServerLogClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityScriptServerLogClient *_t = static_cast<EntityScriptServerLogClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedNewLogLines((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->enableToEntityServerScriptLog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->handleEntityServerScriptLogPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 3: _t->nodeActivated((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 4: _t->nodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 5: _t->canRezChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->connectionsChanged(); break;
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
        case 4:
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
            using _t = void (EntityScriptServerLogClient::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityScriptServerLogClient::receivedNewLogLines)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityScriptServerLogClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntityScriptServerLogClient.data,
      qt_meta_data_EntityScriptServerLogClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptServerLogClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptServerLogClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptServerLogClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int EntityScriptServerLogClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void EntityScriptServerLogClient::receivedNewLogLines(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
