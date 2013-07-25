#include <QtGui>
#include "klavishi.h"
#include "handle.h"
#include "multichannel.h"
#include "singlechannel.h"
#include <QObject>
#include <QTextCodec>


#include <QDateTimeEdit>
int main (int argc, char ** argv)
{
QApplication app (argc,argv);
QTextCodec::setCodecForTr( QTextCodec::codecForName("utf8") );
QPalette pal1;
Klavishi klavishi;
pal1.setBrush(klavishi.backgroundRole(),Qt::gray);
klavishi.setPalette(pal1);
klavishi.resize(480,400);
klavishi.show();
return app.exec ();
}
