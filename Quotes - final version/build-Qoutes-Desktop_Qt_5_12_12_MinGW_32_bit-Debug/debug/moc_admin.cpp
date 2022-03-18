/****************************************************************************
** Meta object code from reading C++ file 'admin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Qoutes/admin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Admin_t {
    QByteArrayData data[15];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Admin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Admin_t qt_meta_stringdata_Admin = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Admin"
QT_MOC_LITERAL(1, 6, 26), // "on_Admin_DeleteBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 21), // "on_Admin_Load_clicked"
QT_MOC_LITERAL(4, 56, 26), // "on_Admin_SearchBtn_clicked"
QT_MOC_LITERAL(5, 83, 24), // "on_Admin_add_btn_clicked"
QT_MOC_LITERAL(6, 108, 24), // "on_Admin_HomeBtn_clicked"
QT_MOC_LITERAL(7, 133, 25), // "on_Admin_AboutBtn_clicked"
QT_MOC_LITERAL(8, 159, 30), // "on_Admin_ConfirmDltBtn_clicked"
QT_MOC_LITERAL(9, 190, 26), // "on_Admin_CancelBtn_clicked"
QT_MOC_LITERAL(10, 217, 30), // "on_Admin_ConfirmAddBtn_clicked"
QT_MOC_LITERAL(11, 248, 32), // "on_Admin_ConfirmAddBtn_2_clicked"
QT_MOC_LITERAL(12, 281, 24), // "on_Admin_EditBtn_clicked"
QT_MOC_LITERAL(13, 306, 24), // "on_Admin_FindBtn_clicked"
QT_MOC_LITERAL(14, 331, 31) // "on_Admin_ConfirmEditBtn_clicked"

    },
    "Admin\0on_Admin_DeleteBtn_clicked\0\0"
    "on_Admin_Load_clicked\0on_Admin_SearchBtn_clicked\0"
    "on_Admin_add_btn_clicked\0"
    "on_Admin_HomeBtn_clicked\0"
    "on_Admin_AboutBtn_clicked\0"
    "on_Admin_ConfirmDltBtn_clicked\0"
    "on_Admin_CancelBtn_clicked\0"
    "on_Admin_ConfirmAddBtn_clicked\0"
    "on_Admin_ConfirmAddBtn_2_clicked\0"
    "on_Admin_EditBtn_clicked\0"
    "on_Admin_FindBtn_clicked\0"
    "on_Admin_ConfirmEditBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Admin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,

       0        // eod
};

void Admin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Admin *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Admin_DeleteBtn_clicked(); break;
        case 1: _t->on_Admin_Load_clicked(); break;
        case 2: _t->on_Admin_SearchBtn_clicked(); break;
        case 3: _t->on_Admin_add_btn_clicked(); break;
        case 4: _t->on_Admin_HomeBtn_clicked(); break;
        case 5: _t->on_Admin_AboutBtn_clicked(); break;
        case 6: _t->on_Admin_ConfirmDltBtn_clicked(); break;
        case 7: _t->on_Admin_CancelBtn_clicked(); break;
        case 8: _t->on_Admin_ConfirmAddBtn_clicked(); break;

        case 10: _t->on_Admin_EditBtn_clicked(); break;
        case 11: _t->on_Admin_FindBtn_clicked(); break;
        case 12: _t->on_Admin_ConfirmEditBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Admin::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Admin.data,
    qt_meta_data_Admin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Admin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Admin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Admin.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Admin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
