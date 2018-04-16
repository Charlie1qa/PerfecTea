/****************************************************************************
** Meta object code from reading C++ file 'title_scr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "title_scr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'title_scr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_title_scr_t {
    QByteArrayData data[21];
    char stringdata0[378];
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
QT_MOC_LITERAL(3, 20, 9), // "updateBar"
QT_MOC_LITERAL(4, 30, 9), // "checkTemp"
QT_MOC_LITERAL(5, 40, 12), // "operateMotor"
QT_MOC_LITERAL(6, 53, 15), // "mousePressEvent"
QT_MOC_LITERAL(7, 69, 12), // "QMouseEvent*"
QT_MOC_LITERAL(8, 82, 5), // "event"
QT_MOC_LITERAL(9, 88, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(10, 112, 24), // "on_pushButton_11_clicked"
QT_MOC_LITERAL(11, 137, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(12, 162, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(13, 186, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(14, 210, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 232, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(16, 257, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(17, 281, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(18, 305, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(19, 329, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(20, 353, 24) // "on_pushButton_13_clicked"

    },
    "title_scr\0showTime\0\0updateBar\0checkTemp\0"
    "operateMotor\0mousePressEvent\0QMouseEvent*\0"
    "event\0on_pushButton_6_clicked\0"
    "on_pushButton_11_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_clicked\0on_pushButton_12_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_13_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_title_scr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    1,  103,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,
      19,    0,  116,    2, 0x08 /* Private */,
      20,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
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

       0        // eod
};

void title_scr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        title_scr *_t = static_cast<title_scr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showTime(); break;
        case 1: _t->updateBar(); break;
        case 2: { double _r = _t->checkTemp();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 3: _t->operateMotor(); break;
        case 4: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_6_clicked(); break;
        case 6: _t->on_pushButton_11_clicked(); break;
        case 7: _t->on_pushButton_10_clicked(); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 9: _t->on_pushButton_7_clicked(); break;
        case 10: _t->on_pushButton_clicked(); break;
        case 11: _t->on_pushButton_12_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        case 13: _t->on_pushButton_3_clicked(); break;
        case 14: _t->on_pushButton_4_clicked(); break;
        case 15: _t->on_pushButton_5_clicked(); break;
        case 16: _t->on_pushButton_13_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject title_scr::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_title_scr.data,
      qt_meta_data_title_scr,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *title_scr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *title_scr::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_title_scr.stringdata0))
        return static_cast<void*>(const_cast< title_scr*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int title_scr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
