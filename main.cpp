#include "mainwindow.h"
#include <QApplication>

//TBD Feature101
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
