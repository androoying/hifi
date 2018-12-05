/****************************************************************************
** Meta object code from reading C++ file 'ModelsBrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ui/ModelsBrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelsBrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelHandler_t {
    QByteArrayData data[10];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelHandler_t qt_meta_stringdata_ModelHandler = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModelHandler"
QT_MOC_LITERAL(1, 13, 15), // "doneDownloading"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "updated"
QT_MOC_LITERAL(4, 38, 13), // "setNameFilter"
QT_MOC_LITERAL(5, 52, 10), // "nameFilter"
QT_MOC_LITERAL(6, 63, 8), // "download"
QT_MOC_LITERAL(7, 72, 6), // "update"
QT_MOC_LITERAL(8, 79, 4), // "exit"
QT_MOC_LITERAL(9, 84, 16) // "downloadFinished"

    },
    "ModelHandler\0doneDownloading\0\0updated\0"
    "setNameFilter\0nameFilter\0download\0"
    "update\0exit\0downloadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x0a /* Public */,
       6,    0,   54,    2, 0x0a /* Public */,
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelHandler *_t = static_cast<ModelHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doneDownloading(); break;
        case 1: _t->updated(); break;
        case 2: _t->setNameFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->download(); break;
        case 4: _t->update(); break;
        case 5: _t->exit(); break;
        case 6: _t->downloadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelHandler::doneDownloading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModelHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelHandler::updated)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ModelHandler.data,
      qt_meta_data_ModelHandler,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ModelHandler::doneDownloading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModelHandler::updated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_ModelsBrowser_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelsBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelsBrowser_t qt_meta_stringdata_ModelsBrowser = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ModelsBrowser"
QT_MOC_LITERAL(1, 14, 16), // "startDownloading"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "startUpdating"
QT_MOC_LITERAL(4, 46, 8), // "selected"
QT_MOC_LITERAL(5, 55, 8), // "filename"
QT_MOC_LITERAL(6, 64, 13), // "setNameFilter"
QT_MOC_LITERAL(7, 78, 10), // "nameFilter"
QT_MOC_LITERAL(8, 89, 6), // "browse"
QT_MOC_LITERAL(9, 96, 11), // "applyFilter"
QT_MOC_LITERAL(10, 108, 6), // "filter"
QT_MOC_LITERAL(11, 115, 10), // "resizeView"
QT_MOC_LITERAL(12, 126, 15) // "enableSearchBar"

    },
    "ModelsBrowser\0startDownloading\0\0"
    "startUpdating\0selected\0filename\0"
    "setNameFilter\0nameFilter\0browse\0"
    "applyFilter\0filter\0resizeView\0"
    "enableSearchBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelsBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   59,    2, 0x0a /* Public */,
       8,    0,   62,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x08 /* Private */,
      11,    0,   66,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelsBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelsBrowser *_t = static_cast<ModelsBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startDownloading(); break;
        case 1: _t->startUpdating(); break;
        case 2: _t->selected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setNameFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->browse(); break;
        case 5: _t->applyFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->resizeView(); break;
        case 7: _t->enableSearchBar(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelsBrowser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelsBrowser::startDownloading)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModelsBrowser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelsBrowser::startUpdating)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModelsBrowser::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelsBrowser::selected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelsBrowser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ModelsBrowser.data,
      qt_meta_data_ModelsBrowser,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelsBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelsBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelsBrowser.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ModelsBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ModelsBrowser::startDownloading()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModelsBrowser::startUpdating()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ModelsBrowser::selected(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
