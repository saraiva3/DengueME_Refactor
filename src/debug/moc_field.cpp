/****************************************************************************
** Meta object code from reading C++ file 'field.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../editor/components/field.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'field.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Field_t {
    QByteArrayData data[16];
    char stringdata0[226];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Field_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Field_t qt_meta_stringdata_Field = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Field"
QT_MOC_LITERAL(1, 6, 15), // "onActionBoolean"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "onActionText"
QT_MOC_LITERAL(4, 36, 15), // "onActionInteger"
QT_MOC_LITERAL(5, 52, 16), // "onActionFloating"
QT_MOC_LITERAL(6, 69, 16), // "onActionCheckbox"
QT_MOC_LITERAL(7, 86, 16), // "onActionCombobox"
QT_MOC_LITERAL(8, 103, 15), // "onActionOptions"
QT_MOC_LITERAL(9, 119, 14), // "onActionDelete"
QT_MOC_LITERAL(10, 134, 13), // "onActionClone"
QT_MOC_LITERAL(11, 148, 16), // "onActionEquation"
QT_MOC_LITERAL(12, 165, 11), // "onActionCsv"
QT_MOC_LITERAL(13, 177, 14), // "configureField"
QT_MOC_LITERAL(14, 192, 18), // "onActionCalculator"
QT_MOC_LITERAL(15, 211, 14) // "onSentEquation"

    },
    "Field\0onActionBoolean\0\0onActionText\0"
    "onActionInteger\0onActionFloating\0"
    "onActionCheckbox\0onActionCombobox\0"
    "onActionOptions\0onActionDelete\0"
    "onActionClone\0onActionEquation\0"
    "onActionCsv\0configureField\0"
    "onActionCalculator\0onSentEquation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Field[] = {

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
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Field::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Field *_t = static_cast<Field *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onActionBoolean(); break;
        case 1: _t->onActionText(); break;
        case 2: _t->onActionInteger(); break;
        case 3: _t->onActionFloating(); break;
        case 4: _t->onActionCheckbox(); break;
        case 5: _t->onActionCombobox(); break;
        case 6: { bool _r = _t->onActionOptions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->onActionDelete(); break;
        case 8: _t->onActionClone(); break;
        case 9: _t->onActionEquation(); break;
        case 10: _t->onActionCsv(); break;
        case 11: _t->configureField(); break;
        case 12: _t->onActionCalculator(); break;
        case 13: _t->onSentEquation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Field::staticMetaObject = {
    { &Component::staticMetaObject, qt_meta_stringdata_Field.data,
      qt_meta_data_Field,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Field::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Field::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Field.stringdata0))
        return static_cast<void*>(this);
    return Component::qt_metacast(_clname);
}

int Field::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Component::qt_metacall(_c, _id, _a);
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
