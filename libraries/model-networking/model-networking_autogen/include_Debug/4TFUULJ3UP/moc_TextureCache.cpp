/****************************************************************************
** Meta object code from reading C++ file 'TextureCache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/model-networking/TextureCache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QWeakPointer>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextureCache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkTexture_t {
    QByteArrayData data[22];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkTexture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkTexture_t qt_meta_stringdata_NetworkTexture = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NetworkTexture"
QT_MOC_LITERAL(1, 15, 21), // "networkTextureCreated"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 28), // "QWeakPointer<NetworkTexture>"
QT_MOC_LITERAL(4, 67, 4), // "self"
QT_MOC_LITERAL(5, 72, 29), // "ktxInitialDataRequestFinished"
QT_MOC_LITERAL(6, 102, 21), // "ktxMipRequestFinished"
QT_MOC_LITERAL(7, 124, 21), // "setOriginalDescriptor"
QT_MOC_LITERAL(8, 146, 19), // "ktx::KTXDescriptor*"
QT_MOC_LITERAL(9, 166, 10), // "descriptor"
QT_MOC_LITERAL(10, 177, 27), // "handleLocalRequestCompleted"
QT_MOC_LITERAL(11, 205, 16), // "downloadFinished"
QT_MOC_LITERAL(12, 222, 4), // "data"
QT_MOC_LITERAL(13, 227, 15), // "loadMetaContent"
QT_MOC_LITERAL(14, 243, 7), // "content"
QT_MOC_LITERAL(15, 251, 18), // "loadTextureContent"
QT_MOC_LITERAL(16, 270, 8), // "setImage"
QT_MOC_LITERAL(17, 279, 19), // "gpu::TexturePointer"
QT_MOC_LITERAL(18, 299, 7), // "texture"
QT_MOC_LITERAL(19, 307, 13), // "originalWidth"
QT_MOC_LITERAL(20, 321, 14), // "originalHeight"
QT_MOC_LITERAL(21, 336, 27) // "startRequestForNextMipLevel"

    },
    "NetworkTexture\0networkTextureCreated\0"
    "\0QWeakPointer<NetworkTexture>\0self\0"
    "ktxInitialDataRequestFinished\0"
    "ktxMipRequestFinished\0setOriginalDescriptor\0"
    "ktx::KTXDescriptor*\0descriptor\0"
    "handleLocalRequestCompleted\0"
    "downloadFinished\0data\0loadMetaContent\0"
    "content\0loadTextureContent\0setImage\0"
    "gpu::TexturePointer\0texture\0originalWidth\0"
    "originalHeight\0startRequestForNextMipLevel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkTexture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,
       6,    0,   68,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   69,    2, 0x02 /* Public */,
      10,    0,   72,    2, 0x01 /* Protected */,
      11,    1,   73,    2, 0x01 /* Protected */,
      13,    1,   76,    2, 0x01 /* Protected */,
      15,    1,   79,    2, 0x01 /* Protected */,
      16,    3,   82,    2, 0x01 /* Protected */,
      21,    0,   89,    2, 0x01 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void, QMetaType::QByteArray,   14,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Int, QMetaType::Int,   18,   19,   20,
    QMetaType::Void,

       0        // eod
};

void NetworkTexture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkTexture *_t = static_cast<NetworkTexture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkTextureCreated((*reinterpret_cast< const QWeakPointer<NetworkTexture>(*)>(_a[1]))); break;
        case 1: _t->ktxInitialDataRequestFinished(); break;
        case 2: _t->ktxMipRequestFinished(); break;
        case 3: _t->setOriginalDescriptor((*reinterpret_cast< ktx::KTXDescriptor*(*)>(_a[1]))); break;
        case 4: _t->handleLocalRequestCompleted(); break;
        case 5: _t->downloadFinished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 6: _t->loadMetaContent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->loadTextureContent((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 8: _t->setImage((*reinterpret_cast< gpu::TexturePointer(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->startRequestForNextMipLevel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWeakPointer<NetworkTexture> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ktx::KTXDescriptor* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< gpu::TexturePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkTexture::*)(const QWeakPointer<NetworkTexture> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkTexture::networkTextureCreated)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkTexture::staticMetaObject = {
    { &Resource::staticMetaObject, qt_meta_stringdata_NetworkTexture.data,
      qt_meta_data_NetworkTexture,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkTexture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkTexture::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkTexture.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Texture"))
        return static_cast< Texture*>(this);
    return Resource::qt_metacast(_clname);
}

int NetworkTexture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Resource::qt_metacall(_c, _id, _a);
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
void NetworkTexture::networkTextureCreated(const QWeakPointer<NetworkTexture> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_TextureCache_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextureCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextureCache_t qt_meta_stringdata_TextureCache = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TextureCache"
QT_MOC_LITERAL(1, 13, 31), // "spectatorCameraFramebufferReset"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 8), // "prefetch"
QT_MOC_LITERAL(4, 55, 19), // "ScriptableResource*"
QT_MOC_LITERAL(5, 75, 3), // "url"
QT_MOC_LITERAL(6, 79, 4), // "type"
QT_MOC_LITERAL(7, 84, 12) // "maxNumPixels"

    },
    "TextureCache\0spectatorCameraFramebufferReset\0"
    "\0prefetch\0ScriptableResource*\0url\0"
    "type\0maxNumPixels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextureCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    3,   30,    2, 0x01 /* Protected */,
       3,    2,   37,    2, 0x21 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    0x80000000 | 4, QMetaType::QUrl, QMetaType::Int,    5,    6,

       0        // eod
};

void TextureCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextureCache *_t = static_cast<TextureCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->spectatorCameraFramebufferReset(); break;
        case 1: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        case 2: { ScriptableResource* _r = _t->prefetch((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< ScriptableResource**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextureCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextureCache::spectatorCameraFramebufferReset)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextureCache::staticMetaObject = {
    { &ResourceCache::staticMetaObject, qt_meta_stringdata_TextureCache.data,
      qt_meta_data_TextureCache,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TextureCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextureCache.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return ResourceCache::qt_metacast(_clname);
}

int TextureCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceCache::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void TextureCache::spectatorCameraFramebufferReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
