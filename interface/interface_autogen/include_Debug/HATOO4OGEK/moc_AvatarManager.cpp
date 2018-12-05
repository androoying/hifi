/****************************************************************************
** Meta object code from reading C++ file 'AvatarManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/avatar/AvatarManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AvatarManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AvatarManager_t {
    QByteArrayData data[33];
    char stringdata0[555];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AvatarManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AvatarManager_t qt_meta_stringdata_AvatarManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AvatarManager"
QT_MOC_LITERAL(1, 14, 24), // "updateAvatarRenderStatus"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "shouldRenderAvatars"
QT_MOC_LITERAL(4, 60, 9), // "getAvatar"
QT_MOC_LITERAL(5, 70, 17), // "ScriptAvatarData*"
QT_MOC_LITERAL(6, 88, 8), // "avatarID"
QT_MOC_LITERAL(7, 97, 17), // "getAvatarDataRate"
QT_MOC_LITERAL(8, 115, 9), // "sessionID"
QT_MOC_LITERAL(9, 125, 8), // "rateName"
QT_MOC_LITERAL(10, 134, 19), // "getAvatarUpdateRate"
QT_MOC_LITERAL(11, 154, 23), // "getAvatarSimulationRate"
QT_MOC_LITERAL(12, 178, 19), // "findRayIntersection"
QT_MOC_LITERAL(13, 198, 29), // "RayToAvatarIntersectionResult"
QT_MOC_LITERAL(14, 228, 7), // "PickRay"
QT_MOC_LITERAL(15, 236, 3), // "ray"
QT_MOC_LITERAL(16, 240, 12), // "QScriptValue"
QT_MOC_LITERAL(17, 253, 18), // "avatarIdsToInclude"
QT_MOC_LITERAL(18, 272, 18), // "avatarIdsToDiscard"
QT_MOC_LITERAL(19, 291, 25), // "findRayIntersectionVector"
QT_MOC_LITERAL(20, 317, 21), // "QVector<EntityItemID>"
QT_MOC_LITERAL(21, 339, 16), // "avatarsToInclude"
QT_MOC_LITERAL(22, 356, 16), // "avatarsToDiscard"
QT_MOC_LITERAL(23, 373, 30), // "findParabolaIntersectionVector"
QT_MOC_LITERAL(24, 404, 34), // "ParabolaToAvatarIntersectionR..."
QT_MOC_LITERAL(25, 439, 12), // "PickParabola"
QT_MOC_LITERAL(26, 452, 4), // "pick"
QT_MOC_LITERAL(27, 457, 24), // "getAvatarSortCoefficient"
QT_MOC_LITERAL(28, 482, 4), // "name"
QT_MOC_LITERAL(29, 487, 24), // "setAvatarSortCoefficient"
QT_MOC_LITERAL(30, 512, 5), // "value"
QT_MOC_LITERAL(31, 518, 10), // "getPalData"
QT_MOC_LITERAL(32, 529, 25) // "specificAvatarIdentifiers"

    },
    "AvatarManager\0updateAvatarRenderStatus\0"
    "\0shouldRenderAvatars\0getAvatar\0"
    "ScriptAvatarData*\0avatarID\0getAvatarDataRate\0"
    "sessionID\0rateName\0getAvatarUpdateRate\0"
    "getAvatarSimulationRate\0findRayIntersection\0"
    "RayToAvatarIntersectionResult\0PickRay\0"
    "ray\0QScriptValue\0avatarIdsToInclude\0"
    "avatarIdsToDiscard\0findRayIntersectionVector\0"
    "QVector<EntityItemID>\0avatarsToInclude\0"
    "avatarsToDiscard\0findParabolaIntersectionVector\0"
    "ParabolaToAvatarIntersectionResult\0"
    "PickParabola\0pick\0getAvatarSortCoefficient\0"
    "name\0setAvatarSortCoefficient\0value\0"
    "getPalData\0specificAvatarIdentifiers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AvatarManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    1,  102,    2, 0x02 /* Public */,
       7,    2,  105,    2, 0x02 /* Public */,
       7,    1,  110,    2, 0x22 /* Public | MethodCloned */,
      10,    2,  113,    2, 0x02 /* Public */,
      10,    1,  118,    2, 0x22 /* Public | MethodCloned */,
      11,    2,  121,    2, 0x02 /* Public */,
      11,    1,  126,    2, 0x22 /* Public | MethodCloned */,
      12,    3,  129,    2, 0x02 /* Public */,
      12,    2,  136,    2, 0x22 /* Public | MethodCloned */,
      12,    1,  141,    2, 0x22 /* Public | MethodCloned */,
      19,    3,  144,    2, 0x02 /* Public */,
      23,    3,  151,    2, 0x02 /* Public */,
      27,    1,  158,    2, 0x02 /* Public */,
      29,    2,  161,    2, 0x02 /* Public */,
      31,    1,  166,    2, 0x02 /* Public */,
      31,    0,  169,    2, 0x22 /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // methods: parameters
    0x80000000 | 5, QMetaType::QUuid,    6,
    QMetaType::Float, QMetaType::QUuid, QMetaType::QString,    8,    9,
    QMetaType::Float, QMetaType::QUuid,    8,
    QMetaType::Float, QMetaType::QUuid, QMetaType::QString,    8,    9,
    QMetaType::Float, QMetaType::QUuid,    8,
    QMetaType::Float, QMetaType::QUuid, QMetaType::QString,    8,    9,
    QMetaType::Float, QMetaType::QUuid,    8,
    0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 16,   15,   17,   18,
    0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    0x80000000 | 13, 0x80000000 | 14,   15,
    0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 20, 0x80000000 | 20,   15,   21,   22,
    0x80000000 | 24, 0x80000000 | 25, 0x80000000 | 20, 0x80000000 | 20,   26,   21,   22,
    QMetaType::Float, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 16,   28,   30,
    QMetaType::QVariantMap, QMetaType::QStringList,   32,
    QMetaType::QVariantMap,

       0        // eod
};

void AvatarManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AvatarManager *_t = static_cast<AvatarManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAvatarRenderStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { ScriptAvatarData* _r = _t->getAvatar((*reinterpret_cast< QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ScriptAvatarData**>(_a[0]) = std::move(_r); }  break;
        case 2: { float _r = _t->getAvatarDataRate((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 3: { float _r = _t->getAvatarDataRate((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 4: { float _r = _t->getAvatarUpdateRate((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 5: { float _r = _t->getAvatarUpdateRate((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 6: { float _r = _t->getAvatarSimulationRate((*reinterpret_cast< const QUuid(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 7: { float _r = _t->getAvatarSimulationRate((*reinterpret_cast< const QUuid(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 8: { RayToAvatarIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])),(*reinterpret_cast< const QScriptValue(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< RayToAvatarIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 9: { RayToAvatarIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< RayToAvatarIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 10: { RayToAvatarIntersectionResult _r = _t->findRayIntersection((*reinterpret_cast< const PickRay(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< RayToAvatarIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 11: { RayToAvatarIntersectionResult _r = _t->findRayIntersectionVector((*reinterpret_cast< const PickRay(*)>(_a[1])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[2])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< RayToAvatarIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 12: { ParabolaToAvatarIntersectionResult _r = _t->findParabolaIntersectionVector((*reinterpret_cast< const PickParabola(*)>(_a[1])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[2])),(*reinterpret_cast< const QVector<EntityItemID>(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< ParabolaToAvatarIntersectionResult*>(_a[0]) = std::move(_r); }  break;
        case 13: { float _r = _t->getAvatarSortCoefficient((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< float*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setAvatarSortCoefficient((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2]))); break;
        case 15: { QVariantMap _r = _t->getPalData((*reinterpret_cast< const QStringList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 16: { QVariantMap _r = _t->getPalData();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PickRay >(); break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<EntityItemID> >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<EntityItemID> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AvatarManager::staticMetaObject = {
    { &AvatarHashMap::staticMetaObject, qt_meta_stringdata_AvatarManager.data,
      qt_meta_data_AvatarManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AvatarManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AvatarManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AvatarManager.stringdata0))
        return static_cast<void*>(this);
    return AvatarHashMap::qt_metacast(_clname);
}

int AvatarManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AvatarHashMap::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
