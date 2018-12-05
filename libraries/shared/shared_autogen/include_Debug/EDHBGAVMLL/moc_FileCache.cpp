/****************************************************************************
** Meta object code from reading C++ file 'FileCache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/shared/FileCache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileCache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cache__FileCache_t {
    QByteArrayData data[8];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cache__FileCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cache__FileCache_t qt_meta_stringdata_cache__FileCache = {
    {
QT_MOC_LITERAL(0, 0, 16), // "cache::FileCache"
QT_MOC_LITERAL(1, 17, 5), // "dirty"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "numTotal"
QT_MOC_LITERAL(4, 33, 6), // "size_t"
QT_MOC_LITERAL(5, 40, 9), // "numCached"
QT_MOC_LITERAL(6, 50, 9), // "sizeTotal"
QT_MOC_LITERAL(7, 60, 10) // "sizeCached"

    },
    "cache::FileCache\0dirty\0\0numTotal\0"
    "size_t\0numCached\0sizeTotal\0sizeCached"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cache__FileCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00495009,
       5, 0x80000000 | 4, 0x00495009,
       6, 0x80000000 | 4, 0x00495009,
       7, 0x80000000 | 4, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,

       0        // eod
};

void cache::FileCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileCache *_t = static_cast<FileCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileCache::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        FileCache *_t = static_cast<FileCache *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< size_t*>(_v) = _t->getNumTotalFiles(); break;
        case 1: *reinterpret_cast< size_t*>(_v) = _t->getNumCachedFiles(); break;
        case 2: *reinterpret_cast< size_t*>(_v) = _t->getSizeTotalFiles(); break;
        case 3: *reinterpret_cast< size_t*>(_v) = _t->getSizeCachedFiles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject cache::FileCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_cache__FileCache.data,
      qt_meta_data_cache__FileCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *cache::FileCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cache::FileCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cache__FileCache.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<FileCache>"))
        return static_cast< std::enable_shared_from_this<FileCache>*>(this);
    return QObject::qt_metacast(_clname);
}

int cache::FileCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void cache::FileCache::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
