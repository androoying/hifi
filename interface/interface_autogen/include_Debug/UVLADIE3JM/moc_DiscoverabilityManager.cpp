/****************************************************************************
** Meta object code from reading C++ file 'DiscoverabilityManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DiscoverabilityManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DiscoverabilityManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiscoverabilityManager_t {
    QByteArrayData data[14];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiscoverabilityManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiscoverabilityManager_t qt_meta_stringdata_DiscoverabilityManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DiscoverabilityManager"
QT_MOC_LITERAL(1, 23, 26), // "discoverabilityModeChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 21), // "Discoverability::Mode"
QT_MOC_LITERAL(4, 73, 19), // "discoverabilityMode"
QT_MOC_LITERAL(5, 93, 14), // "updateLocation"
QT_MOC_LITERAL(6, 108, 14), // "removeLocation"
QT_MOC_LITERAL(7, 123, 22), // "getDiscoverabilityMode"
QT_MOC_LITERAL(8, 146, 22), // "setDiscoverabilityMode"
QT_MOC_LITERAL(9, 169, 13), // "setVisibility"
QT_MOC_LITERAL(10, 183, 17), // "visibilityChanged"
QT_MOC_LITERAL(11, 201, 23), // "handleHeartbeatResponse"
QT_MOC_LITERAL(12, 225, 14), // "QNetworkReply*"
QT_MOC_LITERAL(13, 240, 12) // "requestReply"

    },
    "DiscoverabilityManager\0"
    "discoverabilityModeChanged\0\0"
    "Discoverability::Mode\0discoverabilityMode\0"
    "updateLocation\0removeLocation\0"
    "getDiscoverabilityMode\0setDiscoverabilityMode\0"
    "setVisibility\0visibilityChanged\0"
    "handleHeartbeatResponse\0QNetworkReply*\0"
    "requestReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiscoverabilityManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
       9,    0,   63,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void DiscoverabilityManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiscoverabilityManager *_t = static_cast<DiscoverabilityManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->discoverabilityModeChanged((*reinterpret_cast< Discoverability::Mode(*)>(_a[1]))); break;
        case 1: _t->updateLocation(); break;
        case 2: _t->removeLocation(); break;
        case 3: { Discoverability::Mode _r = _t->getDiscoverabilityMode();
            if (_a[0]) *reinterpret_cast< Discoverability::Mode*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setDiscoverabilityMode((*reinterpret_cast< Discoverability::Mode(*)>(_a[1]))); break;
        case 5: _t->setVisibility(); break;
        case 6: _t->visibilityChanged((*reinterpret_cast< Discoverability::Mode(*)>(_a[1]))); break;
        case 7: _t->handleHeartbeatResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Discoverability::Mode >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Discoverability::Mode >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Discoverability::Mode >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiscoverabilityManager::*)(Discoverability::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiscoverabilityManager::discoverabilityModeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiscoverabilityManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DiscoverabilityManager.data,
      qt_meta_data_DiscoverabilityManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DiscoverabilityManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscoverabilityManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiscoverabilityManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int DiscoverabilityManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DiscoverabilityManager::discoverabilityModeChanged(Discoverability::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
