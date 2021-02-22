/****************************************************************************
** Meta object code from reading C++ file 'secondaryconfigview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/settings/secondaryconfigview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'secondaryconfigview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView_t {
    QByteArrayData data[10];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView_t qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Latte::ViewPart::SecondaryCon..."
QT_MOC_LITERAL(1, 37, 21), // "enabledBordersChanged"
QT_MOC_LITERAL(2, 59, 0), // ""
QT_MOC_LITERAL(3, 60, 10), // "showSignal"
QT_MOC_LITERAL(4, 71, 16), // "hideConfigWindow"
QT_MOC_LITERAL(5, 88, 12), // "syncGeometry"
QT_MOC_LITERAL(6, 101, 13), // "updateEffects"
QT_MOC_LITERAL(7, 115, 20), // "updateEnabledBorders"
QT_MOC_LITERAL(8, 136, 14), // "enabledBorders"
QT_MOC_LITERAL(9, 151, 32) // "Plasma::FrameSvg::EnabledBorders"

    },
    "Latte::ViewPart::SecondaryConfigView\0"
    "enabledBordersChanged\0\0showSignal\0"
    "hideConfigWindow\0syncGeometry\0"
    "updateEffects\0updateEnabledBorders\0"
    "enabledBorders\0Plasma::FrameSvg::EnabledBorders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ViewPart__SecondaryConfigView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x00495009,

 // properties: notify_signal_id
       0,

       0        // eod
};

void Latte::ViewPart::SecondaryConfigView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecondaryConfigView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledBordersChanged(); break;
        case 1: _t->showSignal(); break;
        case 2: _t->hideConfigWindow(); break;
        case 3: _t->syncGeometry(); break;
        case 4: _t->updateEffects(); break;
        case 5: _t->updateEnabledBorders(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SecondaryConfigView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecondaryConfigView::enabledBordersChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SecondaryConfigView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SecondaryConfigView::showSignal)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SecondaryConfigView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Plasma::FrameSvg::EnabledBorders*>(_v) = _t->enabledBorders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject::SuperData qt_meta_extradata_Latte__ViewPart__SecondaryConfigView[] = {
    QMetaObject::SuperData::link<Plasma::FrameSvg::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Latte::ViewPart::SecondaryConfigView::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickView::staticMetaObject>(),
    qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView.data,
    qt_meta_data_Latte__ViewPart__SecondaryConfigView,
    qt_static_metacall,
    qt_meta_extradata_Latte__ViewPart__SecondaryConfigView,
    nullptr
} };


const QMetaObject *Latte::ViewPart::SecondaryConfigView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::SecondaryConfigView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ViewPart__SecondaryConfigView.stringdata0))
        return static_cast<void*>(this);
    return QQuickView::qt_metacast(_clname);
}

int Latte::ViewPart::SecondaryConfigView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void Latte::ViewPart::SecondaryConfigView::enabledBordersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::SecondaryConfigView::showSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
