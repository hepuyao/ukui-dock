/****************************************************************************
** Meta object code from reading C++ file 'abstractlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "layout/abstractlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abstractlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__Layout__AbstractLayout_t {
    QByteArrayData data[20];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layout__AbstractLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layout__AbstractLayout_t qt_meta_stringdata_Latte__Layout__AbstractLayout = {
    {
QT_MOC_LITERAL(0, 0, 29), // "Latte::Layout::AbstractLayout"
QT_MOC_LITERAL(1, 30, 17), // "backgroundChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 12), // "colorChanged"
QT_MOC_LITERAL(4, 62, 11), // "fileChanged"
QT_MOC_LITERAL(5, 74, 23), // "lastUsedActivityChanged"
QT_MOC_LITERAL(6, 98, 16), // "launchersChanged"
QT_MOC_LITERAL(7, 115, 11), // "nameChanged"
QT_MOC_LITERAL(8, 127, 35), // "preferredForShortcutsTouchedC..."
QT_MOC_LITERAL(9, 163, 16), // "textColorChanged"
QT_MOC_LITERAL(10, 180, 14), // "versionChanged"
QT_MOC_LITERAL(11, 195, 10), // "loadConfig"
QT_MOC_LITERAL(12, 206, 10), // "saveConfig"
QT_MOC_LITERAL(13, 217, 4), // "name"
QT_MOC_LITERAL(14, 222, 28), // "preferredForShortcutsTouched"
QT_MOC_LITERAL(15, 251, 10), // "background"
QT_MOC_LITERAL(16, 262, 5), // "color"
QT_MOC_LITERAL(17, 268, 16), // "lastUsedActivity"
QT_MOC_LITERAL(18, 285, 9), // "textColor"
QT_MOC_LITERAL(19, 295, 9) // "launchers"

    },
    "Latte::Layout::AbstractLayout\0"
    "backgroundChanged\0\0colorChanged\0"
    "fileChanged\0lastUsedActivityChanged\0"
    "launchersChanged\0nameChanged\0"
    "preferredForShortcutsTouchedChanged\0"
    "textColorChanged\0versionChanged\0"
    "loadConfig\0saveConfig\0name\0"
    "preferredForShortcutsTouched\0background\0"
    "color\0lastUsedActivity\0textColor\0"
    "launchers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layout__AbstractLayout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       7,   80, // properties
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
      11,    0,   78,    2, 0x09 /* Protected */,
      12,    0,   79,    2, 0x09 /* Protected */,

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
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00495001,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       5,
       6,
       0,
       1,
       3,
       7,
       4,

       0        // eod
};

void Latte::Layout::AbstractLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backgroundChanged(); break;
        case 1: _t->colorChanged(); break;
        case 2: _t->fileChanged(); break;
        case 3: _t->lastUsedActivityChanged(); break;
        case 4: _t->launchersChanged(); break;
        case 5: _t->nameChanged(); break;
        case 6: _t->preferredForShortcutsTouchedChanged(); break;
        case 7: _t->textColorChanged(); break;
        case 8: _t->versionChanged(); break;
        case 9: _t->loadConfig(); break;
        case 10: _t->saveConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::backgroundChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::colorChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::fileChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::lastUsedActivityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::launchersChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::nameChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::preferredForShortcutsTouchedChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::textColorChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AbstractLayout::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractLayout::versionChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->preferredForShortcutsTouched(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->background(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->color(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->lastUsedActivity(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->textColor(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->launchers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPreferredForShortcutsTouched(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setColor(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setLaunchers(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Latte::Layout::AbstractLayout::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__Layout__AbstractLayout.data,
    qt_meta_data_Latte__Layout__AbstractLayout,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::Layout::AbstractLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::Layout::AbstractLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__Layout__AbstractLayout.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::Layout::AbstractLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::Layout::AbstractLayout::backgroundChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::Layout::AbstractLayout::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::Layout::AbstractLayout::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::Layout::AbstractLayout::lastUsedActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::Layout::AbstractLayout::launchersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::Layout::AbstractLayout::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::Layout::AbstractLayout::preferredForShortcutsTouchedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::Layout::AbstractLayout::textColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::Layout::AbstractLayout::versionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
struct qt_meta_stringdata_Latte__Layout_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__Layout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__Layout_t qt_meta_stringdata_Latte__Layout = {
    {
QT_MOC_LITERAL(0, 0, 13), // "Latte::Layout"
QT_MOC_LITERAL(1, 14, 4), // "Type"
QT_MOC_LITERAL(2, 19, 8), // "Abstract"
QT_MOC_LITERAL(3, 28, 7), // "Generic"
QT_MOC_LITERAL(4, 36, 7), // "Central"
QT_MOC_LITERAL(5, 44, 6) // "Shared"

    },
    "Latte::Layout\0Type\0Abstract\0Generic\0"
    "Central\0Shared"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__Layout[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(Latte::Layout::Abstract),
       3, uint(Latte::Layout::Generic),
       4, uint(Latte::Layout::Central),
       5, uint(Latte::Layout::Shared),

       0        // eod
};

QT_INIT_METAOBJECT const QMetaObject Latte::Layout::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_Latte__Layout.data,
    qt_meta_data_Latte__Layout,
    nullptr,
    nullptr,
    nullptr
} };

QT_WARNING_POP
QT_END_MOC_NAMESPACE
