/****************************************************************************
** Meta object code from reading C++ file 'modifiertracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "shortcuts/modifiertracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modifiertracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker_t {
    QByteArrayData data[4];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker_t qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker = {
    {
QT_MOC_LITERAL(0, 0, 37), // "Latte::ShortcutsPart::Modifie..."
QT_MOC_LITERAL(1, 38, 19), // "metaModifierPressed"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16) // "modifiersChanged"

    },
    "Latte::ShortcutsPart::ModifierTracker\0"
    "metaModifierPressed\0\0modifiersChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ShortcutsPart__ModifierTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Latte::ShortcutsPart::ModifierTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModifierTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaModifierPressed(); break;
        case 1: _t->modifiersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModifierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifierTracker::metaModifierPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModifierTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModifierTracker::modifiersChanged)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Latte::ShortcutsPart::ModifierTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker.data,
    qt_meta_data_Latte__ShortcutsPart__ModifierTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::ShortcutsPart::ModifierTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ShortcutsPart::ModifierTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ShortcutsPart__ModifierTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ShortcutsPart::ModifierTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Latte::ShortcutsPart::ModifierTracker::metaModifierPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ShortcutsPart::ModifierTracker::modifiersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
