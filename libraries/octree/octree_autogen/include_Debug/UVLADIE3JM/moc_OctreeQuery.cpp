/****************************************************************************
** Meta object code from reading C++ file 'OctreeQuery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/OctreeQuery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OctreeQuery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OctreeQuery_t {
    QByteArrayData data[9];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OctreeQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OctreeQuery_t qt_meta_stringdata_OctreeQuery = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OctreeQuery"
QT_MOC_LITERAL(1, 12, 27), // "incomingConnectionIDChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "setMaxQueryPacketsPerSecond"
QT_MOC_LITERAL(4, 69, 11), // "maxQueryPPS"
QT_MOC_LITERAL(5, 81, 18), // "setOctreeSizeScale"
QT_MOC_LITERAL(6, 100, 15), // "octreeSizeScale"
QT_MOC_LITERAL(7, 116, 22), // "setBoundaryLevelAdjust"
QT_MOC_LITERAL(8, 139, 19) // "boundaryLevelAdjust"

    },
    "OctreeQuery\0incomingConnectionIDChanged\0"
    "\0setMaxQueryPacketsPerSecond\0maxQueryPPS\0"
    "setOctreeSizeScale\0octreeSizeScale\0"
    "setBoundaryLevelAdjust\0boundaryLevelAdjust"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OctreeQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       5,    1,   38,    2, 0x0a /* Public */,
       7,    1,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void OctreeQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OctreeQuery *_t = static_cast<OctreeQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->incomingConnectionIDChanged(); break;
        case 1: _t->setMaxQueryPacketsPerSecond((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setOctreeSizeScale((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->setBoundaryLevelAdjust((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OctreeQuery::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OctreeQuery::incomingConnectionIDChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OctreeQuery::staticMetaObject = {
    { &NodeData::staticMetaObject, qt_meta_stringdata_OctreeQuery.data,
      qt_meta_data_OctreeQuery,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OctreeQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OctreeQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OctreeQuery.stringdata0))
        return static_cast<void*>(this);
    return NodeData::qt_metacast(_clname);
}

int OctreeQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NodeData::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OctreeQuery::incomingConnectionIDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
