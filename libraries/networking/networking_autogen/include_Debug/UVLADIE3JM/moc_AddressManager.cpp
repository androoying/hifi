/****************************************************************************
** Meta object code from reading C++ file 'AddressManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AddressManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddressManager_t {
    QByteArrayData data[59];
    char stringdata0[875];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddressManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddressManager_t qt_meta_stringdata_AddressManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AddressManager"
QT_MOC_LITERAL(1, 15, 21), // "lookupResultsFinished"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "lookupResultIsOffline"
QT_MOC_LITERAL(4, 60, 22), // "lookupResultIsNotFound"
QT_MOC_LITERAL(5, 83, 28), // "possibleDomainChangeRequired"
QT_MOC_LITERAL(6, 112, 9), // "domainURL"
QT_MOC_LITERAL(7, 122, 8), // "domainID"
QT_MOC_LITERAL(8, 131, 39), // "possibleDomainChangeRequiredV..."
QT_MOC_LITERAL(9, 171, 17), // "iceServerHostname"
QT_MOC_LITERAL(10, 189, 22), // "locationChangeRequired"
QT_MOC_LITERAL(11, 212, 9), // "glm::vec3"
QT_MOC_LITERAL(12, 222, 11), // "newPosition"
QT_MOC_LITERAL(13, 234, 20), // "hasOrientationChange"
QT_MOC_LITERAL(14, 255, 9), // "glm::quat"
QT_MOC_LITERAL(15, 265, 14), // "newOrientation"
QT_MOC_LITERAL(16, 280, 18), // "shouldFaceLocation"
QT_MOC_LITERAL(17, 299, 18), // "pathChangeRequired"
QT_MOC_LITERAL(18, 318, 7), // "newPath"
QT_MOC_LITERAL(19, 326, 11), // "hostChanged"
QT_MOC_LITERAL(20, 338, 7), // "newHost"
QT_MOC_LITERAL(21, 346, 14), // "goBackPossible"
QT_MOC_LITERAL(22, 361, 10), // "isPossible"
QT_MOC_LITERAL(23, 372, 17), // "goForwardPossible"
QT_MOC_LITERAL(24, 390, 18), // "handleLookupString"
QT_MOC_LITERAL(25, 409, 12), // "lookupString"
QT_MOC_LITERAL(26, 422, 15), // "fromSuggestions"
QT_MOC_LITERAL(27, 438, 20), // "goToViewpointForPath"
QT_MOC_LITERAL(28, 459, 15), // "viewpointString"
QT_MOC_LITERAL(29, 475, 10), // "pathString"
QT_MOC_LITERAL(30, 486, 6), // "goBack"
QT_MOC_LITERAL(31, 493, 9), // "goForward"
QT_MOC_LITERAL(32, 503, 16), // "goToLocalSandbox"
QT_MOC_LITERAL(33, 520, 4), // "path"
QT_MOC_LITERAL(34, 525, 13), // "LookupTrigger"
QT_MOC_LITERAL(35, 539, 7), // "trigger"
QT_MOC_LITERAL(36, 547, 9), // "goToEntry"
QT_MOC_LITERAL(37, 557, 8), // "goToUser"
QT_MOC_LITERAL(38, 566, 8), // "username"
QT_MOC_LITERAL(39, 575, 22), // "shouldMatchOrientation"
QT_MOC_LITERAL(40, 598, 15), // "goToLastAddress"
QT_MOC_LITERAL(41, 614, 9), // "canGoBack"
QT_MOC_LITERAL(42, 624, 21), // "refreshPreviousLookup"
QT_MOC_LITERAL(43, 646, 19), // "storeCurrentAddress"
QT_MOC_LITERAL(44, 666, 11), // "copyAddress"
QT_MOC_LITERAL(45, 678, 8), // "copyPath"
QT_MOC_LITERAL(46, 687, 30), // "lookupShareableNameForDomainID"
QT_MOC_LITERAL(47, 718, 17), // "handleAPIResponse"
QT_MOC_LITERAL(48, 736, 14), // "QNetworkReply*"
QT_MOC_LITERAL(49, 751, 12), // "requestReply"
QT_MOC_LITERAL(50, 764, 14), // "handleAPIError"
QT_MOC_LITERAL(51, 779, 10), // "errorReply"
QT_MOC_LITERAL(52, 790, 30), // "handleShareableNameAPIResponse"
QT_MOC_LITERAL(53, 821, 11), // "isConnected"
QT_MOC_LITERAL(54, 833, 4), // "href"
QT_MOC_LITERAL(55, 838, 8), // "protocol"
QT_MOC_LITERAL(56, 847, 8), // "hostname"
QT_MOC_LITERAL(57, 856, 8), // "pathname"
QT_MOC_LITERAL(58, 865, 9) // "placename"

    },
    "AddressManager\0lookupResultsFinished\0"
    "\0lookupResultIsOffline\0lookupResultIsNotFound\0"
    "possibleDomainChangeRequired\0domainURL\0"
    "domainID\0possibleDomainChangeRequiredViaICEForID\0"
    "iceServerHostname\0locationChangeRequired\0"
    "glm::vec3\0newPosition\0hasOrientationChange\0"
    "glm::quat\0newOrientation\0shouldFaceLocation\0"
    "pathChangeRequired\0newPath\0hostChanged\0"
    "newHost\0goBackPossible\0isPossible\0"
    "goForwardPossible\0handleLookupString\0"
    "lookupString\0fromSuggestions\0"
    "goToViewpointForPath\0viewpointString\0"
    "pathString\0goBack\0goForward\0"
    "goToLocalSandbox\0path\0LookupTrigger\0"
    "trigger\0goToEntry\0goToUser\0username\0"
    "shouldMatchOrientation\0goToLastAddress\0"
    "canGoBack\0refreshPreviousLookup\0"
    "storeCurrentAddress\0copyAddress\0"
    "copyPath\0lookupShareableNameForDomainID\0"
    "handleAPIResponse\0QNetworkReply*\0"
    "requestReply\0handleAPIError\0errorReply\0"
    "handleShareableNameAPIResponse\0"
    "isConnected\0href\0protocol\0hostname\0"
    "pathname\0placename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddressManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       7,  262, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    0,  176,    2, 0x06 /* Public */,
       5,    2,  177,    2, 0x06 /* Public */,
       8,    2,  182,    2, 0x06 /* Public */,
      10,    4,  187,    2, 0x06 /* Public */,
      17,    1,  196,    2, 0x06 /* Public */,
      19,    1,  199,    2, 0x06 /* Public */,
      21,    1,  202,    2, 0x06 /* Public */,
      23,    1,  205,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      24,    2,  208,    2, 0x0a /* Public */,
      24,    1,  213,    2, 0x2a /* Public | MethodCloned */,
      27,    2,  216,    2, 0x0a /* Public */,
      30,    0,  221,    2, 0x0a /* Public */,
      31,    0,  222,    2, 0x0a /* Public */,
      32,    2,  223,    2, 0x0a /* Public */,
      32,    1,  228,    2, 0x2a /* Public | MethodCloned */,
      32,    0,  231,    2, 0x2a /* Public | MethodCloned */,
      36,    1,  232,    2, 0x0a /* Public */,
      36,    0,  235,    2, 0x2a /* Public | MethodCloned */,
      37,    2,  236,    2, 0x0a /* Public */,
      37,    1,  241,    2, 0x2a /* Public | MethodCloned */,
      40,    0,  244,    2, 0x0a /* Public */,
      41,    0,  245,    2, 0x0a /* Public */,
      42,    0,  246,    2, 0x0a /* Public */,
      43,    0,  247,    2, 0x0a /* Public */,
      44,    0,  248,    2, 0x0a /* Public */,
      45,    0,  249,    2, 0x0a /* Public */,
      46,    1,  250,    2, 0x0a /* Public */,
      47,    1,  253,    2, 0x08 /* Private */,
      50,    1,  256,    2, 0x08 /* Private */,
      52,    1,  259,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QUuid,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QUuid,    9,    7,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool, 0x80000000 | 14, QMetaType::Bool,   12,   13,   15,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   25,   26,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,   28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 34,   33,   35,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   38,   39,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,    7,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 48,   51,
    QMetaType::Void, 0x80000000 | 48,   49,

 // properties: name, type, flags
      53, QMetaType::Bool, 0x00095001,
      54, QMetaType::QUrl, 0x00095001,
      55, QMetaType::QString, 0x00095001,
      56, QMetaType::QString, 0x00095001,
      57, QMetaType::QString, 0x00095001,
      58, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095001,

       0        // eod
};

void AddressManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressManager *_t = static_cast<AddressManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lookupResultsFinished(); break;
        case 1: _t->lookupResultIsOffline(); break;
        case 2: _t->lookupResultIsNotFound(); break;
        case 3: _t->possibleDomainChangeRequired((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QUuid(*)>(_a[2]))); break;
        case 4: _t->possibleDomainChangeRequiredViaICEForID((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 5: _t->locationChangeRequired((*reinterpret_cast< const glm::vec3(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const glm::quat(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->pathChangeRequired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->hostChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->goBackPossible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->goForwardPossible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->handleLookupString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->handleLookupString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: { bool _r = _t->goToViewpointForPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->goBack(); break;
        case 14: _t->goForward(); break;
        case 15: _t->goToLocalSandbox((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< LookupTrigger(*)>(_a[2]))); break;
        case 16: _t->goToLocalSandbox((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->goToLocalSandbox(); break;
        case 18: _t->goToEntry((*reinterpret_cast< LookupTrigger(*)>(_a[1]))); break;
        case 19: _t->goToEntry(); break;
        case 20: _t->goToUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->goToUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->goToLastAddress(); break;
        case 23: { bool _r = _t->canGoBack();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: _t->refreshPreviousLookup(); break;
        case 25: _t->storeCurrentAddress(); break;
        case 26: _t->copyAddress(); break;
        case 27: _t->copyPath(); break;
        case 28: _t->lookupShareableNameForDomainID((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 29: _t->handleAPIResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 30: _t->handleAPIError((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 31: _t->handleShareableNameAPIResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddressManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::lookupResultsFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::lookupResultIsOffline)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::lookupResultIsNotFound)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(QUrl , QUuid );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::possibleDomainChangeRequired)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(const QString & , const QUuid & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::possibleDomainChangeRequiredViaICEForID)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(const glm::vec3 & , bool , const glm::quat & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::locationChangeRequired)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::pathChangeRequired)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::hostChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::goBackPossible)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AddressManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddressManager::goForwardPossible)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AddressManager *_t = static_cast<AddressManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->currentShareableAddress(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getProtocol(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getHost(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->currentPath(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getPlaceName(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getDomainID(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AddressManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AddressManager.data,
      qt_meta_data_AddressManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AddressManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddressManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddressManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AddressManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AddressManager::lookupResultsFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AddressManager::lookupResultIsOffline()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AddressManager::lookupResultIsNotFound()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AddressManager::possibleDomainChangeRequired(QUrl _t1, QUuid _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AddressManager::possibleDomainChangeRequiredViaICEForID(const QString & _t1, const QUuid & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AddressManager::locationChangeRequired(const glm::vec3 & _t1, bool _t2, const glm::quat & _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AddressManager::pathChangeRequired(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AddressManager::hostChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AddressManager::goBackPossible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AddressManager::goForwardPossible(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
