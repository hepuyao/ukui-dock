/****************************************************************************
** Meta object code from reading C++ file 'schemes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "wm/tracker/schemes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schemes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes_t {
    QByteArrayData data[6];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes_t qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Latte::WindowSystem::Tracker:..."
QT_MOC_LITERAL(1, 38, 18), // "colorSchemeChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 8), // "WindowId"
QT_MOC_LITERAL(4, 67, 3), // "wid"
QT_MOC_LITERAL(5, 71, 19) // "updateDefaultScheme"

    },
    "Latte::WindowSystem::Tracker::Schemes\0"
    "colorSchemeChanged\0\0WindowId\0wid\0"
    "updateDefaultScheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__WindowSystem__Tracker__Schemes[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Latte::WindowSystem::Tracker::Schemes::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Schemes *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorSchemeChanged((*reinterpret_cast< const WindowId(*)>(_a[1]))); break;
        case 1: _t->updateDefaultScheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Schemes::*)(const WindowId & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Schemes::colorSchemeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Latte::WindowSystem::Tracker::Schemes::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes.data,
    qt_meta_data_Latte__WindowSystem__Tracker__Schemes,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::WindowSystem::Tracker::Schemes::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::Tracker::Schemes::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__WindowSystem__Tracker__Schemes.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::Tracker::Schemes::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Latte::WindowSystem::Tracker::Schemes::colorSchemeChanged(const WindowId & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
