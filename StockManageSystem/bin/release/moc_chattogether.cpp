/****************************************************************************
** Meta object code from reading C++ file 'chattogether.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../groupchat/chattogether/chattogether.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chattogether.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChatTogether_t {
    QByteArrayData data[11];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatTogether_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatTogether_t qt_meta_stringdata_ChatTogether = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ChatTogether"
QT_MOC_LITERAL(1, 13, 13), // "sendNetStatus"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "on_pushButtonColor_clicked"
QT_MOC_LITERAL(4, 55, 35), // "on_comboBoxSize_currentIndexC..."
QT_MOC_LITERAL(5, 91, 4), // "arg1"
QT_MOC_LITERAL(6, 96, 39), // "on_fontComboBoxFont_currentIn..."
QT_MOC_LITERAL(7, 136, 25), // "on_pushButtonSend_clicked"
QT_MOC_LITERAL(8, 162, 11), // "updateTimer"
QT_MOC_LITERAL(9, 174, 28), // "on_pushButtonChatLog_clicked"
QT_MOC_LITERAL(10, 203, 27) // "on_pushButtonManage_clicked"

    },
    "ChatTogether\0sendNetStatus\0\0"
    "on_pushButtonColor_clicked\0"
    "on_comboBoxSize_currentIndexChanged\0"
    "arg1\0on_fontComboBoxFont_currentIndexChanged\0"
    "on_pushButtonSend_clicked\0updateTimer\0"
    "on_pushButtonChatLog_clicked\0"
    "on_pushButtonManage_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatTogether[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x08 /* Private */,
       4,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChatTogether::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChatTogether *_t = static_cast<ChatTogether *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNetStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonColor_clicked(); break;
        case 2: _t->on_comboBoxSize_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_fontComboBoxFont_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonSend_clicked(); break;
        case 5: _t->updateTimer(); break;
        case 6: _t->on_pushButtonChatLog_clicked(); break;
        case 7: _t->on_pushButtonManage_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChatTogether::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChatTogether::sendNetStatus)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChatTogether::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChatTogether.data,
      qt_meta_data_ChatTogether,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChatTogether::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatTogether::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChatTogether.stringdata0))
        return static_cast<void*>(const_cast< ChatTogether*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChatTogether::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChatTogether::sendNetStatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
