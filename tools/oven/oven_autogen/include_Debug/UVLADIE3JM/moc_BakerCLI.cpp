/****************************************************************************
** Meta object code from reading C++ file 'BakerCLI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/BakerCLI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BakerCLI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BakerCLI_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BakerCLI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BakerCLI_t qt_meta_stringdata_BakerCLI = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BakerCLI"
QT_MOC_LITERAL(1, 9, 8), // "bakeFile"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "inputUrl"
QT_MOC_LITERAL(4, 28, 10), // "outputPath"
QT_MOC_LITERAL(5, 39, 4), // "type"
QT_MOC_LITERAL(6, 44, 19) // "handleFinishedBaker"

    },
    "BakerCLI\0bakeFile\0\0inputUrl\0outputPath\0"
    "type\0handleFinishedBaker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BakerCLI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x0a /* Public */,
       1,    2,   36,    2, 0x2a /* Public | MethodCloned */,
       6,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString,    3,    4,
    QMetaType::Void,

       0        // eod
};

void BakerCLI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BakerCLI *_t = static_cast<BakerCLI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bakeFile((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->bakeFile((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->handleFinishedBaker(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BakerCLI::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BakerCLI.data,
      qt_meta_data_BakerCLI,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BakerCLI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BakerCLI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BakerCLI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BakerCLI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
