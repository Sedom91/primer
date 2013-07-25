#ifndef DATA_H
#define DATA_H

#include "qwt_plot.h"


class Data : public QwtPlot
{
    Q_OBJECT

public:
    Data(QWidget* = NULL);
};
#endif // DATA_H
