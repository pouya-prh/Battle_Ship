/****************************************************************************
** Meta object code from reading C++ file 'dialogserver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogserver.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogserver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDialogServerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDialogServerENDCLASS = QtMocHelpers::stringData(
    "DialogServer",
    "coordinatesReceivedFromServer",
    "",
    "cellClicked",
    "row",
    "column",
    "ServerMoved",
    "onNewConnection",
    "sendCoordinatesToClient",
    "send2DArrayToClient",
    "int**",
    "SetServerBoard",
    "readClientData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogServerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[4];
    char stringdata5[7];
    char stringdata6[12];
    char stringdata7[16];
    char stringdata8[24];
    char stringdata9[20];
    char stringdata10[6];
    char stringdata11[15];
    char stringdata12[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogServerENDCLASS_t qt_meta_stringdata_CLASSDialogServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "DialogServer"
        QT_MOC_LITERAL(13, 29),  // "coordinatesReceivedFromServer"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 11),  // "cellClicked"
        QT_MOC_LITERAL(56, 3),  // "row"
        QT_MOC_LITERAL(60, 6),  // "column"
        QT_MOC_LITERAL(67, 11),  // "ServerMoved"
        QT_MOC_LITERAL(79, 15),  // "onNewConnection"
        QT_MOC_LITERAL(95, 23),  // "sendCoordinatesToClient"
        QT_MOC_LITERAL(119, 19),  // "send2DArrayToClient"
        QT_MOC_LITERAL(139, 5),  // "int**"
        QT_MOC_LITERAL(145, 14),  // "SetServerBoard"
        QT_MOC_LITERAL(160, 14)   // "readClientData"
    },
    "DialogServer",
    "coordinatesReceivedFromServer",
    "",
    "cellClicked",
    "row",
    "column",
    "ServerMoved",
    "onNewConnection",
    "sendCoordinatesToClient",
    "send2DArrayToClient",
    "int**",
    "SetServerBoard",
    "readClientData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       3,    2,   67,    2, 0x06,    4 /* Public */,
       6,    0,   72,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   73,    2, 0x08,    8 /* Private */,
       8,    2,   74,    2, 0x08,    9 /* Private */,
       9,    3,   79,    2, 0x08,   12 /* Private */,
      11,    1,   86,    2, 0x08,   16 /* Private */,
      12,    0,   89,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogServer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogServer, std::true_type>,
        // method 'coordinatesReceivedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cellClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ServerMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendCoordinatesToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'send2DArrayToClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int * *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetServerBoard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int * *, std::false_type>,
        // method 'readClientData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DialogServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogServer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->coordinatesReceivedFromServer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->cellClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->ServerMoved(); break;
        case 3: _t->onNewConnection(); break;
        case 4: _t->sendCoordinatesToClient((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->send2DArrayToClient((*reinterpret_cast< std::add_pointer_t<int**>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->SetServerBoard((*reinterpret_cast< std::add_pointer_t<int**>>(_a[1]))); break;
        case 7: _t->readClientData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogServer::*)(int , int );
            if (_t _q_method = &DialogServer::coordinatesReceivedFromServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogServer::*)(int , int );
            if (_t _q_method = &DialogServer::cellClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DialogServer::*)();
            if (_t _q_method = &DialogServer::ServerMoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *DialogServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void DialogServer::coordinatesReceivedFromServer(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DialogServer::cellClicked(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DialogServer::ServerMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
