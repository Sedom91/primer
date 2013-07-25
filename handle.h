#ifndef HANDLE_H
#define HANDLE_H
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
#include <QTranslator>

class Handle : public QWidget {
Q_OBJECT
public :
Handle(QWidget*parent=0);
//Handle * hand;
//QFrame *frame_language;
//QFrame *frame_language_1;

//QTranslator * translator;
QPushButton *label_2;
//QPushButton *  handle;
//QPushButton *multichannel;
//QPushButton * singlechannel;
QPixmap picrus,piceng;
//void changeEvent(QEvent *event);
public slots :
//void changeLanguageRus();
//void changeLanguageEng();

};
#endif // HANDLE_H
