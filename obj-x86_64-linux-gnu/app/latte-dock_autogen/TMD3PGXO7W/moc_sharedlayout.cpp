/****************************************************************************
** Meta object code from reading C++ file 'sharedlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layout/sharedlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharedlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__SharedLayout_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__SharedLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__SharedLayout_t qt_meta_stringdata_Latte__SharedLayout = {
    {
QT_MOC_LITERAL(0, 0, 19), // "Latte::SharedLayout"
QT_MOC_LITERAL(1, 20, 15), // "layoutDestroyed"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "SharedLayout*"
QT_MOC_LITERAL(4, 51, 6), // "layout"
QT_MOC_LITERAL(5, 58, 16), // "addCentralLayout"
QT_MOC_LITERAL(6, 75, 14), // "CentralLayout*"
QT_MOC_LITERAL(7, 90, 19), // "removeCentralLayout"
QT_MOC_LITERAL(8, 110, 27) // "updateLastUsedCentralLayout"

    },
    "Latte::SharedLayout\0layoutDestroyed\0"
    "\0SharedLayout*\0layout\0addCentralLayout\0"
    "CentralLayout*\0removeCentralLayout\0"
    "updateLastUsedCentralLayout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__SharedLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void,

       0        // eod
};

void Latte::SharedLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SharedLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->layoutDestroyed((*reinterpret_cast< SharedLayout*(*)>(_a[1]))); break;
        case 1: _t->addCentralLayout((*reinterpret_cast< CentralLayout*(*)>(_a[1]))); break;
        case 2: _t->removeCentralLayout((*reinterpret_cast< CentralLayout*(*)>(_a[1]))); break;
        case 3: _t->updateLastUsedCentralLayout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SharedLayout* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SharedLayout::*)(SharedLayout * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SharedLayout::layoutDestroyed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Latte::SharedLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<Layout::GenericLayout::staticMetaObject>(),
    qt_meta_stringdata_Latte__SharedLayout.data,
    qt_meta_data_Latte__SharedLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::SharedLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::SharedLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__SharedLayout.stringdata0))
        return static_cast<void*>(this);
    return Layout::GenericLayout::qt_metacast(_clname);
}

int Latte::SharedLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Layout::GenericLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Latte::SharedLayout::layoutDestroyed(SharedLayout * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
