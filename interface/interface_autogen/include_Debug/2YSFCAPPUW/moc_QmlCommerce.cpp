/****************************************************************************
** Meta object code from reading C++ file 'QmlCommerce.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/commerce/QmlCommerce.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlCommerce.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlCommerce_t {
    QByteArrayData data[89];
    char stringdata0[1268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlCommerce_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlCommerce_t qt_meta_stringdata_QmlCommerce = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QmlCommerce"
QT_MOC_LITERAL(1, 12, 18), // "walletStatusResult"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "walletStatus"
QT_MOC_LITERAL(4, 45, 17), // "loginStatusResult"
QT_MOC_LITERAL(5, 63, 10), // "isLoggedIn"
QT_MOC_LITERAL(6, 74, 25), // "keyFilePathIfExistsResult"
QT_MOC_LITERAL(7, 100, 4), // "path"
QT_MOC_LITERAL(8, 105, 19), // "securityImageResult"
QT_MOC_LITERAL(9, 125, 6), // "exists"
QT_MOC_LITERAL(10, 132, 31), // "walletAuthenticatedStatusResult"
QT_MOC_LITERAL(11, 164, 15), // "isAuthenticated"
QT_MOC_LITERAL(12, 180, 28), // "changePassphraseStatusResult"
QT_MOC_LITERAL(13, 209, 13), // "changeSuccess"
QT_MOC_LITERAL(14, 223, 9), // "buyResult"
QT_MOC_LITERAL(15, 233, 6), // "result"
QT_MOC_LITERAL(16, 240, 13), // "balanceResult"
QT_MOC_LITERAL(17, 254, 15), // "inventoryResult"
QT_MOC_LITERAL(18, 270, 13), // "historyResult"
QT_MOC_LITERAL(19, 284, 13), // "accountResult"
QT_MOC_LITERAL(20, 298, 21), // "certificateInfoResult"
QT_MOC_LITERAL(21, 320, 18), // "alreadyOwnedResult"
QT_MOC_LITERAL(22, 339, 22), // "availableUpdatesResult"
QT_MOC_LITERAL(23, 362, 16), // "updateItemResult"
QT_MOC_LITERAL(24, 379, 23), // "updateCertificateStatus"
QT_MOC_LITERAL(25, 403, 6), // "certID"
QT_MOC_LITERAL(26, 410, 10), // "certStatus"
QT_MOC_LITERAL(27, 421, 25), // "transferAssetToNodeResult"
QT_MOC_LITERAL(28, 447, 29), // "transferAssetToUsernameResult"
QT_MOC_LITERAL(29, 477, 17), // "contentSetChanged"
QT_MOC_LITERAL(30, 495, 14), // "contentSetHref"
QT_MOC_LITERAL(31, 510, 12), // "appInstalled"
QT_MOC_LITERAL(32, 523, 5), // "appID"
QT_MOC_LITERAL(33, 529, 14), // "appUninstalled"
QT_MOC_LITERAL(34, 544, 15), // "getWalletStatus"
QT_MOC_LITERAL(35, 560, 14), // "getLoginStatus"
QT_MOC_LITERAL(36, 575, 22), // "getKeyFilePathIfExists"
QT_MOC_LITERAL(37, 598, 16), // "getSecurityImage"
QT_MOC_LITERAL(38, 615, 28), // "getWalletAuthenticatedStatus"
QT_MOC_LITERAL(39, 644, 15), // "copyKeyFileFrom"
QT_MOC_LITERAL(40, 660, 8), // "pathname"
QT_MOC_LITERAL(41, 669, 19), // "chooseSecurityImage"
QT_MOC_LITERAL(42, 689, 9), // "imageFile"
QT_MOC_LITERAL(43, 699, 13), // "setPassphrase"
QT_MOC_LITERAL(44, 713, 10), // "passphrase"
QT_MOC_LITERAL(45, 724, 16), // "changePassphrase"
QT_MOC_LITERAL(46, 741, 13), // "oldPassphrase"
QT_MOC_LITERAL(47, 755, 13), // "newPassphrase"
QT_MOC_LITERAL(48, 769, 12), // "setSoftReset"
QT_MOC_LITERAL(49, 782, 11), // "clearWallet"
QT_MOC_LITERAL(50, 794, 3), // "buy"
QT_MOC_LITERAL(51, 798, 7), // "assetId"
QT_MOC_LITERAL(52, 806, 4), // "cost"
QT_MOC_LITERAL(53, 811, 17), // "controlledFailure"
QT_MOC_LITERAL(54, 829, 7), // "balance"
QT_MOC_LITERAL(55, 837, 9), // "inventory"
QT_MOC_LITERAL(56, 847, 13), // "editionFilter"
QT_MOC_LITERAL(57, 861, 10), // "typeFilter"
QT_MOC_LITERAL(58, 872, 11), // "titleFilter"
QT_MOC_LITERAL(59, 884, 4), // "page"
QT_MOC_LITERAL(60, 889, 7), // "perPage"
QT_MOC_LITERAL(61, 897, 7), // "history"
QT_MOC_LITERAL(62, 905, 10), // "pageNumber"
QT_MOC_LITERAL(63, 916, 12), // "itemsPerPage"
QT_MOC_LITERAL(64, 929, 15), // "generateKeyPair"
QT_MOC_LITERAL(65, 945, 7), // "account"
QT_MOC_LITERAL(66, 953, 15), // "certificateInfo"
QT_MOC_LITERAL(67, 969, 13), // "certificateId"
QT_MOC_LITERAL(68, 983, 12), // "alreadyOwned"
QT_MOC_LITERAL(69, 996, 13), // "marketplaceId"
QT_MOC_LITERAL(70, 1010, 19), // "transferAssetToNode"
QT_MOC_LITERAL(71, 1030, 6), // "nodeID"
QT_MOC_LITERAL(72, 1037, 13), // "certificateID"
QT_MOC_LITERAL(73, 1051, 6), // "amount"
QT_MOC_LITERAL(74, 1058, 15), // "optionalMessage"
QT_MOC_LITERAL(75, 1074, 23), // "transferAssetToUsername"
QT_MOC_LITERAL(76, 1098, 8), // "username"
QT_MOC_LITERAL(77, 1107, 17), // "replaceContentSet"
QT_MOC_LITERAL(78, 1125, 8), // "itemHref"
QT_MOC_LITERAL(79, 1134, 16), // "getInstalledApps"
QT_MOC_LITERAL(80, 1151, 18), // "justInstalledAppID"
QT_MOC_LITERAL(81, 1170, 10), // "installApp"
QT_MOC_LITERAL(82, 1181, 7), // "appHref"
QT_MOC_LITERAL(83, 1189, 19), // "alsoOpenImmediately"
QT_MOC_LITERAL(84, 1209, 12), // "uninstallApp"
QT_MOC_LITERAL(85, 1222, 7), // "openApp"
QT_MOC_LITERAL(86, 1230, 19), // "getAvailableUpdates"
QT_MOC_LITERAL(87, 1250, 6), // "itemId"
QT_MOC_LITERAL(88, 1257, 10) // "updateItem"

    },
    "QmlCommerce\0walletStatusResult\0\0"
    "walletStatus\0loginStatusResult\0"
    "isLoggedIn\0keyFilePathIfExistsResult\0"
    "path\0securityImageResult\0exists\0"
    "walletAuthenticatedStatusResult\0"
    "isAuthenticated\0changePassphraseStatusResult\0"
    "changeSuccess\0buyResult\0result\0"
    "balanceResult\0inventoryResult\0"
    "historyResult\0accountResult\0"
    "certificateInfoResult\0alreadyOwnedResult\0"
    "availableUpdatesResult\0updateItemResult\0"
    "updateCertificateStatus\0certID\0"
    "certStatus\0transferAssetToNodeResult\0"
    "transferAssetToUsernameResult\0"
    "contentSetChanged\0contentSetHref\0"
    "appInstalled\0appID\0appUninstalled\0"
    "getWalletStatus\0getLoginStatus\0"
    "getKeyFilePathIfExists\0getSecurityImage\0"
    "getWalletAuthenticatedStatus\0"
    "copyKeyFileFrom\0pathname\0chooseSecurityImage\0"
    "imageFile\0setPassphrase\0passphrase\0"
    "changePassphrase\0oldPassphrase\0"
    "newPassphrase\0setSoftReset\0clearWallet\0"
    "buy\0assetId\0cost\0controlledFailure\0"
    "balance\0inventory\0editionFilter\0"
    "typeFilter\0titleFilter\0page\0perPage\0"
    "history\0pageNumber\0itemsPerPage\0"
    "generateKeyPair\0account\0certificateInfo\0"
    "certificateId\0alreadyOwned\0marketplaceId\0"
    "transferAssetToNode\0nodeID\0certificateID\0"
    "amount\0optionalMessage\0transferAssetToUsername\0"
    "username\0replaceContentSet\0itemHref\0"
    "getInstalledApps\0justInstalledAppID\0"
    "installApp\0appHref\0alsoOpenImmediately\0"
    "uninstallApp\0openApp\0getAvailableUpdates\0"
    "itemId\0updateItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlCommerce[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  319,    2, 0x06 /* Public */,
       4,    1,  322,    2, 0x06 /* Public */,
       6,    1,  325,    2, 0x06 /* Public */,
       8,    1,  328,    2, 0x06 /* Public */,
      10,    1,  331,    2, 0x06 /* Public */,
      12,    1,  334,    2, 0x06 /* Public */,
      14,    1,  337,    2, 0x06 /* Public */,
      16,    1,  340,    2, 0x06 /* Public */,
      17,    1,  343,    2, 0x06 /* Public */,
      18,    1,  346,    2, 0x06 /* Public */,
      19,    1,  349,    2, 0x06 /* Public */,
      20,    1,  352,    2, 0x06 /* Public */,
      21,    1,  355,    2, 0x06 /* Public */,
      22,    1,  358,    2, 0x06 /* Public */,
      23,    1,  361,    2, 0x06 /* Public */,
      24,    2,  364,    2, 0x06 /* Public */,
      27,    1,  369,    2, 0x06 /* Public */,
      28,    1,  372,    2, 0x06 /* Public */,
      29,    1,  375,    2, 0x06 /* Public */,
      31,    1,  378,    2, 0x06 /* Public */,
      33,    1,  381,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      34,    0,  384,    2, 0x01 /* Protected */,
      35,    0,  385,    2, 0x01 /* Protected */,
      36,    0,  386,    2, 0x01 /* Protected */,
      37,    0,  387,    2, 0x01 /* Protected */,
      38,    0,  388,    2, 0x01 /* Protected */,
      39,    1,  389,    2, 0x01 /* Protected */,
      41,    1,  392,    2, 0x01 /* Protected */,
      43,    1,  395,    2, 0x01 /* Protected */,
      45,    2,  398,    2, 0x01 /* Protected */,
      48,    0,  403,    2, 0x01 /* Protected */,
      49,    0,  404,    2, 0x01 /* Protected */,
      50,    3,  405,    2, 0x01 /* Protected */,
      50,    2,  412,    2, 0x21 /* Protected | MethodCloned */,
      54,    0,  417,    2, 0x01 /* Protected */,
      55,    5,  418,    2, 0x01 /* Protected */,
      55,    4,  429,    2, 0x21 /* Protected | MethodCloned */,
      55,    3,  438,    2, 0x21 /* Protected | MethodCloned */,
      55,    2,  445,    2, 0x21 /* Protected | MethodCloned */,
      55,    1,  450,    2, 0x21 /* Protected | MethodCloned */,
      55,    0,  453,    2, 0x21 /* Protected | MethodCloned */,
      61,    2,  454,    2, 0x01 /* Protected */,
      61,    1,  459,    2, 0x21 /* Protected | MethodCloned */,
      64,    0,  462,    2, 0x01 /* Protected */,
      65,    0,  463,    2, 0x01 /* Protected */,
      66,    1,  464,    2, 0x01 /* Protected */,
      68,    1,  467,    2, 0x01 /* Protected */,
      70,    4,  470,    2, 0x01 /* Protected */,
      75,    4,  479,    2, 0x01 /* Protected */,
      77,    2,  488,    2, 0x01 /* Protected */,
      79,    1,  493,    2, 0x01 /* Protected */,
      79,    0,  496,    2, 0x21 /* Protected | MethodCloned */,
      81,    2,  497,    2, 0x01 /* Protected */,
      81,    1,  502,    2, 0x21 /* Protected | MethodCloned */,
      84,    1,  505,    2, 0x01 /* Protected */,
      85,    1,  508,    2, 0x01 /* Protected */,
      86,    3,  511,    2, 0x01 /* Protected */,
      86,    2,  518,    2, 0x21 /* Protected | MethodCloned */,
      86,    1,  523,    2, 0x21 /* Protected | MethodCloned */,
      86,    0,  526,    2, 0x21 /* Protected | MethodCloned */,
      88,    1,  527,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,   25,   26,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   32,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   46,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,   51,   52,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   51,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   56,   57,   58,   59,   60,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   56,   57,   58,   59,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   56,   57,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   56,   57,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   62,   63,
    QMetaType::Void, QMetaType::Int,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   67,
    QMetaType::Void, QMetaType::QString,   69,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   71,   72,   73,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   76,   72,   73,   74,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   78,   72,
    QMetaType::QString, QMetaType::QString,   80,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,   82,   83,
    QMetaType::Bool, QMetaType::QString,   82,
    QMetaType::Bool, QMetaType::QString,   82,
    QMetaType::Bool, QMetaType::QString,   82,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   87,   62,   63,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   87,   62,
    QMetaType::Void, QMetaType::QString,   87,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   67,

       0        // eod
};

void QmlCommerce::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlCommerce *_t = static_cast<QmlCommerce *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletStatusResult((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 1: _t->loginStatusResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->keyFilePathIfExistsResult((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->securityImageResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->walletAuthenticatedStatusResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->changePassphraseStatusResult((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->buyResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 7: _t->balanceResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 8: _t->inventoryResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 9: _t->historyResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 10: _t->accountResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 11: _t->certificateInfoResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 12: _t->alreadyOwnedResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 13: _t->availableUpdatesResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 14: _t->updateItemResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 15: _t->updateCertificateStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 16: _t->transferAssetToNodeResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 17: _t->transferAssetToUsernameResult((*reinterpret_cast< QJsonObject(*)>(_a[1]))); break;
        case 18: _t->contentSetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->appInstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->appUninstalled((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->getWalletStatus(); break;
        case 22: _t->getLoginStatus(); break;
        case 23: _t->getKeyFilePathIfExists(); break;
        case 24: _t->getSecurityImage(); break;
        case 25: _t->getWalletAuthenticatedStatus(); break;
        case 26: { bool _r = _t->copyKeyFileFrom((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->chooseSecurityImage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->setPassphrase((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->changePassphrase((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: _t->setSoftReset(); break;
        case 31: _t->clearWallet(); break;
        case 32: _t->buy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 33: _t->buy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 34: _t->balance(); break;
        case 35: _t->inventory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4])),(*reinterpret_cast< const int(*)>(_a[5]))); break;
        case 36: _t->inventory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const int(*)>(_a[4]))); break;
        case 37: _t->inventory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 38: _t->inventory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 39: _t->inventory((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->inventory(); break;
        case 41: _t->history((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 42: _t->history((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 43: _t->generateKeyPair(); break;
        case 44: _t->account(); break;
        case 45: _t->certificateInfo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->alreadyOwned((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->transferAssetToNode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 48: _t->transferAssetToUsername((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 49: _t->replaceContentSet((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 50: { QString _r = _t->getInstalledApps((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: { QString _r = _t->getInstalledApps();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->installApp((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { bool _r = _t->installApp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: { bool _r = _t->uninstallApp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 55: { bool _r = _t->openApp((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->getAvailableUpdates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 57: _t->getAvailableUpdates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 58: _t->getAvailableUpdates((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 59: _t->getAvailableUpdates(); break;
        case 60: _t->updateItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QmlCommerce::*)(uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::walletStatusResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::loginStatusResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::keyFilePathIfExistsResult)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::securityImageResult)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::walletAuthenticatedStatusResult)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::changePassphraseStatusResult)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::buyResult)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::balanceResult)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::inventoryResult)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::historyResult)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::accountResult)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::certificateInfoResult)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::alreadyOwnedResult)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::availableUpdatesResult)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::updateItemResult)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(const QString & , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::updateCertificateStatus)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::transferAssetToNodeResult)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::transferAssetToUsernameResult)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::contentSetChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::appInstalled)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QmlCommerce::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlCommerce::appUninstalled)) {
                *result = 20;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlCommerce::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QmlCommerce.data,
      qt_meta_data_QmlCommerce,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlCommerce::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlCommerce::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlCommerce.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlCommerce::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 61)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 61;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 61)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void QmlCommerce::walletStatusResult(uint _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QmlCommerce::loginStatusResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QmlCommerce::keyFilePathIfExistsResult(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QmlCommerce::securityImageResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QmlCommerce::walletAuthenticatedStatusResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QmlCommerce::changePassphraseStatusResult(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QmlCommerce::buyResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QmlCommerce::balanceResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QmlCommerce::inventoryResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QmlCommerce::historyResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QmlCommerce::accountResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QmlCommerce::certificateInfoResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QmlCommerce::alreadyOwnedResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QmlCommerce::availableUpdatesResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QmlCommerce::updateItemResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QmlCommerce::updateCertificateStatus(const QString & _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QmlCommerce::transferAssetToNodeResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QmlCommerce::transferAssetToUsernameResult(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QmlCommerce::contentSetChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QmlCommerce::appInstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QmlCommerce::appUninstalled(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
