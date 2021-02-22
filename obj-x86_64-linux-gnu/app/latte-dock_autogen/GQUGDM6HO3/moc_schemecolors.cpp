/****************************************************************************
** Meta object code from reading C++ file 'schemecolors.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "wm/schemecolors.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schemecolors.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__WindowSystem__SchemeColors_t {
    QByteArrayData data[19];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__WindowSystem__SchemeColors_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__WindowSystem__SchemeColors_t qt_meta_stringdata_Latte__WindowSystem__SchemeColors = {
    {
QT_MOC_LITERAL(0, 0, 33), // "Latte::WindowSystem::SchemeCo..."
QT_MOC_LITERAL(1, 34, 13), // "colorsChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 17), // "schemeFileChanged"
QT_MOC_LITERAL(4, 67, 12), // "updateScheme"
QT_MOC_LITERAL(5, 80, 10), // "schemeFile"
QT_MOC_LITERAL(6, 91, 15), // "backgroundColor"
QT_MOC_LITERAL(7, 107, 9), // "textColor"
QT_MOC_LITERAL(8, 117, 23), // "inactiveBackgroundColor"
QT_MOC_LITERAL(9, 141, 17), // "inactiveTextColor"
QT_MOC_LITERAL(10, 159, 14), // "highlightColor"
QT_MOC_LITERAL(11, 174, 20), // "highlightedTextColor"
QT_MOC_LITERAL(12, 195, 17), // "positiveTextColor"
QT_MOC_LITERAL(13, 213, 16), // "neutralTextColor"
QT_MOC_LITERAL(14, 230, 17), // "negativeTextColor"
QT_MOC_LITERAL(15, 248, 15), // "buttonTextColor"
QT_MOC_LITERAL(16, 264, 21), // "buttonBackgroundColor"
QT_MOC_LITERAL(17, 286, 16), // "buttonHoverColor"
QT_MOC_LITERAL(18, 303, 16) // "buttonFocusColor"

    },
    "Latte::WindowSystem::SchemeColors\0"
    "colorsChanged\0\0schemeFileChanged\0"
    "updateScheme\0schemeFile\0backgroundColor\0"
    "textColor\0inactiveBackgroundColor\0"
    "inactiveTextColor\0highlightColor\0"
    "highlightedTextColor\0positiveTextColor\0"
    "neutralTextColor\0negativeTextColor\0"
    "buttonTextColor\0buttonBackgroundColor\0"
    "buttonHoverColor\0buttonFocusColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__WindowSystem__SchemeColors[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      14,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495001,
       6, QMetaType::QColor, 0x00495001,
       7, QMetaType::QColor, 0x00495001,
       8, QMetaType::QColor, 0x00495001,
       9, QMetaType::QColor, 0x00495001,
      10, QMetaType::QColor, 0x00495001,
      11, QMetaType::QColor, 0x00495001,
      12, QMetaType::QColor, 0x00495001,
      13, QMetaType::QColor, 0x00495001,
      14, QMetaType::QColor, 0x00495001,
      15, QMetaType::QColor, 0x00495001,
      16, QMetaType::QColor, 0x00495001,
      17, QMetaType::QColor, 0x00495001,
      18, QMetaType::QColor, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void Latte::WindowSystem::SchemeColors::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SchemeColors *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorsChanged(); break;
        case 1: _t->schemeFileChanged(); break;
        case 2: _t->updateScheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SchemeColors::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SchemeColors::colorsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SchemeColors::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SchemeColors::schemeFileChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SchemeColors *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->schemeFile(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->inactiveBackgroundColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->inactiveTextColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->highlightColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->highlightedTextColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->positiveTextColor(); break;
        case 8: *reinterpret_cast< QColor*>(_v) = _t->neutralTextColor(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->negativeTextColor(); break;
        case 10: *reinterpret_cast< QColor*>(_v) = _t->buttonTextColor(); break;
        case 11: *reinterpret_cast< QColor*>(_v) = _t->buttonBackgroundColor(); break;
        case 12: *reinterpret_cast< QColor*>(_v) = _t->buttonHoverColor(); break;
        case 13: *reinterpret_cast< QColor*>(_v) = _t->buttonFocusColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Latte::WindowSystem::SchemeColors::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__WindowSystem__SchemeColors.data,
    qt_meta_data_Latte__WindowSystem__SchemeColors,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::WindowSystem::SchemeColors::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::WindowSystem::SchemeColors::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__WindowSystem__SchemeColors.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::WindowSystem::SchemeColors::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::WindowSystem::SchemeColors::colorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::WindowSystem::SchemeColors::schemeFileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
