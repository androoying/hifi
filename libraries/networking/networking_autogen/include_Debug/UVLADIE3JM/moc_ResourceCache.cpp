/****************************************************************************
** Meta object code from reading C++ file 'ResourceCache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ResourceCache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceCache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ScriptableResource_t {
    QByteArrayData data[20];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptableResource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptableResource_t qt_meta_stringdata_ScriptableResource = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ScriptableResource"
QT_MOC_LITERAL(1, 19, 15), // "progressChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "uint64_t"
QT_MOC_LITERAL(4, 45, 13), // "bytesReceived"
QT_MOC_LITERAL(5, 59, 10), // "bytesTotal"
QT_MOC_LITERAL(6, 70, 12), // "stateChanged"
QT_MOC_LITERAL(7, 83, 5), // "state"
QT_MOC_LITERAL(8, 89, 14), // "loadingChanged"
QT_MOC_LITERAL(9, 104, 13), // "loadedChanged"
QT_MOC_LITERAL(10, 118, 8), // "finished"
QT_MOC_LITERAL(11, 127, 7), // "success"
QT_MOC_LITERAL(12, 135, 7), // "release"
QT_MOC_LITERAL(13, 143, 3), // "url"
QT_MOC_LITERAL(14, 147, 5), // "State"
QT_MOC_LITERAL(15, 153, 6), // "QUEUED"
QT_MOC_LITERAL(16, 160, 7), // "LOADING"
QT_MOC_LITERAL(17, 168, 6), // "LOADED"
QT_MOC_LITERAL(18, 175, 8), // "FINISHED"
QT_MOC_LITERAL(19, 184, 6) // "FAILED"

    },
    "ScriptableResource\0progressChanged\0\0"
    "uint64_t\0bytesReceived\0bytesTotal\0"
    "stateChanged\0state\0loadingChanged\0"
    "loadedChanged\0finished\0success\0release\0"
    "url\0State\0QUEUED\0LOADING\0LOADED\0"
    "FINISHED\0FAILED"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptableResource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   58, // properties
       1,   66, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      12,    0,   57,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QUrl, 0x00095001,
       7, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      14, 0x0,    5,   70,

 // enum data: key, value
      15, uint(ScriptableResource::QUEUED),
      16, uint(ScriptableResource::LOADING),
      17, uint(ScriptableResource::LOADED),
      18, uint(ScriptableResource::FINISHED),
      19, uint(ScriptableResource::FAILED),

       0        // eod
};

void ScriptableResource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableResource *_t = static_cast<ScriptableResource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progressChanged((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadingChanged(); break;
        case 3: _t->loadedChanged(); break;
        case 4: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->release(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptableResource::*)(uint64_t , uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptableResource::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScriptableResource::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptableResource::stateChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptableResource *_t = static_cast<ScriptableResource *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->getURL(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getState(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptableResource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScriptableResource.data,
      qt_meta_data_ScriptableResource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptableResource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptableResource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptableResource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScriptableResource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void ScriptableResource::progressChanged(uint64_t _t1, uint64_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ScriptableResource::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ResourceCache_t {
    QByteArrayData data[19];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourceCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourceCache_t qt_meta_stringdata_ResourceCache = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ResourceCache"
QT_MOC_LITERAL(1, 14, 5), // "dirty"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 15), // "updateTotalSize"
QT_MOC_LITERAL(4, 37, 9), // "deltaSize"
QT_MOC_LITERAL(5, 47, 8), // "prefetch"
QT_MOC_LITERAL(6, 56, 19), // "ScriptableResource*"
QT_MOC_LITERAL(7, 76, 3), // "url"
QT_MOC_LITERAL(8, 80, 5), // "extra"
QT_MOC_LITERAL(9, 86, 11), // "getResource"
QT_MOC_LITERAL(10, 98, 24), // "QSharedPointer<Resource>"
QT_MOC_LITERAL(11, 123, 8), // "fallback"
QT_MOC_LITERAL(12, 132, 14), // "clearATPAssets"
QT_MOC_LITERAL(13, 147, 15), // "getResourceList"
QT_MOC_LITERAL(14, 163, 8), // "numTotal"
QT_MOC_LITERAL(15, 172, 6), // "size_t"
QT_MOC_LITERAL(16, 179, 9), // "numCached"
QT_MOC_LITERAL(17, 189, 9), // "sizeTotal"
QT_MOC_LITERAL(18, 199, 10) // "sizeCached"

    },
    "ResourceCache\0dirty\0\0updateTotalSize\0"
    "deltaSize\0prefetch\0ScriptableResource*\0"
    "url\0extra\0getResource\0QSharedPointer<Resource>\0"
    "fallback\0clearATPAssets\0getResourceList\0"
    "numTotal\0size_t\0numCached\0sizeTotal\0"
    "sizeCached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourceCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   88, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x09 /* Protected */,
       5,    2,   63,    2, 0x09 /* Protected */,
       9,    3,   68,    2, 0x09 /* Protected */,
       9,    2,   75,    2, 0x29 /* Protected | MethodCloned */,
       9,    1,   80,    2, 0x29 /* Protected | MethodCloned */,
      12,    0,   83,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      13,    0,   84,    2, 0x02 /* Public */,
       5,    1,   85,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    4,
    0x80000000 | 6, QMetaType::QUrl, QMetaType::VoidStar,    7,    8,
    0x80000000 | 10, QMetaType::QUrl, QMetaType::QUrl, QMetaType::VoidStar,    7,   11,    8,
    0x80000000 | 10, QMetaType::QUrl, QMetaType::QUrl,    7,   11,
    0x80000000 | 10, QMetaType::QUrl,    7,
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList,
    0x80000000 | 6, QMetaType::QUrl,    7,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 15, 0x00495009,
      17, 0x80000000 | 15, 0x00495009,
      18, 0x80000000 | 15, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void ResourceCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceCache *_t = static_cast<ResourceCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: _t->updateTotalSize((*reinterpret_cast< const qint64(*)>(_a[1]))); break;
        case 2: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        case 3: { QSharedPointer<Resource> _r = _t->getResource((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QSharedPointer<Resource>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QSharedPointer<Resource> _r = _t->getResource((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QSharedPointer<Resource>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QSharedPointer<Resource> _r = _t->getResource((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QSharedPointer<Resource>*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->clearATPAssets(); break;
        case 7: { QVariantList _r = _t->getResourceList();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 8: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceCache::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< size_t >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ResourceCache *_t = static_cast<ResourceCache *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< size_t*>(_v) = _t->getNumTotalResources(); break;
        case 1: *reinterpret_cast< size_t*>(_v) = _t->getNumCachedResources(); break;
        case 2: *reinterpret_cast< size_t*>(_v) = _t->getSizeTotalResources(); break;
        case 3: *reinterpret_cast< size_t*>(_v) = _t->getSizeCachedResources(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ResourceCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ResourceCache.data,
      qt_meta_data_ResourceCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ResourceCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResourceCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ResourceCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ResourceCache::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_ScriptableResourceCache_t {
    QByteArrayData data[15];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ScriptableResourceCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ScriptableResourceCache_t qt_meta_stringdata_ScriptableResourceCache = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ScriptableResourceCache"
QT_MOC_LITERAL(1, 24, 5), // "dirty"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "getResourceList"
QT_MOC_LITERAL(4, 47, 15), // "updateTotalSize"
QT_MOC_LITERAL(5, 63, 9), // "deltaSize"
QT_MOC_LITERAL(6, 73, 8), // "prefetch"
QT_MOC_LITERAL(7, 82, 19), // "ScriptableResource*"
QT_MOC_LITERAL(8, 102, 3), // "url"
QT_MOC_LITERAL(9, 106, 5), // "extra"
QT_MOC_LITERAL(10, 112, 8), // "numTotal"
QT_MOC_LITERAL(11, 121, 6), // "size_t"
QT_MOC_LITERAL(12, 128, 9), // "numCached"
QT_MOC_LITERAL(13, 138, 9), // "sizeTotal"
QT_MOC_LITERAL(14, 148, 10) // "sizeCached"

    },
    "ScriptableResourceCache\0dirty\0\0"
    "getResourceList\0updateTotalSize\0"
    "deltaSize\0prefetch\0ScriptableResource*\0"
    "url\0extra\0numTotal\0size_t\0numCached\0"
    "sizeTotal\0sizeCached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ScriptableResourceCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x02 /* Public */,
       4,    1,   41,    2, 0x02 /* Public */,
       6,    2,   44,    2, 0x02 /* Public */,
       6,    1,   49,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantList,
    QMetaType::Void, QMetaType::LongLong,    5,
    0x80000000 | 7, QMetaType::QUrl, QMetaType::VoidStar,    8,    9,
    0x80000000 | 7, QMetaType::QUrl,    8,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x00495009,
      12, 0x80000000 | 11, 0x00495009,
      13, 0x80000000 | 11, 0x00495009,
      14, 0x80000000 | 11, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void ScriptableResourceCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ScriptableResourceCache *_t = static_cast<ScriptableResourceCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        case 1: { QVariantList _r = _t->getResourceList();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->updateTotalSize((*reinterpret_cast< const qint64(*)>(_a[1]))); break;
        case 3: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        case 4: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScriptableResourceCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ScriptableResourceCache::dirty)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< size_t >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        ScriptableResourceCache *_t = static_cast<ScriptableResourceCache *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< size_t*>(_v) = _t->getNumTotalResources(); break;
        case 1: *reinterpret_cast< size_t*>(_v) = _t->getNumCachedResources(); break;
        case 2: *reinterpret_cast< size_t*>(_v) = _t->getSizeTotalResources(); break;
        case 3: *reinterpret_cast< size_t*>(_v) = _t->getSizeCachedResources(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ScriptableResourceCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ScriptableResourceCache.data,
      qt_meta_data_ScriptableResourceCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ScriptableResourceCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptableResourceCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScriptableResourceCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScriptableResourceCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ScriptableResourceCache::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Resource_t {
    QByteArrayData data[22];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Resource_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Resource_t qt_meta_stringdata_Resource = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Resource"
QT_MOC_LITERAL(1, 9, 7), // "loading"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "loaded"
QT_MOC_LITERAL(4, 25, 7), // "request"
QT_MOC_LITERAL(5, 33, 8), // "finished"
QT_MOC_LITERAL(6, 42, 7), // "success"
QT_MOC_LITERAL(7, 50, 6), // "failed"
QT_MOC_LITERAL(8, 57, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 85, 5), // "error"
QT_MOC_LITERAL(10, 91, 9), // "onRefresh"
QT_MOC_LITERAL(11, 101, 10), // "onProgress"
QT_MOC_LITERAL(12, 112, 8), // "uint64_t"
QT_MOC_LITERAL(13, 121, 13), // "bytesReceived"
QT_MOC_LITERAL(14, 135, 10), // "bytesTotal"
QT_MOC_LITERAL(15, 146, 10), // "updateSize"
QT_MOC_LITERAL(16, 157, 9), // "deltaSize"
QT_MOC_LITERAL(17, 167, 14), // "attemptRequest"
QT_MOC_LITERAL(18, 182, 22), // "handleDownloadProgress"
QT_MOC_LITERAL(19, 205, 19), // "handleReplyFinished"
QT_MOC_LITERAL(20, 225, 15), // "finishedLoading"
QT_MOC_LITERAL(21, 241, 20) // "allReferencesCleared"

    },
    "Resource\0loading\0\0loaded\0request\0"
    "finished\0success\0failed\0"
    "QNetworkReply::NetworkError\0error\0"
    "onRefresh\0onProgress\0uint64_t\0"
    "bytesReceived\0bytesTotal\0updateSize\0"
    "deltaSize\0attemptRequest\0"
    "handleDownloadProgress\0handleReplyFinished\0"
    "finishedLoading\0allReferencesCleared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Resource[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       7,    1,   81,    2, 0x06 /* Public */,
      10,    0,   84,    2, 0x06 /* Public */,
      11,    2,   85,    2, 0x06 /* Public */,
      15,    1,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   93,    2, 0x09 /* Protected */,
      18,    2,   94,    2, 0x0a /* Public */,
      19,    0,   99,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      20,    1,  100,    2, 0x01 /* Protected */,
      21,    0,  103,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void, QMetaType::LongLong,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,   13,   14,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,

       0        // eod
};

void Resource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Resource *_t = static_cast<Resource *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loading(); break;
        case 1: _t->loaded((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->failed((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->onRefresh(); break;
        case 5: _t->onProgress((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2]))); break;
        case 6: _t->updateSize((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->attemptRequest(); break;
        case 8: _t->handleDownloadProgress((*reinterpret_cast< uint64_t(*)>(_a[1])),(*reinterpret_cast< uint64_t(*)>(_a[2]))); break;
        case 9: _t->handleReplyFinished(); break;
        case 10: _t->finishedLoading((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->allReferencesCleared(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Resource::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::loading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Resource::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::loaded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Resource::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::finished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Resource::*)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::failed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Resource::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::onRefresh)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Resource::*)(uint64_t , uint64_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::onProgress)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Resource::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Resource::updateSize)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Resource::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Resource.data,
      qt_meta_data_Resource,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Resource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Resource::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Resource.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Resource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Resource::loading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Resource::loaded(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Resource::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Resource::failed(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Resource::onRefresh()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Resource::onProgress(uint64_t _t1, uint64_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Resource::updateSize(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
