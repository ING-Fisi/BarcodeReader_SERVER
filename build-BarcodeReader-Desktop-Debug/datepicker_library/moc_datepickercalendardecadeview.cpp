/****************************************************************************
** Meta object code from reading C++ file 'datepickercalendardecadeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BarcodeReader/datepicker_library/source/include/datepickercalendardecadeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datepickercalendardecadeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatePickerCalendarDecadeView_t {
    QByteArrayData data[11];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatePickerCalendarDecadeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatePickerCalendarDecadeView_t qt_meta_stringdata_DatePickerCalendarDecadeView = {
    {
QT_MOC_LITERAL(0, 0, 28), // "DatePickerCalendarDecadeView"
QT_MOC_LITERAL(1, 29, 11), // "yearClicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 4), // "year"
QT_MOC_LITERAL(4, 47, 7), // "setDate"
QT_MOC_LITERAL(5, 55, 4), // "date"
QT_MOC_LITERAL(6, 60, 14), // "setMinimumDate"
QT_MOC_LITERAL(7, 75, 14), // "setMaximumDate"
QT_MOC_LITERAL(8, 90, 13), // "onCellClicked"
QT_MOC_LITERAL(9, 104, 3), // "row"
QT_MOC_LITERAL(10, 108, 6) // "column"

    },
    "DatePickerCalendarDecadeView\0yearClicked\0"
    "\0year\0setDate\0date\0setMinimumDate\0"
    "setMaximumDate\0onCellClicked\0row\0"
    "column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatePickerCalendarDecadeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       7,    1,   48,    2, 0x0a /* Public */,
       8,    2,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void DatePickerCalendarDecadeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatePickerCalendarDecadeView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->yearClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->setMinimumDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->setMaximumDate((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 4: _t->onCellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DatePickerCalendarDecadeView::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DatePickerCalendarDecadeView::yearClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatePickerCalendarDecadeView::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_DatePickerCalendarDecadeView.data,
    qt_meta_data_DatePickerCalendarDecadeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatePickerCalendarDecadeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatePickerCalendarDecadeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatePickerCalendarDecadeView.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int DatePickerCalendarDecadeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
void DatePickerCalendarDecadeView::yearClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
