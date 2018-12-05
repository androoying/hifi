/****************************************************************************
** Meta object code from reading C++ file 'DialogsManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/DialogsManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogsManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogsManager_t {
    QByteArrayData data[21];
    char stringdata0[311];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogsManager_t qt_meta_stringdata_DialogsManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "DialogsManager"
QT_MOC_LITERAL(1, 15, 15), // "addressBarShown"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "visible"
QT_MOC_LITERAL(4, 40, 10), // "setUseFeed"
QT_MOC_LITERAL(5, 51, 7), // "useFeed"
QT_MOC_LITERAL(6, 59, 14), // "showAddressBar"
QT_MOC_LITERAL(7, 74, 14), // "hideAddressBar"
QT_MOC_LITERAL(8, 89, 8), // "showFeed"
QT_MOC_LITERAL(9, 98, 36), // "setDomainConnectionFailureVis..."
QT_MOC_LITERAL(10, 135, 17), // "toggleLoginDialog"
QT_MOC_LITERAL(11, 153, 15), // "showLoginDialog"
QT_MOC_LITERAL(12, 169, 18), // "octreeStatsDetails"
QT_MOC_LITERAL(13, 188, 8), // "lodTools"
QT_MOC_LITERAL(14, 197, 8), // "hmdTools"
QT_MOC_LITERAL(15, 206, 9), // "showTools"
QT_MOC_LITERAL(16, 216, 26), // "showDomainConnectionDialog"
QT_MOC_LITERAL(17, 243, 18), // "showTestingResults"
QT_MOC_LITERAL(18, 262, 16), // "toggleAddressBar"
QT_MOC_LITERAL(19, 279, 16), // "showUpdateDialog"
QT_MOC_LITERAL(20, 296, 14) // "hmdToolsClosed"

    },
    "DialogsManager\0addressBarShown\0\0visible\0"
    "setUseFeed\0useFeed\0showAddressBar\0"
    "hideAddressBar\0showFeed\0"
    "setDomainConnectionFailureVisibility\0"
    "toggleLoginDialog\0showLoginDialog\0"
    "octreeStatsDetails\0lodTools\0hmdTools\0"
    "showTools\0showDomainConnectionDialog\0"
    "showTestingResults\0toggleAddressBar\0"
    "showUpdateDialog\0hmdToolsClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogsManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,  100,    2, 0x0a /* Public */,
       7,    0,  101,    2, 0x0a /* Public */,
       8,    0,  102,    2, 0x0a /* Public */,
       9,    1,  103,    2, 0x0a /* Public */,
      10,    0,  106,    2, 0x0a /* Public */,
      11,    0,  107,    2, 0x0a /* Public */,
      12,    0,  108,    2, 0x0a /* Public */,
      13,    0,  109,    2, 0x0a /* Public */,
      14,    1,  110,    2, 0x0a /* Public */,
      16,    0,  113,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    0,  115,    2, 0x0a /* Public */,
      19,    0,  116,    2, 0x0a /* Public */,
      20,    0,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DialogsManager *_t = static_cast<DialogsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addressBarShown((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setUseFeed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->showAddressBar(); break;
        case 3: _t->hideAddressBar(); break;
        case 4: _t->showFeed(); break;
        case 5: _t->setDomainConnectionFailureVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleLoginDialog(); break;
        case 7: _t->showLoginDialog(); break;
        case 8: _t->octreeStatsDetails(); break;
        case 9: _t->lodTools(); break;
        case 10: _t->hmdTools((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->showDomainConnectionDialog(); break;
        case 12: _t->showTestingResults(); break;
        case 13: _t->toggleAddressBar(); break;
        case 14: _t->showUpdateDialog(); break;
        case 15: _t->hmdToolsClosed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogsManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogsManager::addressBarShown)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogsManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogsManager::setUseFeed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogsManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DialogsManager.data,
      qt_meta_data_DialogsManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DialogsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogsManager.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int DialogsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DialogsManager::addressBarShown(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogsManager::setUseFeed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
