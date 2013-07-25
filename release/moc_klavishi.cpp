/****************************************************************************
** Meta object code from reading C++ file 'klavishi.h'
**
** Created: Tue 23. Jul 17:04:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../klavishi.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'klavishi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Klavishi[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      27,    9,    9,    9, 0x0a,
      43,    9,    9,    9, 0x0a,
      60,    9,    9,    9, 0x0a,
      80,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Klavishi[] = {
    "Klavishi\0\0handle_channel()\0multi_channel()\0"
    "single_channel()\0changeLanguageEng()\0"
    "changeLanguageRus()\0"
};

void Klavishi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Klavishi *_t = static_cast<Klavishi *>(_o);
        switch (_id) {
        case 0: _t->handle_channel(); break;
        case 1: _t->multi_channel(); break;
        case 2: _t->single_channel(); break;
        case 3: _t->changeLanguageEng(); break;
        case 4: _t->changeLanguageRus(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Klavishi::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Klavishi::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Klavishi,
      qt_meta_data_Klavishi, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Klavishi::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Klavishi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Klavishi::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Klavishi))
        return static_cast<void*>(const_cast< Klavishi*>(this));
    return QWidget::qt_metacast(_clname);
}

int Klavishi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
