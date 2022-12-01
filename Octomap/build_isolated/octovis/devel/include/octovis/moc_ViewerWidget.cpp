/****************************************************************************
** Meta object code from reading C++ file 'ViewerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/octomap-devel/octovis/include/octovis/ViewerWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_octomap__ViewerWidget_t {
    QByteArrayData data[43];
    char stringdata0[573];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_octomap__ViewerWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_octomap__ViewerWidget_t qt_meta_stringdata_octomap__ViewerWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "octomap::ViewerWidget"
QT_MOC_LITERAL(1, 22, 17), // "cameraPathStopped"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 2), // "id"
QT_MOC_LITERAL(4, 44, 22), // "cameraPathFrameChanged"
QT_MOC_LITERAL(5, 67, 20), // "current_camera_frame"
QT_MOC_LITERAL(6, 88, 6), // "select"
QT_MOC_LITERAL(7, 95, 18), // "const QMouseEvent*"
QT_MOC_LITERAL(8, 114, 1), // "e"
QT_MOC_LITERAL(9, 116, 18), // "enablePrintoutMode"
QT_MOC_LITERAL(10, 135, 7), // "enabled"
QT_MOC_LITERAL(11, 143, 21), // "enableHeightColorMode"
QT_MOC_LITERAL(12, 165, 22), // "enableSemanticColoring"
QT_MOC_LITERAL(13, 188, 18), // "enableSelectionBox"
QT_MOC_LITERAL(14, 207, 14), // "setCamPosition"
QT_MOC_LITERAL(15, 222, 1), // "x"
QT_MOC_LITERAL(16, 224, 1), // "y"
QT_MOC_LITERAL(17, 226, 1), // "z"
QT_MOC_LITERAL(18, 228, 5), // "lookX"
QT_MOC_LITERAL(19, 234, 5), // "lookY"
QT_MOC_LITERAL(20, 240, 5), // "lookZ"
QT_MOC_LITERAL(21, 246, 10), // "setCamPose"
QT_MOC_LITERAL(22, 257, 16), // "octomath::Pose6D"
QT_MOC_LITERAL(23, 274, 4), // "pose"
QT_MOC_LITERAL(24, 279, 19), // "setSceneBoundingBox"
QT_MOC_LITERAL(25, 299, 14), // "qglviewer::Vec"
QT_MOC_LITERAL(26, 314, 3), // "min"
QT_MOC_LITERAL(27, 318, 3), // "max"
QT_MOC_LITERAL(28, 322, 16), // "deleteCameraPath"
QT_MOC_LITERAL(29, 339, 18), // "appendToCameraPath"
QT_MOC_LITERAL(30, 358, 25), // "appendCurrentToCameraPath"
QT_MOC_LITERAL(31, 384, 22), // "addCurrentToCameraPath"
QT_MOC_LITERAL(32, 407, 5), // "frame"
QT_MOC_LITERAL(33, 413, 20), // "removeFromCameraPath"
QT_MOC_LITERAL(34, 434, 16), // "updateCameraPath"
QT_MOC_LITERAL(35, 451, 14), // "jumpToCamFrame"
QT_MOC_LITERAL(36, 466, 14), // "playCameraPath"
QT_MOC_LITERAL(37, 481, 11), // "start_frame"
QT_MOC_LITERAL(38, 493, 14), // "stopCameraPath"
QT_MOC_LITERAL(39, 508, 12), // "selectionBox"
QT_MOC_LITERAL(40, 521, 9), // "resetView"
QT_MOC_LITERAL(41, 531, 18), // "cameraPathFinished"
QT_MOC_LITERAL(42, 550, 22) // "cameraPathInterpolated"

    },
    "octomap::ViewerWidget\0cameraPathStopped\0"
    "\0id\0cameraPathFrameChanged\0"
    "current_camera_frame\0select\0"
    "const QMouseEvent*\0e\0enablePrintoutMode\0"
    "enabled\0enableHeightColorMode\0"
    "enableSemanticColoring\0enableSelectionBox\0"
    "setCamPosition\0x\0y\0z\0lookX\0lookY\0lookZ\0"
    "setCamPose\0octomath::Pose6D\0pose\0"
    "setSceneBoundingBox\0qglviewer::Vec\0"
    "min\0max\0deleteCameraPath\0appendToCameraPath\0"
    "appendCurrentToCameraPath\0"
    "addCurrentToCameraPath\0frame\0"
    "removeFromCameraPath\0updateCameraPath\0"
    "jumpToCamFrame\0playCameraPath\0start_frame\0"
    "stopCameraPath\0selectionBox\0resetView\0"
    "cameraPathFinished\0cameraPathInterpolated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_octomap__ViewerWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    2,  152,    2, 0x06 /* Public */,
       6,    1,  157,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  160,    2, 0x0a /* Public */,
       9,    0,  163,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  164,    2, 0x0a /* Public */,
      11,    0,  167,    2, 0x2a /* Public | MethodCloned */,
      12,    1,  168,    2, 0x0a /* Public */,
      12,    0,  171,    2, 0x2a /* Public | MethodCloned */,
      13,    1,  172,    2, 0x0a /* Public */,
      13,    0,  175,    2, 0x2a /* Public | MethodCloned */,
      14,    6,  176,    2, 0x0a /* Public */,
      21,    1,  189,    2, 0x0a /* Public */,
      24,    2,  192,    2, 0x0a /* Public */,
      28,    1,  197,    2, 0x0a /* Public */,
      29,    2,  200,    2, 0x0a /* Public */,
      30,    1,  205,    2, 0x0a /* Public */,
      31,    2,  208,    2, 0x0a /* Public */,
      33,    2,  213,    2, 0x0a /* Public */,
      34,    2,  218,    2, 0x0a /* Public */,
      35,    2,  223,    2, 0x0a /* Public */,
      36,    2,  228,    2, 0x0a /* Public */,
      38,    1,  233,    2, 0x0a /* Public */,
      39,    0,  236,    2, 0x0a /* Public */,
      40,    0,  237,    2, 0x0a /* Public */,
      41,    0,  238,    2, 0x08 /* Private */,
      42,    0,  239,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,   15,   16,   17,   18,   19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 22,    3,   23,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,   37,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void octomap::ViewerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewerWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cameraPathStopped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->cameraPathFrameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->select((*reinterpret_cast< const QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->enablePrintoutMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enablePrintoutMode(); break;
        case 5: _t->enableHeightColorMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->enableHeightColorMode(); break;
        case 7: _t->enableSemanticColoring((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->enableSemanticColoring(); break;
        case 9: _t->enableSelectionBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->enableSelectionBox(); break;
        case 11: _t->setCamPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 12: _t->setCamPose((*reinterpret_cast< const octomath::Pose6D(*)>(_a[1]))); break;
        case 13: _t->setSceneBoundingBox((*reinterpret_cast< const qglviewer::Vec(*)>(_a[1])),(*reinterpret_cast< const qglviewer::Vec(*)>(_a[2]))); break;
        case 14: _t->deleteCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->appendToCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const octomath::Pose6D(*)>(_a[2]))); break;
        case 16: _t->appendCurrentToCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->addCurrentToCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->removeFromCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->updateCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 20: _t->jumpToCamFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 21: _t->playCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 22: _t->stopCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->selectionBox(); break;
        case 24: _t->resetView(); break;
        case 25: _t->cameraPathFinished(); break;
        case 26: _t->cameraPathInterpolated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewerWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerWidget::cameraPathStopped)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewerWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerWidget::cameraPathFrameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewerWidget::*)(const QMouseEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerWidget::select)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject octomap::ViewerWidget::staticMetaObject = { {
    &QGLViewer::staticMetaObject,
    qt_meta_stringdata_octomap__ViewerWidget.data,
    qt_meta_data_octomap__ViewerWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *octomap::ViewerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *octomap::ViewerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_octomap__ViewerWidget.stringdata0))
        return static_cast<void*>(this);
    return QGLViewer::qt_metacast(_clname);
}

int octomap::ViewerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLViewer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void octomap::ViewerWidget::cameraPathStopped(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void octomap::ViewerWidget::cameraPathFrameChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void octomap::ViewerWidget::select(const QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
