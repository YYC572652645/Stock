/****************************************************************************
** Meta object code from reading C++ file 'maincontent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../maincontent/maincontent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincontent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainContent_t {
    QByteArrayData data[8];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainContent_t qt_meta_stringdata_MainContent = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainContent"
QT_MOC_LITERAL(1, 12, 11), // "closeNowTab"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 5), // "index"
QT_MOC_LITERAL(4, 31, 31), // "on_treeWidgetMenu_doubleClicked"
QT_MOC_LITERAL(5, 63, 24), // "on_actionLogin_triggered"
QT_MOC_LITERAL(6, 88, 27), // "on_actionRegister_triggered"
QT_MOC_LITERAL(7, 116, 23) // "on_actionChat_triggered"

    },
    "MainContent\0closeNowTab\0\0index\0"
    "on_treeWidgetMenu_doubleClicked\0"
    "on_actionLogin_triggered\0"
    "on_actionRegister_triggered\0"
    "on_actionChat_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainContent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainContent *_t = static_cast<MainContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeNowTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_treeWidgetMenu_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_actionLogin_triggered(); break;
        case 3: _t->on_actionRegister_triggered(); break;
        case 4: _t->on_actionChat_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainContent::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainContent.data,
      qt_meta_data_MainContent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainContent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainContent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainContent.stringdata0))
        return static_cast<void*>(const_cast< MainContent*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainContent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
