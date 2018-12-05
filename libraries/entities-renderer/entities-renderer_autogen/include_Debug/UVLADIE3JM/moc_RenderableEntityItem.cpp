/****************************************************************************
** Meta object code from reading C++ file 'RenderableEntityItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RenderableEntityItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderableEntityItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__entities__EntityRenderer_t {
    QByteArrayData data[3];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__entities__EntityRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__entities__EntityRenderer_t qt_meta_stringdata_render__entities__EntityRenderer = {
    {
QT_MOC_LITERAL(0, 0, 32), // "render::entities::EntityRenderer"
QT_MOC_LITERAL(1, 33, 19), // "requestRenderUpdate"
QT_MOC_LITERAL(2, 53, 0) // ""

    },
    "render::entities::EntityRenderer\0"
    "requestRenderUpdate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__entities__EntityRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void render::entities::EntityRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EntityRenderer *_t = static_cast<EntityRenderer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestRenderUpdate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EntityRenderer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EntityRenderer::requestRenderUpdate)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::entities::EntityRenderer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_render__entities__EntityRenderer.data,
      qt_meta_data_render__entities__EntityRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::entities::EntityRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::entities::EntityRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__entities__EntityRenderer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<EntityRenderer>"))
        return static_cast< std::enable_shared_from_this<EntityRenderer>*>(this);
    if (!strcmp(_clname, "PayloadProxyInterface"))
        return static_cast< PayloadProxyInterface*>(this);
    if (!strcmp(_clname, "ReadWriteLockable"))
        return static_cast< ReadWriteLockable*>(this);
    if (!strcmp(_clname, "scriptable::ModelProvider"))
        return static_cast< scriptable::ModelProvider*>(this);
    return QObject::qt_metacast(_clname);
}

int render::entities::EntityRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void render::entities::EntityRenderer::requestRenderUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
