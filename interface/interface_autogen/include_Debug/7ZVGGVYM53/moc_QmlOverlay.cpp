/****************************************************************************
** Meta object code from reading C++ file 'QmlOverlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/overlays/QmlOverlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlOverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlOverlay_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlOverlay_t qt_meta_stringdata_QmlOverlay = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QmlOverlay"
QT_MOC_LITERAL(1, 11, 19), // "qmlElementDestroyed"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "buildQmlElement"
QT_MOC_LITERAL(4, 48, 3) // "url"

    },
    "QmlOverlay\0qmlElementDestroyed\0\0"
    "buildQmlElement\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlOverlay[] = {

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

 // methods: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x00 /* Private */,
       3,    1,   25,    2, 0x00 /* Private */,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    4,

       0        // eod
};

void QmlOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QmlOverlay *_t = static_cast<QmlOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->qmlElementDestroyed(); break;
        case 1: _t->buildQmlElement((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QmlOverlay::staticMetaObject = {
    { &Overlay2D::staticMetaObject, qt_meta_stringdata_QmlOverlay.data,
      qt_meta_data_QmlOverlay,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *QmlOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlOverlay.stringdata0))
        return static_cast<void*>(this);
    return Overlay2D::qt_metacast(_clname);
}

int QmlOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Overlay2D::qt_metacall(_c, _id, _a);
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
