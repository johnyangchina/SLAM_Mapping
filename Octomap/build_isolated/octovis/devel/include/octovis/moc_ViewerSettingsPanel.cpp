/****************************************************************************
** Meta object code from reading C++ file 'ViewerSettingsPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/octomap-devel/octovis/include/octovis/ViewerSettingsPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewerSettingsPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ViewerSettingsPanel_t {
    QByteArrayData data[17];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ViewerSettingsPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ViewerSettingsPanel_t qt_meta_stringdata_ViewerSettingsPanel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ViewerSettingsPanel"
QT_MOC_LITERAL(1, 20, 16), // "treeDepthChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "depth"
QT_MOC_LITERAL(4, 44, 12), // "addNextScans"
QT_MOC_LITERAL(5, 57, 5), // "scans"
QT_MOC_LITERAL(6, 63, 13), // "gotoFirstScan"
QT_MOC_LITERAL(7, 77, 16), // "setNumberOfScans"
QT_MOC_LITERAL(8, 94, 14), // "setCurrentScan"
QT_MOC_LITERAL(9, 109, 4), // "scan"
QT_MOC_LITERAL(10, 114, 13), // "setResolution"
QT_MOC_LITERAL(11, 128, 10), // "resolution"
QT_MOC_LITERAL(12, 139, 12), // "setTreeDepth"
QT_MOC_LITERAL(13, 152, 26), // "on_firstScanButton_clicked"
QT_MOC_LITERAL(14, 179, 25), // "on_lastScanButton_clicked"
QT_MOC_LITERAL(15, 205, 25), // "on_nextScanButton_clicked"
QT_MOC_LITERAL(16, 231, 28) // "on_fastFwdScanButton_clicked"

    },
    "ViewerSettingsPanel\0treeDepthChanged\0"
    "\0depth\0addNextScans\0scans\0gotoFirstScan\0"
    "setNumberOfScans\0setCurrentScan\0scan\0"
    "setResolution\0resolution\0setTreeDepth\0"
    "on_firstScanButton_clicked\0"
    "on_lastScanButton_clicked\0"
    "on_nextScanButton_clicked\0"
    "on_fastFwdScanButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ViewerSettingsPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   76,    2, 0x0a /* Public */,
       8,    1,   79,    2, 0x0a /* Public */,
      10,    1,   82,    2, 0x0a /* Public */,
      12,    1,   85,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    5,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ViewerSettingsPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ViewerSettingsPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->treeDepthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->addNextScans((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 2: _t->gotoFirstScan(); break;
        case 3: _t->setNumberOfScans((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->setCurrentScan((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->setResolution((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setTreeDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_firstScanButton_clicked(); break;
        case 8: _t->on_lastScanButton_clicked(); break;
        case 9: _t->on_nextScanButton_clicked(); break;
        case 10: _t->on_fastFwdScanButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ViewerSettingsPanel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanel::treeDepthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanel::*)(unsigned  );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanel::addNextScans)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ViewerSettingsPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ViewerSettingsPanel::gotoFirstScan)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ViewerSettingsPanel::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ViewerSettingsPanel.data,
    qt_meta_data_ViewerSettingsPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ViewerSettingsPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ViewerSettingsPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ViewerSettingsPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ViewerSettingsPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ViewerSettingsPanel::treeDepthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ViewerSettingsPanel::addNextScans(unsigned  _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ViewerSettingsPanel::gotoFirstScan()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
