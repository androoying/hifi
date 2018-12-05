/****************************************************************************
** Meta object code from reading C++ file 'AssetRequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AssetRequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AssetRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AssetRequest_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AssetRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AssetRequest_t qt_meta_stringdata_AssetRequest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AssetRequest"
QT_MOC_LITERAL(1, 13, 8), // "finished"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "AssetRequest*"
QT_MOC_LITERAL(4, 37, 11), // "thisRequest"
QT_MOC_LITERAL(5, 49, 8), // "progress"
QT_MOC_LITERAL(6, 58, 13), // "totalReceived"
QT_MOC_LITERAL(7, 72, 5), // "total"
QT_MOC_LITERAL(8, 78, 5), // "start"
QT_MOC_LITERAL(9, 84, 5), // "Error"
QT_MOC_LITERAL(10, 90, 7), // "NoError"
QT_MOC_LITERAL(11, 98, 8), // "NotFound"
QT_MOC_LITERAL(12, 107, 16), // "InvalidByteRange"
QT_MOC_LITERAL(13, 124, 11), // "InvalidHash"
QT_MOC_LITERAL(14, 136, 22), // "HashVerificationFailed"
QT_MOC_LITERAL(15, 159, 22), // "SizeVerificationFailed"
QT_MOC_LITERAL(16, 182, 12), // "NetworkError"
QT_MOC_LITERAL(17, 195, 12) // "UnknownError"

    },
    "AssetRequest\0finished\0\0AssetRequest*\0"
    "thisRequest\0progress\0totalReceived\0"
    "total\0start\0Error\0NoError\0NotFound\0"
    "InvalidByteRange\0InvalidHash\0"
    "HashVerificationFailed\0SizeVerificationFailed\0"
    "NetworkError\0UnknownError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AssetRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   37,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,

 // methods: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
       9, 0x0,    8,   42,

 // enum data: key, value
      10, uint(AssetRequest::NoError),
      11, uint(AssetRequest::NotFound),
      12, uint(AssetRequest::InvalidByteRange),
      13, uint(AssetRequest::InvalidHash),
      14, uint(AssetRequest::HashVerificationFailed),
      15, uint(AssetRequest::SizeVerificationFailed),
      16, uint(AssetRequest::NetworkError),
      17, uint(AssetRequest::UnknownError),

       0        // eod
};

void AssetRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AssetRequest *_t = static_cast<AssetRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< AssetRequest*(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->start(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AssetRequest* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AssetRequest::*)(AssetRequest * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequest::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AssetRequest::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AssetRequest::progress)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AssetRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AssetRequest.data,
      qt_meta_data_AssetRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AssetRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AssetRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AssetRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AssetRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AssetRequest::finished(AssetRequest * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AssetRequest::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
