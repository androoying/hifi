/****************************************************************************
** Meta object code from reading C++ file 'DomainBakeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/DomainBakeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DomainBakeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DomainBakeWidget_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DomainBakeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DomainBakeWidget_t qt_meta_stringdata_DomainBakeWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DomainBakeWidget"
QT_MOC_LITERAL(1, 17, 23), // "chooseFileButtonClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 28), // "chooseOutputDirButtonClicked"
QT_MOC_LITERAL(4, 71, 17), // "bakeButtonClicked"
QT_MOC_LITERAL(5, 89, 22), // "outputDirectoryChanged"
QT_MOC_LITERAL(6, 112, 12), // "newDirectory"
QT_MOC_LITERAL(7, 125, 19), // "handleBakerProgress"
QT_MOC_LITERAL(8, 145, 5), // "baked"
QT_MOC_LITERAL(9, 151, 5), // "total"
QT_MOC_LITERAL(10, 157, 19) // "handleFinishedBaker"

    },
    "DomainBakeWidget\0chooseFileButtonClicked\0"
    "\0chooseOutputDirButtonClicked\0"
    "bakeButtonClicked\0outputDirectoryChanged\0"
    "newDirectory\0handleBakerProgress\0baked\0"
    "total\0handleFinishedBaker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DomainBakeWidget[] = {

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
       5,    1,   47,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,

       0        // eod
};

void DomainBakeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DomainBakeWidget *_t = static_cast<DomainBakeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chooseFileButtonClicked(); break;
        case 1: _t->chooseOutputDirButtonClicked(); break;
        case 2: _t->bakeButtonClicked(); break;
        case 3: _t->outputDirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->handleBakerProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->handleFinishedBaker(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DomainBakeWidget::staticMetaObject = {
    { &BakeWidget::staticMetaObject, qt_meta_stringdata_DomainBakeWidget.data,
      qt_meta_data_DomainBakeWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DomainBakeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DomainBakeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DomainBakeWidget.stringdata0))
        return static_cast<void*>(this);
    return BakeWidget::qt_metacast(_clname);
}

int DomainBakeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BakeWidget::qt_metacall(_c, _id, _a);
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
