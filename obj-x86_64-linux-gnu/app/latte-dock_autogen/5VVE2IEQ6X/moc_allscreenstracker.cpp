/****************************************************************************
** Meta object code from reading C++ file 'allscreenstracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/windowstracker/allscreenstracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allscreenstracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker_t {
    QByteArrayData data[18];
    char stringdata0[427];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker_t qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker = {
    {
QT_MOC_LITERAL(0, 0, 47), // "Latte::ViewPart::TrackerPart:..."
QT_MOC_LITERAL(1, 48, 28), // "activeWindowMaximizedChanged"
QT_MOC_LITERAL(2, 77, 0), // ""
QT_MOC_LITERAL(3, 78, 25), // "existsWindowActiveChanged"
QT_MOC_LITERAL(4, 104, 28), // "existsWindowMaximizedChanged"
QT_MOC_LITERAL(5, 133, 25), // "activeWindowSchemeChanged"
QT_MOC_LITERAL(6, 159, 23), // "lastActiveWindowChanged"
QT_MOC_LITERAL(7, 183, 21), // "requestMoveLastWindow"
QT_MOC_LITERAL(8, 205, 6), // "localX"
QT_MOC_LITERAL(9, 212, 6), // "localY"
QT_MOC_LITERAL(10, 219, 25), // "initSignalsForInformation"
QT_MOC_LITERAL(11, 245, 21), // "activeWindowMaximized"
QT_MOC_LITERAL(12, 267, 18), // "existsWindowActive"
QT_MOC_LITERAL(13, 286, 21), // "existsWindowMaximized"
QT_MOC_LITERAL(14, 308, 18), // "activeWindowScheme"
QT_MOC_LITERAL(15, 327, 34), // "Latte::WindowSystem::SchemeCo..."
QT_MOC_LITERAL(16, 362, 16), // "lastActiveWindow"
QT_MOC_LITERAL(17, 379, 47) // "Latte::WindowSystem::Tracker:..."

    },
    "Latte::ViewPart::TrackerPart::AllScreensTracker\0"
    "activeWindowMaximizedChanged\0\0"
    "existsWindowActiveChanged\0"
    "existsWindowMaximizedChanged\0"
    "activeWindowSchemeChanged\0"
    "lastActiveWindowChanged\0requestMoveLastWindow\0"
    "localX\0localY\0initSignalsForInformation\0"
    "activeWindowMaximized\0existsWindowActive\0"
    "existsWindowMaximized\0activeWindowScheme\0"
    "Latte::WindowSystem::SchemeColors*\0"
    "lastActiveWindow\0"
    "Latte::WindowSystem::Tracker::LastActiveWindow*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ViewPart__TrackerPart__AllScreensTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   54,    2, 0x0a /* Public */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00495001,
      12, QMetaType::Bool, 0x00495001,
      13, QMetaType::Bool, 0x00495001,
      14, 0x80000000 | 15, 0x00495009,
      16, 0x80000000 | 17, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void Latte::ViewPart::TrackerPart::AllScreensTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AllScreensTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeWindowMaximizedChanged(); break;
        case 1: _t->existsWindowActiveChanged(); break;
        case 2: _t->existsWindowMaximizedChanged(); break;
        case 3: _t->activeWindowSchemeChanged(); break;
        case 4: _t->lastActiveWindowChanged(); break;
        case 5: _t->requestMoveLastWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->initSignalsForInformation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AllScreensTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllScreensTracker::activeWindowMaximizedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AllScreensTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllScreensTracker::existsWindowActiveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AllScreensTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllScreensTracker::existsWindowMaximizedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AllScreensTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllScreensTracker::activeWindowSchemeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AllScreensTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AllScreensTracker::lastActiveWindowChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::WindowSystem::SchemeColors* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AllScreensTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->activeWindowMaximized(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->existsWindowActive(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->existsWindowMaximized(); break;
        case 3: *reinterpret_cast< Latte::WindowSystem::SchemeColors**>(_v) = _t->activeWindowScheme(); break;
        case 4: *reinterpret_cast< Latte::WindowSystem::Tracker::LastActiveWindow**>(_v) = _t->lastActiveWindow(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::ViewPart::TrackerPart::AllScreensTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker.data,
    qt_meta_data_Latte__ViewPart__TrackerPart__AllScreensTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::ViewPart::TrackerPart::AllScreensTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::TrackerPart::AllScreensTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ViewPart__TrackerPart__AllScreensTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::TrackerPart::AllScreensTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::TrackerPart::AllScreensTracker::activeWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::TrackerPart::AllScreensTracker::existsWindowActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::TrackerPart::AllScreensTracker::existsWindowMaximizedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::TrackerPart::AllScreensTracker::activeWindowSchemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::TrackerPart::AllScreensTracker::lastActiveWindowChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
