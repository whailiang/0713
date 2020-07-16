/****************************************************************************
** Meta object code from reading C++ file 'runtime_adaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "runtime_adaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runtime_adaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InterfaceAdaptor_t {
    QByteArrayData data[17];
    char stringdata0[1019];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterfaceAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterfaceAdaptor_t qt_meta_stringdata_InterfaceAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InterfaceAdaptor"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 27), // "com.kylin.runtime.interface"
QT_MOC_LITERAL(3, 61, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 81, 793), // "  <interface name=\"com.kylin..."
QT_MOC_LITERAL(5, 802, 9), // "app_start"
QT_MOC_LITERAL(6, 812, 0), // ""
QT_MOC_LITERAL(7, 813, 8), // "app_info"
QT_MOC_LITERAL(8, 822, 8), // "kill_app"
QT_MOC_LITERAL(9, 831, 13), // "run_app_reply"
QT_MOC_LITERAL(10, 845, 5), // "reply"
QT_MOC_LITERAL(11, 851, 12), // "daemon_ready"
QT_MOC_LITERAL(12, 864, 23), // "app_cmd_andapp_platform"
QT_MOC_LITERAL(13, 888, 12), // "exec_command"
QT_MOC_LITERAL(14, 901, 23), // "set_platform_app_status"
QT_MOC_LITERAL(15, 925, 15), // "platform_status"
QT_MOC_LITERAL(16, 941, 4) // "test"

    },
    "InterfaceAdaptor\0D-Bus Interface\0"
    "com.kylin.runtime.interface\0"
    "D-Bus Introspection\0"
    "  <interface name=\"com.kylin.runtime.interface\">\n    <signal name=\""
    "app_start\">\n      <arg direction=\"out\" type=\"s\" name=\"app_info\""
    "/>\n    </signal>\n    <signal name=\"run_app_reply\">\n      <arg dir"
    "ection=\"out\" type=\"s\" name=\"reply\"/>\n    </signal>\n    <signal"
    " name=\"kill_app\">\n      <arg direction=\"out\" type=\"s\" name=\"ap"
    "p_info\"/>\n    </signal>\n    <method name=\"exec_command\">\n      <"
    "arg direction=\"in\" type=\"av\" name=\"app_info\"/>\n    </method>\n "
    "   <method name=\"set_platform_app_status\">\n      <arg direction=\"i"
    "n\" type=\"av\" name=\"platform_status\"/>\n    </method>\n    <method"
    " name=\"test\"/>\n    <method name=\"daemon_ready\">\n      <arg direc"
    "tion=\"in\" type=\"av\" name=\"app_cmd_andapp_platform\"/>\n    </meth"
    "od>\n  </interface>\n\0"
    "app_start\0\0app_info\0kill_app\0run_app_reply\0"
    "reply\0daemon_ready\0app_cmd_andapp_platform\0"
    "exec_command\0set_platform_app_status\0"
    "platform_status\0test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterfaceAdaptor[] = {

 // content:
       8,       // revision
       0,       // classname
       2,   14, // classinfo
       7,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    1,   53,    6, 0x06 /* Public */,
       8,    1,   56,    6, 0x06 /* Public */,
       9,    1,   59,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   62,    6, 0x0a /* Public */,
      13,    1,   65,    6, 0x0a /* Public */,
      14,    1,   68,    6, 0x0a /* Public */,
      16,    0,   71,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariantList,   12,
    QMetaType::Void, QMetaType::QVariantList,    7,
    QMetaType::Void, QMetaType::QVariantList,   15,
    QMetaType::Void,

       0        // eod
};

void InterfaceAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InterfaceAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->app_start((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->kill_app((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->run_app_reply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->daemon_ready((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 4: _t->exec_command((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 5: _t->set_platform_app_status((*reinterpret_cast< const QVariantList(*)>(_a[1]))); break;
        case 6: _t->test(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InterfaceAdaptor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfaceAdaptor::app_start)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InterfaceAdaptor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfaceAdaptor::kill_app)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InterfaceAdaptor::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InterfaceAdaptor::run_app_reply)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InterfaceAdaptor::staticMetaObject = { {
    &QDBusAbstractAdaptor::staticMetaObject,
    qt_meta_stringdata_InterfaceAdaptor.data,
    qt_meta_data_InterfaceAdaptor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InterfaceAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterfaceAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InterfaceAdaptor.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int InterfaceAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void InterfaceAdaptor::app_start(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InterfaceAdaptor::kill_app(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InterfaceAdaptor::run_app_reply(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
