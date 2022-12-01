/****************************************************************************
** Meta object code from reading C++ file 'ViewerSettingsPanelCamera.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/octomap-devel/octovis/include/octovis/ViewerSettingsPanelCamera.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerSettingsPanelCamera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewerSettingsPanelCamera_t {
    QByteArrayData data[39];
    char stringdata0[657];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewerSettingsPanelCamera_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewerSettingsPanelCamera_t qt_meta_stringdata_ViewerSettingsPanelCamera = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ViewerSettingsPanelCamera"
QT_MOC_LITERAL(1, 26, 17), // "changeCamPosition"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 1), // "x"
QT_MOC_LITERAL(4, 47, 1), // "y"
QT_MOC_LITERAL(5, 49, 1), // "z"
QT_MOC_LITERAL(6, 51, 5), // "lookX"
QT_MOC_LITERAL(7, 57, 5), // "lookY"
QT_MOC_LITERAL(8, 63, 5), // "lookZ"
QT_MOC_LITERAL(9, 69, 11), // "jumpToFrame"
QT_MOC_LITERAL(10, 81, 5), // "frame"
QT_MOC_LITERAL(11, 87, 4), // "play"
QT_MOC_LITERAL(12, 92, 5), // "pause"
QT_MOC_LITERAL(13, 98, 15), // "clearCameraPath"
QT_MOC_LITERAL(14, 114, 16), // "saveToCameraPath"
QT_MOC_LITERAL(15, 131, 20), // "removeFromCameraPath"
QT_MOC_LITERAL(16, 152, 15), // "addToCameraPath"
QT_MOC_LITERAL(17, 168, 16), // "followCameraPath"
QT_MOC_LITERAL(18, 185, 15), // "followRobotPath"
QT_MOC_LITERAL(19, 201, 17), // "setNumberOfFrames"
QT_MOC_LITERAL(20, 219, 6), // "frames"
QT_MOC_LITERAL(21, 226, 15), // "setCurrentFrame"
QT_MOC_LITERAL(22, 242, 27), // "setRobotTrajectoryAvailable"
QT_MOC_LITERAL(23, 270, 9), // "available"
QT_MOC_LITERAL(24, 280, 10), // "setStopped"
QT_MOC_LITERAL(25, 291, 26), // "on_firstScanButton_clicked"
QT_MOC_LITERAL(26, 318, 25), // "on_lastScanButton_clicked"
QT_MOC_LITERAL(27, 344, 25), // "on_nextScanButton_clicked"
QT_MOC_LITERAL(28, 370, 29), // "on_previousScanButton_clicked"
QT_MOC_LITERAL(29, 400, 25), // "on_playScanButton_clicked"
QT_MOC_LITERAL(30, 426, 33), // "on_scanProgressSlider_sliderM..."
QT_MOC_LITERAL(31, 460, 5), // "value"
QT_MOC_LITERAL(32, 466, 33), // "on_followCameraPathButton_cli..."
QT_MOC_LITERAL(33, 500, 33), // "on_followTrajectoryButton_cli..."
QT_MOC_LITERAL(34, 534, 24), // "on_cameraPathAdd_clicked"
QT_MOC_LITERAL(35, 559, 27), // "on_cameraPathRemove_clicked"
QT_MOC_LITERAL(36, 587, 25), // "on_cameraPathSave_clicked"
QT_MOC_LITERAL(37, 613, 26), // "on_cameraPathClear_clicked"
QT_MOC_LITERAL(38, 640, 16) // "positionEditDone"

    },
    "ViewerSettingsPanelCamera\0changeCamPosition\0"
    "\0x\0y\0z\0lookX\0lookY\0lookZ\0jumpToFrame\0"
    "frame\0play\0pause\0clearCameraPath\0"
    "saveToCameraPath\0removeFromCameraPath\0"
    "addToCameraPath\0followCameraPath\0"
    "followRobotPath\0setNumberOfFrames\0"
    "frames\0setCurrentFrame\0"
    "setRobotTrajectoryAvailable\0available\0"
    "setStopped\0on_firstScanButton_clicked\0"
    "on_lastScanButton_clicked\0"
    "on_nextScanButton_clicked\0"
    "on_previousScanButton_clicked\0"
    "on_playScanButton_clicked\0"
    "on_scanProgressSlider_sliderMoved\0"
    "value\0on_followCameraPathButton_clicked\0"
    "on_followTrajectoryButton_clicked\0"
    "on_cameraPathAdd_clicked\0"
    "on_cameraPathRemove_clicked\0"
    "on_cameraPathSave_clicked\0"
    "on_cameraPathClear_clicked\0positionEditDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewerSettingsPanelCamera[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,  149,    2, 0x06 /* Public */,
       9,    1,  162,    2, 0x06 /* Public */,
      11,    0,  165,    2, 0x06 /* Public */,
      12,    0,  166,    2, 0x06 /* Public */,
      13,    0,  167,    2, 0x06 /* Public */,
      14,    0,  168,    2, 0x06 /* Public */,
      15,    0,  169,    2, 0x06 /* Public */,
      16,    0,  170,    2, 0x06 /* Public */,
      17,    0,  171,    2, 0x06 /* Public */,
      18,    0,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,  173,    2, 0x0a /* Public */,
      21,    1,  176,    2, 0x0a /* Public */,
      22,    1,  179,    2, 0x0a /* Public */,
      24,    0,  182,    2, 0x0a /* Public */,
      25,    0,  183,    2, 0x08 /* Private */,
      26,    0,  184,    2, 0x08 /* Private */,
      27,    0,  185,    2, 0x08 /* Private */,
      28,    0,  186,    2, 0x08 /* Private */,
      29,    0,  187,    2, 0x08 /* Private */,
      30,    1,  188,    2, 0x08 /* Private */,
      32,    0,  191,    2, 0x08 /* Private */,
      33,    0,  192,    2, 0x08 /* Private */,
      34,    0,  193,    2, 0x08 /* Private */,
      35,    0,  194,    2, 0x08 /* Private */,
      36,    0,  195,    2, 0x08 /* Private */,
      37,    0,  196,    2, 0x08 /* Private */,
      38,    1,  197,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,   20,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void ViewerSettingsPanelCamera::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewerSettingsPanelCamera *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCamPosition((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        case 1: _t->jumpToFrame((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->play(); break;
        case 3: _t->pause(); break;
        case 4: _t->clearCameraPath(); break;
        case 5: _t->saveToCameraPath(); break;
        case 6: _t->removeFromCameraPath(); break;
        case 7: _t->addToCameraPath(); break;
        case 8: _t->followCameraPath(); break;
        case 9: _t->followRobotPath(); break;
        case 10: _t->setNumberOfFrames((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->setCurrentFrame((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 12: _t->setRobotTrajectoryAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setStopped(); break;
        case 14: _t->on_firstScanButton_clicked(); break;
        case 15: _t->on_lastScanButton_clicked(); break;
        case 16: _t->on_nextScanButton_clicked(); break;
        case 17: _t->on_previousScanButton_clicked(); break;
        case 18: _t->on_playScanButton_clicked(); break;
        case 19: _t->on_scanProgressSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_followCameraPathButton_clicked(); break;
        case 21: _t->on_followTrajectoryButton_clicked(); break;
        case 22: _t->on_cameraPathAdd_clicked(); break;
        case 23: _t->on_cameraPathRemove_clicked(); break;
        case 24: _t->on_cameraPathSave_clicked(); break;
        case 25: _t->on_cameraPathClear_clicked(); break;
        case 26: _t->positionEditDone((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewerSettingsPanelCamera::*)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::changeCamPosition)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::jumpToFrame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::play)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::pause)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::clearCameraPath)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::saveToCameraPath)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::removeFromCameraPath)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::addToCameraPath)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::followCameraPath)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanelCamera::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanelCamera::followRobotPath)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ViewerSettingsPanelCamera::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ViewerSettingsPanelCamera.data,
    qt_meta_data_ViewerSettingsPanelCamera,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ViewerSettingsPanelCamera::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewerSettingsPanelCamera::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerSettingsPanelCamera.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewerSettingsPanelCamera::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ViewerSettingsPanelCamera::changeCamPosition(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewerSettingsPanelCamera::jumpToFrame(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewerSettingsPanelCamera::play()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ViewerSettingsPanelCamera::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ViewerSettingsPanelCamera::clearCameraPath()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ViewerSettingsPanelCamera::saveToCameraPath()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ViewerSettingsPanelCamera::removeFromCameraPath()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ViewerSettingsPanelCamera::addToCameraPath()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ViewerSettingsPanelCamera::followCameraPath()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ViewerSettingsPanelCamera::followRobotPath()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
