/****************************************************************************
** Meta object code from reading C++ file 'runtime_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "runtime_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runtime_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComKylinRuntimeInterfaceInterface_t {
    QByteArrayData data[14];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ComKylinRuntimeInterfaceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ComKylinRuntimeInterfaceInterface_t qt_meta_stringdata_ComKylinRuntimeInterfaceInterface = {
    {
QT_MOC_LITERAL(0, 0, 33), // "ComKylinRuntimeInterfaceInter..."
QT_MOC_LITERAL(1, 34, 9), // "app_start"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 8), // "app_info"
QT_MOC_LITERAL(4, 54, 8), // "kill_app"
QT_MOC_LITERAL(5, 63, 13), // "run_app_reply"
QT_MOC_LITERAL(6, 77, 5), // "reply"
QT_MOC_LITERAL(7, 83, 12), // "daemon_ready"
QT_MOC_LITERAL(8, 96, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(9, 116, 23), // "app_cmd_andapp_platform"
QT_MOC_LITERAL(10, 140, 12), // "exec_command"
QT_MOC_LITERAL(11, 153, 23), // "set_platform_app_status"
QT_MOC_LITERAL(12, 177, 15), // "platform_status"
QT_MOC_LITERAL(13, 193, 4) // "test"

    },
    "ComKylinRuntimeInterfaceInterface\0"
    "app_start\0\0app_info\0kill_app\0run_app_reply\0"
    "reply\0daemon_ready\0QDBusPendingReply<>\0"
    "app_cmd_andapp_platform\0exec_command\0"
    "set_platform_app_status\0platform_status\0"
    "test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComKylinRuntimeInterfaceInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    0x80000000 | 8, QMetaType::QVariantList,    9,
    0x80000000 | 8, QMetaType::QVariantList,    3,
    0x80000000 | 8, QMetaType::QVariantList,   12,
    0x80000000 | 8,

       0        // eod
};

void ComKylinRuntimeInterfaceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComKylinRuntimeInterfaceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->app_start((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->kill_app((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->run_app_reply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QDBusPendingReply<> _r = _t->daemon_ready((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<> _r = _t->exec_command((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->set_platform_app_status((*reinterpret_cast< const QVariantList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<> _r = _t->test();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComKylinRuntimeInterfaceInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComKylinRuntimeInterfaceInterface::app_start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComKylinRuntimeInterfaceInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComKylinRuntimeInterfaceInterface::kill_app)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComKylinRuntimeInterfaceInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComKylinRuntimeInterfaceInterface::run_app_reply)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ComKylinRuntimeInterfaceInterface::staticMetaObject = { {
    &QDBusAbstractInterface::staticMetaObject,
    qt_meta_stringdata_ComKylinRuntimeInterfaceInterface.data,
    qt_meta_data_ComKylinRuntimeInterfaceInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ComKylinRuntimeInterfaceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComKylinRuntimeInterfaceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComKylinRuntimeInterfaceInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int ComKylinRuntimeInterfaceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
void ComKylinRuntimeInterfaceInterface::app_start(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComKylinRuntimeInterfaceInterface::kill_app(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ComKylinRuntimeInterfaceInterface::run_app_reply(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
