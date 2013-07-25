#ifndef SINGLECHANNEL_H
#define SINGLECHANNEL_H
#include <QWidget>
#include <QFrame>
#include <QPalette>
#include <QPixmap>
#include <QMenu>
#include <QDoubleSpinBox>
#include <QSpinBox>
#include <QMenuBar>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QLineEdit>


class Singlechannel : public QWidget {
Q_OBJECT
public :
    QFrame * frame ;
    QFrame * frame_1;
    QFrame * frame_2;
    QFrame * frame_3;

    QFrame * frame_4;
    QFrame * frame_5;

    QMenu * menu;
    QMenuBar * menubar;



    QSpinBox * spinBox;
    QSpinBox * spinBox_1;
    QSpinBox * spinBox_2;
    QSpinBox * spinBox_3;

     QComboBox  *box;
     QComboBox * box_1;
     QComboBox * box_2;
     QComboBox * box_3;



    QLabel * label;
    QLabel * label_1;
    QLabel * label_2;
    QLabel * label_3;

QPixmap pix ,pix_1;
QPalette pal,pal_1,pal_2,pal_3;

QWidget * wgt;
QWidget * pr;
void keyPressEvent(QKeyEvent *);
//void setCanvasColor(const QColor &);
Singlechannel(QWidget*parent=0);
public slots :
void generator();
void priemnik();
void pep ();
void object();
void nastroika();
void programma();

void showPosts();
};
#endif // SINGLECHANNEL_H
