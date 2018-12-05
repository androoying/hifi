/****************************************************************************
** Meta object code from reading C++ file 'PCMCodecManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/PCMCodecManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PCMCodecManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCMCodec_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCMCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCMCodec_t qt_meta_stringdata_PCMCodec = {
    {
QT_MOC_LITERAL(0, 0, 8) // "PCMCodec"

    },
    "PCMCodec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCMCodec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PCMCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PCMCodec::staticMetaObject = {
    { &CodecPlugin::staticMetaObject, qt_meta_stringdata_PCMCodec.data,
      qt_meta_data_PCMCodec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PCMCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCMCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCMCodec.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Encoder"))
        return static_cast< Encoder*>(this);
    if (!strcmp(_clname, "Decoder"))
        return static_cast< Decoder*>(this);
    return CodecPlugin::qt_metacast(_clname);
}

int PCMCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CodecPlugin::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_zLibCodec_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_zLibCodec_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_zLibCodec_t qt_meta_stringdata_zLibCodec = {
    {
QT_MOC_LITERAL(0, 0, 9) // "zLibCodec"

    },
    "zLibCodec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_zLibCodec[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void zLibCodec::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject zLibCodec::staticMetaObject = {
    { &CodecPlugin::staticMetaObject, qt_meta_stringdata_zLibCodec.data,
      qt_meta_data_zLibCodec,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *zLibCodec::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *zLibCodec::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_zLibCodec.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Encoder"))
        return static_cast< Encoder*>(this);
    if (!strcmp(_clname, "Decoder"))
        return static_cast< Decoder*>(this);
    return CodecPlugin::qt_metacast(_clname);
}

int zLibCodec::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CodecPlugin::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
