/****************************************************************************
** Meta object code from reading C++ file 'AccountManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AccountManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AccountManager_t {
    QByteArrayData data[60];
    char stringdata0[972];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccountManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccountManager_t qt_meta_stringdata_AccountManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AccountManager"
QT_MOC_LITERAL(1, 15, 12), // "authRequired"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "authEndpointChanged"
QT_MOC_LITERAL(4, 49, 15), // "usernameChanged"
QT_MOC_LITERAL(5, 65, 8), // "username"
QT_MOC_LITERAL(6, 74, 14), // "profileChanged"
QT_MOC_LITERAL(7, 89, 13), // "loginComplete"
QT_MOC_LITERAL(8, 103, 7), // "authURL"
QT_MOC_LITERAL(9, 111, 11), // "loginFailed"
QT_MOC_LITERAL(10, 123, 14), // "logoutComplete"
QT_MOC_LITERAL(11, 138, 10), // "newKeypair"
QT_MOC_LITERAL(12, 149, 22), // "limitedCommerceChanged"
QT_MOC_LITERAL(13, 172, 18), // "requestAccessToken"
QT_MOC_LITERAL(14, 191, 5), // "login"
QT_MOC_LITERAL(15, 197, 8), // "password"
QT_MOC_LITERAL(16, 206, 27), // "requestAccessTokenWithSteam"
QT_MOC_LITERAL(17, 234, 17), // "authSessionTicket"
QT_MOC_LITERAL(18, 252, 30), // "requestAccessTokenWithAuthCode"
QT_MOC_LITERAL(19, 283, 8), // "authCode"
QT_MOC_LITERAL(20, 292, 8), // "clientId"
QT_MOC_LITERAL(21, 301, 12), // "clientSecret"
QT_MOC_LITERAL(22, 314, 11), // "redirectUri"
QT_MOC_LITERAL(23, 326, 18), // "refreshAccessToken"
QT_MOC_LITERAL(24, 345, 26), // "requestAccessTokenFinished"
QT_MOC_LITERAL(25, 372, 26), // "refreshAccessTokenFinished"
QT_MOC_LITERAL(26, 399, 22), // "requestProfileFinished"
QT_MOC_LITERAL(27, 422, 23), // "refreshAccessTokenError"
QT_MOC_LITERAL(28, 446, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(29, 474, 5), // "error"
QT_MOC_LITERAL(30, 480, 19), // "requestProfileError"
QT_MOC_LITERAL(31, 500, 6), // "logout"
QT_MOC_LITERAL(32, 507, 22), // "generateNewUserKeypair"
QT_MOC_LITERAL(33, 530, 24), // "generateNewDomainKeypair"
QT_MOC_LITERAL(34, 555, 8), // "domainID"
QT_MOC_LITERAL(35, 564, 28), // "handleKeypairGenerationError"
QT_MOC_LITERAL(36, 593, 23), // "processGeneratedKeypair"
QT_MOC_LITERAL(37, 617, 9), // "publicKey"
QT_MOC_LITERAL(38, 627, 10), // "privateKey"
QT_MOC_LITERAL(39, 638, 24), // "publicKeyUploadSucceeded"
QT_MOC_LITERAL(40, 663, 14), // "QNetworkReply*"
QT_MOC_LITERAL(41, 678, 5), // "reply"
QT_MOC_LITERAL(42, 684, 21), // "publicKeyUploadFailed"
QT_MOC_LITERAL(43, 706, 18), // "generateNewKeypair"
QT_MOC_LITERAL(44, 725, 13), // "isUserKeypair"
QT_MOC_LITERAL(45, 739, 11), // "sendRequest"
QT_MOC_LITERAL(46, 751, 4), // "path"
QT_MOC_LITERAL(47, 756, 24), // "AccountManagerAuth::Type"
QT_MOC_LITERAL(48, 781, 8), // "authType"
QT_MOC_LITERAL(49, 790, 32), // "QNetworkAccessManager::Operation"
QT_MOC_LITERAL(50, 823, 9), // "operation"
QT_MOC_LITERAL(51, 833, 22), // "JSONCallbackParameters"
QT_MOC_LITERAL(52, 856, 14), // "callbackParams"
QT_MOC_LITERAL(53, 871, 13), // "dataByteArray"
QT_MOC_LITERAL(54, 885, 15), // "QHttpMultiPart*"
QT_MOC_LITERAL(55, 901, 13), // "dataMultiPart"
QT_MOC_LITERAL(56, 915, 11), // "propertyMap"
QT_MOC_LITERAL(57, 927, 9), // "QUrlQuery"
QT_MOC_LITERAL(58, 937, 5), // "query"
QT_MOC_LITERAL(59, 943, 28) // "checkAndSignalForAccessToken"

    },
    "AccountManager\0authRequired\0\0"
    "authEndpointChanged\0usernameChanged\0"
    "username\0profileChanged\0loginComplete\0"
    "authURL\0loginFailed\0logoutComplete\0"
    "newKeypair\0limitedCommerceChanged\0"
    "requestAccessToken\0login\0password\0"
    "requestAccessTokenWithSteam\0"
    "authSessionTicket\0requestAccessTokenWithAuthCode\0"
    "authCode\0clientId\0clientSecret\0"
    "redirectUri\0refreshAccessToken\0"
    "requestAccessTokenFinished\0"
    "refreshAccessTokenFinished\0"
    "requestProfileFinished\0refreshAccessTokenError\0"
    "QNetworkReply::NetworkError\0error\0"
    "requestProfileError\0logout\0"
    "generateNewUserKeypair\0generateNewDomainKeypair\0"
    "domainID\0handleKeypairGenerationError\0"
    "processGeneratedKeypair\0publicKey\0"
    "privateKey\0publicKeyUploadSucceeded\0"
    "QNetworkReply*\0reply\0publicKeyUploadFailed\0"
    "generateNewKeypair\0isUserKeypair\0"
    "sendRequest\0path\0AccountManagerAuth::Type\0"
    "authType\0QNetworkAccessManager::Operation\0"
    "operation\0JSONCallbackParameters\0"
    "callbackParams\0dataByteArray\0"
    "QHttpMultiPart*\0dataMultiPart\0propertyMap\0"
    "QUrlQuery\0query\0checkAndSignalForAccessToken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccountManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  194,    2, 0x06 /* Public */,
       3,    0,  195,    2, 0x06 /* Public */,
       4,    1,  196,    2, 0x06 /* Public */,
       6,    0,  199,    2, 0x06 /* Public */,
       7,    1,  200,    2, 0x06 /* Public */,
       9,    0,  203,    2, 0x06 /* Public */,
      10,    0,  204,    2, 0x06 /* Public */,
      11,    0,  205,    2, 0x06 /* Public */,
      12,    0,  206,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,  207,    2, 0x0a /* Public */,
      16,    1,  212,    2, 0x0a /* Public */,
      18,    4,  215,    2, 0x0a /* Public */,
      23,    0,  224,    2, 0x0a /* Public */,
      24,    0,  225,    2, 0x0a /* Public */,
      25,    0,  226,    2, 0x0a /* Public */,
      26,    0,  227,    2, 0x0a /* Public */,
      27,    1,  228,    2, 0x0a /* Public */,
      30,    1,  231,    2, 0x0a /* Public */,
      31,    0,  234,    2, 0x0a /* Public */,
      32,    0,  235,    2, 0x0a /* Public */,
      33,    1,  236,    2, 0x0a /* Public */,
      35,    0,  239,    2, 0x08 /* Private */,
      36,    2,  240,    2, 0x08 /* Private */,
      39,    1,  245,    2, 0x08 /* Private */,
      42,    1,  248,    2, 0x08 /* Private */,
      43,    2,  251,    2, 0x08 /* Private */,
      43,    1,  256,    2, 0x28 /* Private | MethodCloned */,
      43,    0,  259,    2, 0x28 /* Private | MethodCloned */,

 // methods: name, argc, parameters, tag, flags
      45,    8,  260,    2, 0x02 /* Public */,
      45,    7,  277,    2, 0x22 /* Public | MethodCloned */,
      45,    6,  292,    2, 0x22 /* Public | MethodCloned */,
      45,    5,  305,    2, 0x22 /* Public | MethodCloned */,
      45,    4,  316,    2, 0x22 /* Public | MethodCloned */,
      45,    3,  325,    2, 0x22 /* Public | MethodCloned */,
      45,    2,  332,    2, 0x22 /* Public | MethodCloned */,
      59,    0,  337,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   20,   21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUuid,   34,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,   37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::Bool, QMetaType::QUuid,   44,   34,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49, 0x80000000 | 51, QMetaType::QByteArray, 0x80000000 | 54, QMetaType::QVariantMap, 0x80000000 | 57,   46,   48,   50,   52,   53,   55,   56,   58,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49, 0x80000000 | 51, QMetaType::QByteArray, 0x80000000 | 54, QMetaType::QVariantMap,   46,   48,   50,   52,   53,   55,   56,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49, 0x80000000 | 51, QMetaType::QByteArray, 0x80000000 | 54,   46,   48,   50,   52,   53,   55,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49, 0x80000000 | 51, QMetaType::QByteArray,   46,   48,   50,   52,   53,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49, 0x80000000 | 51,   46,   48,   50,   52,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47, 0x80000000 | 49,   46,   48,   50,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,   46,   48,
    QMetaType::Bool,

       0        // eod
};

void AccountManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccountManager *_t = static_cast<AccountManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authRequired(); break;
        case 1: _t->authEndpointChanged(); break;
        case 2: _t->usernameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->profileChanged(); break;
        case 4: _t->loginComplete((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->loginFailed(); break;
        case 6: _t->logoutComplete(); break;
        case 7: _t->newKeypair(); break;
        case 8: _t->limitedCommerceChanged(); break;
        case 9: _t->requestAccessToken((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->requestAccessTokenWithSteam((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 11: _t->requestAccessTokenWithAuthCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 12: _t->refreshAccessToken(); break;
        case 13: _t->requestAccessTokenFinished(); break;
        case 14: _t->refreshAccessTokenFinished(); break;
        case 15: _t->requestProfileFinished(); break;
        case 16: _t->refreshAccessTokenError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 17: _t->requestProfileError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 18: _t->logout(); break;
        case 19: _t->generateNewUserKeypair(); break;
        case 20: _t->generateNewDomainKeypair((*reinterpret_cast< const QUuid(*)>(_a[1]))); break;
        case 21: _t->handleKeypairGenerationError(); break;
        case 22: _t->processGeneratedKeypair((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 23: _t->publicKeyUploadSucceeded((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 24: _t->publicKeyUploadFailed((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 25: _t->generateNewKeypair((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QUuid(*)>(_a[2]))); break;
        case 26: _t->generateNewKeypair((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->generateNewKeypair(); break;
        case 28: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3])),(*reinterpret_cast< const JSONCallbackParameters(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7])),(*reinterpret_cast< QUrlQuery(*)>(_a[8]))); break;
        case 29: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3])),(*reinterpret_cast< const JSONCallbackParameters(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7]))); break;
        case 30: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3])),(*reinterpret_cast< const JSONCallbackParameters(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5])),(*reinterpret_cast< QHttpMultiPart*(*)>(_a[6]))); break;
        case 31: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3])),(*reinterpret_cast< const JSONCallbackParameters(*)>(_a[4])),(*reinterpret_cast< const QByteArray(*)>(_a[5]))); break;
        case 32: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3])),(*reinterpret_cast< const JSONCallbackParameters(*)>(_a[4]))); break;
        case 33: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2])),(*reinterpret_cast< QNetworkAccessManager::Operation(*)>(_a[3]))); break;
        case 34: _t->sendRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< AccountManagerAuth::Type(*)>(_a[2]))); break;
        case 35: { bool _r = _t->checkAndSignalForAccessToken();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountManagerAuth::Type >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::authRequired)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::authEndpointChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::usernameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::profileChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::loginComplete)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::loginFailed)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::logoutComplete)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::newKeypair)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AccountManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountManager::limitedCommerceChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AccountManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AccountManager.data,
      qt_meta_data_AccountManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AccountManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AccountManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AccountManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void AccountManager::authRequired()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountManager::authEndpointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AccountManager::usernameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AccountManager::profileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void AccountManager::loginComplete(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AccountManager::loginFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void AccountManager::logoutComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void AccountManager::newKeypair()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void AccountManager::limitedCommerceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
