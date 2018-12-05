/****************************************************************************
** Meta object code from reading C++ file 'DomainServerSettingsManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DomainServerSettingsManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainServerSettingsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainServerSettingsManager_t {
    QByteArrayData data[21];
    char stringdata0[440];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainServerSettingsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainServerSettingsManager_t qt_meta_stringdata_DomainServerSettingsManager = {
    {
QT_MOC_LITERAL(0, 0, 27), // "DomainServerSettingsManager"
QT_MOC_LITERAL(1, 28, 21), // "updateNodePermissions"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15), // "settingsUpdated"
QT_MOC_LITERAL(4, 67, 25), // "apiGetGroupIDJSONCallback"
QT_MOC_LITERAL(5, 93, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 108, 12), // "requestReply"
QT_MOC_LITERAL(7, 121, 26), // "apiGetGroupIDErrorCallback"
QT_MOC_LITERAL(8, 148, 28), // "apiGetGroupRanksJSONCallback"
QT_MOC_LITERAL(9, 177, 29), // "apiGetGroupRanksErrorCallback"
QT_MOC_LITERAL(10, 207, 28), // "processSettingsRequestPacket"
QT_MOC_LITERAL(11, 236, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(12, 268, 7), // "message"
QT_MOC_LITERAL(13, 276, 28), // "processNodeKickRequestPacket"
QT_MOC_LITERAL(14, 305, 17), // "SharedNodePointer"
QT_MOC_LITERAL(15, 323, 11), // "sendingNode"
QT_MOC_LITERAL(16, 335, 34), // "processUsernameFromIDRequestP..."
QT_MOC_LITERAL(17, 370, 25), // "restoreSettingsFromObject"
QT_MOC_LITERAL(18, 396, 17), // "settingsToRestore"
QT_MOC_LITERAL(19, 414, 12), // "SettingsType"
QT_MOC_LITERAL(20, 427, 12) // "settingsType"

    },
    "DomainServerSettingsManager\0"
    "updateNodePermissions\0\0settingsUpdated\0"
    "apiGetGroupIDJSONCallback\0QNetworkReply*\0"
    "requestReply\0apiGetGroupIDErrorCallback\0"
    "apiGetGroupRanksJSONCallback\0"
    "apiGetGroupRanksErrorCallback\0"
    "processSettingsRequestPacket\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "processNodeKickRequestPacket\0"
    "SharedNodePointer\0sendingNode\0"
    "processUsernameFromIDRequestPacket\0"
    "restoreSettingsFromObject\0settingsToRestore\0"
    "SettingsType\0settingsType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainServerSettingsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   66,    2, 0x0a /* Public */,
       7,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      10,    1,   78,    2, 0x08 /* Private */,
      13,    2,   81,    2, 0x08 /* Private */,
      16,    2,   86,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    2,   91,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 14,   12,   15,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 14,   12,   15,

 // methods: parameters
    QMetaType::Bool, QMetaType::QJsonObject, 0x80000000 | 19,   18,   20,

       0        // eod
};

void DomainServerSettingsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainServerSettingsManager *_t = static_cast<DomainServerSettingsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateNodePermissions(); break;
        case 1: _t->settingsUpdated(); break;
        case 2: _t->apiGetGroupIDJSONCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->apiGetGroupIDErrorCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->apiGetGroupRanksJSONCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->apiGetGroupRanksErrorCallback((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->processSettingsRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 7: _t->processNodeKickRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 8: _t->processUsernameFromIDRequestPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 9: { bool _r = _t->restoreSettingsFromObject((*reinterpret_cast< QJsonObject(*)>(_a[1])),(*reinterpret_cast< SettingsType(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DomainServerSettingsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainServerSettingsManager::updateNodePermissions)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DomainServerSettingsManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainServerSettingsManager::settingsUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainServerSettingsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DomainServerSettingsManager.data,
      qt_meta_data_DomainServerSettingsManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainServerSettingsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainServerSettingsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainServerSettingsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DomainServerSettingsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void DomainServerSettingsManager::updateNodePermissions()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DomainServerSettingsManager::settingsUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
