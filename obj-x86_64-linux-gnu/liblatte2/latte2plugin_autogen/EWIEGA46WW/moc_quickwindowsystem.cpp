/****************************************************************************
** Meta object code from reading C++ file 'quickwindowsystem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "quickwindowsystem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quickwindowsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__QuickWindowSystem_t {
    QByteArrayData data[14];
    char stringdata0[230];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__QuickWindowSystem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__QuickWindowSystem_t qt_meta_stringdata_Latte__QuickWindowSystem = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Latte::QuickWindowSystem"
QT_MOC_LITERAL(1, 25, 18), // "compositingChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "frameworksVersionChanged"
QT_MOC_LITERAL(4, 70, 24), // "isPlatformWaylandChanged"
QT_MOC_LITERAL(5, 95, 27), // "plasmaDesktopVersionChanged"
QT_MOC_LITERAL(6, 123, 11), // "makeVersion"
QT_MOC_LITERAL(7, 135, 5), // "major"
QT_MOC_LITERAL(8, 141, 5), // "minor"
QT_MOC_LITERAL(9, 147, 7), // "release"
QT_MOC_LITERAL(10, 155, 17), // "compositingActive"
QT_MOC_LITERAL(11, 173, 17), // "isPlatformWayland"
QT_MOC_LITERAL(12, 191, 17), // "frameworksVersion"
QT_MOC_LITERAL(13, 209, 20) // "plasmaDesktopVersion"

    },
    "Latte::QuickWindowSystem\0compositingChanged\0"
    "\0frameworksVersionChanged\0"
    "isPlatformWaylandChanged\0"
    "plasmaDesktopVersionChanged\0makeVersion\0"
    "major\0minor\0release\0compositingActive\0"
    "isPlatformWayland\0frameworksVersion\0"
    "plasmaDesktopVersion"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__QuickWindowSystem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    3,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::UInt, QMetaType::UInt, QMetaType::UInt, QMetaType::UInt,    7,    8,    9,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495801,
      11, QMetaType::Bool, 0x00495801,
      12, QMetaType::UInt, 0x00495001,
      13, QMetaType::UInt, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       1,
       3,

       0        // eod
};

void Latte::QuickWindowSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuickWindowSystem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->compositingChanged(); break;
        case 1: _t->frameworksVersionChanged(); break;
        case 2: _t->isPlatformWaylandChanged(); break;
        case 3: _t->plasmaDesktopVersionChanged(); break;
        case 4: { uint _r = _t->makeVersion((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QuickWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickWindowSystem::compositingChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QuickWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickWindowSystem::frameworksVersionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QuickWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickWindowSystem::isPlatformWaylandChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QuickWindowSystem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QuickWindowSystem::plasmaDesktopVersionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QuickWindowSystem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->compositingActive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isPlatformWayland(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->frameworksVersion(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->plasmaDesktopVersion(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::QuickWindowSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__QuickWindowSystem.data,
    qt_meta_data_Latte__QuickWindowSystem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::QuickWindowSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::QuickWindowSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__QuickWindowSystem.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::QuickWindowSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void Latte::QuickWindowSystem::compositingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::QuickWindowSystem::frameworksVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::QuickWindowSystem::isPlatformWaylandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::QuickWindowSystem::plasmaDesktopVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
