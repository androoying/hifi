/****************************************************************************
** Meta object code from reading C++ file 'GooglePolyScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/GooglePolyScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GooglePolyScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GooglePolyScriptingInterface_t {
    QByteArrayData data[16];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GooglePolyScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GooglePolyScriptingInterface_t qt_meta_stringdata_GooglePolyScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 28), // "GooglePolyScriptingInterface"
QT_MOC_LITERAL(1, 29, 9), // "setAPIKey"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 3), // "key"
QT_MOC_LITERAL(4, 44, 12), // "getAssetList"
QT_MOC_LITERAL(5, 57, 7), // "keyword"
QT_MOC_LITERAL(6, 65, 8), // "category"
QT_MOC_LITERAL(7, 74, 6), // "format"
QT_MOC_LITERAL(8, 81, 6), // "getFBX"
QT_MOC_LITERAL(9, 88, 6), // "getOBJ"
QT_MOC_LITERAL(10, 95, 9), // "getBlocks"
QT_MOC_LITERAL(11, 105, 7), // "getGLTF"
QT_MOC_LITERAL(12, 113, 8), // "getGLTF2"
QT_MOC_LITERAL(13, 122, 7), // "getTilt"
QT_MOC_LITERAL(14, 130, 12), // "getModelInfo"
QT_MOC_LITERAL(15, 143, 5) // "input"

    },
    "GooglePolyScriptingInterface\0setAPIKey\0"
    "\0key\0getAssetList\0keyword\0category\0"
    "format\0getFBX\0getOBJ\0getBlocks\0getGLTF\0"
    "getGLTF2\0getTilt\0getModelInfo\0input"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GooglePolyScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    3,   62,    2, 0x0a /* Public */,
       8,    2,   69,    2, 0x0a /* Public */,
       9,    2,   74,    2, 0x0a /* Public */,
      10,    2,   79,    2, 0x0a /* Public */,
      11,    2,   84,    2, 0x0a /* Public */,
      12,    2,   89,    2, 0x0a /* Public */,
      13,    2,   94,    2, 0x0a /* Public */,
      14,    1,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::QString, QMetaType::QString,   15,

       0        // eod
};

void GooglePolyScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GooglePolyScriptingInterface *_t = static_cast<GooglePolyScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setAPIKey((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: { QString _r = _t->getAssetList((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->getFBX((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->getOBJ((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->getBlocks((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getGLTF((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->getGLTF2((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->getTilt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->getModelInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GooglePolyScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GooglePolyScriptingInterface.data,
      qt_meta_data_GooglePolyScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GooglePolyScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GooglePolyScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GooglePolyScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int GooglePolyScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
