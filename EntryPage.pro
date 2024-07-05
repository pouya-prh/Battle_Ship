#-------------------------------------------------
# Project created by QtCreator 2024-06-28T10:00:00
#-------------------------------------------------

QT += core gui widgets
QT += core gui multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EnrtyPage
TEMPLATE = app

# Source files
SOURCES += \
    dialogpage1.cpp \
    dialogsetgameboard.cpp \
    draggablebutton.cpp \
    gameboard.cpp \
    hashpassword.cpp \
    main.cpp \
    mainwindow.cpp \
    dialogloginclicked.cpp \
    dialogsignupclicked.cpp \
    musicplayer.cpp \
    ship.cpp \
    validator.cpp

# Header files
HEADERS += \
    dialogpage1.h \
    dialogsetgameboard.h \
    draggablebutton.h \
    gameboard.h \
    hashpassword.h \
    mainwindow.h \
    dialogloginclicked.h \
    dialogsignupclicked.h \
    musicplayer.h \
    ship.h \
    validator.h

# User interface files
FORMS += \
    dialogpage1.ui \
    dialogsetgameboard.ui \
    mainwindow.ui \
    dialogloginclicked.ui \
    dialogsignupclicked.ui

# Resources
RESOURCES += \
    back.qrc \
    font.qrc \
    music.qrc

# Other files
OTHER_FILES += \
    json.hpp

# Additional configuration options
CONFIG += c++11
