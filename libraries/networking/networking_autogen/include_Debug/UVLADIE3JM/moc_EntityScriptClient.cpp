/****************************************************************************
** Meta object code from reading C++ file 'EntityScriptClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EntityScriptClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityScriptClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GetScriptStatusRequest_t {
    QByteArrayData data[6];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GetScriptStatusRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GetScriptStatusRequest_t qt_meta_stringdata_GetScriptStatusRequest = {
    {
QT_MOC_LITERAL(0, 0, 22), // "GetScriptStatusRequest"
QT_MOC_LITERAL(1, 23, 8), // "finished"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 23), // "GetScriptStatusRequest*"
QT_MOC_LITERAL(4, 57, 7), // "request"
QT_MOC_LITERAL(5, 65, 5) // "start"

    },
    "GetScriptStatusRequest\0finished\0\0"
    "GetScriptStatusRequest*\0request\0start"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GetScriptStatusRequest[] = {

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
       1,    1,   24,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void GetScriptStatusRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GetScriptStatusRequest *_t = static_cast<GetScriptStatusRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< GetScriptStatusRequest*(*)>(_a[1]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GetScriptStatusRequest* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GetScriptStatusRequest::*)(GetScriptStatusRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GetScriptStatusRequest::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GetScriptStatusRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GetScriptStatusRequest.data,
      qt_meta_data_GetScriptStatusRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GetScriptStatusRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GetScriptStatusRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GetScriptStatusRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GetScriptStatusRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void GetScriptStatusRequest::finished(GetScriptStatusRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_EntityScriptClient_t {
    QByteArrayData data[13];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptClient_t qt_meta_stringdata_EntityScriptClient = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EntityScriptClient"
QT_MOC_LITERAL(1, 19, 16), // "handleNodeKilled"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "SharedNodePointer"
QT_MOC_LITERAL(4, 55, 4), // "node"
QT_MOC_LITERAL(5, 60, 31), // "handleNodeClientConnectionReset"
QT_MOC_LITERAL(6, 92, 26), // "handleGetScriptStatusReply"
QT_MOC_LITERAL(7, 119, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(8, 151, 7), // "message"
QT_MOC_LITERAL(9, 159, 10), // "senderNode"
QT_MOC_LITERAL(10, 170, 25), // "createScriptStatusRequest"
QT_MOC_LITERAL(11, 196, 23), // "GetScriptStatusRequest*"
QT_MOC_LITERAL(12, 220, 8) // "entityID"

    },
    "EntityScriptClient\0handleNodeKilled\0"
    "\0SharedNodePointer\0node\0"
    "handleNodeClientConnectionReset\0"
    "handleGetScriptStatusReply\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "senderNode\0createScriptStatusRequest\0"
    "GetScriptStatusRequest*\0entityID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,
       6,    2,   40,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   45,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 3,    8,    9,

 // methods: parameters
    0x80000000 | 11, QMetaType::QUuid,   12,

       0        // eod
};

void EntityScriptClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityScriptClient *_t = static_cast<EntityScriptClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleNodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 1: _t->handleNodeClientConnectionReset((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 2: _t->handleGetScriptStatusReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 3: { GetScriptStatusRequest* _r = _t->createScriptStatusRequest((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GetScriptStatusRequest**>(_a[0]) = std::move(_r); }  break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EntityScriptClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntityScriptClient.data,
      qt_meta_data_EntityScriptClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int EntityScriptClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_EntityScriptServerServices_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EntityScriptServerServices_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EntityScriptServerServices_t qt_meta_stringdata_EntityScriptServerServices = {
    {
QT_MOC_LITERAL(0, 0, 26) // "EntityScriptServerServices"

    },
    "EntityScriptServerServices"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EntityScriptServerServices[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void EntityScriptServerServices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject EntityScriptServerServices::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EntityScriptServerServices.data,
      qt_meta_data_EntityScriptServerServices,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EntityScriptServerServices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityScriptServerServices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityScriptServerServices.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int EntityScriptServerServices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
