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

DESTDIR = $${PWD}/bin/$${buildConfig}
TARGET = $${PWD}/GameOfLifeSimulator

INCLUDEPATH += $${PWD}/include

OBJECTS_DIR = $${PWD}/build/objects/$${buildConfig}

MOC_DIR = $${PWD}/build/moc/$${buildConfig}

UI_DIR = $${PWD}/build/ui/$${buildConfig}

SOURCES += \
    $${PWD}/src/main.cpp \
    $${PWD}/src/mainwindow.cpp \
    $${PWD}/src/cell.cpp \
    $${PWD}/src/board.cpp

HEADERS += \
    $${PWD}/include/mainwindow.h \
    $${PWD}/include/cell.h \
    $${PWD}/include/board.h

FORMS += \
    $${PWD}/ui/mainwindow.ui
