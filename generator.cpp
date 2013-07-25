#include<QtGui>
#include<QSpinBox>
#include"generator.h"

Generator::Generator(QWidget*parent)
:QWidget(parent)
{

  setWindowTitle(tr("Генератор"));
  setFixedSize(480,230);
  //setLayout(layout_generator);
}
