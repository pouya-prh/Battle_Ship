/****************************************************************************
** Meta object code from reading C++ file 'dialogclient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogclient.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogClientENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogClientENDCLASS = QtMocHelpers::stringData(
    "DialogClient",
    "ClientMoved",
    "",
    "CoordinatesRecievedFromServer",
    "ArrayRecievedFromServer",
    "int**",
    "onConnected",
    "send2DArrayToServer",
    "on_ConnectButton_clicked",
    "SetClientBoard"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogClientENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[30];
    char stringdata4[24];
    char stringdata5[6];
    char stringdata6[12];
    char stringdata7[20];
    char stringdata8[25];
    char stringdata9[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogClientENDCLASS_t qt_meta_stringdata_CLASSDialogClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "DialogClient"
        QT_MOC_LITERAL(13, 11),  // "ClientMoved"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 29),  // "CoordinatesRecievedFromServer"
        QT_MOC_LITERAL(56, 23),  // "ArrayRecievedFromServer"
        QT_MOC_LITERAL(80, 5),  // "int**"
        QT_MOC_LITERAL(86, 11),  // "onConnected"
        QT_MOC_LITERAL(98, 19),  // "send2DArrayToServer"
        QT_MOC_LITERAL(118, 24),  // "on_ConnectButton_clicked"
        QT_MOC_LITERAL(143, 14)   // "SetClientBoard"
    },
    "DialogClient",
    "ClientMoved",
    "",
    "CoordinatesRecievedFromServer",
    "ArrayRecievedFromServer",
    "int**",
    "onConnected",
    "send2DArrayToServer",
    "on_ConnectButton_clicked",
    "SetClientBoard"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    2,   57,    2, 0x06,    2 /* Public */,
       4,    1,   62,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   65,    2, 0x08,    7 /* Private */,
       7,    3,   66,    2, 0x08,    8 /* Private */,
       8,    0,   73,    2, 0x08,   12 /* Private */,
       9,    1,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogClient, std::true_type>,
        // method 'ClientMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CoordinatesRecievedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ArrayRecievedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int * *, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send2DArrayToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int * *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ConnectButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetClientBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int * *, std::false_type>
    >,
    nullptr
} };

void DialogClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ClientMoved(); break;
        case 1: _t->CoordinatesRecievedFromServer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->ArrayRecievedFromServer((*reinterpret_cast< std::add_pointer_t<int**>>(_a[1]))); break;
        case 3: _t->onConnected(); break;
        case 4: _t->send2DArrayToServer((*reinterpret_cast< std::add_pointer_t<int**>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->on_ConnectButton_clicked(); break;
        case 6: _t->SetClientBoard((*reinterpret_cast< std::add_pointer_t<int**>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogClient::*)();
            if (_t _q_method = &DialogClient::ClientMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogClient::*)(int , int );
            if (_t _q_method = &DialogClient::CoordinatesRecievedFromServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DialogClient::*)(int * * );
            if (_t _q_method = &DialogClient::ArrayRecievedFromServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *DialogClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DialogClient::ClientMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogClient::CoordinatesRecievedFromServer(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DialogClient::ArrayRecievedFromServer(int * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
