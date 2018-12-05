/****************************************************************************
** Meta object code from reading C++ file 'DesktopScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/DesktopScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DesktopScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DesktopScriptingInterface_t {
    QByteArrayData data[17];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopScriptingInterface_t qt_meta_stringdata_DesktopScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "DesktopScriptingInterface"
QT_MOC_LITERAL(1, 26, 11), // "setHUDAlpha"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "alpha"
QT_MOC_LITERAL(4, 45, 4), // "show"
QT_MOC_LITERAL(5, 50, 4), // "path"
QT_MOC_LITERAL(6, 55, 5), // "title"
QT_MOC_LITERAL(7, 61, 12), // "createWindow"
QT_MOC_LITERAL(8, 74, 24), // "InteractiveWindowPointer"
QT_MOC_LITERAL(9, 99, 9), // "sourceUrl"
QT_MOC_LITERAL(10, 109, 10), // "properties"
QT_MOC_LITERAL(11, 120, 19), // "getPresentationMode"
QT_MOC_LITERAL(12, 140, 5), // "width"
QT_MOC_LITERAL(13, 146, 6), // "height"
QT_MOC_LITERAL(14, 153, 16), // "PresentationMode"
QT_MOC_LITERAL(15, 170, 13), // "ALWAYS_ON_TOP"
QT_MOC_LITERAL(16, 184, 18) // "CLOSE_BUTTON_HIDES"

    },
    "DesktopScriptingInterface\0setHUDAlpha\0"
    "\0alpha\0show\0path\0title\0createWindow\0"
    "InteractiveWindowPointer\0sourceUrl\0"
    "properties\0getPresentationMode\0width\0"
    "height\0PresentationMode\0ALWAYS_ON_TOP\0"
    "CLOSE_BUTTON_HIDES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x02 /* Public */,
       4,    2,   42,    2, 0x02 /* Public */,
       7,    2,   47,    2, 0x02 /* Public */,
       7,    1,   52,    2, 0x22 /* Public | MethodCloned */,
      11,    0,   55,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    0x80000000 | 8, QMetaType::QString, QMetaType::QVariantMap,    9,   10,
    0x80000000 | 8, QMetaType::QString,    9,
    QMetaType::QVariantMap,

 // properties: name, type, flags
      12, QMetaType::Int, 0x00095001,
      13, QMetaType::Int, 0x00095001,
      14, QMetaType::QVariantMap, 0x00095c01,
      15, QMetaType::Int, 0x00095c01,
      16, QMetaType::Int, 0x00095c01,

       0        // eod
};

void DesktopScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesktopScriptingInterface *_t = static_cast<DesktopScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setHUDAlpha((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->show((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: { InteractiveWindowPointer _r = _t->createWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< InteractiveWindowPointer*>(_a[0]) = std::move(_r); }  break;
        case 3: { InteractiveWindowPointer _r = _t->createWindow((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< InteractiveWindowPointer*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariantMap _r = _t->getPresentationMode();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        DesktopScriptingInterface *_t = static_cast<DesktopScriptingInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->getPresentationMode(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->flagAlwaysOnTop(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->flagCloseButtonHides(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DesktopScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DesktopScriptingInterface.data,
      qt_meta_data_DesktopScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DesktopScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int DesktopScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
