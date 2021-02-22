/****************************************************************************
** Meta object code from reading C++ file 'indicatorinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/indicator/indicatorinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'indicatorinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info_t {
    QByteArrayData data[18];
    char stringdata0[430];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info_t qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info = {
    {
QT_MOC_LITERAL(0, 0, 36), // "Latte::ViewPart::IndicatorPar..."
QT_MOC_LITERAL(1, 37, 25), // "extraMaskThicknessChanged"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 23), // "minLengthPaddingChanged"
QT_MOC_LITERAL(4, 88, 26), // "minThicknessPaddingChanged"
QT_MOC_LITERAL(5, 115, 22), // "needsIconColorsChanged"
QT_MOC_LITERAL(6, 138, 33), // "needsMouseEventCoordinatesCha..."
QT_MOC_LITERAL(7, 172, 31), // "providesClickedAnimationChanged"
QT_MOC_LITERAL(8, 204, 31), // "providesHoveredAnimationChanged"
QT_MOC_LITERAL(9, 236, 25), // "providesFrontLayerChanged"
QT_MOC_LITERAL(10, 262, 15), // "needsIconColors"
QT_MOC_LITERAL(11, 278, 26), // "needsMouseEventCoordinates"
QT_MOC_LITERAL(12, 305, 24), // "providesClickedAnimation"
QT_MOC_LITERAL(13, 330, 24), // "providesHoveredAnimation"
QT_MOC_LITERAL(14, 355, 18), // "providesFrontLayer"
QT_MOC_LITERAL(15, 374, 18), // "extraMaskThickness"
QT_MOC_LITERAL(16, 393, 16), // "minLengthPadding"
QT_MOC_LITERAL(17, 410, 19) // "minThicknessPadding"

    },
    "Latte::ViewPart::IndicatorPart::Info\0"
    "extraMaskThicknessChanged\0\0"
    "minLengthPaddingChanged\0"
    "minThicknessPaddingChanged\0"
    "needsIconColorsChanged\0"
    "needsMouseEventCoordinatesChanged\0"
    "providesClickedAnimationChanged\0"
    "providesHoveredAnimationChanged\0"
    "providesFrontLayerChanged\0needsIconColors\0"
    "needsMouseEventCoordinates\0"
    "providesClickedAnimation\0"
    "providesHoveredAnimation\0providesFrontLayer\0"
    "extraMaskThickness\0minLengthPadding\0"
    "minThicknessPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__ViewPart__IndicatorPart__Info[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::Int, 0x00495103,
      16, QMetaType::Float, 0x00495103,
      17, QMetaType::Float, 0x00495103,

 // properties: notify_signal_id
       3,
       4,
       5,
       6,
       7,
       0,
       1,
       2,

       0        // eod
};

void Latte::ViewPart::IndicatorPart::Info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Info *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->extraMaskThicknessChanged(); break;
        case 1: _t->minLengthPaddingChanged(); break;
        case 2: _t->minThicknessPaddingChanged(); break;
        case 3: _t->needsIconColorsChanged(); break;
        case 4: _t->needsMouseEventCoordinatesChanged(); break;
        case 5: _t->providesClickedAnimationChanged(); break;
        case 6: _t->providesHoveredAnimationChanged(); break;
        case 7: _t->providesFrontLayerChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::extraMaskThicknessChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::minLengthPaddingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::minThicknessPaddingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::needsIconColorsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::needsMouseEventCoordinatesChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::providesClickedAnimationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::providesHoveredAnimationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Info::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Info::providesFrontLayerChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->needsIconColors(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->needsMouseEventCoordinates(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->providesClickedAnimation(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->providesHoveredAnimation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->providesFrontLayer(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->extraMaskThickness(); break;
        case 6: *reinterpret_cast< float*>(_v) = _t->minLengthPadding(); break;
        case 7: *reinterpret_cast< float*>(_v) = _t->minThicknessPadding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNeedsIconColors(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setNeedsMouseEventCoordinates(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setProvidesClickedAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setProvidesHoveredAnimation(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setProvidesFrontLayer(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setExtraMaskThickness(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMinLengthPadding(*reinterpret_cast< float*>(_v)); break;
        case 7: _t->setMinThicknessPadding(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Latte::ViewPart::IndicatorPart::Info::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info.data,
    qt_meta_data_Latte__ViewPart__IndicatorPart__Info,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Latte::ViewPart::IndicatorPart::Info::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::ViewPart::IndicatorPart::Info::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__ViewPart__IndicatorPart__Info.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Latte::ViewPart::IndicatorPart::Info::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::ViewPart::IndicatorPart::Info::extraMaskThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Latte::ViewPart::IndicatorPart::Info::minLengthPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Latte::ViewPart::IndicatorPart::Info::minThicknessPaddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Latte::ViewPart::IndicatorPart::Info::needsIconColorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::ViewPart::IndicatorPart::Info::needsMouseEventCoordinatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::ViewPart::IndicatorPart::Info::providesClickedAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::ViewPart::IndicatorPart::Info::providesHoveredAnimationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::ViewPart::IndicatorPart::Info::providesFrontLayerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
