#include "mainwindow.h"

#include "board.h"

#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    MainWindow mainWindow;
    Board gameBoard(mainWindow.boardFrame);
    mainWindow.show();

    return application.exec();
}
