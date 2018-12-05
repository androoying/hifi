/****************************************************************************
** Meta object code from reading C++ file 'AvatarHashMap.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AvatarHashMap.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarHashMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarHashMap_t {
    QByteArrayData data[27];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarHashMap_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarHashMap_t qt_meta_stringdata_AvatarHashMap = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AvatarHashMap"
QT_MOC_LITERAL(1, 14, 16), // "avatarAddedEvent"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "sessionUUID"
QT_MOC_LITERAL(4, 44, 18), // "avatarRemovedEvent"
QT_MOC_LITERAL(5, 63, 25), // "avatarSessionChangedEvent"
QT_MOC_LITERAL(6, 89, 7), // "oldUUID"
QT_MOC_LITERAL(7, 97, 15), // "isAvatarInRange"
QT_MOC_LITERAL(8, 113, 9), // "glm::vec3"
QT_MOC_LITERAL(9, 123, 8), // "position"
QT_MOC_LITERAL(10, 132, 5), // "range"
QT_MOC_LITERAL(11, 138, 18), // "sessionUUIDChanged"
QT_MOC_LITERAL(12, 157, 23), // "processAvatarDataPacket"
QT_MOC_LITERAL(13, 181, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(14, 213, 7), // "message"
QT_MOC_LITERAL(15, 221, 17), // "SharedNodePointer"
QT_MOC_LITERAL(16, 239, 11), // "sendingNode"
QT_MOC_LITERAL(17, 251, 27), // "processAvatarIdentityPacket"
QT_MOC_LITERAL(18, 279, 23), // "processBulkAvatarTraits"
QT_MOC_LITERAL(19, 303, 17), // "processKillAvatar"
QT_MOC_LITERAL(20, 321, 20), // "getAvatarIdentifiers"
QT_MOC_LITERAL(21, 342, 14), // "QVector<QUuid>"
QT_MOC_LITERAL(22, 357, 17), // "getAvatarsInRange"
QT_MOC_LITERAL(23, 375, 11), // "rangeMeters"
QT_MOC_LITERAL(24, 387, 9), // "getAvatar"
QT_MOC_LITERAL(25, 397, 17), // "ScriptAvatarData*"
QT_MOC_LITERAL(26, 415, 8) // "avatarID"

    },
    "AvatarHashMap\0avatarAddedEvent\0\0"
    "sessionUUID\0avatarRemovedEvent\0"
    "avatarSessionChangedEvent\0oldUUID\0"
    "isAvatarInRange\0glm::vec3\0position\0"
    "range\0sessionUUIDChanged\0"
    "processAvatarDataPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "SharedNodePointer\0sendingNode\0"
    "processAvatarIdentityPacket\0"
    "processBulkAvatarTraits\0processKillAvatar\0"
    "getAvatarIdentifiers\0QVector<QUuid>\0"
    "getAvatarsInRange\0rangeMeters\0getAvatar\0"
    "ScriptAvatarData*\0avatarID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarHashMap[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    2,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   85,    2, 0x0a /* Public */,
      11,    2,   90,    2, 0x09 /* Protected */,
      12,    2,   95,    2, 0x09 /* Protected */,
      17,    2,  100,    2, 0x09 /* Protected */,
      18,    2,  105,    2, 0x09 /* Protected */,
      19,    2,  110,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      20,    0,  115,    2, 0x02 /* Public */,
      22,    2,  116,    2, 0x02 /* Public */,
      24,    1,  121,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid,    3,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid,    3,    6,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8, QMetaType::Float,    9,   10,
    QMetaType::Void, QMetaType::QUuid, QMetaType::QUuid,    3,    6,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,

 // methods: parameters
    0x80000000 | 21,
    0x80000000 | 21, 0x80000000 | 8, QMetaType::Float,    9,   23,
    0x80000000 | 25, QMetaType::QUuid,   26,

       0        // eod
};

void AvatarHashMap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarHashMap *_t = static_cast<AvatarHashMap *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->avatarAddedEvent((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 1: _t->avatarRemovedEvent((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 2: _t->avatarSessionChangedEvent((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 3: { bool _r = _t->isAvatarInRange((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->sessionUUIDChanged((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 5: _t->processAvatarDataPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 6: _t->processAvatarIdentityPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 7: _t->processBulkAvatarTraits((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 8: _t->processKillAvatar((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 9: { QVector<QUuid> _r = _t->getAvatarIdentifiers();
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QVector<QUuid> _r = _t->getAvatarsInRange((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector<QUuid>*>(_a[0]) = std::move(_r); }  break;
        case 11: { ScriptAvatarData* _r = _t->getAvatar((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ScriptAvatarData**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
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
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< glm::vec3 >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarHashMap::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarHashMap::avatarAddedEvent)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarHashMap::*)(const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarHashMap::avatarRemovedEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AvatarHashMap::*)(const QUuid & , const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarHashMap::avatarSessionChangedEvent)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarHashMap::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AvatarHashMap.data,
      qt_meta_data_AvatarHashMap,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarHashMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarHashMap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarHashMap.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AvatarHashMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void AvatarHashMap::avatarAddedEvent(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AvatarHashMap::avatarRemovedEvent(const QUuid & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AvatarHashMap::avatarSessionChangedEvent(const QUuid & _t1, const QUuid & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
