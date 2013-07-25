#include <QtGui>
#include <QMenuBar>
#include"handle.h"
#include "klavishi.h"

Handle::Handle(QWidget*parent)
:QWidget(parent)
{
  setWindowTitle(tr("Настройки"));
  setFixedSize(480,230);

}



