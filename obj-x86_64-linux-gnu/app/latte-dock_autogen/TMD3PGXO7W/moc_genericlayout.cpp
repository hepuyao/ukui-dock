/****************************************************************************
** Meta object code from reading C++ file 'genericlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layout/genericlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'genericlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__Layout__GenericLayout_t {
    QByteArrayData data[25];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layout__GenericLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layout__GenericLayout_t qt_meta_stringdata_Latte__Layout__GenericLayout = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Latte::Layout::GenericLayout"
QT_MOC_LITERAL(1, 29, 17), // "activitiesChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 17), // "viewsCountChanged"
QT_MOC_LITERAL(4, 66, 15), // "viewEdgeChanged"
QT_MOC_LITERAL(5, 82, 24), // "lastConfigViewForChanged"
QT_MOC_LITERAL(6, 107, 12), // "Latte::View*"
QT_MOC_LITERAL(7, 120, 4), // "view"
QT_MOC_LITERAL(8, 125, 32), // "preferredViewForShortcutsChanged"
QT_MOC_LITERAL(9, 158, 10), // "addNewView"
QT_MOC_LITERAL(10, 169, 14), // "viewsWithTasks"
QT_MOC_LITERAL(11, 184, 12), // "qmlFreeEdges"
QT_MOC_LITERAL(12, 197, 10), // "QList<int>"
QT_MOC_LITERAL(13, 208, 6), // "screen"
QT_MOC_LITERAL(14, 215, 14), // "addContainment"
QT_MOC_LITERAL(15, 230, 20), // "Plasma::Containment*"
QT_MOC_LITERAL(16, 251, 11), // "containment"
QT_MOC_LITERAL(17, 263, 13), // "appletCreated"
QT_MOC_LITERAL(18, 277, 15), // "Plasma::Applet*"
QT_MOC_LITERAL(19, 293, 6), // "applet"
QT_MOC_LITERAL(20, 300, 16), // "destroyedChanged"
QT_MOC_LITERAL(21, 317, 9), // "destroyed"
QT_MOC_LITERAL(22, 327, 20), // "containmentDestroyed"
QT_MOC_LITERAL(23, 348, 4), // "cont"
QT_MOC_LITERAL(24, 353, 10) // "viewsCount"

    },
    "Latte::Layout::GenericLayout\0"
    "activitiesChanged\0\0viewsCountChanged\0"
    "viewEdgeChanged\0lastConfigViewForChanged\0"
    "Latte::View*\0view\0preferredViewForShortcutsChanged\0"
    "addNewView\0viewsWithTasks\0qmlFreeEdges\0"
    "QList<int>\0screen\0addContainment\0"
    "Plasma::Containment*\0containment\0"
    "appletCreated\0Plasma::Applet*\0applet\0"
    "destroyedChanged\0destroyed\0"
    "containmentDestroyed\0cont\0viewsCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layout__GenericLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       1,  100, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       8,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   83,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x0a /* Public */,
      11,    1,   85,    2, 0x0a /* Public */,
      14,    1,   88,    2, 0x08 /* Private */,
      17,    1,   91,    2, 0x08 /* Private */,
      20,    1,   94,    2, 0x08 /* Private */,
      22,    1,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,
    0x80000000 | 12, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QObjectStar,   23,

 // properties: name, type, flags
      24, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       1,

       0        // eod
};

void Latte::Layout::GenericLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GenericLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activitiesChanged(); break;
        case 1: _t->viewsCountChanged(); break;
        case 2: _t->viewEdgeChanged(); break;
        case 3: _t->lastConfigViewForChanged((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 4: _t->preferredViewForShortcutsChanged((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 5: _t->addNewView(); break;
        case 6: { int _r = _t->viewsWithTasks();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<int> _r = _t->qmlFreeEdges((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->addContainment((*reinterpret_cast< Plasma::Containment*(*)>(_a[1]))); break;
        case 9: _t->appletCreated((*reinterpret_cast< Plasma::Applet*(*)>(_a[1]))); break;
        case 10: _t->destroyedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->containmentDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GenericLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericLayout::activitiesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GenericLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericLayout::viewsCountChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GenericLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericLayout::viewEdgeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GenericLayout::*)(Latte::View * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericLayout::lastConfigViewForChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GenericLayout::*)(Latte::View * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GenericLayout::preferredViewForShortcutsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GenericLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->viewsCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::Layout::GenericLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractLayout::staticMetaObject>(),
    qt_meta_stringdata_Latte__Layout__GenericLayout.data,
    qt_meta_data_Latte__Layout__GenericLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::Layout::GenericLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layout::GenericLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__Layout__GenericLayout.stringdata0))
        return static_cast<void*>(this);
    return AbstractLayout::qt_metacast(_clname);
}

int Latte::Layout::GenericLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::Layout::GenericLayout::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layout::GenericLayout::viewsCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layout::GenericLayout::viewEdgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layout::GenericLayout::lastConfigViewForChanged(Latte::View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Latte::Layout::GenericLayout::preferredViewForShortcutsChanged(Latte::View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
