#include "mainwindow.h"
#include "qmainscreen.h"
#include "qpicifrom.h"
#include "qautotest.h"
#include "qautotestaprocessform.h"
#include "qmanualtestform.h"
#include "qcleanform.h"
#include "qdatafrom.h"
#include "qprinterform.h"
#include "qsettingmethodform.h"
#include "qsettingmachineform.h"
#include "qsettingcleanform.h"
#include "qsettingcalibrationform.h"
#include "qsettingnetform.h"
#include "qsettingdebugform.h"
#include "qsettinguserform.h"
#include "qsettingoriginsform.h"
#include "qhelpform.h"
#include "quserform.h"
#include "qcloudform.h"
#include "qinputtool.h"
#include "hnwindow.h"
#include "QWSServer"
#include <QApplication>
#include <QTextCodec>
#include <QFontDatabase>
#include "hnapp.h"

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(rc01);
    HNApp a(argc, argv);

    QInputTool::Instance()->Init("control", "brown", 10, 10);
    QInputTool::Instance()->hide();

    QWidget w;

    w.setFixedSize(1024, 768);
#ifdef _MIPS_LINUX_ENV_
    w.setWindowFlags(Qt::FramelessWindowHint|w.windowFlags());
    //keyboard
    //QWSInputMethod* im = new SyszuxIM;
    //QWSServer::setCurrentInputMethod(im);
#else

#endif
    QVBoxLayout l;
    l.setMargin(0);
    w.setLayout(&l);

    MainWindow m;
    l.addWidget(&m);

    w.show();

    return a.exec();
}


