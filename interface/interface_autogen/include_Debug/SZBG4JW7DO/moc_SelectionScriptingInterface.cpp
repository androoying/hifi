/****************************************************************************
** Meta object code from reading C++ file 'SelectionScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/SelectionScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SelectionScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SelectionToSceneHandler_t {
    QByteArrayData data[4];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionToSceneHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionToSceneHandler_t qt_meta_stringdata_SelectionToSceneHandler = {
    {
QT_MOC_LITERAL(0, 0, 23), // "SelectionToSceneHandler"
QT_MOC_LITERAL(1, 24, 24), // "selectedItemsListChanged"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8) // "listName"

    },
    "SelectionToSceneHandler\0"
    "selectedItemsListChanged\0\0listName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionToSceneHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void SelectionToSceneHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectionToSceneHandler *_t = static_cast<SelectionToSceneHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedItemsListChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectionToSceneHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SelectionToSceneHandler.data,
      qt_meta_data_SelectionToSceneHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectionToSceneHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionToSceneHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionToSceneHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SelectionToSceneHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
struct qt_meta_stringdata_SelectionScriptingInterface_t {
    QByteArrayData data[20];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SelectionScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SelectionScriptingInterface_t qt_meta_stringdata_SelectionScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SelectionScriptingInterface"
QT_MOC_LITERAL(1, 28, 24), // "selectedItemsListChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 8), // "listName"
QT_MOC_LITERAL(4, 63, 12), // "getListNames"
QT_MOC_LITERAL(5, 76, 17), // "removeListFromMap"
QT_MOC_LITERAL(6, 94, 22), // "addToSelectedItemsList"
QT_MOC_LITERAL(7, 117, 8), // "itemType"
QT_MOC_LITERAL(8, 126, 2), // "id"
QT_MOC_LITERAL(9, 129, 27), // "removeFromSelectedItemsList"
QT_MOC_LITERAL(10, 157, 22), // "clearSelectedItemsList"
QT_MOC_LITERAL(11, 180, 9), // "printList"
QT_MOC_LITERAL(12, 190, 20), // "getSelectedItemsList"
QT_MOC_LITERAL(13, 211, 23), // "getHighlightedListNames"
QT_MOC_LITERAL(14, 235, 19), // "enableListHighlight"
QT_MOC_LITERAL(15, 255, 14), // "highlightStyle"
QT_MOC_LITERAL(16, 270, 20), // "disableListHighlight"
QT_MOC_LITERAL(17, 291, 17), // "enableListToScene"
QT_MOC_LITERAL(18, 309, 18), // "disableListToScene"
QT_MOC_LITERAL(19, 328, 21) // "getListHighlightStyle"

    },
    "SelectionScriptingInterface\0"
    "selectedItemsListChanged\0\0listName\0"
    "getListNames\0removeListFromMap\0"
    "addToSelectedItemsList\0itemType\0id\0"
    "removeFromSelectedItemsList\0"
    "clearSelectedItemsList\0printList\0"
    "getSelectedItemsList\0getHighlightedListNames\0"
    "enableListHighlight\0highlightStyle\0"
    "disableListHighlight\0enableListToScene\0"
    "disableListToScene\0getListHighlightStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SelectionScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   87,    2, 0x02 /* Public */,
       5,    1,   88,    2, 0x02 /* Public */,
       6,    3,   91,    2, 0x02 /* Public */,
       9,    3,   98,    2, 0x02 /* Public */,
      10,    1,  105,    2, 0x02 /* Public */,
      11,    1,  108,    2, 0x02 /* Public */,
      12,    1,  111,    2, 0x02 /* Public */,
      13,    0,  114,    2, 0x02 /* Public */,
      14,    2,  115,    2, 0x02 /* Public */,
      16,    1,  120,    2, 0x02 /* Public */,
      17,    1,  123,    2, 0x02 /* Public */,
      18,    1,  126,    2, 0x02 /* Public */,
      19,    1,  129,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // methods: parameters
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QUuid,    3,    7,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QUuid,    3,    7,    8,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString,    3,
    QMetaType::QStringList,
    QMetaType::Bool, QMetaType::QString, QMetaType::QVariantMap,    3,   15,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::QVariantMap, QMetaType::QString,    3,

       0        // eod
};

void SelectionScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SelectionScriptingInterface *_t = static_cast<SelectionScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedItemsListChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QStringList _r = _t->getListNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->removeListFromMap((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->addToSelectedItemsList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUuid(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->removeFromSelectedItemsList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QUuid(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->clearSelectedItemsList((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->printList((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: { QVariantMap _r = _t->getSelectedItemsList((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { QStringList _r = _t->getHighlightedListNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->enableListHighlight((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->disableListHighlight((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->enableListToScene((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->disableListToScene((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { QVariantMap _r = _t->getListHighlightStyle((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectionScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SelectionScriptingInterface::selectedItemsListChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SelectionScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SelectionScriptingInterface.data,
      qt_meta_data_SelectionScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SelectionScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SelectionScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SelectionScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int SelectionScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SelectionScriptingInterface::selectedItemsListChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
