/****************************************************************************
** Meta object code from reading C++ file 'syncmodels.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../syncmodels.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncmodels.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SyncModels_t {
    QByteArrayData data[17];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SyncModels_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SyncModels_t qt_meta_stringdata_SyncModels = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SyncModels"
QT_MOC_LITERAL(1, 11, 7), // "addLine"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 6), // "qsLine"
QT_MOC_LITERAL(4, 27, 8), // "progress"
QT_MOC_LITERAL(5, 36, 11), // "nPercentage"
QT_MOC_LITERAL(6, 48, 8), // "finished"
QT_MOC_LITERAL(7, 57, 18), // "finishedWithErrors"
QT_MOC_LITERAL(8, 76, 12), // "updateAction"
QT_MOC_LITERAL(9, 89, 13), // "checkNewModel"
QT_MOC_LITERAL(10, 103, 12), // "finishedHead"
QT_MOC_LITERAL(11, 116, 7), // "timeout"
QT_MOC_LITERAL(12, 124, 14), // "downloadAction"
QT_MOC_LITERAL(13, 139, 5), // "error"
QT_MOC_LITERAL(14, 145, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 173, 4), // "code"
QT_MOC_LITERAL(16, 178, 13) // "onItemClicked"

    },
    "SyncModels\0addLine\0\0qsLine\0progress\0"
    "nPercentage\0finished\0finishedWithErrors\0"
    "updateAction\0checkNewModel\0finishedHead\0"
    "timeout\0downloadAction\0error\0"
    "QNetworkReply::NetworkError\0code\0"
    "onItemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SyncModels[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       6,    0,   75,    2, 0x08 /* Private */,
       7,    0,   76,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    0,   81,    2, 0x08 /* Private */,
      13,    1,   82,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void SyncModels::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SyncModels *_t = static_cast<SyncModels *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addLine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->progress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->finishedWithErrors(); break;
        case 4: _t->updateAction(); break;
        case 5: _t->checkNewModel(); break;
        case 6: _t->finishedHead(); break;
        case 7: _t->timeout(); break;
        case 8: _t->downloadAction(); break;
        case 9: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 10: _t->onItemClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SyncModels::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SyncModels.data,
      qt_meta_data_SyncModels,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SyncModels::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SyncModels::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SyncModels.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SyncModels::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
