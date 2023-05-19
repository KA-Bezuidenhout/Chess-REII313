QT -= gui
QT += widgets

CONFIG += c++11 console
CONFIG -= app_bundle


SOURCES += \
        board.cpp \
        main.cpp \
        mainwindow.cpp


HEADERS += \
    board.h \
    mainwindow.h

RESOURCES += \
    Img/rr.qrc
