TEMPLATE        = app
TARGET          = sqlbrowser
UI_DIR=./


QT       += core gui
QT       += sql widgets
requires(qtConfig(tableview))

QT += multimedia \
      multimediawidgets \
      widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    connectiondialog.cpp \
    connectionwidget.cpp \
    imageviewer.cpp \
    main.cpp \
    menu.cpp \
    player.cpp \
    playercontrols.cpp \
    playlistmodel.cpp \
    sql.cpp \
    textedit.cpp \
    videowidget.cpp

HEADERS += \
    connectiondialog.h \
    connectionwidget.h \
    imageviewer.h \
    menu.h \
    player.h \
    playercontrols.h \
    playlistmodel.h \
    sql.h \
    textedit.h \
    videowidget.h

FORMS += \
    connectiondialog.ui \
    menu.ui \
    sqlwidget.ui

build_all:!build_pass {
    CONFIG -= build_all
    CONFIG += release
}

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icon.qrc
