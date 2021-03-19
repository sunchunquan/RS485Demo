/****************************************************************************
** Meta object code from reading C++ file 'RS485.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "RS485.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RS485.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RS485_t {
    QByteArrayData data[7];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RS485_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RS485_t qt_meta_stringdata_RS485 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "RS485"
QT_MOC_LITERAL(1, 6, 18), // "McModbusRTUMessage"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 3), // "mID"
QT_MOC_LITERAL(4, 30, 9), // "mFunction"
QT_MOC_LITERAL(5, 40, 4), // "Data"
QT_MOC_LITERAL(6, 45, 9) // "Read_Data"

    },
    "RS485\0McModbusRTUMessage\0\0mID\0mFunction\0"
    "Data\0Read_Data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RS485[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar, QMetaType::Int, QMetaType::QByteArray,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RS485::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RS485 *_t = static_cast<RS485 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->McModbusRTUMessage((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3]))); break;
        case 1: _t->Read_Data(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RS485::*_t)(unsigned char , int , QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RS485::McModbusRTUMessage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject RS485::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RS485.data,
      qt_meta_data_RS485,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RS485::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RS485::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RS485.stringdata0))
        return static_cast<void*>(const_cast< RS485*>(this));
    return QObject::qt_metacast(_clname);
}

int RS485::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void RS485::McModbusRTUMessage(unsigned char _t1, int _t2, QByteArray _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
