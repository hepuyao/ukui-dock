/****************************************************************************
** Meta object code from reading C++ file 'launcherssignals.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layouts/launcherssignals.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'launcherssignals.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__Layouts__LaunchersSignals_t {
    QByteArrayData data[18];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layouts__LaunchersSignals_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layouts__LaunchersSignals_t qt_meta_stringdata_Latte__Layouts__LaunchersSignals = {
    {
QT_MOC_LITERAL(0, 0, 32), // "Latte::Layouts::LaunchersSignals"
QT_MOC_LITERAL(1, 33, 11), // "addLauncher"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 10), // "layoutName"
QT_MOC_LITERAL(4, 57, 13), // "launcherGroup"
QT_MOC_LITERAL(5, 71, 8), // "launcher"
QT_MOC_LITERAL(6, 80, 14), // "removeLauncher"
QT_MOC_LITERAL(7, 95, 21), // "addLauncherToActivity"
QT_MOC_LITERAL(8, 117, 8), // "activity"
QT_MOC_LITERAL(9, 126, 26), // "removeLauncherFromActivity"
QT_MOC_LITERAL(10, 153, 11), // "urlsDropped"
QT_MOC_LITERAL(11, 165, 4), // "urls"
QT_MOC_LITERAL(12, 170, 8), // "moveTask"
QT_MOC_LITERAL(13, 179, 8), // "senderId"
QT_MOC_LITERAL(14, 188, 4), // "from"
QT_MOC_LITERAL(15, 193, 2), // "to"
QT_MOC_LITERAL(16, 196, 22), // "validateLaunchersOrder"
QT_MOC_LITERAL(17, 219, 9) // "launchers"

    },
    "Latte::Layouts::LaunchersSignals\0"
    "addLauncher\0\0layoutName\0launcherGroup\0"
    "launcher\0removeLauncher\0addLauncherToActivity\0"
    "activity\0removeLauncherFromActivity\0"
    "urlsDropped\0urls\0moveTask\0senderId\0"
    "from\0to\0validateLaunchersOrder\0launchers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layouts__LaunchersSignals[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x0a /* Public */,
       6,    3,   56,    2, 0x0a /* Public */,
       7,    4,   63,    2, 0x0a /* Public */,
       9,    4,   72,    2, 0x0a /* Public */,
      10,    3,   81,    2, 0x0a /* Public */,
      12,    5,   88,    2, 0x0a /* Public */,
      16,    4,   99,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString, QMetaType::QString,    3,    4,    5,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QStringList,    3,    4,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,   13,    4,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,    3,   13,    4,   17,

       0        // eod
};

void Latte::Layouts::LaunchersSignals::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LaunchersSignals *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLauncher((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->removeLauncher((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->addLauncherToActivity((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->removeLauncherFromActivity((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 4: _t->urlsDropped((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 5: _t->moveTask((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 6: _t->validateLaunchersOrder((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QStringList(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Latte::Layouts::LaunchersSignals::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__Layouts__LaunchersSignals.data,
    qt_meta_data_Latte__Layouts__LaunchersSignals,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::Layouts::LaunchersSignals::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::LaunchersSignals::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__Layouts__LaunchersSignals.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::LaunchersSignals::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
