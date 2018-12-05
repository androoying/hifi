/****************************************************************************
** Meta object code from reading C++ file 'RenderableModelEntityItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/RenderableModelEntityItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RenderableModelEntityItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RenderableModelEntityItem_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderableModelEntityItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderableModelEntityItem_t qt_meta_stringdata_RenderableModelEntityItem = {
    {
QT_MOC_LITERAL(0, 0, 25) // "RenderableModelEntityItem"

    },
    "RenderableModelEntityItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderableModelEntityItem[] = {

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

void RenderableModelEntityItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject RenderableModelEntityItem::staticMetaObject = {
    { &ModelEntityWrapper::staticMetaObject, qt_meta_stringdata_RenderableModelEntityItem.data,
      qt_meta_data_RenderableModelEntityItem,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RenderableModelEntityItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderableModelEntityItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RenderableModelEntityItem.stringdata0))
        return static_cast<void*>(this);
    return ModelEntityWrapper::qt_metacast(_clname);
}

int RenderableModelEntityItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ModelEntityWrapper::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_render__entities__ModelEntityRenderer_t {
    QByteArrayData data[1];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__entities__ModelEntityRenderer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__entities__ModelEntityRenderer_t qt_meta_stringdata_render__entities__ModelEntityRenderer = {
    {
QT_MOC_LITERAL(0, 0, 37) // "render::entities::ModelEntity..."

    },
    "render::entities::ModelEntityRenderer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__entities__ModelEntityRenderer[] = {

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

void render::entities::ModelEntityRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::entities::ModelEntityRenderer::staticMetaObject = {
    { &TypedEntityRenderer<RenderableModelEntityItem>::staticMetaObject, qt_meta_stringdata_render__entities__ModelEntityRenderer.data,
      qt_meta_data_render__entities__ModelEntityRenderer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::entities::ModelEntityRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::entities::ModelEntityRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__entities__ModelEntityRenderer.stringdata0))
        return static_cast<void*>(this);
    return TypedEntityRenderer<RenderableModelEntityItem>::qt_metacast(_clname);
}

int render::entities::ModelEntityRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedEntityRenderer<RenderableModelEntityItem>::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
