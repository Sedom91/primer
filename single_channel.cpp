#include <QtGui>
#include "handle.h"
#include "klavishi.h"
#include "multichannel.h"
#include "singlechannel.h"
#include "generator.h"
#include <QGraphicsView>
Singlechannel::Singlechannel(QWidget*parent)
:QWidget(parent)
{
    setWindowTitle(tr("Ручник"));
    setFixedSize(480,230);

    pix.load(":/im/image.jpg");
    pix_1.load(":/im/passivebutton.jpg");
    pal.setBrush(QPalette::Background,QBrush(pix));
    pal_1.setBrush(QPalette::Background,QBrush(pix_1));

    QGraphicsView * view = new QGraphicsView;
    view->setFixedSize(420,230);
    pal_2.setBrush(view->backgroundRole(),Qt::black);
    view->setPalette(pal_2);

    QGraphicsScene* scene = new QGraphicsScene;
    view->setScene(scene);
 //   scene->setPalette(pal_2);

    // Add the vertical lines first, paint them red
    for (int x=0; x<=500; x+=50)
        scene->addLine(x,0,x,500, QPen(Qt::white));

    // Now add the horizontal lines, paint them green
    for (int y=0; y<=500; y+=50)
        scene->addLine(0,y,500,y, QPen(Qt::white));

    // Fit the view in the scene's bounding rect
  //   view->fitInView(scene->itemsVBoundingRect());

    label =new QLabel   (tr("Режим"));
    label_1 = new QLabel(tr("Инверсия"));
    label_2 = new QLabel(tr("Огибающая"));
    label_3 = new QLabel(tr("Развертка"));

    menubar = new QMenuBar;
    menubar->setWindowFlags(Qt::CustomizeWindowHint);
    menubar->setParent(this);
    menubar->show();
    menu =  new QMenu(tr("Общие"));

    menubar->setFixedSize(60,25);
    menu->addAction(tr("Генератор"),this,SLOT(generator()));
    menu->addAction(tr("Приемник"),this,SLOT(priemnik()));
    menu->addAction(tr("ПЭП"),this,SLOT(pep()));
    menu->addAction(tr("Обьект"),this,SLOT(object()));
    menu->addAction(tr("Настройки"),this,SLOT(nastroika()));
    menu->addAction(tr("Программа"),this,SLOT(programma()));
    menubar->addMenu(menu);

    frame = new QFrame;
    frame_1 =new QFrame;
    frame_2 =new QFrame;
    frame_3 =new QFrame;
    frame_4 =new QFrame;
    frame_5 =new QFrame;
  //  QMenuBar * bar = new QMenuBar;

    //Комбобокс для формы общие
    box = new QComboBox;
    box_1 = new QComboBox;
    box_2 = new QComboBox;
    box_3 = new QComboBox;



  // Режим в форме Общие
    box->addItem("bbb");
    box->addItem(tr("2-Cовм"));
    box->addItem(tr("1-Разд"));
    box->addItem(tr("2-Разд"));
 //  Инверсия в форме Общие
    box_1->addItem(tr("Вкл"));
    box_1->addItem(tr("Выкл"));
  // Огибающая в форме Общие
    box_2->addItem(tr("Вкл"));
    box_2->addItem(tr("Выкл"));
  // Развертка в форме Общие
    box_3->addItem(tr("A"));
    box_3->addItem(tr("B"));


connect(box, SIGNAL(currentIndexChanged(QString)),this, SLOT(showPosts()));

    frame->  setPalette(pal_1); // устанавливаем фон на 1-ый фрейм
    frame_1->setPalette(pal_1);
    frame_2->setPalette(pal_1);
    frame_3->setPalette(pal_1);
   // frame_4->setPalette(pal_1);

    frame->  setAutoFillBackground(true); // всегда выводить фрейм на экране
    frame_1->setAutoFillBackground(true);
    frame_2->setAutoFillBackground(true);
    frame_3->setAutoFillBackground(true);
    frame_4->setAutoFillBackground(true);

    frame->setFixedSize  (100,60);     // размер фрейма
    frame_1->setFixedSize(100,60);
    frame_2->setFixedSize(100,60);
    frame_3->setFixedSize(100,60);
    frame_4->setFixedSize(400,230);
   // frame_5->setFixedSize(375,230);

    frame->setLayout(new QVBoxLayout());  // создания слоя
    frame_1->setLayout(new QVBoxLayout());
    frame_2->setLayout(new QVBoxLayout());
    frame_3->setLayout(new QVBoxLayout());
    frame_4->setLayout(new QVBoxLayout());
  //  frame_5->setLayout(new QVBoxLayout());

    label->setBuddy(box);
    frame->layout()->addWidget(label);
    label->setAlignment(Qt::AlignCenter);
    frame->layout()->addWidget(box);

    label_1->setBuddy(box_1);
    frame_1->layout()->addWidget(label_1);
    label_1->setAlignment(Qt::AlignCenter);
    frame_1->layout()->addWidget(box_1);

    label_2->setBuddy(box_2);
    frame_2->layout()->addWidget(label_2);
    label_2->setAlignment(Qt::AlignCenter);
    frame_2->layout()->addWidget(box_2);

    label_3->setBuddy(box_3);
    frame_3->layout()->addWidget(label_3);
    label_3->setAlignment(Qt::AlignCenter);
    frame_3->layout()->addWidget(box_3);

   // frame_4->layout()->addWidget(menubar);
    view->setAlignment(Qt::AlignCenter);
    frame_4->layout()->addWidget(view);


    QHBoxLayout * singleLayout  = new QHBoxLayout(this);
    singleLayout->setMargin(0);
    singleLayout->addSpacing(0);

    QVBoxLayout* hsingleLayout = new QVBoxLayout;
    hsingleLayout->setMargin(0);
    hsingleLayout->setSpacing(-100);

    QHBoxLayout *spinBoxLayout1 = new QHBoxLayout;
    spinBoxLayout1->addWidget(frame);
    spinBoxLayout1->addStretch();

    QHBoxLayout *spinBoxLayout2 = new QHBoxLayout;
    spinBoxLayout2->addWidget(frame_1);
    spinBoxLayout2->addStretch();

    QHBoxLayout *spinBoxLayout3 = new QHBoxLayout;
    spinBoxLayout3->addWidget(frame_2);
    spinBoxLayout3->addStretch();

    QHBoxLayout *spinBoxLayout4 = new QHBoxLayout;
    spinBoxLayout4->addWidget(frame_3);
    spinBoxLayout4->addStretch();

    QVBoxLayout * vlayout =new QVBoxLayout;
    vlayout->addSpacing(-200);

//    QVBoxLayout *graphic_layout = new QVBoxLayout;
//    graphic_layout->addWidget(frame_5);
//    graphic_layout->addSpacing(-200);

//    QHBoxLayout * hgrap_layout = new QHBoxLayout;
//    hgrap_layout->addLayout(graphic_layout);
//    hgrap_layout->addSpacing(400);

    QVBoxLayout *bvlLayout = new QVBoxLayout;
    bvlLayout->addWidget(frame_4);
    //bvlLayout->addLayout(hgrap_layout);
    bvlLayout->addSpacing(-180);
   // bvlLayout->addStretch();

    hsingleLayout->addLayout(spinBoxLayout1);
    hsingleLayout->addLayout(spinBoxLayout2);
    hsingleLayout->addLayout(spinBoxLayout3);
    hsingleLayout->addLayout(spinBoxLayout4);
    vlayout->addLayout(bvlLayout);
    singleLayout->addLayout(hsingleLayout);
    singleLayout->addLayout(vlayout);

    // Устанавливаем их в пассивное положение
       box->setDisabled(true);
       box_1->setDisabled(true);
       box_2->setDisabled(true);
       box_3->setDisabled(true);
}
void Singlechannel ::keyPressEvent(QKeyEvent *pe)
{
    switch(pe->key())
        {
        case Qt::Key_F1:
            frame->setPalette(pal);
            frame_1->setPalette(pal_1);
            frame_2->setPalette(pal_1);
            frame_3->setPalette(pal_1);
            box->setEnabled(true);
            box->setFocus();
            box_1->setDisabled(true);
            box_2->setDisabled(true);
            box_3->setDisabled(true);

            break;
        case Qt::Key_F2:
                frame_1->setPalette(pal);
                frame->setPalette(pal_1);
                frame_2->setPalette(pal_1);
                frame_3->setPalette(pal_1);
                box_1->setEnabled(true);
                box_1->setFocus();
                box->setDisabled(true);
                box_2->setDisabled(true);
                box_3->setDisabled(true);

                break;
        case Qt::Key_F3:
                frame_2->setPalette(pal);
                frame_1->setPalette(pal_1);
                frame->setPalette(pal_1);
                frame_3->setPalette(pal_1);
                box_2->setEnabled(true);
                box_2->setFocus();
                box->setDisabled(true);
                box_1->setDisabled(true);
                box_3->setDisabled(true);

                break;
            case Qt::Key_F5:
            frame_1->setPalette(pal_1);
            frame_2->setPalette(pal_1);
            frame->setPalette(pal_1);
            frame_3->setPalette(pal);
            box_3->setEnabled(true);
            box_3->setFocus();
            box->setDisabled(true);
            box_1->setDisabled(true);
            box_2->setDisabled(true);
                break;
        default:
            QWidget::keyPressEvent(pe);
    }
    }
void Singlechannel::generator(){

     Generator * generator = new Generator;
     generator->show();
}

void Singlechannel ::priemnik()
{
    pr = new QWidget;
    pr->setFixedSize(480,230);
    pr->setWindowTitle(tr("Приемник"));
    pr->show();
    delete wgt;
}
void Singlechannel::pep(){
    QWidget * pep1= new QWidget;
    pep1->show();
}
void Singlechannel::object(){
    QWidget * ob = new QWidget;
    ob->show();
}
 void Singlechannel::nastroika(){
     QWidget * nas = new QWidget;
     nas->show();
 }
 void Singlechannel::programma(){
     QWidget * prog = new QWidget;
     prog->show();
 }
void Singlechannel::showPosts(){

    if(box->currentText()=="bbb")
    {
        QMessageBox::information(this, tr("bbb"), tr("bbb"));
    }else{
        qDebug()<<"sdsdfsf";
}
}

