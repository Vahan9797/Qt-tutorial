TEMPLATE = app
TARGET = FirstProjectWithQT

QT = core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#for headers use HEADERS += ..., for source files SOURCES += ...
SOURCES += main.cpp \
    window.cpp

HEADERS += \
    window.h
