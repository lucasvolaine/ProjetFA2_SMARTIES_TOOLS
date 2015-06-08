#-------------------------------------------------
#
# Project created by QtCreator 2015-06-08T15:35:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DLL
TEMPLATE = app


SOURCES += main.cpp\
        dll.cpp \
    ImageClasse.cpp \
    ImageCouleur.cpp \
    ImageNdg.cpp

HEADERS  += dll.h \
    ImageClasse.h \
    ImageCouleur.h \
    ImageNdg.h

FORMS    += dll.ui
