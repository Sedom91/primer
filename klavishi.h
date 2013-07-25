#ifndef KLAVISHI_H
#define KLAVISHI_H
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
#include<QVBoxLayout>
#include<QDateTime>
#include <QLabel>
#include "handle.h"
#include <QTranslator>




class QProgressBar;
class Klavishi : public QWidget {
Q_OBJECT
public :
Klavishi(QWidget*parent=0);
QTranslator * translator;
QPushButton *  multichannel;
QPushButton *  handle;
QPushButton *  singlechannel;
QPushButton * button_rus;
QPushButton * button_eng;
QDoubleSpinBox *spinBox;    // вставляем 1-ый счетчик
QDoubleSpinBox *spinBox_1;  // вставляем 2-ый счетчик
QDoubleSpinBox *spinBox_2;  // вставляем 3-ий счетчик
QDoubleSpinBox *spinBox_3;  // вставляем 4-ый счетчик
QDoubleSpinBox *spinBox_4;  // вставляем 5-ый счетчик
QSpinBox * spin_channel ; // вставляем счетчик каналов
QSpinBox * db_spinBox;
QProgressBar * akkum;
QLabel * label;

//void keyPressEvent(QKeyEvent*);
//void retranslateUi();
void changeEvent(QEvent *event);
void setFocus ();
 QFrame   * frame;
 QFrame * frame_1;
 QFrame * frame_2;
 QFrame * frame_3;
 QFrame * frame_4;
 //QFrame * frame_5;
 QFrame * frame_menu;
 QFrame * frame_handle;
 QFrame * frame_multichannel;
 QFrame * frame_singlechannel;
 QFrame * frame_akkum;
 QFrame * frame_language;
 QFrame * frame_language_1;
 //QPushButton * button_rus;
 //QPushButton * button_eng;
 //QFrame * frame_dateTime;
// QHBoxLayout * mainLayout;
// QVBoxLayout * phbxLayout;
 QPalette pal_2,pal_3, pal_1, pal;
 QPixmap  pix, pix_1,picture,picture_multichannel,picture_singlechannel,piceng,picrus;
 QWidget  wgt ;
 //QMenu *menu;
 //QMenuBar * menuBar;
 //void switchLanguage (int n);
public slots :
void handle_channel();
void multi_channel();
void single_channel();
 void changeLanguageEng();
 void changeLanguageRus();
};

#endif // KLAVISHI_H
