/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layouts/manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__Layouts__Manager_t {
    QByteArrayData data[26];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layouts__Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layouts__Manager_t qt_meta_stringdata_Latte__Layouts__Manager = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Latte::Layouts::Manager"
QT_MOC_LITERAL(1, 24, 21), // "centralLayoutsChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 20), // "currentLayoutChanged"
QT_MOC_LITERAL(4, 68, 24), // "currentLayoutNameChanged"
QT_MOC_LITERAL(5, 93, 23), // "launchersSignalsChanged"
QT_MOC_LITERAL(6, 117, 14), // "layoutsChanged"
QT_MOC_LITERAL(7, 132, 18), // "menuLayoutsChanged"
QT_MOC_LITERAL(8, 151, 24), // "currentLayoutIsSwitching"
QT_MOC_LITERAL(9, 176, 10), // "layoutName"
QT_MOC_LITERAL(10, 187, 15), // "showAboutDialog"
QT_MOC_LITERAL(11, 203, 23), // "hideLatteSettingsDialog"
QT_MOC_LITERAL(12, 227, 23), // "showLatteSettingsDialog"
QT_MOC_LITERAL(13, 251, 4), // "page"
QT_MOC_LITERAL(14, 256, 14), // "switchToLayout"
QT_MOC_LITERAL(15, 271, 19), // "previousMemoryUsage"
QT_MOC_LITERAL(16, 291, 18), // "layoutsMemoryUsage"
QT_MOC_LITERAL(17, 310, 9), // "newLayout"
QT_MOC_LITERAL(18, 320, 6), // "preset"
QT_MOC_LITERAL(19, 327, 19), // "centralLayoutsNames"
QT_MOC_LITERAL(20, 347, 18), // "sharedLayoutsNames"
QT_MOC_LITERAL(21, 366, 17), // "currentLayoutName"
QT_MOC_LITERAL(22, 384, 7), // "layouts"
QT_MOC_LITERAL(23, 392, 11), // "menuLayouts"
QT_MOC_LITERAL(24, 404, 16), // "launchersSignals"
QT_MOC_LITERAL(25, 421, 17) // "LaunchersSignals*"

    },
    "Latte::Layouts::Manager\0centralLayoutsChanged\0"
    "\0currentLayoutChanged\0currentLayoutNameChanged\0"
    "launchersSignalsChanged\0layoutsChanged\0"
    "menuLayoutsChanged\0currentLayoutIsSwitching\0"
    "layoutName\0showAboutDialog\0"
    "hideLatteSettingsDialog\0showLatteSettingsDialog\0"
    "page\0switchToLayout\0previousMemoryUsage\0"
    "layoutsMemoryUsage\0newLayout\0preset\0"
    "centralLayoutsNames\0sharedLayoutsNames\0"
    "currentLayoutName\0layouts\0menuLayouts\0"
    "launchersSignals\0LaunchersSignals*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layouts__Manager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       4,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  113,    2, 0x0a /* Public */,
      11,    0,  114,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      12,    0,  118,    2, 0x2a /* Public | MethodCloned */,
      14,    2,  119,    2, 0x0a /* Public */,
      14,    1,  124,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  127,    2, 0x0a /* Public */,
      17,    2,  128,    2, 0x0a /* Public */,
      17,    1,  133,    2, 0x2a /* Public | MethodCloned */,
      19,    0,  136,    2, 0x0a /* Public */,
      20,    0,  137,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,    9,   15,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Int,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   18,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QStringList,
    QMetaType::QStringList,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00495001,
      22, QMetaType::QStringList, 0x00495001,
      23, QMetaType::QStringList, 0x00495001,
      24, 0x80000000 | 25, 0x00495009,

 // properties: notify_signal_id
       2,
       4,
       5,
       3,

       0        // eod
};

void Latte::Layouts::Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centralLayoutsChanged(); break;
        case 1: _t->currentLayoutChanged(); break;
        case 2: _t->currentLayoutNameChanged(); break;
        case 3: _t->launchersSignalsChanged(); break;
        case 4: _t->layoutsChanged(); break;
        case 5: _t->menuLayoutsChanged(); break;
        case 6: _t->currentLayoutIsSwitching((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->showAboutDialog(); break;
        case 8: _t->hideLatteSettingsDialog(); break;
        case 9: _t->showLatteSettingsDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->showLatteSettingsDialog(); break;
        case 11: { bool _r = _t->switchToLayout((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->switchToLayout((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->layoutsMemoryUsage();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->newLayout((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->newLayout((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QStringList _r = _t->centralLayoutsNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 17: { QStringList _r = _t->sharedLayoutsNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::centralLayoutsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::currentLayoutChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::currentLayoutNameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::launchersSignalsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::layoutsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Manager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::menuLayoutsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Manager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::currentLayoutIsSwitching)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LaunchersSignals* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Manager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentLayoutName(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->layouts(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->menuLayouts(); break;
        case 3: *reinterpret_cast< LaunchersSignals**>(_v) = _t->launchersSignals(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::Layouts::Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__Layouts__Manager.data,
    qt_meta_data_Latte__Layouts__Manager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::Layouts::Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__Layouts__Manager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::Layouts::Manager::centralLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layouts::Manager::currentLayoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layouts::Manager::currentLayoutNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layouts::Manager::launchersSignalsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Layouts::Manager::layoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Layouts::Manager::menuLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::Layouts::Manager::currentLayoutIsSwitching(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
