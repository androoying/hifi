/****************************************************************************
** Meta object code from reading C++ file 'ClipboardScriptingInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/scripting/ClipboardScriptingInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClipboardScriptingInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClipboardScriptingInterface_t {
    QByteArrayData data[18];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClipboardScriptingInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClipboardScriptingInterface_t qt_meta_stringdata_ClipboardScriptingInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "ClipboardScriptingInterface"
QT_MOC_LITERAL(1, 28, 21), // "getContentsDimensions"
QT_MOC_LITERAL(2, 50, 9), // "glm::vec3"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 36), // "getClipboardContentsLargestDi..."
QT_MOC_LITERAL(5, 98, 14), // "importEntities"
QT_MOC_LITERAL(6, 113, 8), // "filename"
QT_MOC_LITERAL(7, 122, 12), // "isObservable"
QT_MOC_LITERAL(8, 135, 8), // "callerId"
QT_MOC_LITERAL(9, 144, 14), // "exportEntities"
QT_MOC_LITERAL(10, 159, 21), // "QVector<EntityItemID>"
QT_MOC_LITERAL(11, 181, 9), // "entityIDs"
QT_MOC_LITERAL(12, 191, 1), // "x"
QT_MOC_LITERAL(13, 193, 1), // "y"
QT_MOC_LITERAL(14, 195, 1), // "z"
QT_MOC_LITERAL(15, 197, 5), // "scale"
QT_MOC_LITERAL(16, 203, 13), // "pasteEntities"
QT_MOC_LITERAL(17, 217, 8) // "position"

    },
    "ClipboardScriptingInterface\0"
    "getContentsDimensions\0glm::vec3\0\0"
    "getClipboardContentsLargestDimension\0"
    "importEntities\0filename\0isObservable\0"
    "callerId\0exportEntities\0QVector<EntityItemID>\0"
    "entityIDs\0x\0y\0z\0scale\0pasteEntities\0"
    "position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClipboardScriptingInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x02 /* Public */,
       4,    0,   55,    3, 0x02 /* Public */,
       5,    3,   56,    3, 0x02 /* Public */,
       5,    2,   63,    3, 0x22 /* Public | MethodCloned */,
       5,    1,   68,    3, 0x22 /* Public | MethodCloned */,
       9,    2,   71,    3, 0x02 /* Public */,
       9,    5,   76,    3, 0x02 /* Public */,
      16,    1,   87,    3, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 2,
    QMetaType::Float,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool, QMetaType::LongLong,    6,    7,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Bool, QMetaType::QString,    6,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 10,    6,   11,
    QMetaType::Bool, QMetaType::QString, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Float,    6,   12,   13,   14,   15,
    0x80000000 | 10, 0x80000000 | 2,   17,

       0        // eod
};

void ClipboardScriptingInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ClipboardScriptingInterface *_t = static_cast<ClipboardScriptingInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { glm::vec3 _r = _t->getContentsDimensions();
            if (_a[0]) *reinterpret_cast< glm::vec3*>(_a[0]) = std::move(_r); }  break;
        case 1: { float _r = _t->getClipboardContentsLargestDimension();
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->importEntities((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])),(*reinterpret_cast< const qint64(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->importEntities((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->importEntities((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->exportEntities((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->exportEntities((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< float(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { QVector<EntityItemID> _r = _t->pasteEntities((*reinterpret_cast< glm::vec3(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector<EntityItemID>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<EntityItemID> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClipboardScriptingInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ClipboardScriptingInterface.data,
      qt_meta_data_ClipboardScriptingInterface,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ClipboardScriptingInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClipboardScriptingInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClipboardScriptingInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ClipboardScriptingInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
