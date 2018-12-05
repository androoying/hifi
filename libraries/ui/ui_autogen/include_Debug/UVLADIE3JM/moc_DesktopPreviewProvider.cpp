/****************************************************************************
** Meta object code from reading C++ file 'DesktopPreviewProvider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/DesktopPreviewProvider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DesktopPreviewProvider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DesktopPreviewProvider_t {
    QByteArrayData data[8];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DesktopPreviewProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DesktopPreviewProvider_t qt_meta_stringdata_DesktopPreviewProvider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "DesktopPreviewProvider"
QT_MOC_LITERAL(1, 23, 24), // "setPreviewDisabledReason"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 6), // "reason"
QT_MOC_LITERAL(4, 56, 22), // "PreviewDisabledReasons"
QT_MOC_LITERAL(5, 79, 4), // "USER"
QT_MOC_LITERAL(6, 84, 13), // "SECURE_SCREEN"
QT_MOC_LITERAL(7, 98, 5) // "VSYNC"

    },
    "DesktopPreviewProvider\0setPreviewDisabledReason\0"
    "\0reason\0PreviewDisabledReasons\0USER\0"
    "SECURE_SCREEN\0VSYNC"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DesktopPreviewProvider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       1,   22, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, flags, count, data
       4, 0x0,    3,   26,

 // enum data: key, value
       5, uint(DesktopPreviewProvider::USER),
       6, uint(DesktopPreviewProvider::SECURE_SCREEN),
       7, uint(DesktopPreviewProvider::VSYNC),

       0        // eod
};

void DesktopPreviewProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DesktopPreviewProvider *_t = static_cast<DesktopPreviewProvider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setPreviewDisabledReason((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DesktopPreviewProvider::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DesktopPreviewProvider.data,
      qt_meta_data_DesktopPreviewProvider,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DesktopPreviewProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DesktopPreviewProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DesktopPreviewProvider.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int DesktopPreviewProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
