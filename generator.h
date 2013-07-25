#ifndef GENERATOR_H
#define GENERATOR_H

#include <QWidget>
#include <QComboBox>


class Generator : public QWidget {
Q_OBJECT
public :

    QComboBox * box_4;
    QComboBox * box_5;
    QComboBox * box_6;
    QComboBox * box_7;

Generator(QWidget*parent=0);
};

#endif // GENERATOR_H
