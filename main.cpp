#include "mainwindow.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    std::clog << "Hello World!" << std::endl;
    w.show();

    return a.exec();
}
