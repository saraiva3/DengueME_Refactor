/****************************************************************************
** Meta object code from reading C++ file 'component.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../editor/component.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'component.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Component_t {
    QByteArrayData data[8];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Component_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Component_t qt_meta_stringdata_Component = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Component"
QT_MOC_LITERAL(1, 10, 6), // "remove"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "clone"
QT_MOC_LITERAL(4, 24, 14), // "chartBeingUsed"
QT_MOC_LITERAL(5, 39, 3), // "csv"
QT_MOC_LITERAL(6, 43, 4), // "type"
QT_MOC_LITERAL(7, 48, 10) // "changeType"

    },
    "Component\0remove\0\0clone\0chartBeingUsed\0"
    "csv\0type\0changeType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Component[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,

       0        // eod
};

void Component::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Component *_t = static_cast<Component *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remove(); break;
        case 1: _t->clone(); break;
        case 2: _t->chartBeingUsed(); break;
        case 3: _t->csv((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->changeType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Component::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::remove)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Component::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::clone)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Component::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::chartBeingUsed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Component::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::csv)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Component::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Component::changeType)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Component::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Component.data,
      qt_meta_data_Component,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Component::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Component::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Component.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Component::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Component::remove()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Component::clone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Component::chartBeingUsed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Component::csv(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Component::changeType(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
