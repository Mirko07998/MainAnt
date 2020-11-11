#-------------------------------------------------
#
# Project created by QtCreator 2020-11-11T11:25:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MainAnt
TEMPLATE = app


SOURCES +=  src/main.cpp\
            src/mainwindow.cpp \
            src/parser.cpp

HEADERS  += headers/mainwindow.h \
            headers/parser.h

FORMS    += mainwindow.ui
