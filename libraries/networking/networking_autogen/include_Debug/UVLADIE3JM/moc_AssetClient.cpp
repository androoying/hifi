/****************************************************************************
** Meta object code from reading C++ file 'AssetClient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AssetClient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetClient_t {
    QByteArrayData data[55];
    char stringdata0[901];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetClient_t qt_meta_stringdata_AssetClient = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AssetClient"
QT_MOC_LITERAL(1, 12, 11), // "initCaching"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "cacheInfoRequest"
QT_MOC_LITERAL(4, 42, 8), // "reciever"
QT_MOC_LITERAL(5, 51, 4), // "slot"
QT_MOC_LITERAL(6, 56, 21), // "cacheInfoRequestAsync"
QT_MOC_LITERAL(7, 78, 20), // "MiniPromise::Promise"
QT_MOC_LITERAL(8, 99, 8), // "deferred"
QT_MOC_LITERAL(9, 108, 19), // "queryCacheMetaAsync"
QT_MOC_LITERAL(10, 128, 3), // "url"
QT_MOC_LITERAL(11, 132, 18), // "loadFromCacheAsync"
QT_MOC_LITERAL(12, 151, 16), // "saveToCacheAsync"
QT_MOC_LITERAL(13, 168, 4), // "data"
QT_MOC_LITERAL(14, 173, 8), // "metadata"
QT_MOC_LITERAL(15, 182, 10), // "clearCache"
QT_MOC_LITERAL(16, 193, 32), // "handleAssetMappingOperationReply"
QT_MOC_LITERAL(17, 226, 31), // "QSharedPointer<ReceivedMessage>"
QT_MOC_LITERAL(18, 258, 7), // "message"
QT_MOC_LITERAL(19, 266, 17), // "SharedNodePointer"
QT_MOC_LITERAL(20, 284, 10), // "senderNode"
QT_MOC_LITERAL(21, 295, 23), // "handleAssetGetInfoReply"
QT_MOC_LITERAL(22, 319, 19), // "handleAssetGetReply"
QT_MOC_LITERAL(23, 339, 22), // "handleAssetUploadReply"
QT_MOC_LITERAL(24, 362, 16), // "handleNodeKilled"
QT_MOC_LITERAL(25, 379, 4), // "node"
QT_MOC_LITERAL(26, 384, 31), // "handleNodeClientConnectionReset"
QT_MOC_LITERAL(27, 416, 23), // "createGetMappingRequest"
QT_MOC_LITERAL(28, 440, 18), // "GetMappingRequest*"
QT_MOC_LITERAL(29, 459, 21), // "AssetUtils::AssetPath"
QT_MOC_LITERAL(30, 481, 4), // "path"
QT_MOC_LITERAL(31, 486, 27), // "createGetAllMappingsRequest"
QT_MOC_LITERAL(32, 514, 22), // "GetAllMappingsRequest*"
QT_MOC_LITERAL(33, 537, 27), // "createDeleteMappingsRequest"
QT_MOC_LITERAL(34, 565, 22), // "DeleteMappingsRequest*"
QT_MOC_LITERAL(35, 588, 25), // "AssetUtils::AssetPathList"
QT_MOC_LITERAL(36, 614, 5), // "paths"
QT_MOC_LITERAL(37, 620, 23), // "createSetMappingRequest"
QT_MOC_LITERAL(38, 644, 18), // "SetMappingRequest*"
QT_MOC_LITERAL(39, 663, 21), // "AssetUtils::AssetHash"
QT_MOC_LITERAL(40, 685, 4), // "hash"
QT_MOC_LITERAL(41, 690, 26), // "createRenameMappingRequest"
QT_MOC_LITERAL(42, 717, 21), // "RenameMappingRequest*"
QT_MOC_LITERAL(43, 739, 7), // "oldPath"
QT_MOC_LITERAL(44, 747, 7), // "newPath"
QT_MOC_LITERAL(45, 755, 29), // "createSetBakingEnabledRequest"
QT_MOC_LITERAL(46, 785, 24), // "SetBakingEnabledRequest*"
QT_MOC_LITERAL(47, 810, 7), // "enabled"
QT_MOC_LITERAL(48, 818, 13), // "createRequest"
QT_MOC_LITERAL(49, 832, 13), // "AssetRequest*"
QT_MOC_LITERAL(50, 846, 9), // "ByteRange"
QT_MOC_LITERAL(51, 856, 9), // "byteRange"
QT_MOC_LITERAL(52, 866, 12), // "createUpload"
QT_MOC_LITERAL(53, 879, 12), // "AssetUpload*"
QT_MOC_LITERAL(54, 892, 8) // "filename"

    },
    "AssetClient\0initCaching\0\0cacheInfoRequest\0"
    "reciever\0slot\0cacheInfoRequestAsync\0"
    "MiniPromise::Promise\0deferred\0"
    "queryCacheMetaAsync\0url\0loadFromCacheAsync\0"
    "saveToCacheAsync\0data\0metadata\0"
    "clearCache\0handleAssetMappingOperationReply\0"
    "QSharedPointer<ReceivedMessage>\0message\0"
    "SharedNodePointer\0senderNode\0"
    "handleAssetGetInfoReply\0handleAssetGetReply\0"
    "handleAssetUploadReply\0handleNodeKilled\0"
    "node\0handleNodeClientConnectionReset\0"
    "createGetMappingRequest\0GetMappingRequest*\0"
    "AssetUtils::AssetPath\0path\0"
    "createGetAllMappingsRequest\0"
    "GetAllMappingsRequest*\0"
    "createDeleteMappingsRequest\0"
    "DeleteMappingsRequest*\0AssetUtils::AssetPathList\0"
    "paths\0createSetMappingRequest\0"
    "SetMappingRequest*\0AssetUtils::AssetHash\0"
    "hash\0createRenameMappingRequest\0"
    "RenameMappingRequest*\0oldPath\0newPath\0"
    "createSetBakingEnabledRequest\0"
    "SetBakingEnabledRequest*\0enabled\0"
    "createRequest\0AssetRequest*\0ByteRange\0"
    "byteRange\0createUpload\0AssetUpload*\0"
    "filename"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetClient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x0a /* Public */,
       3,    2,  155,    2, 0x0a /* Public */,
       6,    1,  160,    2, 0x0a /* Public */,
       6,    0,  163,    2, 0x2a /* Public | MethodCloned */,
       9,    2,  164,    2, 0x0a /* Public */,
       9,    1,  169,    2, 0x2a /* Public | MethodCloned */,
      11,    2,  172,    2, 0x0a /* Public */,
      11,    1,  177,    2, 0x2a /* Public | MethodCloned */,
      12,    4,  180,    2, 0x0a /* Public */,
      12,    3,  189,    2, 0x2a /* Public | MethodCloned */,
      12,    2,  196,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  201,    2, 0x0a /* Public */,
      16,    2,  202,    2, 0x08 /* Private */,
      21,    2,  207,    2, 0x08 /* Private */,
      22,    2,  212,    2, 0x08 /* Private */,
      23,    2,  217,    2, 0x08 /* Private */,
      24,    1,  222,    2, 0x08 /* Private */,
      26,    1,  225,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      27,    1,  228,    2, 0x02 /* Public */,
      31,    0,  231,    2, 0x02 /* Public */,
      33,    1,  232,    2, 0x02 /* Public */,
      37,    2,  235,    2, 0x02 /* Public */,
      41,    2,  240,    2, 0x02 /* Public */,
      45,    2,  245,    2, 0x02 /* Public */,
      48,    2,  250,    2, 0x02 /* Public */,
      48,    1,  255,    2, 0x22 /* Public | MethodCloned */,
      52,    1,  258,    2, 0x02 /* Public */,
      52,    1,  261,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QString,    4,    5,
    0x80000000 | 7, 0x80000000 | 7,    8,
    0x80000000 | 7,
    0x80000000 | 7, QMetaType::QUrl, 0x80000000 | 7,   10,    8,
    0x80000000 | 7, QMetaType::QUrl,   10,
    0x80000000 | 7, QMetaType::QUrl, 0x80000000 | 7,   10,    8,
    0x80000000 | 7, QMetaType::QUrl,   10,
    0x80000000 | 7, QMetaType::QUrl, QMetaType::QByteArray, QMetaType::QVariantMap, 0x80000000 | 7,   10,   13,   14,    8,
    0x80000000 | 7, QMetaType::QUrl, QMetaType::QByteArray, QMetaType::QVariantMap,   10,   13,   14,
    0x80000000 | 7, QMetaType::QUrl, QMetaType::QByteArray,   10,   13,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 19,   25,
    QMetaType::Void, 0x80000000 | 19,   25,

 // methods: parameters
    0x80000000 | 28, 0x80000000 | 29,   30,
    0x80000000 | 32,
    0x80000000 | 34, 0x80000000 | 35,   36,
    0x80000000 | 38, 0x80000000 | 29, 0x80000000 | 39,   30,   40,
    0x80000000 | 42, 0x80000000 | 29, 0x80000000 | 29,   43,   44,
    0x80000000 | 46, 0x80000000 | 35, QMetaType::Bool,   30,   47,
    0x80000000 | 49, 0x80000000 | 39, 0x80000000 | 50,   40,   51,
    0x80000000 | 49, 0x80000000 | 39,   40,
    0x80000000 | 53, QMetaType::QString,   54,
    0x80000000 | 53, QMetaType::QByteArray,   13,

       0        // eod
};

void AssetClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetClient *_t = static_cast<AssetClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initCaching(); break;
        case 1: _t->cacheInfoRequest((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: { MiniPromise::Promise _r = _t->cacheInfoRequestAsync((*reinterpret_cast< MiniPromise::Promise(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 3: { MiniPromise::Promise _r = _t->cacheInfoRequestAsync();
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 4: { MiniPromise::Promise _r = _t->queryCacheMetaAsync((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< MiniPromise::Promise(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 5: { MiniPromise::Promise _r = _t->queryCacheMetaAsync((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 6: { MiniPromise::Promise _r = _t->loadFromCacheAsync((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< MiniPromise::Promise(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 7: { MiniPromise::Promise _r = _t->loadFromCacheAsync((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 8: { MiniPromise::Promise _r = _t->saveToCacheAsync((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])),(*reinterpret_cast< MiniPromise::Promise(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 9: { MiniPromise::Promise _r = _t->saveToCacheAsync((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< const QVariantMap(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 10: { MiniPromise::Promise _r = _t->saveToCacheAsync((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< MiniPromise::Promise*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->clearCache(); break;
        case 12: _t->handleAssetMappingOperationReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 13: _t->handleAssetGetInfoReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 14: _t->handleAssetGetReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 15: _t->handleAssetUploadReply((*reinterpret_cast< QSharedPointer<ReceivedMessage>(*)>(_a[1])),(*reinterpret_cast< SharedNodePointer(*)>(_a[2]))); break;
        case 16: _t->handleNodeKilled((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 17: _t->handleNodeClientConnectionReset((*reinterpret_cast< SharedNodePointer(*)>(_a[1]))); break;
        case 18: { GetMappingRequest* _r = _t->createGetMappingRequest((*reinterpret_cast< const AssetUtils::AssetPath(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GetMappingRequest**>(_a[0]) = std::move(_r); }  break;
        case 19: { GetAllMappingsRequest* _r = _t->createGetAllMappingsRequest();
            if (_a[0]) *reinterpret_cast< GetAllMappingsRequest**>(_a[0]) = std::move(_r); }  break;
        case 20: { DeleteMappingsRequest* _r = _t->createDeleteMappingsRequest((*reinterpret_cast< const AssetUtils::AssetPathList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeleteMappingsRequest**>(_a[0]) = std::move(_r); }  break;
        case 21: { SetMappingRequest* _r = _t->createSetMappingRequest((*reinterpret_cast< const AssetUtils::AssetPath(*)>(_a[1])),(*reinterpret_cast< const AssetUtils::AssetHash(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< SetMappingRequest**>(_a[0]) = std::move(_r); }  break;
        case 22: { RenameMappingRequest* _r = _t->createRenameMappingRequest((*reinterpret_cast< const AssetUtils::AssetPath(*)>(_a[1])),(*reinterpret_cast< const AssetUtils::AssetPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RenameMappingRequest**>(_a[0]) = std::move(_r); }  break;
        case 23: { SetBakingEnabledRequest* _r = _t->createSetBakingEnabledRequest((*reinterpret_cast< const AssetUtils::AssetPathList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< SetBakingEnabledRequest**>(_a[0]) = std::move(_r); }  break;
        case 24: { AssetRequest* _r = _t->createRequest((*reinterpret_cast< const AssetUtils::AssetHash(*)>(_a[1])),(*reinterpret_cast< const ByteRange(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< AssetRequest**>(_a[0]) = std::move(_r); }  break;
        case 25: { AssetRequest* _r = _t->createRequest((*reinterpret_cast< const AssetUtils::AssetHash(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AssetRequest**>(_a[0]) = std::move(_r); }  break;
        case 26: { AssetUpload* _r = _t->createUpload((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AssetUpload**>(_a[0]) = std::move(_r); }  break;
        case 27: { AssetUpload* _r = _t->createUpload((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AssetUpload**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MiniPromise::Promise >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<ReceivedMessage> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedNodePointer >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetClient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AssetClient.data,
      qt_meta_data_AssetClient,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssetClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetClient.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
