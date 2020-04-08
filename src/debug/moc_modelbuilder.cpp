/****************************************************************************
** Meta object code from reading C++ file 'modelbuilder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../builder/modelbuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modelbuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelBuilder_t {
    QByteArrayData data[22];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelBuilder_t qt_meta_stringdata_ModelBuilder = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ModelBuilder"
QT_MOC_LITERAL(1, 13, 15), // "openModelWizard"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "modelActivated"
QT_MOC_LITERAL(4, 45, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 57, 5), // "index"
QT_MOC_LITERAL(6, 63, 16), // "selectionChanged"
QT_MOC_LITERAL(7, 80, 7), // "current"
QT_MOC_LITERAL(8, 88, 8), // "previous"
QT_MOC_LITERAL(9, 97, 13), // "onModelClosed"
QT_MOC_LITERAL(10, 111, 11), // "deleteModel"
QT_MOC_LITERAL(11, 123, 9), // "editModel"
QT_MOC_LITERAL(12, 133, 14), // "actionNewModel"
QT_MOC_LITERAL(13, 148, 8), // "newModel"
QT_MOC_LITERAL(14, 157, 4), // "name"
QT_MOC_LITERAL(15, 162, 7), // "project"
QT_MOC_LITERAL(16, 170, 16), // "helpModelBuilder"
QT_MOC_LITERAL(17, 187, 14), // "addDescription"
QT_MOC_LITERAL(18, 202, 10), // "setToolbar"
QT_MOC_LITERAL(19, 213, 1), // "i"
QT_MOC_LITERAL(20, 215, 10), // "actionExit"
QT_MOC_LITERAL(21, 226, 6) // "editor"

    },
    "ModelBuilder\0openModelWizard\0\0"
    "modelActivated\0QModelIndex\0index\0"
    "selectionChanged\0current\0previous\0"
    "onModelClosed\0deleteModel\0editModel\0"
    "actionNewModel\0newModel\0name\0project\0"
    "helpModelBuilder\0addDescription\0"
    "setToolbar\0i\0actionExit\0editor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelBuilder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    1,   85,    2, 0x08 /* Private */,
       6,    2,   88,    2, 0x08 /* Private */,
       6,    1,   93,    2, 0x28 /* Private | MethodCloned */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    2,  100,    2, 0x08 /* Private */,
      16,    0,  105,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    1,  107,    2, 0x08 /* Private */,
      20,    0,  110,    2, 0x08 /* Private */,
      21,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    7,    8,
    QMetaType::Void, 0x80000000 | 4,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModelBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModelBuilder *_t = static_cast<ModelBuilder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openModelWizard(); break;
        case 1: _t->modelActivated((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onModelClosed(); break;
        case 5: _t->deleteModel(); break;
        case 6: _t->editModel(); break;
        case 7: _t->actionNewModel(); break;
        case 8: _t->newModel((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->helpModelBuilder(); break;
        case 10: _t->addDescription(); break;
        case 11: _t->setToolbar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->actionExit(); break;
        case 13: _t->editor(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ModelBuilder::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ModelBuilder.data,
      qt_meta_data_ModelBuilder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModelBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelBuilder.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ModelBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
