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
    dialogchoose.cpp \
    dialogclient.cpp \
    dialogclientplay.cpp \
    dialoggameai.cpp \
    dialoggetarm.cpp \
    dialoglost.cpp \
    dialogondevice.cpp \
    dialogpage1.cpp \
    dialogserver.cpp \
    dialogservergetam.cpp \
    dialogserverplay.cpp \
    dialogserversetgameboard.cpp \
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
    dialogchoose.h \
    dialogclient.h \
    dialogclientplay.h \
    dialoggameai.h \
    dialoggetarm.h \
    dialoglost.h \
    dialogondevice.h \
    dialogpage1.h \
    dialogserver.h \
    dialogservergetam.h \
    dialogserverplay.h \
    dialogserversetgameboard.h \
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
    dialogchoose.ui \
    dialogclient.ui \
    dialogclientplay.ui \
    dialoggameai.ui \
    dialoggetarm.ui \
    dialoglost.ui \
    dialogondevice.ui \
    dialogpage1.ui \
    dialogserver.ui \
    dialogservergetam.ui \
    dialogserverplay.ui \
    dialogserversetgameboard.ui \
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
