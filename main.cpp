#include<cstdio>
#include<QApplication>
#include<QMainWindow>
#include"ztools.h"
#include<QDebug>
int main(int argc , char* argv[])
{
    QApplication app(argc,argv);
    QMainWindow win;
    win.show();
    qDebug()<<"aaaaaaaaaa ";
    ZTools::msleep(1000);
    qDebug()<<"bbbbbbbbbbbbbb ";
    return app.exec();
}
