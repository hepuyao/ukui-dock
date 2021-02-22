/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "view/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Latte__View_t {
    QByteArrayData data[125];
    char stringdata0[2085];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Latte__View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Latte__View_t qt_meta_stringdata_Latte__View = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Latte::View"
QT_MOC_LITERAL(1, 12, 14), // "eventTriggered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 7), // "QEvent*"
QT_MOC_LITERAL(4, 36, 2), // "ev"
QT_MOC_LITERAL(5, 39, 12), // "mousePressed"
QT_MOC_LITERAL(6, 52, 3), // "pos"
QT_MOC_LITERAL(7, 56, 6), // "button"
QT_MOC_LITERAL(8, 63, 13), // "mouseReleased"
QT_MOC_LITERAL(9, 77, 17), // "activitiesChanged"
QT_MOC_LITERAL(10, 95, 26), // "alternativesIsShownChanged"
QT_MOC_LITERAL(11, 122, 16), // "alignmentChanged"
QT_MOC_LITERAL(12, 139, 26), // "behaveAsPlasmaPanelChanged"
QT_MOC_LITERAL(13, 166, 15), // "byPassWMChanged"
QT_MOC_LITERAL(14, 182, 27), // "configWindowGeometryChanged"
QT_MOC_LITERAL(15, 210, 19), // "containsDragChanged"
QT_MOC_LITERAL(16, 230, 25), // "contextMenuIsShownChanged"
QT_MOC_LITERAL(17, 256, 19), // "dockLocationChanged"
QT_MOC_LITERAL(18, 276, 20), // "editThicknessChanged"
QT_MOC_LITERAL(19, 297, 14), // "effectsChanged"
QT_MOC_LITERAL(20, 312, 20), // "fontPixelSizeChanged"
QT_MOC_LITERAL(21, 333, 11), // "forcedShown"
QT_MOC_LITERAL(22, 345, 12), // "widthChanged"
QT_MOC_LITERAL(23, 358, 13), // "heightChanged"
QT_MOC_LITERAL(24, 372, 17), // "inEditModeChanged"
QT_MOC_LITERAL(25, 390, 16), // "indicatorChanged"
QT_MOC_LITERAL(26, 407, 30), // "isPreferredForShortcutsChanged"
QT_MOC_LITERAL(27, 438, 36), // "isTouchingBottomViewAndIsBusy..."
QT_MOC_LITERAL(28, 475, 33), // "isTouchingTopViewAndIsBusyCha..."
QT_MOC_LITERAL(29, 509, 27), // "latteTasksArePresentChanged"
QT_MOC_LITERAL(30, 537, 13), // "layoutChanged"
QT_MOC_LITERAL(31, 551, 20), // "localGeometryChanged"
QT_MOC_LITERAL(32, 572, 16), // "maxLengthChanged"
QT_MOC_LITERAL(33, 589, 19), // "maxThicknessChanged"
QT_MOC_LITERAL(34, 609, 22), // "normalThicknessChanged"
QT_MOC_LITERAL(35, 632, 13), // "offsetChanged"
QT_MOC_LITERAL(36, 646, 16), // "onPrimaryChanged"
QT_MOC_LITERAL(37, 663, 17), // "positionerChanged"
QT_MOC_LITERAL(38, 681, 21), // "screenGeometryChanged"
QT_MOC_LITERAL(39, 703, 11), // "typeChanged"
QT_MOC_LITERAL(40, 715, 17), // "visibilityChanged"
QT_MOC_LITERAL(41, 733, 21), // "windowsTrackerChanged"
QT_MOC_LITERAL(42, 755, 8), // "xChanged"
QT_MOC_LITERAL(43, 764, 8), // "yChanged"
QT_MOC_LITERAL(44, 773, 23), // "absoluteGeometryChanged"
QT_MOC_LITERAL(45, 797, 8), // "geometry"
QT_MOC_LITERAL(46, 806, 20), // "customPluginsChanged"
QT_MOC_LITERAL(47, 827, 30), // "availableScreenRectChangedFrom"
QT_MOC_LITERAL(48, 858, 12), // "Latte::View*"
QT_MOC_LITERAL(49, 871, 6), // "origin"
QT_MOC_LITERAL(50, 878, 32), // "availableScreenRegionChangedFrom"
QT_MOC_LITERAL(51, 911, 8), // "copyView"
QT_MOC_LITERAL(52, 920, 10), // "removeView"
QT_MOC_LITERAL(53, 931, 18), // "containmentActions"
QT_MOC_LITERAL(54, 950, 17), // "deactivateApplets"
QT_MOC_LITERAL(55, 968, 12), // "moveToLayout"
QT_MOC_LITERAL(56, 981, 10), // "layoutName"
QT_MOC_LITERAL(57, 992, 19), // "removeTasksPlasmoid"
QT_MOC_LITERAL(58, 1012, 14), // "setBlockHiding"
QT_MOC_LITERAL(59, 1027, 5), // "block"
QT_MOC_LITERAL(60, 1033, 20), // "toggleAppletExpanded"
QT_MOC_LITERAL(61, 1054, 2), // "id"
QT_MOC_LITERAL(62, 1057, 18), // "appletIsExpandable"
QT_MOC_LITERAL(63, 1076, 20), // "mimeContainsPlasmoid"
QT_MOC_LITERAL(64, 1097, 10), // "QMimeData*"
QT_MOC_LITERAL(65, 1108, 8), // "mimeData"
QT_MOC_LITERAL(66, 1117, 4), // "name"
QT_MOC_LITERAL(67, 1122, 12), // "tasksPresent"
QT_MOC_LITERAL(68, 1135, 22), // "updateAbsoluteGeometry"
QT_MOC_LITERAL(69, 1158, 12), // "bypassChecks"
QT_MOC_LITERAL(70, 1171, 21), // "isHighestPriorityView"
QT_MOC_LITERAL(71, 1193, 26), // "showConfigurationInterface"
QT_MOC_LITERAL(72, 1220, 15), // "Plasma::Applet*"
QT_MOC_LITERAL(73, 1236, 6), // "applet"
QT_MOC_LITERAL(74, 1243, 34), // "availableScreenRectChangedFro..."
QT_MOC_LITERAL(75, 1278, 5), // "View*"
QT_MOC_LITERAL(76, 1284, 20), // "configViewCreatedFor"
QT_MOC_LITERAL(77, 1305, 4), // "view"
QT_MOC_LITERAL(78, 1310, 24), // "hideWindowsForSlidingOut"
QT_MOC_LITERAL(79, 1335, 36), // "preferredViewForShortcutsChan..."
QT_MOC_LITERAL(80, 1372, 11), // "releaseGrab"
QT_MOC_LITERAL(81, 1384, 12), // "reloadSource"
QT_MOC_LITERAL(82, 1397, 13), // "statusChanged"
QT_MOC_LITERAL(83, 1411, 25), // "Plasma::Types::ItemStatus"
QT_MOC_LITERAL(84, 1437, 13), // "restoreConfig"
QT_MOC_LITERAL(85, 1451, 10), // "saveConfig"
QT_MOC_LITERAL(86, 1462, 4), // "type"
QT_MOC_LITERAL(87, 1467, 22), // "Latte::Types::ViewType"
QT_MOC_LITERAL(88, 1490, 19), // "alternativesIsShown"
QT_MOC_LITERAL(89, 1510, 19), // "behaveAsPlasmaPanel"
QT_MOC_LITERAL(90, 1530, 8), // "byPassWM"
QT_MOC_LITERAL(91, 1539, 12), // "containsDrag"
QT_MOC_LITERAL(92, 1552, 18), // "contextMenuIsShown"
QT_MOC_LITERAL(93, 1571, 10), // "inEditMode"
QT_MOC_LITERAL(94, 1582, 23), // "isPreferredForShortcuts"
QT_MOC_LITERAL(95, 1606, 20), // "latteTasksArePresent"
QT_MOC_LITERAL(96, 1627, 9), // "onPrimary"
QT_MOC_LITERAL(97, 1637, 29), // "isTouchingBottomViewAndIsBusy"
QT_MOC_LITERAL(98, 1667, 26), // "isTouchingTopViewAndIsBusy"
QT_MOC_LITERAL(99, 1694, 9), // "alignment"
QT_MOC_LITERAL(100, 1704, 13), // "fontPixelSize"
QT_MOC_LITERAL(101, 1718, 1), // "x"
QT_MOC_LITERAL(102, 1720, 1), // "y"
QT_MOC_LITERAL(103, 1722, 5), // "width"
QT_MOC_LITERAL(104, 1728, 6), // "height"
QT_MOC_LITERAL(105, 1735, 13), // "editThickness"
QT_MOC_LITERAL(106, 1749, 12), // "maxThickness"
QT_MOC_LITERAL(107, 1762, 15), // "normalThickness"
QT_MOC_LITERAL(108, 1778, 6), // "offset"
QT_MOC_LITERAL(109, 1785, 9), // "maxLength"
QT_MOC_LITERAL(110, 1795, 6), // "layout"
QT_MOC_LITERAL(111, 1802, 29), // "Latte::Layout::GenericLayout*"
QT_MOC_LITERAL(112, 1832, 7), // "effects"
QT_MOC_LITERAL(113, 1840, 25), // "Latte::ViewPart::Effects*"
QT_MOC_LITERAL(114, 1866, 9), // "indicator"
QT_MOC_LITERAL(115, 1876, 27), // "Latte::ViewPart::Indicator*"
QT_MOC_LITERAL(116, 1904, 10), // "positioner"
QT_MOC_LITERAL(117, 1915, 28), // "Latte::ViewPart::Positioner*"
QT_MOC_LITERAL(118, 1944, 10), // "visibility"
QT_MOC_LITERAL(119, 1955, 35), // "Latte::ViewPart::VisibilityMa..."
QT_MOC_LITERAL(120, 1991, 14), // "windowsTracker"
QT_MOC_LITERAL(121, 2006, 32), // "Latte::ViewPart::WindowsTracker*"
QT_MOC_LITERAL(122, 2039, 16), // "absoluteGeometry"
QT_MOC_LITERAL(123, 2056, 13), // "localGeometry"
QT_MOC_LITERAL(124, 2070, 14) // "screenGeometry"

    },
    "Latte::View\0eventTriggered\0\0QEvent*\0"
    "ev\0mousePressed\0pos\0button\0mouseReleased\0"
    "activitiesChanged\0alternativesIsShownChanged\0"
    "alignmentChanged\0behaveAsPlasmaPanelChanged\0"
    "byPassWMChanged\0configWindowGeometryChanged\0"
    "containsDragChanged\0contextMenuIsShownChanged\0"
    "dockLocationChanged\0editThicknessChanged\0"
    "effectsChanged\0fontPixelSizeChanged\0"
    "forcedShown\0widthChanged\0heightChanged\0"
    "inEditModeChanged\0indicatorChanged\0"
    "isPreferredForShortcutsChanged\0"
    "isTouchingBottomViewAndIsBusyChanged\0"
    "isTouchingTopViewAndIsBusyChanged\0"
    "latteTasksArePresentChanged\0layoutChanged\0"
    "localGeometryChanged\0maxLengthChanged\0"
    "maxThicknessChanged\0normalThicknessChanged\0"
    "offsetChanged\0onPrimaryChanged\0"
    "positionerChanged\0screenGeometryChanged\0"
    "typeChanged\0visibilityChanged\0"
    "windowsTrackerChanged\0xChanged\0yChanged\0"
    "absoluteGeometryChanged\0geometry\0"
    "customPluginsChanged\0"
    "availableScreenRectChangedFrom\0"
    "Latte::View*\0origin\0"
    "availableScreenRegionChangedFrom\0"
    "copyView\0removeView\0containmentActions\0"
    "deactivateApplets\0moveToLayout\0"
    "layoutName\0removeTasksPlasmoid\0"
    "setBlockHiding\0block\0toggleAppletExpanded\0"
    "id\0appletIsExpandable\0mimeContainsPlasmoid\0"
    "QMimeData*\0mimeData\0name\0tasksPresent\0"
    "updateAbsoluteGeometry\0bypassChecks\0"
    "isHighestPriorityView\0showConfigurationInterface\0"
    "Plasma::Applet*\0applet\0"
    "availableScreenRectChangedFromSlot\0"
    "View*\0configViewCreatedFor\0view\0"
    "hideWindowsForSlidingOut\0"
    "preferredViewForShortcutsChangedSlot\0"
    "releaseGrab\0reloadSource\0statusChanged\0"
    "Plasma::Types::ItemStatus\0restoreConfig\0"
    "saveConfig\0type\0Latte::Types::ViewType\0"
    "alternativesIsShown\0behaveAsPlasmaPanel\0"
    "byPassWM\0containsDrag\0contextMenuIsShown\0"
    "inEditMode\0isPreferredForShortcuts\0"
    "latteTasksArePresent\0onPrimary\0"
    "isTouchingBottomViewAndIsBusy\0"
    "isTouchingTopViewAndIsBusy\0alignment\0"
    "fontPixelSize\0x\0y\0width\0height\0"
    "editThickness\0maxThickness\0normalThickness\0"
    "offset\0maxLength\0layout\0"
    "Latte::Layout::GenericLayout*\0effects\0"
    "Latte::ViewPart::Effects*\0indicator\0"
    "Latte::ViewPart::Indicator*\0positioner\0"
    "Latte::ViewPart::Positioner*\0visibility\0"
    "Latte::ViewPart::VisibilityManager*\0"
    "windowsTracker\0Latte::ViewPart::WindowsTracker*\0"
    "absoluteGeometry\0localGeometry\0"
    "screenGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Latte__View[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      66,   14, // methods
      32,  450, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  344,    2, 0x06 /* Public */,
       5,    2,  347,    2, 0x06 /* Public */,
       8,    2,  352,    2, 0x06 /* Public */,
       9,    0,  357,    2, 0x06 /* Public */,
      10,    0,  358,    2, 0x06 /* Public */,
      11,    0,  359,    2, 0x06 /* Public */,
      12,    0,  360,    2, 0x06 /* Public */,
      13,    0,  361,    2, 0x06 /* Public */,
      14,    0,  362,    2, 0x06 /* Public */,
      15,    0,  363,    2, 0x06 /* Public */,
      16,    0,  364,    2, 0x06 /* Public */,
      17,    0,  365,    2, 0x06 /* Public */,
      18,    0,  366,    2, 0x06 /* Public */,
      19,    0,  367,    2, 0x06 /* Public */,
      20,    0,  368,    2, 0x06 /* Public */,
      21,    0,  369,    2, 0x06 /* Public */,
      22,    0,  370,    2, 0x06 /* Public */,
      23,    0,  371,    2, 0x06 /* Public */,
      24,    0,  372,    2, 0x06 /* Public */,
      25,    0,  373,    2, 0x06 /* Public */,
      26,    0,  374,    2, 0x06 /* Public */,
      27,    0,  375,    2, 0x06 /* Public */,
      28,    0,  376,    2, 0x06 /* Public */,
      29,    0,  377,    2, 0x06 /* Public */,
      30,    0,  378,    2, 0x06 /* Public */,
      31,    0,  379,    2, 0x06 /* Public */,
      32,    0,  380,    2, 0x06 /* Public */,
      33,    0,  381,    2, 0x06 /* Public */,
      34,    0,  382,    2, 0x06 /* Public */,
      35,    0,  383,    2, 0x06 /* Public */,
      36,    0,  384,    2, 0x06 /* Public */,
      37,    0,  385,    2, 0x06 /* Public */,
      38,    0,  386,    2, 0x06 /* Public */,
      39,    0,  387,    2, 0x06 /* Public */,
      40,    0,  388,    2, 0x06 /* Public */,
      41,    0,  389,    2, 0x06 /* Public */,
      42,    0,  390,    2, 0x06 /* Public */,
      43,    0,  391,    2, 0x06 /* Public */,
      44,    1,  392,    2, 0x06 /* Public */,
      46,    0,  395,    2, 0x06 /* Public */,
      47,    1,  396,    2, 0x06 /* Public */,
      50,    1,  399,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      51,    0,  402,    2, 0x0a /* Public */,
      52,    0,  403,    2, 0x0a /* Public */,
      53,    0,  404,    2, 0x0a /* Public */,
      54,    0,  405,    2, 0x0a /* Public */,
      55,    1,  406,    2, 0x0a /* Public */,
      57,    0,  409,    2, 0x0a /* Public */,
      58,    1,  410,    2, 0x0a /* Public */,
      60,    1,  413,    2, 0x0a /* Public */,
      62,    1,  416,    2, 0x0a /* Public */,
      63,    2,  419,    2, 0x0a /* Public */,
      67,    0,  424,    2, 0x0a /* Public */,
      68,    1,  425,    2, 0x0a /* Public */,
      68,    0,  428,    2, 0x2a /* Public | MethodCloned */,
      70,    0,  429,    2, 0x0a /* Public */,
      71,    1,  430,    2, 0x09 /* Protected */,
      74,    1,  433,    2, 0x08 /* Private */,
      76,    1,  436,    2, 0x08 /* Private */,
      78,    0,  439,    2, 0x08 /* Private */,
      79,    1,  440,    2, 0x08 /* Private */,
      80,    0,  443,    2, 0x08 /* Private */,
      81,    0,  444,    2, 0x08 /* Private */,
      82,    1,  445,    2, 0x08 /* Private */,
      84,    0,  448,    2, 0x08 /* Private */,
      85,    0,  449,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QPoint, QMetaType::Int,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,   45,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, 0x80000000 | 48,   49,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QVariantList,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Bool, QMetaType::Int,   61,
    QMetaType::Bool, 0x80000000 | 64, QMetaType::QString,   65,   66,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 72,   73,
    QMetaType::Void, 0x80000000 | 75,   49,
    QMetaType::Void, 0x80000000 | 48,   77,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 48,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 83,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      86, 0x80000000 | 87, 0x0049510b,
      88, QMetaType::Bool, 0x00495001,
      89, QMetaType::Bool, 0x00495103,
      90, QMetaType::Bool, 0x00495103,
      91, QMetaType::Bool, 0x00495001,
      92, QMetaType::Bool, 0x00495001,
      93, QMetaType::Bool, 0x00495103,
      94, QMetaType::Bool, 0x00495103,
      95, QMetaType::Bool, 0x00495103,
      96, QMetaType::Bool, 0x00495103,
      97, QMetaType::Bool, 0x00495103,
      98, QMetaType::Bool, 0x00495103,
      99, QMetaType::Int, 0x00495103,
     100, QMetaType::Int, 0x00495103,
     101, QMetaType::Int, 0x00495001,
     102, QMetaType::Int, 0x00495001,
     103, QMetaType::Int, 0x00495001,
     104, QMetaType::Int, 0x00495001,
     105, QMetaType::Int, 0x00495103,
     106, QMetaType::Int, 0x00495103,
     107, QMetaType::Int, 0x00495103,
     108, QMetaType::Int, 0x00495103,
     109, QMetaType::Float, 0x00495103,
     110, 0x80000000 | 111, 0x0049510b,
     112, 0x80000000 | 113, 0x00495009,
     114, 0x80000000 | 115, 0x00495009,
     116, 0x80000000 | 117, 0x00495009,
     118, 0x80000000 | 119, 0x00495009,
     120, 0x80000000 | 121, 0x00495009,
     122, QMetaType::QRect, 0x00495001,
     123, QMetaType::QRect, 0x00495103,
     124, QMetaType::QRect, 0x00495001,

 // properties: notify_signal_id
      33,
       4,
       6,
       7,
       9,
      10,
      18,
      20,
      23,
      30,
      21,
      22,
       5,
      14,
      36,
      37,
      16,
      17,
      12,
      27,
      28,
      29,
      26,
      24,
      13,
      19,
      31,
      34,
      35,
      38,
      25,
      32,

       0        // eod
};

void Latte::View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->eventTriggered((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 1: _t->mousePressed((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->mouseReleased((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->activitiesChanged(); break;
        case 4: _t->alternativesIsShownChanged(); break;
        case 5: _t->alignmentChanged(); break;
        case 6: _t->behaveAsPlasmaPanelChanged(); break;
        case 7: _t->byPassWMChanged(); break;
        case 8: _t->configWindowGeometryChanged(); break;
        case 9: _t->containsDragChanged(); break;
        case 10: _t->contextMenuIsShownChanged(); break;
        case 11: _t->dockLocationChanged(); break;
        case 12: _t->editThicknessChanged(); break;
        case 13: _t->effectsChanged(); break;
        case 14: _t->fontPixelSizeChanged(); break;
        case 15: _t->forcedShown(); break;
        case 16: _t->widthChanged(); break;
        case 17: _t->heightChanged(); break;
        case 18: _t->inEditModeChanged(); break;
        case 19: _t->indicatorChanged(); break;
        case 20: _t->isPreferredForShortcutsChanged(); break;
        case 21: _t->isTouchingBottomViewAndIsBusyChanged(); break;
        case 22: _t->isTouchingTopViewAndIsBusyChanged(); break;
        case 23: _t->latteTasksArePresentChanged(); break;
        case 24: _t->layoutChanged(); break;
        case 25: _t->localGeometryChanged(); break;
        case 26: _t->maxLengthChanged(); break;
        case 27: _t->maxThicknessChanged(); break;
        case 28: _t->normalThicknessChanged(); break;
        case 29: _t->offsetChanged(); break;
        case 30: _t->onPrimaryChanged(); break;
        case 31: _t->positionerChanged(); break;
        case 32: _t->screenGeometryChanged(); break;
        case 33: _t->typeChanged(); break;
        case 34: _t->visibilityChanged(); break;
        case 35: _t->windowsTrackerChanged(); break;
        case 36: _t->xChanged(); break;
        case 37: _t->yChanged(); break;
        case 38: _t->absoluteGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 39: _t->customPluginsChanged(); break;
        case 40: _t->availableScreenRectChangedFrom((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 41: _t->availableScreenRegionChangedFrom((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 42: _t->copyView(); break;
        case 43: _t->removeView(); break;
        case 44: { QVariantList _r = _t->containmentActions();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 45: _t->deactivateApplets(); break;
        case 46: _t->moveToLayout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 47: _t->removeTasksPlasmoid(); break;
        case 48: _t->setBlockHiding((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 49: _t->toggleAppletExpanded((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 50: { bool _r = _t->appletIsExpandable((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 51: { bool _r = _t->mimeContainsPlasmoid((*reinterpret_cast< QMimeData*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->tasksPresent();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->updateAbsoluteGeometry((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->updateAbsoluteGeometry(); break;
        case 55: { bool _r = _t->isHighestPriorityView();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: _t->showConfigurationInterface((*reinterpret_cast< Plasma::Applet*(*)>(_a[1]))); break;
        case 57: _t->availableScreenRectChangedFromSlot((*reinterpret_cast< View*(*)>(_a[1]))); break;
        case 58: _t->configViewCreatedFor((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 59: _t->hideWindowsForSlidingOut(); break;
        case 60: _t->preferredViewForShortcutsChangedSlot((*reinterpret_cast< Latte::View*(*)>(_a[1]))); break;
        case 61: _t->releaseGrab(); break;
        case 62: _t->reloadSource(); break;
        case 63: _t->statusChanged((*reinterpret_cast< Plasma::Types::ItemStatus(*)>(_a[1]))); break;
        case 64: _t->restoreConfig(); break;
        case 65: _t->saveConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::View* >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::View* >(); break;
            }
            break;
        case 51:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMimeData* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Plasma::Applet* >(); break;
            }
            break;
        case 57:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< View* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::View* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::View* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)(QEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::eventTriggered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)(const QPoint , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::mousePressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)(const QPoint , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::mouseReleased)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::activitiesChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::alternativesIsShownChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::alignmentChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::behaveAsPlasmaPanelChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::byPassWMChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::configWindowGeometryChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::containsDragChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::contextMenuIsShownChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::dockLocationChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::editThicknessChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::effectsChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::fontPixelSizeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::forcedShown)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::widthChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::heightChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::inEditModeChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::indicatorChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::isPreferredForShortcutsChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::isTouchingBottomViewAndIsBusyChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::isTouchingTopViewAndIsBusyChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::latteTasksArePresentChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::layoutChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::localGeometryChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::maxLengthChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::maxThicknessChanged)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::normalThicknessChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::offsetChanged)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::onPrimaryChanged)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::positionerChanged)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::screenGeometryChanged)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::typeChanged)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::visibilityChanged)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::windowsTrackerChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::xChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::yChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (View::*)(const QRect & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::absoluteGeometryChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::customPluginsChanged)) {
                *result = 39;
                return;
            }
        }
        {
            using _t = void (View::*)(Latte::View * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::availableScreenRectChangedFrom)) {
                *result = 40;
                return;
            }
        }
        {
            using _t = void (View::*)(Latte::View * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::availableScreenRegionChangedFrom)) {
                *result = 41;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 23:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::Layout::GenericLayout* >(); break;
        case 24:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Effects* >(); break;
        case 25:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Indicator* >(); break;
        case 26:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::Positioner* >(); break;
        case 27:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::VisibilityManager* >(); break;
        case 28:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Latte::ViewPart::WindowsTracker* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Latte::Types::ViewType*>(_v) = _t->type(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->alternativesIsShown(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->behaveAsPlasmaPanel(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->byPassWM(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->containsDrag(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->contextMenuIsShown(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inEditMode(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isPreferredForShortcuts(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->latteTasksArePresent(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->onPrimary(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isTouchingBottomViewAndIsBusy(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isTouchingTopViewAndIsBusy(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->alignment(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->fontPixelSize(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->editThickness(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->maxThickness(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->normalThickness(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->offset(); break;
        case 22: *reinterpret_cast< float*>(_v) = _t->maxLength(); break;
        case 23: *reinterpret_cast< Latte::Layout::GenericLayout**>(_v) = _t->layout(); break;
        case 24: *reinterpret_cast< Latte::ViewPart::Effects**>(_v) = _t->effects(); break;
        case 25: *reinterpret_cast< Latte::ViewPart::Indicator**>(_v) = _t->indicator(); break;
        case 26: *reinterpret_cast< Latte::ViewPart::Positioner**>(_v) = _t->positioner(); break;
        case 27: *reinterpret_cast< Latte::ViewPart::VisibilityManager**>(_v) = _t->visibility(); break;
        case 28: *reinterpret_cast< Latte::ViewPart::WindowsTracker**>(_v) = _t->windowsTracker(); break;
        case 29: *reinterpret_cast< QRect*>(_v) = _t->absoluteGeometry(); break;
        case 30: *reinterpret_cast< QRect*>(_v) = _t->localGeometry(); break;
        case 31: *reinterpret_cast< QRect*>(_v) = _t->screenGeometry(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< Latte::Types::ViewType*>(_v)); break;
        case 2: _t->setBehaveAsPlasmaPanel(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setByPassWM(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setInEditMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setIsPreferredForShortcuts(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setLatteTasksArePresent(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setOnPrimary(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setIsTouchingBottomViewAndIsBusy(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setIsTouchingTopViewAndIsBusy(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setAlignment(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setFontPixelSize(*reinterpret_cast< int*>(_v)); break;
        case 18: _t->setEditThickness(*reinterpret_cast< int*>(_v)); break;
        case 19: _t->setMaxThickness(*reinterpret_cast< int*>(_v)); break;
        case 20: _t->setNormalThickness(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setOffset(*reinterpret_cast< int*>(_v)); break;
        case 22: _t->setMaxLength(*reinterpret_cast< float*>(_v)); break;
        case 23: _t->setLayout(*reinterpret_cast< Latte::Layout::GenericLayout**>(_v)); break;
        case 30: _t->setLocalGeometry(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_Latte__View[] = {
    QMetaObject::SuperData::link<Latte::Types::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject Latte::View::staticMetaObject = { {
    QMetaObject::SuperData::link<PlasmaQuick::ContainmentView::staticMetaObject>(),
    qt_meta_stringdata_Latte__View.data,
    qt_meta_data_Latte__View,
    qt_static_metacall,
    qt_meta_extradata_Latte__View,
    nullptr
} };


const QMetaObject *Latte::View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Latte::View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Latte__View.stringdata0))
        return static_cast<void*>(this);
    return PlasmaQuick::ContainmentView::qt_metacast(_clname);
}

int Latte::View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlasmaQuick::ContainmentView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 32;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 32;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Latte::View::eventTriggered(QEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Latte::View::mousePressed(const QPoint _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Latte::View::mouseReleased(const QPoint _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Latte::View::activitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Latte::View::alternativesIsShownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Latte::View::alignmentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Latte::View::behaveAsPlasmaPanelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Latte::View::byPassWMChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Latte::View::configWindowGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Latte::View::containsDragChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Latte::View::contextMenuIsShownChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Latte::View::dockLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Latte::View::editThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Latte::View::effectsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Latte::View::fontPixelSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Latte::View::forcedShown()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Latte::View::widthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Latte::View::heightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Latte::View::inEditModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Latte::View::indicatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void Latte::View::isPreferredForShortcutsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Latte::View::isTouchingBottomViewAndIsBusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void Latte::View::isTouchingTopViewAndIsBusyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Latte::View::latteTasksArePresentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Latte::View::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void Latte::View::localGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void Latte::View::maxLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void Latte::View::maxThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void Latte::View::normalThicknessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void Latte::View::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void Latte::View::onPrimaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void Latte::View::positionerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void Latte::View::screenGeometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void Latte::View::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void Latte::View::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void Latte::View::windowsTrackerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void Latte::View::xChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void Latte::View::yChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void Latte::View::absoluteGeometryChanged(const QRect & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void Latte::View::customPluginsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}

// SIGNAL 40
void Latte::View::availableScreenRectChangedFrom(Latte::View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void Latte::View::availableScreenRegionChangedFrom(Latte::View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
