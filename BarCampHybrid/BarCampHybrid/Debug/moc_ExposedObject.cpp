/****************************************************************************
** Meta object code from reading C++ file 'ExposedObject.h'
**
** Created: Fri Oct 19 21:03:17 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ExposedObject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExposedObject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ExposedObject[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   15,   14,   14, 0x06,

 // methods: signature, parameters, type, tag, flags
      55,   47,   39,   14, 0x02,
      86,   82,   14,   14, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_ExposedObject[] = {
    "ExposedObject\0\0value\0ValueChanged(int)\0"
    "QString\0varName\0GetSystemVariable(QString)\0"
    "val\0ChangeValue(int)\0"
};

void ExposedObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ExposedObject *_t = static_cast<ExposedObject *>(_o);
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { QString _r = _t->GetSystemVariable((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->ChangeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ExposedObject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ExposedObject::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ExposedObject,
      qt_meta_data_ExposedObject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ExposedObject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ExposedObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ExposedObject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ExposedObject))
        return static_cast<void*>(const_cast< ExposedObject*>(this));
    return QObject::qt_metacast(_clname);
}

int ExposedObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ExposedObject::ValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
