/****************************************************************************
** Meta object code from reading C++ file 'kylinserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../kylinserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kylinserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KylinServer_t {
    QByteArrayData data[15];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KylinServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KylinServer_t qt_meta_stringdata_KylinServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "KylinServer"
QT_MOC_LITERAL(1, 12, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 28, 27), // "com.kylin.runtime.interface"
QT_MOC_LITERAL(3, 56, 9), // "app_start"
QT_MOC_LITERAL(4, 66, 0), // ""
QT_MOC_LITERAL(5, 67, 8), // "app_info"
QT_MOC_LITERAL(6, 76, 13), // "run_app_reply"
QT_MOC_LITERAL(7, 90, 5), // "reply"
QT_MOC_LITERAL(8, 96, 8), // "kill_app"
QT_MOC_LITERAL(9, 105, 12), // "exec_command"
QT_MOC_LITERAL(10, 118, 23), // "set_platform_app_status"
QT_MOC_LITERAL(11, 142, 15), // "platform_status"
QT_MOC_LITERAL(12, 158, 4), // "test"
QT_MOC_LITERAL(13, 163, 12), // "daemon_ready"
QT_MOC_LITERAL(14, 176, 23) // "app_cmd_andapp_platform"

    },
    "KylinServer\0D-Bus Interface\0"
    "com.kylin.runtime.interface\0app_start\0"
    "\0app_info\0run_app_reply\0reply\0kill_app\0"
    "exec_command\0set_platform_app_status\0"
    "platform_status\0test\0daemon_ready\0"
    "app_cmd_andapp_platform"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KylinServer[] = {

 // content:
       8,       // revision
       0,       // classname
       1,   14, // classinfo
       7,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   51,    4, 0x06 /* Public */,
       6,    1,   54,    4, 0x06 /* Public */,
       8,    1,   57,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   60,    4, 0x0a /* Public */,
      10,    1,   63,    4, 0x0a /* Public */,
      12,    0,   66,    4, 0x0a /* Public */,
      13,    1,   67,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,    5,
    QMetaType::Void, QMetaType::QVariantList,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariantList,   14,

       0        // eod
};

void KylinServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KylinServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->app_start((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->run_app_reply((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->kill_app((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->exec_command((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 4: _t->set_platform_app_status((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        case 5: _t->test(); break;
        case 6: _t->daemon_ready((*reinterpret_cast< QVariantList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KylinServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KylinServer::app_start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KylinServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KylinServer::run_app_reply)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KylinServer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KylinServer::kill_app)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject KylinServer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_KylinServer.data,
    qt_meta_data_KylinServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KylinServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KylinServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KylinServer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KylinServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void KylinServer::app_start(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KylinServer::run_app_reply(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KylinServer::kill_app(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
