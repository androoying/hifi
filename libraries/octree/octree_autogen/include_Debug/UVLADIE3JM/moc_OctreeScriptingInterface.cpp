/****************************************************************************
** Meta object code from reading C++ file 'OctreeScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/OctreeScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OctreeScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OctreeScriptingInterface_t {
    QByteArrayData data[20];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OctreeScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OctreeScriptingInterface_t qt_meta_stringdata_OctreeScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "OctreeScriptingInterface"
QT_MOC_LITERAL(1, 25, 21), // "cleanupManagedObjects"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 19), // "setPacketsPerSecond"
QT_MOC_LITERAL(4, 68, 16), // "packetsPerSecond"
QT_MOC_LITERAL(5, 85, 19), // "getPacketsPerSecond"
QT_MOC_LITERAL(6, 105, 12), // "serversExist"
QT_MOC_LITERAL(7, 118, 16), // "hasPacketsToSend"
QT_MOC_LITERAL(8, 135, 18), // "packetsToSendCount"
QT_MOC_LITERAL(9, 154, 14), // "getLifetimePPS"
QT_MOC_LITERAL(10, 169, 14), // "getLifetimeBPS"
QT_MOC_LITERAL(11, 184, 20), // "getLifetimePPSQueued"
QT_MOC_LITERAL(12, 205, 20), // "getLifetimeBPSQueued"
QT_MOC_LITERAL(13, 226, 18), // "getLifetimeInUsecs"
QT_MOC_LITERAL(14, 245, 18), // "long long unsigned"
QT_MOC_LITERAL(15, 264, 20), // "getLifetimeInSeconds"
QT_MOC_LITERAL(16, 285, 22), // "getLifetimePacketsSent"
QT_MOC_LITERAL(17, 308, 20), // "getLifetimeBytesSent"
QT_MOC_LITERAL(18, 329, 24), // "getLifetimePacketsQueued"
QT_MOC_LITERAL(19, 354, 22) // "getLifetimeBytesQueued"

    },
    "OctreeScriptingInterface\0cleanupManagedObjects\0"
    "\0setPacketsPerSecond\0packetsPerSecond\0"
    "getPacketsPerSecond\0serversExist\0"
    "hasPacketsToSend\0packetsToSendCount\0"
    "getLifetimePPS\0getLifetimeBPS\0"
    "getLifetimePPSQueued\0getLifetimeBPSQueued\0"
    "getLifetimeInUsecs\0long long unsigned\0"
    "getLifetimeInSeconds\0getLifetimePacketsSent\0"
    "getLifetimeBytesSent\0getLifetimePacketsQueued\0"
    "getLifetimeBytesQueued"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OctreeScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    1,   95,    2, 0x0a /* Public */,
       5,    0,   98,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,   14, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,   14, 0x0a /* Public */,
      17,    0,  109,   14, 0x0a /* Public */,
      18,    0,  110,   14, 0x0a /* Public */,
      19,    0,  111,   14, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Int,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Float,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

       0        // eod
};

void OctreeScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OctreeScriptingInterface *_t = static_cast<OctreeScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cleanupManagedObjects(); break;
        case 1: _t->setPacketsPerSecond((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: { int _r = _t->getPacketsPerSecond();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->serversExist();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->hasPacketsToSend();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->packetsToSendCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { float _r = _t->getLifetimePPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 7: { float _r = _t->getLifetimeBPS();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { float _r = _t->getLifetimePPSQueued();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 9: { float _r = _t->getLifetimeBPSQueued();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->getLifetimeInUsecs();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { float _r = _t->getLifetimeInSeconds();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->getLifetimePacketsSent();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->getLifetimeBytesSent();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->getLifetimePacketsQueued();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->getLifetimeBytesQueued();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OctreeScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OctreeScriptingInterface.data,
      qt_meta_data_OctreeScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OctreeScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OctreeScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OctreeScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OctreeScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
