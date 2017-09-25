#-------------------------------------------------
#
# Project created by QtCreator 2016-12-18T14:51:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app

CONFIG(release, debug|release) {
    buildConfig = release
}
CONFIG(debug, debug|release) {
    buildConfig = debug
}

DESTDIR = bin/$${buildConfig}
TARGET = GameOfLifeSimulator

INCLUDEPATH += include

OBJECTS_DIR = build/objects/$${buildConfig}

MOC_DIR = build/moc/$${buildConfig}

UI_DIR = build/ui/$${buildConfig}

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/cell.cpp \
    src/board.cpp

HEADERS += \
    include/mainwindow.h \
    include/cell.h \
    include/board.h

FORMS += \
    ui/mainwindow.ui
