/****************************************************************************
** Meta object code from reading C++ file 'DomainHandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DomainHandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainHandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainHandler_t {
    QByteArrayData data[42];
    char stringdata0[790];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainHandler_t qt_meta_stringdata_DomainHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DomainHandler"
QT_MOC_LITERAL(1, 14, 16), // "domainURLChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "domainURL"
QT_MOC_LITERAL(4, 42, 24), // "completedSocketDiscovery"
QT_MOC_LITERAL(5, 67, 9), // "resetting"
QT_MOC_LITERAL(6, 77, 17), // "connectedToDomain"
QT_MOC_LITERAL(7, 95, 22), // "disconnectedFromDomain"
QT_MOC_LITERAL(8, 118, 22), // "iceSocketAndIDReceived"
QT_MOC_LITERAL(9, 141, 22), // "icePeerSocketsReceived"
QT_MOC_LITERAL(10, 164, 16), // "settingsReceived"
QT_MOC_LITERAL(11, 181, 20), // "domainSettingsObject"
QT_MOC_LITERAL(12, 202, 19), // "settingsReceiveFail"
QT_MOC_LITERAL(13, 222, 23), // "domainConnectionRefused"
QT_MOC_LITERAL(14, 246, 13), // "reasonMessage"
QT_MOC_LITERAL(15, 260, 6), // "reason"
QT_MOC_LITERAL(16, 267, 9), // "extraInfo"
QT_MOC_LITERAL(17, 277, 24), // "redirectToErrorDomainURL"
QT_MOC_LITERAL(18, 302, 14), // "errorDomainURL"
QT_MOC_LITERAL(19, 317, 25), // "redirectErrorStateChanged"
QT_MOC_LITERAL(20, 343, 14), // "isInErrorState"
QT_MOC_LITERAL(21, 358, 34), // "limitOfSilentDomainCheckInsRe..."
QT_MOC_LITERAL(22, 393, 11), // "setURLAndID"
QT_MOC_LITERAL(23, 405, 2), // "id"
QT_MOC_LITERAL(24, 408, 25), // "setIceServerHostnameAndID"
QT_MOC_LITERAL(25, 434, 17), // "iceServerHostname"
QT_MOC_LITERAL(26, 452, 25), // "processSettingsPacketList"
QT_MOC_LITERAL(27, 478, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(28, 510, 10), // "packetList"
QT_MOC_LITERAL(29, 521, 25), // "processICEPingReplyPacket"
QT_MOC_LITERAL(30, 547, 7), // "message"
QT_MOC_LITERAL(31, 555, 28), // "processDTLSRequirementPacket"
QT_MOC_LITERAL(32, 584, 21), // "dtlsRequirementPacket"
QT_MOC_LITERAL(33, 606, 24), // "processICEResponsePacket"
QT_MOC_LITERAL(34, 631, 9), // "icePacket"
QT_MOC_LITERAL(35, 641, 41), // "processDomainServerConnection..."
QT_MOC_LITERAL(36, 683, 21), // "setRedirectErrorState"
QT_MOC_LITERAL(37, 705, 8), // "errorUrl"
QT_MOC_LITERAL(38, 714, 23), // "completedHostnameLookup"
QT_MOC_LITERAL(39, 738, 9), // "QHostInfo"
QT_MOC_LITERAL(40, 748, 8), // "hostInfo"
QT_MOC_LITERAL(41, 757, 32) // "completedIceServerHostnameLookup"

    },
    "DomainHandler\0domainURLChanged\0\0"
    "domainURL\0completedSocketDiscovery\0"
    "resetting\0connectedToDomain\0"
    "disconnectedFromDomain\0iceSocketAndIDReceived\0"
    "icePeerSocketsReceived\0settingsReceived\0"
    "domainSettingsObject\0settingsReceiveFail\0"
    "domainConnectionRefused\0reasonMessage\0"
    "reason\0extraInfo\0redirectToErrorDomainURL\0"
    "errorDomainURL\0redirectErrorStateChanged\0"
    "isInErrorState\0limitOfSilentDomainCheckInsReached\0"
    "setURLAndID\0id\0setIceServerHostnameAndID\0"
    "iceServerHostname\0processSettingsPacketList\0"
    "QSharedPointer<ReceivedMessage>\0"
    "packetList\0processICEPingReplyPacket\0"
    "message\0processDTLSRequirementPacket\0"
    "dtlsRequirementPacket\0processICEResponsePacket\0"
    "icePacket\0processDomainServerConnectionDeniedPacket\0"
    "setRedirectErrorState\0errorUrl\0"
    "completedHostnameLookup\0QHostInfo\0"
    "hostInfo\0completedIceServerHostnameLookup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    0,  152,    2, 0x06 /* Public */,
       5,    0,  153,    2, 0x06 /* Public */,
       6,    1,  154,    2, 0x06 /* Public */,
       7,    0,  157,    2, 0x06 /* Public */,
       8,    0,  158,    2, 0x06 /* Public */,
       9,    0,  159,    2, 0x06 /* Public */,
      10,    1,  160,    2, 0x06 /* Public */,
      12,    0,  163,    2, 0x06 /* Public */,
      13,    3,  164,    2, 0x06 /* Public */,
      17,    1,  171,    2, 0x06 /* Public */,
      19,    1,  174,    2, 0x06 /* Public */,
      21,    0,  177,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    2,  178,    2, 0x0a /* Public */,
      24,    2,  183,    2, 0x0a /* Public */,
      26,    1,  188,    2, 0x0a /* Public */,
      29,    1,  191,    2, 0x0a /* Public */,
      31,    1,  194,    2, 0x0a /* Public */,
      33,    1,  197,    2, 0x0a /* Public */,
      35,    1,  200,    2, 0x0a /* Public */,
      36,    4,  203,    2, 0x0a /* Public */,
      36,    3,  212,    2, 0x2a /* Public | MethodCloned */,
      36,    2,  219,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  224,    2, 0x2a /* Public | MethodCloned */,
      20,    0,  227,    2, 0x0a /* Public */,
      38,    1,  228,    2, 0x08 /* Private */,
      41,    0,  231,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   14,   15,   16,
    QMetaType::Void, QMetaType::QUrl,   18,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUuid,    3,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::QUuid,   25,   23,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   30,
    QMetaType::Void, 0x80000000 | 27,   32,
    QMetaType::Void, 0x80000000 | 27,   34,
    QMetaType::Void, 0x80000000 | 27,   30,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int, QMetaType::QString,   37,   14,   15,   16,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int,   37,   14,   15,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,   37,   14,
    QMetaType::Void, QMetaType::QUrl,   37,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void,

       0        // eod
};

void DomainHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainHandler *_t = static_cast<DomainHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->domainURLChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->completedSocketDiscovery(); break;
        case 2: _t->resetting(); break;
        case 3: _t->connectedToDomain((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 4: _t->disconnectedFromDomain(); break;
        case 5: _t->iceSocketAndIDReceived(); break;
        case 6: _t->icePeerSocketsReceived(); break;
        case 7: _t->settingsReceived((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 8: _t->settingsReceiveFail(); break;
        case 9: _t->domainConnectionRefused((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->redirectToErrorDomainURL((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 11: _t->redirectErrorStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->limitOfSilentDomainCheckInsReached(); break;
        case 13: _t->setURLAndID((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QUuid(*)>(_a[2]))); break;
        case 14: _t->setIceServerHostnameAndID((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 15: _t->processSettingsPacketList((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 16: _t->processICEPingReplyPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 17: _t->processDTLSRequirementPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 18: _t->processICEResponsePacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 19: _t->processDomainServerConnectionDeniedPacket((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1]))); break;
        case 20: _t->setRedirectErrorState((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 21: _t->setRedirectErrorState((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 22: _t->setRedirectErrorState((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 23: _t->setRedirectErrorState((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 24: { bool _r = _t->isInErrorState();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->completedHostnameLookup((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 26: _t->completedIceServerHostnameLookup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DomainHandler::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::domainURLChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::completedSocketDiscovery)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::resetting)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::connectedToDomain)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::disconnectedFromDomain)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::iceSocketAndIDReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::icePeerSocketsReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::settingsReceived)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::settingsReceiveFail)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)(QString , int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::domainConnectionRefused)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::redirectToErrorDomainURL)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::redirectErrorStateChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DomainHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DomainHandler::limitOfSilentDomainCheckInsReached)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DomainHandler.data,
      qt_meta_data_DomainHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DomainHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void DomainHandler::domainURLChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DomainHandler::completedSocketDiscovery()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DomainHandler::resetting()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DomainHandler::connectedToDomain(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DomainHandler::disconnectedFromDomain()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DomainHandler::iceSocketAndIDReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DomainHandler::icePeerSocketsReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void DomainHandler::settingsReceived(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DomainHandler::settingsReceiveFail()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void DomainHandler::domainConnectionRefused(QString _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DomainHandler::redirectToErrorDomainURL(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DomainHandler::redirectErrorStateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DomainHandler::limitOfSilentDomainCheckInsReached()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
