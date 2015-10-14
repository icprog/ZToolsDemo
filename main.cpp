#include<cstdio>
#include<QApplication>
#include<QMainWindow>
#include"ztools.h"
#include<QDebug>
#include<QTextCodec>
static void func(void* pdata)
{
    qDebug("i = %d.",(*(int*)pdata)++);
    ZTools::singleShot(1000,func,pdata);
}
int main(int argc , char* argv[])
{
    QApplication app(argc,argv);
    QMainWindow win;
    win.show();
    qDebug()<<"aaaaaaaaaa ";

    qDebug()<<"CarID = "<<ZTools::getCarID();
    qDebug()<<"bbbbbbbbbbbbbb ";
    static int i = 0;
    //ZTools::singleShot(1000,func,&i);

    const QByteArray bytes = ZTools::str2unicode("汉字");
    for(int i = 0 ;i < bytes.length();i++)
    {
        qDebug("bytes[%d] : %x",i,bytes[i]);
    }
    return app.exec();
}
