#-------------------------------------------------
#
# Project created by QtCreator 2015-06-01T16:22:36
#
#-------------------------------------------------

QT       += widgets

TARGET = LibDll
TEMPLATE = lib

DEFINES += LIBDLL_LIBRARY

SOURCES += libdll.cpp \
    ImageClasse.cpp \
    ImageCouleur.cpp \
    ImageNdg.cpp

HEADERS += libdll.h\
        libdll_global.h \
    ImageClasse.h \
    ImageCouleur.h \
    ImageNdg.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
