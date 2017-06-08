#-------------------------------------------------
#
# Project created by QtCreator 2016-12-18T14:51:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameOfLifeSimulator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp\
        cell.cpp\
        board.cpp

HEADERS  += mainwindow.h\
            cell.h\
            board.h

FORMS    += mainwindow.ui
