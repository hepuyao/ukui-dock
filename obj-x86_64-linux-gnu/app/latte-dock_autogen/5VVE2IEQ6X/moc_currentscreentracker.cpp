/****************************************************************************
** Meta object code from reading C++ file 'currentscreentracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/windowstracker/currentscreentracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'currentscreentracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker_t {
    QByteArrayData data[26];
    char stringdata0[638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker_t qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker = {
    {
QT_MOC_LITERAL(0, 0, 50), // "Latte::ViewPart::TrackerPart:..."
QT_MOC_LITERAL(1, 51, 28), // "activeWindowMaximizedChanged"
QT_MOC_LITERAL(2, 80, 0), // ""
QT_MOC_LITERAL(3, 81, 27), // "activeWindowTouchingChanged"
QT_MOC_LITERAL(4, 109, 25), // "existsWindowActiveChanged"
QT_MOC_LITERAL(5, 135, 28), // "existsWindowMaximizedChanged"
QT_MOC_LITERAL(6, 164, 27), // "existsWindowTouchingChanged"
QT_MOC_LITERAL(7, 192, 33), // "isTouchingBusyVerticalViewCha..."
QT_MOC_LITERAL(8, 226, 25), // "activeWindowSchemeChanged"
QT_MOC_LITERAL(9, 252, 27), // "touchingWindowSchemeChanged"
QT_MOC_LITERAL(10, 280, 23), // "lastActiveWindowChanged"
QT_MOC_LITERAL(11, 304, 21), // "requestMoveLastWindow"
QT_MOC_LITERAL(12, 326, 6), // "localX"
QT_MOC_LITERAL(13, 333, 6), // "localY"
QT_MOC_LITERAL(14, 340, 25), // "initSignalsForInformation"
QT_MOC_LITERAL(15, 366, 21), // "activeWindowMaximized"
QT_MOC_LITERAL(16, 388, 20), // "activeWindowTouching"
QT_MOC_LITERAL(17, 409, 18), // "existsWindowActive"
QT_MOC_LITERAL(18, 428, 21), // "existsWindowMaximized"
QT_MOC_LITERAL(19, 450, 20), // "existsWindowTouching"
QT_MOC_LITERAL(20, 471, 26), // "isTouchingBusyVerticalView"
QT_MOC_LITERAL(21, 498, 18), // "activeWindowScheme"
QT_MOC_LITERAL(22, 517, 34), // "Latte::WindowSystem::SchemeCo..."
QT_MOC_LITERAL(23, 552, 20), // "touchingWindowScheme"
QT_MOC_LITERAL(24, 573, 16), // "lastActiveWindow"
QT_MOC_LITERAL(25, 590, 47) // "Latte::WindowSystem::Tracker:..."

    },
    "Latte::ViewPart::TrackerPart::CurrentScreenTracker\0"
    "activeWindowMaximizedChanged\0\0"
    "activeWindowTouchingChanged\0"
    "existsWindowActiveChanged\0"
    "existsWindowMaximizedChanged\0"
    "existsWindowTouchingChanged\0"
    "isTouchingBusyVerticalViewChanged\0"
    "activeWindowSchemeChanged\0"
    "touchingWindowSchemeChanged\0"
    "lastActiveWindowChanged\0requestMoveLastWindow\0"
    "localX\0localY\0initSignalsForInformation\0"
    "activeWindowMaximized\0activeWindowTouching\0"
    "existsWindowActive\0existsWindowMaximized\0"
    "existsWindowTouching\0isTouchingBusyVerticalView\0"
    "activeWindowScheme\0"
    "Latte::WindowSystem::SchemeColors*\0"
    "touchingWindowScheme\0lastActiveWindow\0"
    "Latte::WindowSystem::Tracker::LastActiveWindow*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ViewPart__TrackerPart__CurrentScreenTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       9,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,
      10,    0,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    2,   78,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      21, 0x80000000 | 22, 0x00495009,
      23, 0x80000000 | 22, 0x00495009,
      24, 0x80000000 | 25, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

       0        // eod
};

void Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurrentScreenTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeWindowMaximizedChanged(); break;
        case 1: _t->activeWindowTouchingChanged(); break;
        case 2: _t->existsWindowActiveChanged(); break;
        case 3: _t->existsWindowMaximizedChanged(); break;
        case 4: _t->existsWindowTouchingChanged(); break;
        case 5: _t->isTouchingBusyVerticalViewChanged(); break;
        case 6: _t->activeWindowSchemeChanged(); break;
        case 7: _t->touchingWindowSchemeChanged(); break;
        case 8: _t->lastActiveWindowChanged(); break;
        case 9: _t->requestMoveLastWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->initSignalsForInformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::activeWindowMaximizedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::activeWindowTouchingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::existsWindowActiveChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::existsWindowMaximizedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::existsWindowTouchingChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::isTouchingBusyVerticalViewChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::activeWindowSchemeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::touchingWindowSchemeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CurrentScreenTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CurrentScreenTracker::lastActiveWindowChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::SchemeColors* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CurrentScreenTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->activeWindowMaximized(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->activeWindowTouching(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->existsWindowActive(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->existsWindowMaximized(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->existsWindowTouching(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isTouchingBusyVerticalView(); break;
        case 6: *reinterpret_cast< Latte::WindowSystem::SchemeColors**>(_v) = _t->activeWindowScheme(); break;
        case 7: *reinterpret_cast< Latte::WindowSystem::SchemeColors**>(_v) = _t->touchingWindowScheme(); break;
        case 8: *reinterpret_cast< Latte::WindowSystem::Tracker::LastActiveWindow**>(_v) = _t->lastActiveWindow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::ViewPart::TrackerPart::CurrentScreenTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker.data,
    qt_meta_data_Latte__ViewPart__TrackerPart__CurrentScreenTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::ViewPart::TrackerPart::CurrentScreenTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ViewPart__TrackerPart__CurrentScreenTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::TrackerPart::CurrentScreenTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowTouchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::existsWindowTouchingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::isTouchingBusyVerticalViewChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::activeWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::touchingWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::ViewPart::TrackerPart::CurrentScreenTracker::lastActiveWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
