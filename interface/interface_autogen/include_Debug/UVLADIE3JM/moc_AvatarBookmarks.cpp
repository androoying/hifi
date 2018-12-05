/****************************************************************************
** Meta object code from reading C++ file 'AvatarBookmarks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AvatarBookmarks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarBookmarks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarBookmarks_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarBookmarks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarBookmarks_t qt_meta_stringdata_AvatarBookmarks = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AvatarBookmarks"
QT_MOC_LITERAL(1, 16, 14), // "bookmarkLoaded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "bookmarkName"
QT_MOC_LITERAL(4, 45, 15), // "bookmarkDeleted"
QT_MOC_LITERAL(5, 61, 13), // "bookmarkAdded"
QT_MOC_LITERAL(6, 75, 11), // "addBookmark"
QT_MOC_LITERAL(7, 87, 12), // "saveBookmark"
QT_MOC_LITERAL(8, 100, 12), // "loadBookmark"
QT_MOC_LITERAL(9, 113, 14), // "removeBookmark"
QT_MOC_LITERAL(10, 128, 20), // "updateAvatarEntities"
QT_MOC_LITERAL(11, 149, 14), // "avatarEntities"
QT_MOC_LITERAL(12, 164, 12), // "getBookmarks"
QT_MOC_LITERAL(13, 177, 11) // "getBookmark"

    },
    "AvatarBookmarks\0bookmarkLoaded\0\0"
    "bookmarkName\0bookmarkDeleted\0bookmarkAdded\0"
    "addBookmark\0saveBookmark\0loadBookmark\0"
    "removeBookmark\0updateAvatarEntities\0"
    "avatarEntities\0getBookmarks\0getBookmark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarBookmarks[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      12,    0,   88,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      13,    1,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantList,   11,
    QMetaType::QVariantMap,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString,    3,

       0        // eod
};

void AvatarBookmarks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarBookmarks *_t = static_cast<AvatarBookmarks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bookmarkLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->bookmarkDeleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->bookmarkAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->addBookmark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->saveBookmark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->loadBookmark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->removeBookmark((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->updateAvatarEntities((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 8: { QVariantMap _r = _t->getBookmarks();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariantMap _r = _t->getBookmark((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AvatarBookmarks::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarBookmarks::bookmarkLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AvatarBookmarks::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarBookmarks::bookmarkDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AvatarBookmarks::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AvatarBookmarks::bookmarkAdded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarBookmarks::staticMetaObject = {
    { &Bookmarks::staticMetaObject, qt_meta_stringdata_AvatarBookmarks.data,
      qt_meta_data_AvatarBookmarks,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarBookmarks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarBookmarks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarBookmarks.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Dependency"))
        return static_cast< Dependency*>(this);
    return Bookmarks::qt_metacast(_clname);
}

int AvatarBookmarks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Bookmarks::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AvatarBookmarks::bookmarkLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AvatarBookmarks::bookmarkDeleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AvatarBookmarks::bookmarkAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
