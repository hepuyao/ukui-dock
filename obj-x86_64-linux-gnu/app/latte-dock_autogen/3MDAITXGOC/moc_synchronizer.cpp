/****************************************************************************
** Meta object code from reading C++ file 'synchronizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layouts/synchronizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'synchronizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__Layouts__Synchronizer_t {
    QByteArrayData data[14];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layouts__Synchronizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layouts__Synchronizer_t qt_meta_stringdata_Latte__Layouts__Synchronizer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Latte::Layouts::Synchronizer"
QT_MOC_LITERAL(1, 29, 21), // "centralLayoutsChanged"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 24), // "currentLayoutNameChanged"
QT_MOC_LITERAL(4, 77, 14), // "layoutsChanged"
QT_MOC_LITERAL(5, 92, 18), // "menuLayoutsChanged"
QT_MOC_LITERAL(6, 111, 24), // "runningActicitiesChanged"
QT_MOC_LITERAL(7, 136, 24), // "currentLayoutIsSwitching"
QT_MOC_LITERAL(8, 161, 10), // "layoutName"
QT_MOC_LITERAL(9, 172, 20), // "confirmDynamicSwitch"
QT_MOC_LITERAL(10, 193, 27), // "updateDynamicSwitchInterval"
QT_MOC_LITERAL(11, 221, 41), // "updateCurrentLayoutNameInMult..."
QT_MOC_LITERAL(12, 263, 22), // "currentActivityChanged"
QT_MOC_LITERAL(13, 286, 2) // "id"

    },
    "Latte::Layouts::Synchronizer\0"
    "centralLayoutsChanged\0\0currentLayoutNameChanged\0"
    "layoutsChanged\0menuLayoutsChanged\0"
    "runningActicitiesChanged\0"
    "currentLayoutIsSwitching\0layoutName\0"
    "confirmDynamicSwitch\0updateDynamicSwitchInterval\0"
    "updateCurrentLayoutNameInMultiEnvironment\0"
    "currentActivityChanged\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layouts__Synchronizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void Latte::Layouts::Synchronizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Synchronizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->centralLayoutsChanged(); break;
        case 1: _t->currentLayoutNameChanged(); break;
        case 2: _t->layoutsChanged(); break;
        case 3: _t->menuLayoutsChanged(); break;
        case 4: _t->runningActicitiesChanged(); break;
        case 5: _t->currentLayoutIsSwitching((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->confirmDynamicSwitch(); break;
        case 7: _t->updateDynamicSwitchInterval(); break;
        case 8: _t->updateCurrentLayoutNameInMultiEnvironment(); break;
        case 9: _t->currentActivityChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Synchronizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::centralLayoutsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Synchronizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::currentLayoutNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Synchronizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::layoutsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Synchronizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::menuLayoutsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Synchronizer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::runningActicitiesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Synchronizer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Synchronizer::currentLayoutIsSwitching)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Latte::Layouts::Synchronizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__Layouts__Synchronizer.data,
    qt_meta_data_Latte__Layouts__Synchronizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::Layouts::Synchronizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layouts::Synchronizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__Layouts__Synchronizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layouts::Synchronizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Latte::Layouts::Synchronizer::centralLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layouts::Synchronizer::currentLayoutNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layouts::Synchronizer::layoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layouts::Synchronizer::menuLayoutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Layouts::Synchronizer::runningActicitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Layouts::Synchronizer::currentLayoutIsSwitching(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
