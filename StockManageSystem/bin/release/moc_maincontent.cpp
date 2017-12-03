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
    QByteArrayData data[15];
    char stringdata0[261];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainContent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainContent_t qt_meta_stringdata_MainContent = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MainContent"
QT_MOC_LITERAL(1, 12, 15), // "sendLoginStatus"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "sendNetStatus"
QT_MOC_LITERAL(4, 43, 12), // "sendLoginOut"
QT_MOC_LITERAL(5, 56, 11), // "closeNowTab"
QT_MOC_LITERAL(6, 68, 5), // "index"
QT_MOC_LITERAL(7, 74, 31), // "on_treeWidgetMenu_doubleClicked"
QT_MOC_LITERAL(8, 106, 24), // "on_actionLogin_triggered"
QT_MOC_LITERAL(9, 131, 27), // "on_actionRegister_triggered"
QT_MOC_LITERAL(10, 159, 23), // "on_actionChat_triggered"
QT_MOC_LITERAL(11, 183, 27), // "on_actionFogetPwd_triggered"
QT_MOC_LITERAL(12, 211, 16), // "receiveNetStatus"
QT_MOC_LITERAL(13, 228, 4), // "type"
QT_MOC_LITERAL(14, 233, 27) // "on_actionOutLogin_triggered"

    },
    "MainContent\0sendLoginStatus\0\0sendNetStatus\0"
    "sendLoginOut\0closeNowTab\0index\0"
    "on_treeWidgetMenu_doubleClicked\0"
    "on_actionLogin_triggered\0"
    "on_actionRegister_triggered\0"
    "on_actionChat_triggered\0"
    "on_actionFogetPwd_triggered\0"
    "receiveNetStatus\0type\0on_actionOutLogin_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainContent[] = {

 // content:
       7,       // revision
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
       3,    1,   72,    2, 0x06 /* Public */,
       4,    0,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    1,   86,    2, 0x08 /* Private */,
      14,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QModelIndex,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void MainContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainContent *_t = static_cast<MainContent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLoginStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendNetStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendLoginOut(); break;
        case 3: _t->closeNowTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_treeWidgetMenu_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_actionLogin_triggered(); break;
        case 6: _t->on_actionRegister_triggered(); break;
        case 7: _t->on_actionChat_triggered(); break;
        case 8: _t->on_actionFogetPwd_triggered(); break;
        case 9: _t->receiveNetStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_actionOutLogin_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainContent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainContent::sendLoginStatus)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainContent::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainContent::sendNetStatus)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainContent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainContent::sendLoginOut)) {
                *result = 2;
                return;
            }
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
void MainContent::sendLoginStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainContent::sendNetStatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainContent::sendLoginOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
