#include <QtGui>
#include "handle.h"
#include "klavishi.h"
#include "multichannel.h"

Multichannel::Multichannel(QWidget*parent)
:QWidget(parent)
{
}
void Klavishi ::multi_channel()
{
    QWidget * handle_widget = new QWidget;
    handle_widget->setFixedSize(480,230);
    handle_widget->setWindowTitle(tr("Cплошной контроль"));
    handle_widget->show();
}

