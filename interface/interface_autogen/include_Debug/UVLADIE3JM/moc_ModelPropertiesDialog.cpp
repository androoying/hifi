/****************************************************************************
** Meta object code from reading C++ file 'ModelPropertiesDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ModelPropertiesDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelPropertiesDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelPropertiesDialog_t {
    QByteArrayData data[8];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelPropertiesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelPropertiesDialog_t qt_meta_stringdata_ModelPropertiesDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ModelPropertiesDialog"
QT_MOC_LITERAL(1, 22, 5), // "reset"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 22), // "chooseTextureDirectory"
QT_MOC_LITERAL(4, 52, 21), // "chooseScriptDirectory"
QT_MOC_LITERAL(5, 74, 16), // "updatePivotJoint"
QT_MOC_LITERAL(6, 91, 18), // "createNewFreeJoint"
QT_MOC_LITERAL(7, 110, 5) // "joint"

    },
    "ModelPropertiesDialog\0reset\0\0"
    "chooseTextureDirectory\0chooseScriptDirectory\0"
    "updatePivotJoint\0createNewFreeJoint\0"
    "joint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelPropertiesDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    1,   48,    2, 0x08 /* Private */,
       6,    0,   51,    2, 0x28 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void ModelPropertiesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelPropertiesDialog *_t = static_cast<ModelPropertiesDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->chooseTextureDirectory(); break;
        case 2: _t->chooseScriptDirectory(); break;
        case 3: _t->updatePivotJoint(); break;
        case 4: _t->createNewFreeJoint((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->createNewFreeJoint(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelPropertiesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModelPropertiesDialog.data,
      qt_meta_data_ModelPropertiesDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelPropertiesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelPropertiesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelPropertiesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ModelPropertiesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
