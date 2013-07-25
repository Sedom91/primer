/****************************************************************************
** Meta object code from reading C++ file 'singlechannel.h'
**
** Created: Tue 23. Jul 17:04:18 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../singlechannel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'singlechannel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Singlechannel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x0a,
      27,   14,   14,   14, 0x0a,
      38,   14,   14,   14, 0x0a,
      44,   14,   14,   14, 0x0a,
      53,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,
      77,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Singlechannel[] = {
    "Singlechannel\0\0generator()\0priemnik()\0"
    "pep()\0object()\0nastroika()\0programma()\0"
    "showPosts()\0"
};

void Singlechannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Singlechannel *_t = static_cast<Singlechannel *>(_o);
        switch (_id) {
        case 0: _t->generator(); break;
        case 1: _t->priemnik(); break;
        case 2: _t->pep(); break;
        case 3: _t->object(); break;
        case 4: _t->nastroika(); break;
        case 5: _t->programma(); break;
        case 6: _t->showPosts(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Singlechannel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Singlechannel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Singlechannel,
      qt_meta_data_Singlechannel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Singlechannel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Singlechannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Singlechannel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Singlechannel))
        return static_cast<void*>(const_cast< Singlechannel*>(this));
    return QWidget::qt_metacast(_clname);
}

int Singlechannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
