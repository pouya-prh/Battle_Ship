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
    arms.cpp \
    dialoggameai.cpp \
    dialoggetarm.cpp \
    dialoglost.cpp \
    dialogondevice.cpp \
    dialogpage1.cpp \
    dialogsetgameboard.cpp \
    dialogwon.cpp \
    draggablebutton.cpp \
    gameboard.cpp \
    hashpassword.cpp \
    main.cpp \
    mainwindow.cpp \
    dialogloginclicked.cpp \
    dialogsignupclicked.cpp \
    musicplayer.cpp \
    ship.cpp \
    updatefile.cpp \
    user.cpp \
    validator.cpp

# Header files
HEADERS += \
    arms.h \
    dialoggameai.h \
    dialoggetarm.h \
    dialoglost.h \
    dialogondevice.h \
    dialogpage1.h \
    dialogsetgameboard.h \
    dialogwon.h \
    draggablebutton.h \
    gameboard.h \
    hashpassword.h \
    mainwindow.h \
    dialogloginclicked.h \
    dialogsignupclicked.h \
    musicplayer.h \
    ship.h \
    updatefile.h \
    user.h \
    validator.h

# User interface files
FORMS += \
    dialoggameai.ui \
    dialoggetarm.ui \
    dialoglost.ui \
    dialogondevice.ui \
    dialogpage1.ui \
    dialogsetgameboard.ui \
    dialogwon.ui \
    mainwindow.ui \
    dialogloginclicked.ui \
    dialogsignupclicked.ui

# Resources
RESOURCES += \
    back.qrc \
    font.qrc \
    images.qrc \
    music.qrc

# Other files
OTHER_FILES += \
    json.hpp

# Additional configuration options
CONFIG += c++11
