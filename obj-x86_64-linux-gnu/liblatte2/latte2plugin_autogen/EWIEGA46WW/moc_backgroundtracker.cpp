/****************************************************************************
** Meta object code from reading C++ file 'backgroundtracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "backgroundtracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundtracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__BackgroundTracker_t {
    QByteArrayData data[19];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__BackgroundTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__BackgroundTracker_t qt_meta_stringdata_Latte__BackgroundTracker = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Latte::BackgroundTracker"
QT_MOC_LITERAL(1, 25, 15), // "activityChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 24), // "currentBrightnessChanged"
QT_MOC_LITERAL(4, 67, 13), // "isBusyChanged"
QT_MOC_LITERAL(5, 81, 15), // "locationChanged"
QT_MOC_LITERAL(6, 97, 17), // "screenNameChanged"
QT_MOC_LITERAL(7, 115, 26), // "setBackgroundFromBroadcast"
QT_MOC_LITERAL(8, 142, 8), // "activity"
QT_MOC_LITERAL(9, 151, 6), // "screen"
QT_MOC_LITERAL(10, 158, 8), // "filename"
QT_MOC_LITERAL(11, 167, 32), // "setBroadcastedBackgroundsEnabled"
QT_MOC_LITERAL(12, 200, 7), // "enabled"
QT_MOC_LITERAL(13, 208, 17), // "backgroundChanged"
QT_MOC_LITERAL(14, 226, 10), // "screenName"
QT_MOC_LITERAL(15, 237, 6), // "update"
QT_MOC_LITERAL(16, 244, 6), // "isBusy"
QT_MOC_LITERAL(17, 251, 8), // "location"
QT_MOC_LITERAL(18, 260, 17) // "currentBrightness"

    },
    "Latte::BackgroundTracker\0activityChanged\0"
    "\0currentBrightnessChanged\0isBusyChanged\0"
    "locationChanged\0screenNameChanged\0"
    "setBackgroundFromBroadcast\0activity\0"
    "screen\0filename\0setBroadcastedBackgroundsEnabled\0"
    "enabled\0backgroundChanged\0screenName\0"
    "update\0isBusy\0location\0currentBrightness"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__BackgroundTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,   64,    2, 0x0a /* Public */,
      11,    3,   71,    2, 0x0a /* Public */,
      13,    2,   78,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    8,    9,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,   14,
    QMetaType::Void,

 // properties: name, type, flags
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Int, 0x00495103,
      18, QMetaType::Float, 0x00495001,
       8, QMetaType::QString, 0x00495103,
      14, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       1,
       0,
       4,

       0        // eod
};

void Latte::BackgroundTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackgroundTracker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activityChanged(); break;
        case 1: _t->currentBrightnessChanged(); break;
        case 2: _t->isBusyChanged(); break;
        case 3: _t->locationChanged(); break;
        case 4: _t->screenNameChanged(); break;
        case 5: _t->setBackgroundFromBroadcast((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 6: _t->setBroadcastedBackgroundsEnabled((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->backgroundChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackgroundTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundTracker::activityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BackgroundTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundTracker::currentBrightnessChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BackgroundTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundTracker::isBusyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BackgroundTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundTracker::locationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BackgroundTracker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackgroundTracker::screenNameChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BackgroundTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBusy(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->location(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->currentBrightness(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->activity(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->screenName(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BackgroundTracker *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLocation(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setActivity(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setScreenName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Latte::BackgroundTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__BackgroundTracker.data,
    qt_meta_data_Latte__BackgroundTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::BackgroundTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::BackgroundTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__BackgroundTracker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::BackgroundTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void Latte::BackgroundTracker::activityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::BackgroundTracker::currentBrightnessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::BackgroundTracker::isBusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::BackgroundTracker::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::BackgroundTracker::screenNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
