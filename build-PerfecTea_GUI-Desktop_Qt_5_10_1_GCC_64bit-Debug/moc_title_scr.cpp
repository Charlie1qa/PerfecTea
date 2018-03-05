/****************************************************************************
** Meta object code from reading C++ file 'title_scr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PerfecTea_GUI/title_scr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'title_scr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_title_scr_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_title_scr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_title_scr_t qt_meta_stringdata_title_scr = {
    {
QT_MOC_LITERAL(0, 0, 9), // "title_scr"
QT_MOC_LITERAL(1, 10, 8), // "showTime"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 15), // "mousePressEvent"
QT_MOC_LITERAL(4, 36, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 49, 5), // "event"
QT_MOC_LITERAL(6, 55, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(7, 79, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(8, 104, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(9, 129, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(10, 153, 23) // "on_pushButton_7_clicked"

    },
    "title_scr\0showTime\0\0mousePressEvent\0"
    "QMouseEvent*\0event\0on_pushButton_6_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_7_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_title_scr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    1,   50,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void title_scr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        title_scr *_t = static_cast<title_scr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTime(); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_6_clicked(); break;
        case 3: _t->on_pushButton_11_clicked(); break;
        case 4: _t->on_pushButton_10_clicked(); break;
        case 5: _t->on_pushButton_8_clicked(); break;
        case 6: _t->on_pushButton_7_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject title_scr::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_title_scr.data,
      qt_meta_data_title_scr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *title_scr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *title_scr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_title_scr.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int title_scr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
