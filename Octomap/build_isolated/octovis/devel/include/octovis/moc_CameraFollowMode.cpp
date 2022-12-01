/****************************************************************************
** Meta object code from reading C++ file 'CameraFollowMode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/octomap-devel/octovis/include/octovis/CameraFollowMode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CameraFollowMode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CameraFollowMode_t {
    QByteArrayData data[38];
    char stringdata0[526];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraFollowMode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraFollowMode_t qt_meta_stringdata_CameraFollowMode = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CameraFollowMode"
QT_MOC_LITERAL(1, 17, 13), // "changeCamPose"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "octomath::Pose6D"
QT_MOC_LITERAL(4, 49, 4), // "pose"
QT_MOC_LITERAL(5, 54, 18), // "interpolateCamPose"
QT_MOC_LITERAL(6, 73, 8), // "old_pose"
QT_MOC_LITERAL(7, 82, 8), // "new_pose"
QT_MOC_LITERAL(8, 91, 1), // "u"
QT_MOC_LITERAL(9, 93, 7), // "stopped"
QT_MOC_LITERAL(10, 101, 12), // "frameChanged"
QT_MOC_LITERAL(11, 114, 5), // "frame"
QT_MOC_LITERAL(12, 120, 16), // "deleteCameraPath"
QT_MOC_LITERAL(13, 137, 2), // "id"
QT_MOC_LITERAL(14, 140, 20), // "removeFromCameraPath"
QT_MOC_LITERAL(15, 161, 16), // "updateCameraPath"
QT_MOC_LITERAL(16, 178, 18), // "appendToCameraPath"
QT_MOC_LITERAL(17, 197, 25), // "appendCurrentToCameraPath"
QT_MOC_LITERAL(18, 223, 22), // "addCurrentToCameraPath"
QT_MOC_LITERAL(19, 246, 14), // "playCameraPath"
QT_MOC_LITERAL(20, 261, 11), // "start_frame"
QT_MOC_LITERAL(21, 273, 14), // "stopCameraPath"
QT_MOC_LITERAL(22, 288, 14), // "jumpToCamFrame"
QT_MOC_LITERAL(23, 303, 20), // "changeNumberOfFrames"
QT_MOC_LITERAL(24, 324, 5), // "count"
QT_MOC_LITERAL(25, 330, 18), // "scanGraphAvailable"
QT_MOC_LITERAL(26, 349, 9), // "available"
QT_MOC_LITERAL(27, 359, 11), // "jumpToFrame"
QT_MOC_LITERAL(28, 371, 17), // "cameraPathStopped"
QT_MOC_LITERAL(29, 389, 22), // "cameraPathFrameChanged"
QT_MOC_LITERAL(30, 412, 20), // "current_camera_frame"
QT_MOC_LITERAL(31, 433, 4), // "play"
QT_MOC_LITERAL(32, 438, 5), // "pause"
QT_MOC_LITERAL(33, 444, 15), // "clearCameraPath"
QT_MOC_LITERAL(34, 460, 16), // "saveToCameraPath"
QT_MOC_LITERAL(35, 477, 15), // "addToCameraPath"
QT_MOC_LITERAL(36, 493, 16), // "followCameraPath"
QT_MOC_LITERAL(37, 510, 15) // "followRobotPath"

    },
    "CameraFollowMode\0changeCamPose\0\0"
    "octomath::Pose6D\0pose\0interpolateCamPose\0"
    "old_pose\0new_pose\0u\0stopped\0frameChanged\0"
    "frame\0deleteCameraPath\0id\0"
    "removeFromCameraPath\0updateCameraPath\0"
    "appendToCameraPath\0appendCurrentToCameraPath\0"
    "addCurrentToCameraPath\0playCameraPath\0"
    "start_frame\0stopCameraPath\0jumpToCamFrame\0"
    "changeNumberOfFrames\0count\0"
    "scanGraphAvailable\0available\0jumpToFrame\0"
    "cameraPathStopped\0cameraPathFrameChanged\0"
    "current_camera_frame\0play\0pause\0"
    "clearCameraPath\0saveToCameraPath\0"
    "addToCameraPath\0followCameraPath\0"
    "followRobotPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraFollowMode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  144,    2, 0x06 /* Public */,
       5,    3,  147,    2, 0x06 /* Public */,
       9,    0,  154,    2, 0x06 /* Public */,
      10,    1,  155,    2, 0x06 /* Public */,
      12,    1,  158,    2, 0x06 /* Public */,
      14,    2,  161,    2, 0x06 /* Public */,
      15,    2,  166,    2, 0x06 /* Public */,
      16,    2,  171,    2, 0x06 /* Public */,
      17,    1,  176,    2, 0x06 /* Public */,
      18,    2,  179,    2, 0x06 /* Public */,
      19,    2,  184,    2, 0x06 /* Public */,
      21,    1,  189,    2, 0x06 /* Public */,
      22,    2,  192,    2, 0x06 /* Public */,
      23,    1,  197,    2, 0x06 /* Public */,
      25,    1,  200,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  203,    2, 0x0a /* Public */,
      28,    1,  206,    2, 0x0a /* Public */,
      29,    2,  209,    2, 0x0a /* Public */,
      31,    0,  214,    2, 0x0a /* Public */,
      32,    0,  215,    2, 0x0a /* Public */,
      33,    0,  216,    2, 0x0a /* Public */,
      34,    0,  217,    2, 0x0a /* Public */,
      35,    0,  218,    2, 0x0a /* Public */,
      14,    0,  219,    2, 0x0a /* Public */,
      36,    0,  220,    2, 0x0a /* Public */,
      37,    0,  221,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Double,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   11,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,   13,    4,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   20,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   11,
    QMetaType::Void, QMetaType::UInt,   24,
    QMetaType::Void, QMetaType::Bool,   26,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CameraFollowMode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CameraFollowMode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeCamPose((*reinterpret_cast< const octomath::Pose6D(*)>(_a[1]))); break;
        case 1: _t->interpolateCamPose((*reinterpret_cast< const octomath::Pose6D(*)>(_a[1])),(*reinterpret_cast< const octomath::Pose6D(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 2: _t->stopped(); break;
        case 3: _t->frameChanged((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->deleteCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->removeFromCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->updateCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->appendToCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const octomath::Pose6D(*)>(_a[2]))); break;
        case 8: _t->appendCurrentToCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->addCurrentToCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->playCameraPath((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->stopCameraPath((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->jumpToCamFrame((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->changeNumberOfFrames((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 14: _t->scanGraphAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->jumpToFrame((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 16: _t->cameraPathStopped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->cameraPathFrameChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->play(); break;
        case 19: _t->pause(); break;
        case 20: _t->clearCameraPath(); break;
        case 21: _t->saveToCameraPath(); break;
        case 22: _t->addToCameraPath(); break;
        case 23: _t->removeFromCameraPath(); break;
        case 24: _t->followCameraPath(); break;
        case 25: _t->followRobotPath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CameraFollowMode::*)(const octomath::Pose6D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::changeCamPose)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(const octomath::Pose6D & , const octomath::Pose6D & , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::interpolateCamPose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::stopped)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(unsigned int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::frameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::deleteCameraPath)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::removeFromCameraPath)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::updateCameraPath)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , const octomath::Pose6D & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::appendToCameraPath)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::appendCurrentToCameraPath)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::addCurrentToCameraPath)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::playCameraPath)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::stopCameraPath)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::jumpToCamFrame)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::changeNumberOfFrames)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (CameraFollowMode::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CameraFollowMode::scanGraphAvailable)) {
                *result = 14;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CameraFollowMode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CameraFollowMode.data,
    qt_meta_data_CameraFollowMode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CameraFollowMode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraFollowMode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CameraFollowMode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CameraFollowMode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void CameraFollowMode::changeCamPose(const octomath::Pose6D & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraFollowMode::interpolateCamPose(const octomath::Pose6D & _t1, const octomath::Pose6D & _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CameraFollowMode::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void CameraFollowMode::frameChanged(unsigned int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CameraFollowMode::deleteCameraPath(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CameraFollowMode::removeFromCameraPath(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CameraFollowMode::updateCameraPath(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CameraFollowMode::appendToCameraPath(int _t1, const octomath::Pose6D & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CameraFollowMode::appendCurrentToCameraPath(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void CameraFollowMode::addCurrentToCameraPath(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void CameraFollowMode::playCameraPath(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void CameraFollowMode::stopCameraPath(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void CameraFollowMode::jumpToCamFrame(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void CameraFollowMode::changeNumberOfFrames(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void CameraFollowMode::scanGraphAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
