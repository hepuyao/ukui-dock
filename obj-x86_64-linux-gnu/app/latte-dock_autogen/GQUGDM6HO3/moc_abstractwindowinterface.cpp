/****************************************************************************
** Meta object code from reading C++ file 'abstractwindowinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "wm/abstractwindowinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractwindowinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface_t {
    QByteArrayData data[12];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface_t qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface = {
    {
QT_MOC_LITERAL(0, 0, 44), // "Latte::WindowSystem::Abstract..."
QT_MOC_LITERAL(1, 45, 19), // "activeWindowChanged"
QT_MOC_LITERAL(2, 65, 0), // ""
QT_MOC_LITERAL(3, 66, 8), // "WindowId"
QT_MOC_LITERAL(4, 75, 3), // "wid"
QT_MOC_LITERAL(5, 79, 13), // "windowChanged"
QT_MOC_LITERAL(6, 93, 5), // "winfo"
QT_MOC_LITERAL(7, 99, 13), // "windowRemoved"
QT_MOC_LITERAL(8, 113, 21), // "currentDesktopChanged"
QT_MOC_LITERAL(9, 135, 22), // "currentActivityChanged"
QT_MOC_LITERAL(10, 158, 16), // "latteWindowAdded"
QT_MOC_LITERAL(11, 175, 17) // "windowRemovedSlot"

    },
    "Latte::WindowSystem::AbstractWindowInterface\0"
    "activeWindowChanged\0\0WindowId\0wid\0"
    "windowChanged\0winfo\0windowRemoved\0"
    "currentDesktopChanged\0currentActivityChanged\0"
    "latteWindowAdded\0windowRemovedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__WindowSystem__AbstractWindowInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       7,    1,   55,    2, 0x06 /* Public */,
       8,    0,   58,    2, 0x06 /* Public */,
       9,    0,   59,    2, 0x06 /* Public */,
      10,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void Latte::WindowSystem::AbstractWindowInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractWindowInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeWindowChanged((*reinterpret_cast< WindowId(*)>(_a[1]))); break;
        case 1: _t->windowChanged((*reinterpret_cast< WindowId(*)>(_a[1]))); break;
        case 2: _t->windowRemoved((*reinterpret_cast< WindowId(*)>(_a[1]))); break;
        case 3: _t->currentDesktopChanged(); break;
        case 4: _t->currentActivityChanged(); break;
        case 5: _t->latteWindowAdded(); break;
        case 6: _t->windowRemovedSlot((*reinterpret_cast< WindowId(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractWindowInterface::*)(WindowId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::activeWindowChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractWindowInterface::*)(WindowId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::windowChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractWindowInterface::*)(WindowId );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::windowRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractWindowInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::currentDesktopChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractWindowInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::currentActivityChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractWindowInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractWindowInterface::latteWindowAdded)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Latte::WindowSystem::AbstractWindowInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface.data,
    qt_meta_data_Latte__WindowSystem__AbstractWindowInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::WindowSystem::AbstractWindowInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::AbstractWindowInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__WindowSystem__AbstractWindowInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::AbstractWindowInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Latte::WindowSystem::AbstractWindowInterface::activeWindowChanged(WindowId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Latte::WindowSystem::AbstractWindowInterface::windowChanged(WindowId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Latte::WindowSystem::AbstractWindowInterface::windowRemoved(WindowId _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Latte::WindowSystem::AbstractWindowInterface::currentDesktopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::WindowSystem::AbstractWindowInterface::currentActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::WindowSystem::AbstractWindowInterface::latteWindowAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
