/****************************************************************************
** Meta object code from reading C++ file 'AssetMappingsScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/AssetMappingsScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetMappingsScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetMappingModel_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetMappingModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetMappingModel_t qt_meta_stringdata_AssetMappingModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AssetMappingModel"
QT_MOC_LITERAL(1, 18, 22), // "numPendingBakesChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "newCount"
QT_MOC_LITERAL(4, 51, 20), // "errorGettingMappings"
QT_MOC_LITERAL(5, 72, 11), // "errorString"
QT_MOC_LITERAL(6, 84, 7), // "updated"
QT_MOC_LITERAL(7, 92, 5), // "clear"
QT_MOC_LITERAL(8, 98, 7), // "refresh"
QT_MOC_LITERAL(9, 106, 18), // "autoRefreshEnabled"
QT_MOC_LITERAL(10, 125, 15) // "numPendingBakes"

    },
    "AssetMappingModel\0numPendingBakesChanged\0"
    "\0newCount\0errorGettingMappings\0"
    "errorString\0updated\0clear\0refresh\0"
    "autoRefreshEnabled\0numPendingBakes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetMappingModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   47,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void AssetMappingModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetMappingModel *_t = static_cast<AssetMappingModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numPendingBakesChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->errorGettingMappings((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updated(); break;
        case 3: _t->clear(); break;
        case 4: _t->refresh(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetMappingModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetMappingModel::numPendingBakesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetMappingModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetMappingModel::errorGettingMappings)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AssetMappingModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetMappingModel::updated)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AssetMappingModel *_t = static_cast<AssetMappingModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAutoRefreshEnabled(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getNumPendingBakes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        AssetMappingModel *_t = static_cast<AssetMappingModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoRefreshEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AssetMappingModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_AssetMappingModel.data,
      qt_meta_data_AssetMappingModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssetMappingModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetMappingModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetMappingModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int AssetMappingModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AssetMappingModel::numPendingBakesChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetMappingModel::errorGettingMappings(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AssetMappingModel::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_AssetMappingsScriptingInterface_t {
    QByteArrayData data[34];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetMappingsScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetMappingsScriptingInterface_t qt_meta_stringdata_AssetMappingsScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 31), // "AssetMappingsScriptingInterface"
QT_MOC_LITERAL(1, 32, 20), // "getAssetMappingModel"
QT_MOC_LITERAL(2, 53, 18), // "AssetMappingModel*"
QT_MOC_LITERAL(3, 72, 0), // ""
QT_MOC_LITERAL(4, 73, 13), // "getProxyModel"
QT_MOC_LITERAL(5, 87, 20), // "QAbstractProxyModel*"
QT_MOC_LITERAL(6, 108, 14), // "isKnownMapping"
QT_MOC_LITERAL(7, 123, 4), // "path"
QT_MOC_LITERAL(8, 128, 13), // "isKnownFolder"
QT_MOC_LITERAL(9, 142, 10), // "setMapping"
QT_MOC_LITERAL(10, 153, 4), // "hash"
QT_MOC_LITERAL(11, 158, 8), // "QJSValue"
QT_MOC_LITERAL(12, 167, 8), // "callback"
QT_MOC_LITERAL(13, 176, 10), // "getMapping"
QT_MOC_LITERAL(14, 187, 10), // "uploadFile"
QT_MOC_LITERAL(15, 198, 7), // "mapping"
QT_MOC_LITERAL(16, 206, 15), // "startedCallback"
QT_MOC_LITERAL(17, 222, 17), // "completedCallback"
QT_MOC_LITERAL(18, 240, 9), // "dropEvent"
QT_MOC_LITERAL(19, 250, 14), // "deleteMappings"
QT_MOC_LITERAL(20, 265, 5), // "paths"
QT_MOC_LITERAL(21, 271, 13), // "deleteMapping"
QT_MOC_LITERAL(22, 285, 14), // "getAllMappings"
QT_MOC_LITERAL(23, 300, 13), // "renameMapping"
QT_MOC_LITERAL(24, 314, 7), // "oldPath"
QT_MOC_LITERAL(25, 322, 7), // "newPath"
QT_MOC_LITERAL(26, 330, 16), // "setBakingEnabled"
QT_MOC_LITERAL(27, 347, 7), // "enabled"
QT_MOC_LITERAL(28, 355, 14), // "sortProxyModel"
QT_MOC_LITERAL(29, 370, 6), // "column"
QT_MOC_LITERAL(30, 377, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(31, 391, 5), // "order"
QT_MOC_LITERAL(32, 397, 12), // "mappingModel"
QT_MOC_LITERAL(33, 410, 10) // "proxyModel"

    },
    "AssetMappingsScriptingInterface\0"
    "getAssetMappingModel\0AssetMappingModel*\0"
    "\0getProxyModel\0QAbstractProxyModel*\0"
    "isKnownMapping\0path\0isKnownFolder\0"
    "setMapping\0hash\0QJSValue\0callback\0"
    "getMapping\0uploadFile\0mapping\0"
    "startedCallback\0completedCallback\0"
    "dropEvent\0deleteMappings\0paths\0"
    "deleteMapping\0getAllMappings\0renameMapping\0"
    "oldPath\0newPath\0setBakingEnabled\0"
    "enabled\0sortProxyModel\0column\0"
    "Qt::SortOrder\0order\0mappingModel\0"
    "proxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetMappingsScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       2,  238, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,  129,    3, 0x02 /* Public */,
       4,    0,  130,    3, 0x02 /* Public */,
       6,    1,  131,    3, 0x02 /* Public */,
       8,    1,  134,    3, 0x02 /* Public */,
       9,    3,  137,    3, 0x02 /* Public */,
       9,    2,  144,    3, 0x22 /* Public | MethodCloned */,
      13,    2,  149,    3, 0x02 /* Public */,
      13,    1,  154,    3, 0x22 /* Public | MethodCloned */,
      14,    5,  157,    3, 0x02 /* Public */,
      14,    4,  168,    3, 0x22 /* Public | MethodCloned */,
      14,    3,  177,    3, 0x22 /* Public | MethodCloned */,
      14,    2,  184,    3, 0x22 /* Public | MethodCloned */,
      19,    2,  189,    3, 0x02 /* Public */,
      19,    1,  194,    3, 0x22 /* Public | MethodCloned */,
      21,    2,  197,    3, 0x02 /* Public */,
      22,    1,  202,    3, 0x02 /* Public */,
      22,    0,  205,    3, 0x22 /* Public | MethodCloned */,
      23,    3,  206,    3, 0x02 /* Public */,
      23,    2,  213,    3, 0x22 /* Public | MethodCloned */,
      26,    3,  218,    3, 0x02 /* Public */,
      26,    2,  225,    3, 0x22 /* Public | MethodCloned */,
      28,    2,  230,    3, 0x02 /* Public */,
      28,    1,  235,    3, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    0x80000000 | 2,
    0x80000000 | 5,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Bool, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,    7,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    7,   12,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 11, QMetaType::Bool,    7,   15,   16,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 11,    7,   15,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,    7,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   15,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 11,   20,   12,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    7,   12,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,   24,   25,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool, 0x80000000 | 11,   20,   27,   12,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,   20,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 30,   29,   31,
    QMetaType::Void, QMetaType::Int,   29,

 // properties: name, type, flags
      32, 0x80000000 | 2, 0x00095409,
      33, 0x80000000 | 5, 0x00095409,

       0        // eod
};

void AssetMappingsScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetMappingsScriptingInterface *_t = static_cast<AssetMappingsScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { AssetMappingModel* _r = _t->getAssetMappingModel();
            if (_a[0]) *reinterpret_cast< AssetMappingModel**>(_a[0]) = std::move(_r); }  break;
        case 1: { QAbstractProxyModel* _r = _t->getProxyModel();
            if (_a[0]) *reinterpret_cast< QAbstractProxyModel**>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isKnownMapping((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->isKnownFolder((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 5: _t->setMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->getMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QJSValue(*)>(_a[2]))); break;
        case 7: _t->getMapping((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->uploadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3])),(*reinterpret_cast< QJSValue(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 9: _t->uploadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3])),(*reinterpret_cast< QJSValue(*)>(_a[4]))); break;
        case 10: _t->uploadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 11: _t->uploadFile((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: _t->deleteMappings((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< QJSValue(*)>(_a[2]))); break;
        case 13: _t->deleteMappings((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 14: _t->deleteMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QJSValue(*)>(_a[2]))); break;
        case 15: _t->getAllMappings((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 16: _t->getAllMappings(); break;
        case 17: _t->renameMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 18: _t->renameMapping((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->setBakingEnabled((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QJSValue(*)>(_a[3]))); break;
        case 20: _t->setBakingEnabled((*reinterpret_cast< QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 21: _t->sortProxyModel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::SortOrder(*)>(_a[2]))); break;
        case 22: _t->sortProxyModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AssetMappingModel* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractProxyModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        AssetMappingsScriptingInterface *_t = static_cast<AssetMappingsScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AssetMappingModel**>(_v) = _t->getAssetMappingModel(); break;
        case 1: *reinterpret_cast< QAbstractProxyModel**>(_v) = _t->getProxyModel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AssetMappingsScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AssetMappingsScriptingInterface.data,
      qt_meta_data_AssetMappingsScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssetMappingsScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetMappingsScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetMappingsScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetMappingsScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
