/****************************************************************************
** Meta object code from reading C++ file 'shortcutstracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "shortcuts/shortcutstracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcutstracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker_t {
    QByteArrayData data[9];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker_t qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker = {
    {
QT_MOC_LITERAL(0, 0, 38), // "Latte::ShortcutsPart::Shortcu..."
QT_MOC_LITERAL(1, 39, 24), // "badgesForActivateChanged"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 19), // "appletShortcutBadge"
QT_MOC_LITERAL(4, 85, 8), // "appletId"
QT_MOC_LITERAL(5, 94, 20), // "shortcutsFileChanged"
QT_MOC_LITERAL(6, 115, 4), // "file"
QT_MOC_LITERAL(7, 120, 22), // "basedOnPositionEnabled"
QT_MOC_LITERAL(8, 143, 17) // "badgesForActivate"

    },
    "Latte::ShortcutsPart::ShortcutsTracker\0"
    "badgesForActivateChanged\0\0appletShortcutBadge\0"
    "appletId\0shortcutsFileChanged\0file\0"
    "basedOnPositionEnabled\0badgesForActivate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ShortcutsPart__ShortcutsTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void Latte::ShortcutsPart::ShortcutsTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShortcutsTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->badgesForActivateChanged(); break;
        case 1: { QString _r = _t->appletShortcutBadge((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->shortcutsFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShortcutsTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ShortcutsTracker::badgesForActivateChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShortcutsTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->basedOnPositionEnabled(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->badgesForActivate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::ShortcutsPart::ShortcutsTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker.data,
    qt_meta_data_Latte__ShortcutsPart__ShortcutsTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::ShortcutsPart::ShortcutsTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ShortcutsPart::ShortcutsTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ShortcutsPart__ShortcutsTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ShortcutsPart::ShortcutsTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::ShortcutsPart::ShortcutsTracker::badgesForActivateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
