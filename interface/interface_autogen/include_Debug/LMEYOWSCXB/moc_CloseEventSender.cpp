/****************************************************************************
** Meta object code from reading C++ file 'CloseEventSender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/networking/CloseEventSender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CloseEventSender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CloseEventSender_t {
    QByteArrayData data[4];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloseEventSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloseEventSender_t qt_meta_stringdata_CloseEventSender = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CloseEventSender"
QT_MOC_LITERAL(1, 17, 18), // "sendQuitEventAsync"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23) // "handleQuitEventFinished"

    },
    "CloseEventSender\0sendQuitEventAsync\0"
    "\0handleQuitEventFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloseEventSender[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CloseEventSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CloseEventSender *_t = static_cast<CloseEventSender *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendQuitEventAsync(); break;
        case 1: _t->handleQuitEventFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CloseEventSender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CloseEventSender.data,
      qt_meta_data_CloseEventSender,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CloseEventSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloseEventSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloseEventSender.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return QObject::qt_metacast(_clname);
}

int CloseEventSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
