#include"klavishi.h"
#include"singlechannel.h"
#include<QWidget>
#include<QPalette>
#include <QPixmap>
#include <QtGui>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QMenu>
#include <QPushButton>
#include "handle.h"
#include "multichannel.h"
#include <QDateTimeEdit>
#include <QTranslator>

Klavishi::Klavishi(QWidget*parent)
:QWidget(parent)
{

setWindowTitle("RDM-11");// выбираем название окна
setFixedSize(490,240); // устанавливаем размер окна
//setStyleSheet(AlignHCenter);
//setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
setAutoFillBackground(true);

akkum = new QProgressBar;
akkum->setFixedSize(60,15);
akkum->setValue(24);

label = new QLabel("11:16 23.05.2013");

picture.load(":/im/image1.jpg");

picture_multichannel.load(":/im/imag.jpg");
picture_singlechannel.load(":/im/ima.jpg");


handle =new QPushButton(tr("Настройки"));// делаем кнопку для калибровки
handle->setIcon(picture);
handle->setIconSize(picture.size());
translator =new QTranslator;

multichannel = new QPushButton(tr("Сплошной режим")); // делаем кнопку для многоканального
multichannel->setIcon(picture_multichannel);
multichannel->setIconSize(picture_multichannel.size());

singlechannel = new QPushButton(tr("Одноканальный")); // делаем кнопку для
singlechannel->setIcon(picture_singlechannel);
singlechannel->setIconSize(picture_singlechannel.size());

frame_handle = new QFrame;
frame_multichannel = new QFrame;
frame_singlechannel = new QFrame;
frame_akkum =new QFrame;

connect(handle,SIGNAL(clicked()),SLOT(handle_channel()));
connect(multichannel,SIGNAL(clicked()),SLOT(multi_channel()));
connect(singlechannel,SIGNAL(clicked()),SLOT(single_channel()));
//pal_1.setBrush(QPalette::Background,Qt::white);

//frame_handle->setPalette(pal_1);
frame_handle->setAutoFillBackground(true);
frame_handle->setFixedSize(170,120);
frame_handle->setLayout(new QVBoxLayout());
frame_handle->layout()->addWidget(handle);
//frame_handle->layout()->addWidget(label);


frame_akkum->setAutoFillBackground(true);
frame_akkum->setFixedSize(150,40);
frame_akkum->setLayout(new QHBoxLayout());
frame_akkum->layout()->addWidget(akkum);
frame_akkum->layout()->addWidget(label);

//frame_multichannel->setPalette(pal_1);
frame_multichannel->setAutoFillBackground(true);
frame_multichannel->setFixedSize(250,120);
frame_multichannel->setLayout(new QVBoxLayout());
frame_multichannel->layout()->addWidget(multichannel);

//frame_singlechannel->setPalette(pal_1);
frame_singlechannel->setAutoFillBackground(true);
frame_singlechannel->setLayout(new QVBoxLayout());
frame_singlechannel->setFixedSize(190,120);
frame_singlechannel->layout()->addWidget(singlechannel);

translator =new QTranslator;
QVBoxLayout * mainLayout  = new QVBoxLayout;
mainLayout->setMargin(0);
mainLayout->setSpacing(0);
mainLayout->addSpacing(-50);

QHBoxLayout * phbxLayout = new QHBoxLayout;
phbxLayout->setMargin(0);
phbxLayout->addSpacing(0);

QHBoxLayout * layout_handle=new QHBoxLayout;
layout_handle->addWidget(frame_handle);
layout_handle->setAlignment(Qt::AlignLeft);



QHBoxLayout * layout_multichannel=new QHBoxLayout;
layout_multichannel->addWidget(frame_multichannel);
layout_multichannel->setAlignment(Qt::AlignCenter);
//layout_multichannel->addStretch(0);


QHBoxLayout *layout_singlechannel=new QHBoxLayout;
layout_singlechannel->addWidget(frame_singlechannel);
layout_singlechannel->setAlignment(Qt::AlignRight);



QHBoxLayout * layout_akkum = new QHBoxLayout;
layout_akkum->addWidget(frame_akkum);
layout_akkum->setAlignment(Qt::AlignRight);

phbxLayout->addLayout(layout_handle);
phbxLayout->addLayout(layout_multichannel);
phbxLayout->addLayout(layout_singlechannel);
mainLayout->addLayout(layout_akkum);
mainLayout->addLayout(phbxLayout);
setLayout(mainLayout);
}

void Klavishi ::handle_channel()
{
//QPalette pal_2;

Handle * hand = new Handle;
picrus.load(":/im/im1.jpg");
piceng.load(":/im/flag_en.jpg");

button_eng = new QPushButton;//(tr("Английский"));
button_eng->setIcon(picrus);
button_eng->setIconSize(picrus.size());

button_rus = new QPushButton;//(tr("Русский"));
button_rus->setIcon(piceng);
button_rus->setIconSize(piceng.size());

frame_language = new QFrame;
frame_language_1 =new QFrame;
frame_language->setAutoFillBackground(true);
frame_language_1->setAutoFillBackground(true);
frame_language->setLayout(new QHBoxLayout());
frame_language_1->setLayout(new QHBoxLayout());
frame_language->setFixedSize(60,45);
frame_language_1->setFixedSize(60,45);
frame_language->layout()->addWidget(button_eng);
frame_language_1->layout()->addWidget(button_rus);


QVBoxLayout * primerLayout = new QVBoxLayout;
primerLayout->setMargin(0);
primerLayout->setSpacing(0);
primerLayout->addSpacing(-200);

QHBoxLayout *layout_language = new QHBoxLayout;
layout_language->setMargin(0);
layout_language->setSpacing(0);

QHBoxLayout  * language =new QHBoxLayout;
language->addWidget(frame_language);
language->addWidget(frame_language_1);
language->setAlignment(Qt::AlignLeft);

layout_language->addLayout(language);
primerLayout->addLayout(layout_language);
hand->setLayout(primerLayout);

connect(button_rus,SIGNAL(clicked()),SLOT(changeLanguageEng()));
connect(button_eng,SIGNAL(clicked()),SLOT (changeLanguageRus()));
hand->show();
}
void Klavishi::changeLanguageEng(){
   // qDebug()<<"TEST";
     translator->load(":/im/klavishi_en.qm");
     qApp->installTranslator(translator);
}

void Klavishi::changeLanguageRus(){
     translator->load(":/im/klavishi_en.qm");
     qApp->removeTranslator(translator);
   //  qDebug()<<"Test";
}

void Klavishi :: changeEvent(QEvent * event){
    if (event->type()==QEvent::LanguageChange){
       // button->setText(tr("English"));
        handle->setText(tr("Настройки"));
        multichannel->setText(tr("Сплошной режим"));
        singlechannel->setText(tr("Одноканальный"));
    }
}

void Klavishi ::single_channel()
{
   // qDebug()<<"test1";

    Singlechannel * ruchnik = new Singlechannel;
    ruchnik->show();
}
