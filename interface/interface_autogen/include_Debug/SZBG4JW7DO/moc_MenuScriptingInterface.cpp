/****************************************************************************
** Meta object code from reading C++ file 'MenuScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/MenuScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuScriptingInterface_t {
    QByteArrayData data[28];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuScriptingInterface_t qt_meta_stringdata_MenuScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 22), // "MenuScriptingInterface"
QT_MOC_LITERAL(1, 23, 13), // "menuItemEvent"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 8), // "menuItem"
QT_MOC_LITERAL(4, 47, 17), // "menuItemTriggered"
QT_MOC_LITERAL(5, 65, 7), // "addMenu"
QT_MOC_LITERAL(6, 73, 8), // "menuName"
QT_MOC_LITERAL(7, 82, 8), // "grouping"
QT_MOC_LITERAL(8, 91, 10), // "removeMenu"
QT_MOC_LITERAL(9, 102, 10), // "menuExists"
QT_MOC_LITERAL(10, 113, 12), // "addSeparator"
QT_MOC_LITERAL(11, 126, 13), // "separatorName"
QT_MOC_LITERAL(12, 140, 15), // "removeSeparator"
QT_MOC_LITERAL(13, 156, 11), // "addMenuItem"
QT_MOC_LITERAL(14, 168, 18), // "MenuItemProperties"
QT_MOC_LITERAL(15, 187, 10), // "properties"
QT_MOC_LITERAL(16, 198, 8), // "menuitem"
QT_MOC_LITERAL(17, 207, 11), // "shortcutKey"
QT_MOC_LITERAL(18, 219, 14), // "removeMenuItem"
QT_MOC_LITERAL(19, 234, 14), // "menuItemExists"
QT_MOC_LITERAL(20, 249, 15), // "isOptionChecked"
QT_MOC_LITERAL(21, 265, 10), // "menuOption"
QT_MOC_LITERAL(22, 276, 18), // "setIsOptionChecked"
QT_MOC_LITERAL(23, 295, 9), // "isChecked"
QT_MOC_LITERAL(24, 305, 13), // "triggerOption"
QT_MOC_LITERAL(25, 319, 13), // "isMenuEnabled"
QT_MOC_LITERAL(26, 333, 14), // "setMenuEnabled"
QT_MOC_LITERAL(27, 348, 9) // "isEnabled"

    },
    "MenuScriptingInterface\0menuItemEvent\0"
    "\0menuItem\0menuItemTriggered\0addMenu\0"
    "menuName\0grouping\0removeMenu\0menuExists\0"
    "addSeparator\0separatorName\0removeSeparator\0"
    "addMenuItem\0MenuItemProperties\0"
    "properties\0menuitem\0shortcutKey\0"
    "removeMenuItem\0menuItemExists\0"
    "isOptionChecked\0menuOption\0"
    "setIsOptionChecked\0isChecked\0triggerOption\0"
    "isMenuEnabled\0setMenuEnabled\0isEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  107,    2, 0x08 /* Private */,
       5,    2,  108,    2, 0x0a /* Public */,
       5,    1,  113,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  116,    2, 0x0a /* Public */,
       9,    1,  119,    2, 0x0a /* Public */,
      10,    2,  122,    2, 0x0a /* Public */,
      12,    2,  127,    2, 0x0a /* Public */,
      13,    1,  132,    2, 0x0a /* Public */,
      13,    3,  135,    2, 0x0a /* Public */,
      13,    2,  142,    2, 0x0a /* Public */,
      18,    2,  147,    2, 0x0a /* Public */,
      19,    2,  152,    2, 0x0a /* Public */,
      20,    1,  157,    2, 0x0a /* Public */,
      22,    2,  160,    2, 0x0a /* Public */,
      24,    1,  165,    2, 0x0a /* Public */,
      25,    1,  168,    2, 0x0a /* Public */,
      26,    2,  171,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   11,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,   16,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,   16,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    6,   16,
    QMetaType::Bool, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   21,   23,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,   27,

       0        // eod
};

void MenuScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MenuScriptingInterface *_t = static_cast<MenuScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuItemEvent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->menuItemTriggered(); break;
        case 2: _t->addMenu((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->addMenu((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeMenu((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: { bool _r = _t->menuExists((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->addSeparator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->removeSeparator((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->addMenuItem((*reinterpret_cast< const MenuItemProperties(*)>(_a[1]))); break;
        case 9: _t->addMenuItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->addMenuItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->removeMenuItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: { bool _r = _t->menuItemExists((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isOptionChecked((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setIsOptionChecked((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 15: _t->triggerOption((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: { bool _r = _t->isMenuEnabled((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->setMenuEnabled((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuScriptingInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuScriptingInterface::menuItemEvent)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MenuScriptingInterface.data,
      qt_meta_data_MenuScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MenuScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MenuScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MenuScriptingInterface::menuItemEvent(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
