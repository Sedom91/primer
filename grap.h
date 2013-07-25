#ifndef GRAP_H
#define GRAP_H

#include <QWidget>
#include "qwt_plot.h"

class Grap : public QWidget {
Q_OBJECT
public :

    QwtPlot  grid;
Grap(QWidget*parent=0);
};
#endif // GRAP_H
