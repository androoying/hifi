/****************************************************************************
** Meta object code from reading C++ file 'ResourceRequest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ResourceRequest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceRequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ResourceRequest_t {
    QByteArrayData data[17];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ResourceRequest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ResourceRequest_t qt_meta_stringdata_ResourceRequest = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ResourceRequest"
QT_MOC_LITERAL(1, 16, 8), // "progress"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "bytesReceived"
QT_MOC_LITERAL(4, 40, 10), // "bytesTotal"
QT_MOC_LITERAL(5, 51, 8), // "finished"
QT_MOC_LITERAL(6, 60, 4), // "send"
QT_MOC_LITERAL(7, 65, 6), // "Result"
QT_MOC_LITERAL(8, 72, 7), // "Success"
QT_MOC_LITERAL(9, 80, 5), // "Error"
QT_MOC_LITERAL(10, 86, 7), // "Timeout"
QT_MOC_LITERAL(11, 94, 17), // "ServerUnavailable"
QT_MOC_LITERAL(12, 112, 12), // "AccessDenied"
QT_MOC_LITERAL(13, 125, 16), // "InvalidByteRange"
QT_MOC_LITERAL(14, 142, 10), // "InvalidURL"
QT_MOC_LITERAL(15, 153, 8), // "NotFound"
QT_MOC_LITERAL(16, 162, 12) // "RedirectFail"

    },
    "ResourceRequest\0progress\0\0bytesReceived\0"
    "bytesTotal\0finished\0send\0Result\0Success\0"
    "Error\0Timeout\0ServerUnavailable\0"
    "AccessDenied\0InvalidByteRange\0InvalidURL\0"
    "NotFound\0RedirectFail"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ResourceRequest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   36, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // enums: name, flags, count, data
       7, 0x0,    9,   40,

 // enum data: key, value
       8, uint(ResourceRequest::Success),
       9, uint(ResourceRequest::Error),
      10, uint(ResourceRequest::Timeout),
      11, uint(ResourceRequest::ServerUnavailable),
      12, uint(ResourceRequest::AccessDenied),
      13, uint(ResourceRequest::InvalidByteRange),
      14, uint(ResourceRequest::InvalidURL),
      15, uint(ResourceRequest::NotFound),
      16, uint(ResourceRequest::RedirectFail),

       0        // eod
};

void ResourceRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ResourceRequest *_t = static_cast<ResourceRequest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->progress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->finished(); break;
        case 2: _t->send(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceRequest::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceRequest::progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ResourceRequest::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ResourceRequest::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ResourceRequest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ResourceRequest.data,
      qt_meta_data_ResourceRequest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ResourceRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ResourceRequest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ResourceRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ResourceRequest::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResourceRequest::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
