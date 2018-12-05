/****************************************************************************
** Meta object code from reading C++ file 'TextureCacheScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/model-networking/TextureCacheScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TextureCacheScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TextureCacheScriptingInterface_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextureCacheScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextureCacheScriptingInterface_t qt_meta_stringdata_TextureCacheScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "TextureCacheScriptingInterface"
QT_MOC_LITERAL(1, 31, 31), // "spectatorCameraFramebufferReset"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 8), // "prefetch"
QT_MOC_LITERAL(4, 73, 19), // "ScriptableResource*"
QT_MOC_LITERAL(5, 93, 3), // "url"
QT_MOC_LITERAL(6, 97, 4), // "type"
QT_MOC_LITERAL(7, 102, 12) // "maxNumPixels"

    },
    "TextureCacheScriptingInterface\0"
    "spectatorCameraFramebufferReset\0\0"
    "prefetch\0ScriptableResource*\0url\0type\0"
    "maxNumPixels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextureCacheScriptingInterface[] = {

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
       3,    3,   30,    2, 0x02 /* Public */,
       3,    2,   37,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 4, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,    5,    6,    7,
    0x80000000 | 4, QMetaType::QUrl, QMetaType::Int,    5,    6,

       0        // eod
};

void TextureCacheScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TextureCacheScriptingInterface *_t = static_cast<TextureCacheScriptingInterface *>(_o);
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
            using _t = void (TextureCacheScriptingInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextureCacheScriptingInterface::spectatorCameraFramebufferReset)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TextureCacheScriptingInterface::staticMetaObject = {
    { &ScriptableResourceCache::staticMetaObject, qt_meta_stringdata_TextureCacheScriptingInterface.data,
      qt_meta_data_TextureCacheScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TextureCacheScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextureCacheScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextureCacheScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return ScriptableResourceCache::qt_metacast(_clname);
}

int TextureCacheScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ScriptableResourceCache::qt_metacall(_c, _id, _a);
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
void TextureCacheScriptingInterface::spectatorCameraFramebufferReset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
