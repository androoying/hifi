/****************************************************************************
** Meta object code from reading C++ file 'WebBrowserSuggestionsEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/webbrowser/WebBrowserSuggestionsEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebBrowserSuggestionsEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WebBrowserSuggestionsEngine_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebBrowserSuggestionsEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebBrowserSuggestionsEngine_t qt_meta_stringdata_WebBrowserSuggestionsEngine = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WebBrowserSuggestionsEngine"
QT_MOC_LITERAL(1, 28, 11), // "suggestions"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 16), // "querySuggestions"
QT_MOC_LITERAL(4, 58, 12), // "searchString"
QT_MOC_LITERAL(5, 71, 19), // "suggestionsFinished"
QT_MOC_LITERAL(6, 91, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 106, 5) // "reply"

    },
    "WebBrowserSuggestionsEngine\0suggestions\0"
    "\0querySuggestions\0searchString\0"
    "suggestionsFinished\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebBrowserSuggestionsEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    1,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void WebBrowserSuggestionsEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebBrowserSuggestionsEngine *_t = static_cast<WebBrowserSuggestionsEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->suggestions((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->querySuggestions((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->suggestionsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebBrowserSuggestionsEngine::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WebBrowserSuggestionsEngine::suggestions)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WebBrowserSuggestionsEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WebBrowserSuggestionsEngine.data,
      qt_meta_data_WebBrowserSuggestionsEngine,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WebBrowserSuggestionsEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebBrowserSuggestionsEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebBrowserSuggestionsEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WebBrowserSuggestionsEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WebBrowserSuggestionsEngine::suggestions(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
