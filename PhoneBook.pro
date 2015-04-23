#-------------------------------------------------
#
# Project created by QtCreator 2015-04-22T21:01:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PhoneBook
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        Person.cpp \
    Friend.cpp \
    Colleague.cpp \
    Administration.cpp \
    testReader.cpp

HEADERS  += mainwindow.h \
    LinkedList.h \
    List.h \
    FileReader.h \
    Reader.h \
    Person.h \
    Friend.h \
    Colleague.h \
    Administration.h

FORMS    += mainwindow.ui

QMAKE_CXXFLAGS += -std=c++11
