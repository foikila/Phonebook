

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
    Phonebook.cpp \
    viewDialog.cpp \
    FriendEditDialog.cpp

HEADERS  += mainwindow.h \
    List.h \
    FileReader.h \
    Reader.h \
    Person.h \
    Friend.h \
    Colleague.h \
    Administration.h \
    LinkedList.h \
    Phonebook.h \
    viewDialog.h \
    FriendEditDialog.h

FORMS    += mainwindow.ui \
    viewDialog.ui \
    FriendEditDialog.ui

QMAKE_CXXFLAGS += -std=c++11
