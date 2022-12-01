/****************************************************************************
** Meta object code from reading C++ file 'ViewerGui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/octomap-devel/octovis/include/octovis/ViewerGui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerGui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_octomap__ViewerGui_t {
    QByteArrayData data[69];
    char stringdata0[1624];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_octomap__ViewerGui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_octomap__ViewerGui_t qt_meta_stringdata_octomap__ViewerGui = {
    {
QT_MOC_LITERAL(0, 0, 18), // "octomap::ViewerGui"
QT_MOC_LITERAL(1, 19, 15), // "updateStatusBar"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "message"
QT_MOC_LITERAL(4, 44, 8), // "duration"
QT_MOC_LITERAL(5, 53, 19), // "changeNumberOfScans"
QT_MOC_LITERAL(6, 73, 5), // "scans"
QT_MOC_LITERAL(7, 79, 17), // "changeCurrentScan"
QT_MOC_LITERAL(8, 97, 16), // "changeResolution"
QT_MOC_LITERAL(9, 114, 10), // "resolution"
QT_MOC_LITERAL(10, 125, 17), // "changeCamPosition"
QT_MOC_LITERAL(11, 143, 1), // "x"
QT_MOC_LITERAL(12, 145, 1), // "y"
QT_MOC_LITERAL(13, 147, 1), // "z"
QT_MOC_LITERAL(14, 149, 5), // "lookX"
QT_MOC_LITERAL(15, 155, 5), // "lookY"
QT_MOC_LITERAL(16, 161, 5), // "lookZ"
QT_MOC_LITERAL(17, 167, 15), // "changeTreeDepth"
QT_MOC_LITERAL(18, 183, 5), // "depth"
QT_MOC_LITERAL(19, 189, 12), // "addNextScans"
QT_MOC_LITERAL(20, 202, 13), // "gotoFirstScan"
QT_MOC_LITERAL(21, 216, 7), // "isShown"
QT_MOC_LITERAL(22, 224, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(23, 248, 28), // "on_actionOpen_file_triggered"
QT_MOC_LITERAL(24, 277, 41), // "on_actionOpen_graph_increment..."
QT_MOC_LITERAL(25, 319, 28), // "on_actionSave_file_triggered"
QT_MOC_LITERAL(26, 348, 30), // "on_actionExport_view_triggered"
QT_MOC_LITERAL(27, 379, 34), // "on_actionExport_sequence_trig..."
QT_MOC_LITERAL(28, 414, 7), // "checked"
QT_MOC_LITERAL(29, 422, 34), // "on_actionClear_selection_trig..."
QT_MOC_LITERAL(30, 457, 33), // "on_actionFill_selection_trigg..."
QT_MOC_LITERAL(31, 491, 45), // "on_actionClear_unknown_in_sel..."
QT_MOC_LITERAL(32, 537, 44), // "on_actionFill_unknown_in_sele..."
QT_MOC_LITERAL(33, 582, 43), // "on_actionClear_nodes_in_selec..."
QT_MOC_LITERAL(34, 626, 42), // "on_actionFill_nodes_in_select..."
QT_MOC_LITERAL(35, 669, 44), // "on_actionDelete_nodes_in_sele..."
QT_MOC_LITERAL(36, 714, 52), // "on_actionDelete_nodes_outside..."
QT_MOC_LITERAL(37, 767, 23), // "on_actionHelp_triggered"
QT_MOC_LITERAL(38, 791, 27), // "on_actionSettings_triggered"
QT_MOC_LITERAL(39, 819, 29), // "on_actionPrune_tree_triggered"
QT_MOC_LITERAL(40, 849, 30), // "on_actionExpand_tree_triggered"
QT_MOC_LITERAL(41, 880, 34), // "on_actionConvert_ml_tree_trig..."
QT_MOC_LITERAL(42, 915, 32), // "on_actionReload_Octree_triggered"
QT_MOC_LITERAL(43, 948, 30), // "on_actionPrintout_mode_toggled"
QT_MOC_LITERAL(44, 979, 30), // "on_actionSelection_box_toggled"
QT_MOC_LITERAL(45, 1010, 27), // "on_actionHeight_map_toggled"
QT_MOC_LITERAL(46, 1038, 33), // "on_actionSemanticColoring_tog..."
QT_MOC_LITERAL(47, 1072, 31), // "on_actionStore_camera_triggered"
QT_MOC_LITERAL(48, 1104, 33), // "on_actionRestore_camera_trigg..."
QT_MOC_LITERAL(49, 1138, 27), // "on_actionPointcloud_toggled"
QT_MOC_LITERAL(50, 1166, 27), // "on_actionTrajectory_toggled"
QT_MOC_LITERAL(51, 1194, 29), // "on_actionOctree_cells_toggled"
QT_MOC_LITERAL(52, 1224, 7), // "enabled"
QT_MOC_LITERAL(53, 1232, 33), // "on_actionOctree_structure_tog..."
QT_MOC_LITERAL(54, 1266, 21), // "on_actionFree_toggled"
QT_MOC_LITERAL(55, 1288, 25), // "on_actionSelected_toggled"
QT_MOC_LITERAL(56, 1314, 21), // "on_actionAxes_toggled"
QT_MOC_LITERAL(57, 1336, 31), // "on_actionHideBackground_toggled"
QT_MOC_LITERAL(58, 1368, 35), // "on_actionAlternateRendering_t..."
QT_MOC_LITERAL(59, 1404, 24), // "on_actionClear_triggered"
QT_MOC_LITERAL(60, 1429, 13), // "voxelSelected"
QT_MOC_LITERAL(61, 1443, 18), // "const QMouseEvent*"
QT_MOC_LITERAL(62, 1462, 1), // "e"
QT_MOC_LITERAL(63, 1464, 28), // "on_action_bg_black_triggered"
QT_MOC_LITERAL(64, 1493, 28), // "on_action_bg_white_triggered"
QT_MOC_LITERAL(65, 1522, 27), // "on_action_bg_gray_triggered"
QT_MOC_LITERAL(66, 1550, 24), // "on_savecampose_triggered"
QT_MOC_LITERAL(67, 1575, 24), // "on_loadcampose_triggered"
QT_MOC_LITERAL(68, 1600, 23) // "on_actionTest_triggered"

    },
    "octomap::ViewerGui\0updateStatusBar\0\0"
    "message\0duration\0changeNumberOfScans\0"
    "scans\0changeCurrentScan\0changeResolution\0"
    "resolution\0changeCamPosition\0x\0y\0z\0"
    "lookX\0lookY\0lookZ\0changeTreeDepth\0"
    "depth\0addNextScans\0gotoFirstScan\0"
    "isShown\0on_actionExit_triggered\0"
    "on_actionOpen_file_triggered\0"
    "on_actionOpen_graph_incremental_triggered\0"
    "on_actionSave_file_triggered\0"
    "on_actionExport_view_triggered\0"
    "on_actionExport_sequence_triggered\0"
    "checked\0on_actionClear_selection_triggered\0"
    "on_actionFill_selection_triggered\0"
    "on_actionClear_unknown_in_selection_triggered\0"
    "on_actionFill_unknown_in_selection_triggered\0"
    "on_actionClear_nodes_in_selection_triggered\0"
    "on_actionFill_nodes_in_selection_triggered\0"
    "on_actionDelete_nodes_in_selection_triggered\0"
    "on_actionDelete_nodes_outside_of_selection_triggered\0"
    "on_actionHelp_triggered\0"
    "on_actionSettings_triggered\0"
    "on_actionPrune_tree_triggered\0"
    "on_actionExpand_tree_triggered\0"
    "on_actionConvert_ml_tree_triggered\0"
    "on_actionReload_Octree_triggered\0"
    "on_actionPrintout_mode_toggled\0"
    "on_actionSelection_box_toggled\0"
    "on_actionHeight_map_toggled\0"
    "on_actionSemanticColoring_toggled\0"
    "on_actionStore_camera_triggered\0"
    "on_actionRestore_camera_triggered\0"
    "on_actionPointcloud_toggled\0"
    "on_actionTrajectory_toggled\0"
    "on_actionOctree_cells_toggled\0enabled\0"
    "on_actionOctree_structure_toggled\0"
    "on_actionFree_toggled\0on_actionSelected_toggled\0"
    "on_actionAxes_toggled\0"
    "on_actionHideBackground_toggled\0"
    "on_actionAlternateRendering_toggled\0"
    "on_actionClear_triggered\0voxelSelected\0"
    "const QMouseEvent*\0e\0on_action_bg_black_triggered\0"
    "on_action_bg_white_triggered\0"
    "on_action_bg_gray_triggered\0"
    "on_savecampose_triggered\0"
    "on_loadcampose_triggered\0"
    "on_actionTest_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_octomap__ViewerGui[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  274,    2, 0x06 /* Public */,
       5,    1,  279,    2, 0x06 /* Public */,
       7,    1,  282,    2, 0x06 /* Public */,
       8,    1,  285,    2, 0x06 /* Public */,
      10,    6,  288,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  301,    2, 0x0a /* Public */,
      19,    1,  304,    2, 0x0a /* Public */,
      20,    0,  307,    2, 0x0a /* Public */,
      21,    0,  308,    2, 0x0a /* Public */,
      22,    0,  309,    2, 0x08 /* Private */,
      23,    0,  310,    2, 0x08 /* Private */,
      24,    0,  311,    2, 0x08 /* Private */,
      25,    0,  312,    2, 0x08 /* Private */,
      26,    0,  313,    2, 0x08 /* Private */,
      27,    1,  314,    2, 0x08 /* Private */,
      29,    0,  317,    2, 0x08 /* Private */,
      30,    0,  318,    2, 0x08 /* Private */,
      31,    0,  319,    2, 0x08 /* Private */,
      32,    0,  320,    2, 0x08 /* Private */,
      33,    0,  321,    2, 0x08 /* Private */,
      34,    0,  322,    2, 0x08 /* Private */,
      35,    0,  323,    2, 0x08 /* Private */,
      36,    0,  324,    2, 0x08 /* Private */,
      37,    0,  325,    2, 0x08 /* Private */,
      38,    0,  326,    2, 0x08 /* Private */,
      39,    0,  327,    2, 0x08 /* Private */,
      40,    0,  328,    2, 0x08 /* Private */,
      41,    0,  329,    2, 0x08 /* Private */,
      42,    0,  330,    2, 0x08 /* Private */,
      43,    1,  331,    2, 0x08 /* Private */,
      44,    1,  334,    2, 0x08 /* Private */,
      45,    1,  337,    2, 0x08 /* Private */,
      46,    1,  340,    2, 0x08 /* Private */,
      47,    0,  343,    2, 0x08 /* Private */,
      48,    0,  344,    2, 0x08 /* Private */,
      49,    1,  345,    2, 0x08 /* Private */,
      50,    1,  348,    2, 0x08 /* Private */,
      51,    1,  351,    2, 0x08 /* Private */,
      53,    1,  354,    2, 0x08 /* Private */,
      54,    1,  357,    2, 0x08 /* Private */,
      55,    1,  360,    2, 0x08 /* Private */,
      56,    1,  363,    2, 0x08 /* Private */,
      57,    1,  366,    2, 0x08 /* Private */,
      58,    1,  369,    2, 0x08 /* Private */,
      59,    0,  372,    2, 0x08 /* Private */,
      60,    1,  373,    2, 0x08 /* Private */,
      63,    0,  376,    2, 0x08 /* Private */,
      64,    0,  377,    2, 0x08 /* Private */,
      65,    0,  378,    2, 0x08 /* Private */,
      66,    0,  379,    2, 0x08 /* Private */,
      67,    0,  380,    2, 0x08 /* Private */,
      68,    0,  381,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   11,   12,   13,   14,   15,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::UInt,    6,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
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
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   52,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void octomap::ViewerGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewerGui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateStatusBar((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->changeNumberOfScans((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->changeCurrentScan((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 3: _t->changeResolution((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->changeCamPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 5: _t->changeTreeDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->addNextScans((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 7: _t->gotoFirstScan(); break;
        case 8: { bool _r = _t->isShown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_actionExit_triggered(); break;
        case 10: _t->on_actionOpen_file_triggered(); break;
        case 11: _t->on_actionOpen_graph_incremental_triggered(); break;
        case 12: _t->on_actionSave_file_triggered(); break;
        case 13: _t->on_actionExport_view_triggered(); break;
        case 14: _t->on_actionExport_sequence_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_actionClear_selection_triggered(); break;
        case 16: _t->on_actionFill_selection_triggered(); break;
        case 17: _t->on_actionClear_unknown_in_selection_triggered(); break;
        case 18: _t->on_actionFill_unknown_in_selection_triggered(); break;
        case 19: _t->on_actionClear_nodes_in_selection_triggered(); break;
        case 20: _t->on_actionFill_nodes_in_selection_triggered(); break;
        case 21: _t->on_actionDelete_nodes_in_selection_triggered(); break;
        case 22: _t->on_actionDelete_nodes_outside_of_selection_triggered(); break;
        case 23: _t->on_actionHelp_triggered(); break;
        case 24: _t->on_actionSettings_triggered(); break;
        case 25: _t->on_actionPrune_tree_triggered(); break;
        case 26: _t->on_actionExpand_tree_triggered(); break;
        case 27: _t->on_actionConvert_ml_tree_triggered(); break;
        case 28: _t->on_actionReload_Octree_triggered(); break;
        case 29: _t->on_actionPrintout_mode_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: _t->on_actionSelection_box_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->on_actionHeight_map_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_actionSemanticColoring_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_actionStore_camera_triggered(); break;
        case 34: _t->on_actionRestore_camera_triggered(); break;
        case 35: _t->on_actionPointcloud_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_actionTrajectory_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_actionOctree_cells_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_actionOctree_structure_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_actionFree_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_actionSelected_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_actionAxes_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_actionHideBackground_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_actionAlternateRendering_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_actionClear_triggered(); break;
        case 45: _t->voxelSelected((*reinterpret_cast< const QMouseEvent*(*)>(_a[1]))); break;
        case 46: _t->on_action_bg_black_triggered(); break;
        case 47: _t->on_action_bg_white_triggered(); break;
        case 48: _t->on_action_bg_gray_triggered(); break;
        case 49: _t->on_savecampose_triggered(); break;
        case 50: _t->on_loadcampose_triggered(); break;
        case 51: _t->on_actionTest_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewerGui::*)(QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerGui::updateStatusBar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewerGui::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerGui::changeNumberOfScans)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewerGui::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerGui::changeCurrentScan)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ViewerGui::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerGui::changeResolution)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ViewerGui::*)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerGui::changeCamPosition)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject octomap::ViewerGui::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_octomap__ViewerGui.data,
    qt_meta_data_octomap__ViewerGui,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *octomap::ViewerGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *octomap::ViewerGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_octomap__ViewerGui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int octomap::ViewerGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void octomap::ViewerGui::updateStatusBar(QString _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void octomap::ViewerGui::changeNumberOfScans(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void octomap::ViewerGui::changeCurrentScan(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void octomap::ViewerGui::changeResolution(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void octomap::ViewerGui::changeCamPosition(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
