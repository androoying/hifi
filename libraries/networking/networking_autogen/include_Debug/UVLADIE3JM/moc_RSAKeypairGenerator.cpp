/****************************************************************************
** Meta object code from reading C++ file 'RSAKeypairGenerator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RSAKeypairGenerator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RSAKeypairGenerator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RSAKeypairGenerator_t {
    QByteArrayData data[6];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RSAKeypairGenerator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RSAKeypairGenerator_t qt_meta_stringdata_RSAKeypairGenerator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RSAKeypairGenerator"
QT_MOC_LITERAL(1, 20, 22), // "errorGeneratingKeypair"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "generatedKeypair"
QT_MOC_LITERAL(4, 61, 9), // "publicKey"
QT_MOC_LITERAL(5, 71, 10) // "privateKey"

    },
    "RSAKeypairGenerator\0errorGeneratingKeypair\0"
    "\0generatedKeypair\0publicKey\0privateKey"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RSAKeypairGenerator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    2,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    4,    5,

       0        // eod
};

void RSAKeypairGenerator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RSAKeypairGenerator *_t = static_cast<RSAKeypairGenerator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorGeneratingKeypair(); break;
        case 1: _t->generatedKeypair((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RSAKeypairGenerator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RSAKeypairGenerator::errorGeneratingKeypair)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RSAKeypairGenerator::*)(QByteArray , QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RSAKeypairGenerator::generatedKeypair)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RSAKeypairGenerator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RSAKeypairGenerator.data,
      qt_meta_data_RSAKeypairGenerator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RSAKeypairGenerator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RSAKeypairGenerator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RSAKeypairGenerator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int RSAKeypairGenerator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void RSAKeypairGenerator::errorGeneratingKeypair()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RSAKeypairGenerator::generatedKeypair(QByteArray _t1, QByteArray _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
