/****************************************************************************
** Meta object code from reading C++ file 'Pick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/Pick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PickQuery_t {
    QByteArrayData data[7];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PickQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PickQuery_t qt_meta_stringdata_PickQuery = {
    {
QT_MOC_LITERAL(0, 0, 9), // "PickQuery"
QT_MOC_LITERAL(1, 10, 8), // "PickType"
QT_MOC_LITERAL(2, 19, 3), // "Ray"
QT_MOC_LITERAL(3, 23, 6), // "Stylus"
QT_MOC_LITERAL(4, 30, 8), // "Parabola"
QT_MOC_LITERAL(5, 39, 9), // "Collision"
QT_MOC_LITERAL(6, 49, 14) // "NUM_PICK_TYPES"

    },
    "PickQuery\0PickType\0Ray\0Stylus\0Parabola\0"
    "Collision\0NUM_PICK_TYPES"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PickQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    5,   18,

 // enum data: key, value
       2, uint(PickQuery::Ray),
       3, uint(PickQuery::Stylus),
       4, uint(PickQuery::Parabola),
       5, uint(PickQuery::Collision),
       6, uint(PickQuery::NUM_PICK_TYPES),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject PickQuery::staticMetaObject = {
    { nullptr, qt_meta_stringdata_PickQuery.data,
      qt_meta_data_PickQuery,  nullptr, nullptr, nullptr}
};

QT_WARNING_POP
QT_END_MOC_NAMESPACE
