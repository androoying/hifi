/****************************************************************************
** Meta object code from reading C++ file 'EngineStats.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/render/EngineStats.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EngineStats.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_render__EngineStatsConfig_t {
    QByteArrayData data[32];
    char stringdata0[669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_render__EngineStatsConfig_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_render__EngineStatsConfig_t qt_meta_stringdata_render__EngineStatsConfig = {
    {
QT_MOC_LITERAL(0, 0, 25), // "render::EngineStatsConfig"
QT_MOC_LITERAL(1, 26, 5), // "dirty"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "bufferCPUCount"
QT_MOC_LITERAL(4, 48, 14), // "bufferGPUCount"
QT_MOC_LITERAL(5, 63, 16), // "bufferCPUMemSize"
QT_MOC_LITERAL(6, 80, 16), // "bufferGPUMemSize"
QT_MOC_LITERAL(7, 97, 15), // "textureCPUCount"
QT_MOC_LITERAL(8, 113, 15), // "textureGPUCount"
QT_MOC_LITERAL(9, 129, 23), // "textureResidentGPUCount"
QT_MOC_LITERAL(10, 153, 26), // "textureFramebufferGPUCount"
QT_MOC_LITERAL(11, 180, 23), // "textureResourceGPUCount"
QT_MOC_LITERAL(12, 204, 23), // "textureExternalGPUCount"
QT_MOC_LITERAL(13, 228, 17), // "textureCPUMemSize"
QT_MOC_LITERAL(14, 246, 17), // "textureGPUMemSize"
QT_MOC_LITERAL(15, 264, 25), // "textureResidentGPUMemSize"
QT_MOC_LITERAL(16, 290, 28), // "textureFramebufferGPUMemSize"
QT_MOC_LITERAL(17, 319, 25), // "textureResourceGPUMemSize"
QT_MOC_LITERAL(18, 345, 25), // "textureExternalGPUMemSize"
QT_MOC_LITERAL(19, 371, 30), // "texturePendingGPUTransferCount"
QT_MOC_LITERAL(20, 402, 29), // "texturePendingGPUTransferSize"
QT_MOC_LITERAL(21, 432, 34), // "textureResourcePopulatedGPUMe..."
QT_MOC_LITERAL(22, 467, 21), // "frameAPIDrawcallCount"
QT_MOC_LITERAL(23, 489, 18), // "frameDrawcallCount"
QT_MOC_LITERAL(24, 508, 17), // "frameDrawcallRate"
QT_MOC_LITERAL(25, 526, 18), // "frameTriangleCount"
QT_MOC_LITERAL(26, 545, 17), // "frameTriangleRate"
QT_MOC_LITERAL(27, 563, 17), // "frameTextureCount"
QT_MOC_LITERAL(28, 581, 16), // "frameTextureRate"
QT_MOC_LITERAL(29, 598, 23), // "frameTextureMemoryUsage"
QT_MOC_LITERAL(30, 622, 21), // "frameSetPipelineCount"
QT_MOC_LITERAL(31, 644, 24) // "frameSetInputFormatCount"

    },
    "render::EngineStatsConfig\0dirty\0\0"
    "bufferCPUCount\0bufferGPUCount\0"
    "bufferCPUMemSize\0bufferGPUMemSize\0"
    "textureCPUCount\0textureGPUCount\0"
    "textureResidentGPUCount\0"
    "textureFramebufferGPUCount\0"
    "textureResourceGPUCount\0textureExternalGPUCount\0"
    "textureCPUMemSize\0textureGPUMemSize\0"
    "textureResidentGPUMemSize\0"
    "textureFramebufferGPUMemSize\0"
    "textureResourceGPUMemSize\0"
    "textureExternalGPUMemSize\0"
    "texturePendingGPUTransferCount\0"
    "texturePendingGPUTransferSize\0"
    "textureResourcePopulatedGPUMemSize\0"
    "frameAPIDrawcallCount\0frameDrawcallCount\0"
    "frameDrawcallRate\0frameTriangleCount\0"
    "frameTriangleRate\0frameTextureCount\0"
    "frameTextureRate\0frameTextureMemoryUsage\0"
    "frameSetPipelineCount\0frameSetInputFormatCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_render__EngineStatsConfig[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      29,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::UInt, 0x00495003,
       4, QMetaType::UInt, 0x00495003,
       5, QMetaType::LongLong, 0x00495003,
       6, QMetaType::LongLong, 0x00495003,
       7, QMetaType::UInt, 0x00495003,
       8, QMetaType::UInt, 0x00495003,
       9, QMetaType::UInt, 0x00495003,
      10, QMetaType::UInt, 0x00495003,
      11, QMetaType::UInt, 0x00495003,
      12, QMetaType::UInt, 0x00495003,
      13, QMetaType::LongLong, 0x00495003,
      14, QMetaType::LongLong, 0x00495003,
      15, QMetaType::LongLong, 0x00495003,
      16, QMetaType::LongLong, 0x00495003,
      17, QMetaType::LongLong, 0x00495003,
      18, QMetaType::LongLong, 0x00495003,
      19, QMetaType::UInt, 0x00495003,
      20, QMetaType::LongLong, 0x00495003,
      21, QMetaType::LongLong, 0x00495003,
      22, QMetaType::UInt, 0x00495003,
      23, QMetaType::UInt, 0x00495003,
      24, QMetaType::UInt, 0x00495003,
      25, QMetaType::UInt, 0x00495003,
      26, QMetaType::UInt, 0x00495003,
      27, QMetaType::UInt, 0x00495003,
      28, QMetaType::UInt, 0x00495003,
      29, QMetaType::UInt, 0x00495003,
      30, QMetaType::UInt, 0x00495003,
      31, QMetaType::UInt, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void render::EngineStatsConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EngineStatsConfig *_t = static_cast<EngineStatsConfig *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dirty(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EngineStatsConfig::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EngineStatsConfig::dirty)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        EngineStatsConfig *_t = static_cast<EngineStatsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->bufferCPUCount; break;
        case 1: *reinterpret_cast< quint32*>(_v) = _t->bufferGPUCount; break;
        case 2: *reinterpret_cast< qint64*>(_v) = _t->bufferCPUMemSize; break;
        case 3: *reinterpret_cast< qint64*>(_v) = _t->bufferGPUMemSize; break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->textureCPUCount; break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->textureGPUCount; break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->textureResidentGPUCount; break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->textureFramebufferGPUCount; break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->textureResourceGPUCount; break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->textureExternalGPUCount; break;
        case 10: *reinterpret_cast< qint64*>(_v) = _t->textureCPUMemSize; break;
        case 11: *reinterpret_cast< qint64*>(_v) = _t->textureGPUMemSize; break;
        case 12: *reinterpret_cast< qint64*>(_v) = _t->textureResidentGPUMemSize; break;
        case 13: *reinterpret_cast< qint64*>(_v) = _t->textureFramebufferGPUMemSize; break;
        case 14: *reinterpret_cast< qint64*>(_v) = _t->textureResourceGPUMemSize; break;
        case 15: *reinterpret_cast< qint64*>(_v) = _t->textureExternalGPUMemSize; break;
        case 16: *reinterpret_cast< quint32*>(_v) = _t->texturePendingGPUTransferCount; break;
        case 17: *reinterpret_cast< qint64*>(_v) = _t->texturePendingGPUTransferSize; break;
        case 18: *reinterpret_cast< qint64*>(_v) = _t->textureResourcePopulatedGPUMemSize; break;
        case 19: *reinterpret_cast< quint32*>(_v) = _t->frameAPIDrawcallCount; break;
        case 20: *reinterpret_cast< quint32*>(_v) = _t->frameDrawcallCount; break;
        case 21: *reinterpret_cast< quint32*>(_v) = _t->frameDrawcallRate; break;
        case 22: *reinterpret_cast< quint32*>(_v) = _t->frameTriangleCount; break;
        case 23: *reinterpret_cast< quint32*>(_v) = _t->frameTriangleRate; break;
        case 24: *reinterpret_cast< quint32*>(_v) = _t->frameTextureCount; break;
        case 25: *reinterpret_cast< quint32*>(_v) = _t->frameTextureRate; break;
        case 26: *reinterpret_cast< quint32*>(_v) = _t->frameTextureMemoryUsage; break;
        case 27: *reinterpret_cast< quint32*>(_v) = _t->frameSetPipelineCount; break;
        case 28: *reinterpret_cast< quint32*>(_v) = _t->frameSetInputFormatCount; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        EngineStatsConfig *_t = static_cast<EngineStatsConfig *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->bufferCPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->bufferCPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 1:
            if (_t->bufferGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->bufferGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 2:
            if (_t->bufferCPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->bufferCPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 3:
            if (_t->bufferGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->bufferGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 4:
            if (_t->textureCPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureCPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 5:
            if (_t->textureGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 6:
            if (_t->textureResidentGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureResidentGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 7:
            if (_t->textureFramebufferGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureFramebufferGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 8:
            if (_t->textureResourceGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureResourceGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 9:
            if (_t->textureExternalGPUCount != *reinterpret_cast< quint32*>(_v)) {
                _t->textureExternalGPUCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 10:
            if (_t->textureCPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureCPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 11:
            if (_t->textureGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 12:
            if (_t->textureResidentGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureResidentGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 13:
            if (_t->textureFramebufferGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureFramebufferGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 14:
            if (_t->textureResourceGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureResourceGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 15:
            if (_t->textureExternalGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureExternalGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 16:
            if (_t->texturePendingGPUTransferCount != *reinterpret_cast< quint32*>(_v)) {
                _t->texturePendingGPUTransferCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 17:
            if (_t->texturePendingGPUTransferSize != *reinterpret_cast< qint64*>(_v)) {
                _t->texturePendingGPUTransferSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 18:
            if (_t->textureResourcePopulatedGPUMemSize != *reinterpret_cast< qint64*>(_v)) {
                _t->textureResourcePopulatedGPUMemSize = *reinterpret_cast< qint64*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 19:
            if (_t->frameAPIDrawcallCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameAPIDrawcallCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 20:
            if (_t->frameDrawcallCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameDrawcallCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 21:
            if (_t->frameDrawcallRate != *reinterpret_cast< quint32*>(_v)) {
                _t->frameDrawcallRate = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 22:
            if (_t->frameTriangleCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameTriangleCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 23:
            if (_t->frameTriangleRate != *reinterpret_cast< quint32*>(_v)) {
                _t->frameTriangleRate = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 24:
            if (_t->frameTextureCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameTextureCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 25:
            if (_t->frameTextureRate != *reinterpret_cast< quint32*>(_v)) {
                _t->frameTextureRate = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 26:
            if (_t->frameTextureMemoryUsage != *reinterpret_cast< quint32*>(_v)) {
                _t->frameTextureMemoryUsage = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 27:
            if (_t->frameSetPipelineCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameSetPipelineCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        case 28:
            if (_t->frameSetInputFormatCount != *reinterpret_cast< quint32*>(_v)) {
                _t->frameSetInputFormatCount = *reinterpret_cast< quint32*>(_v);
                Q_EMIT _t->dirty();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject render::EngineStatsConfig::staticMetaObject = {
    { &Job::Config::staticMetaObject, qt_meta_stringdata_render__EngineStatsConfig.data,
      qt_meta_data_render__EngineStatsConfig,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *render::EngineStatsConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *render::EngineStatsConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_render__EngineStatsConfig.stringdata0))
        return static_cast<void*>(this);
    return Job::Config::qt_metacast(_clname);
}

int render::EngineStatsConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::Config::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 29;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 29;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void render::EngineStatsConfig::dirty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
