/****************************************************************************
** Meta object code from reading C++ file 'QMcCad_VGParamDialog.h'
**
** Created: Fri Jun 29 14:21:52 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../inc/QMcCad_VGParamDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMcCad_VGParamDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMcCad_VGParamDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      36,   21,   21,   21, 0x0a,
      58,   49,   21,   21, 0x0a,
      82,   49,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QMcCad_VGParamDialog[] = {
    "QMcCad_VGParamDialog\0\0CanContinue()\0"
    "IsAccepted()\0theState\0SlotMMStateChanged(int)\0"
    "SlotCMStateChanged(int)\0"
};

const QMetaObject QMcCad_VGParamDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QMcCad_VGParamDialog,
      qt_meta_data_QMcCad_VGParamDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMcCad_VGParamDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMcCad_VGParamDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMcCad_VGParamDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMcCad_VGParamDialog))
        return static_cast<void*>(const_cast< QMcCad_VGParamDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QMcCad_VGParamDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CanContinue(); break;
        case 1: IsAccepted(); break;
        case 2: SlotMMStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: SlotCMStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QMcCad_VGParamDialog::CanContinue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
