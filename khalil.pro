
QT       += core gui printsupport
CONFIG += console
QT +=sql
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    clients1.cpp \
    connection.cpp \
    dialogkha.cpp \
    dir.cpp \
    empl.cpp \
    khalil.cpp \
    main.cpp \
    mainwindow.cpp \
    reclam.cpp

HEADERS += \
    clients1.h \
    connection.h \
    dialogkha.h \
    dir.h \
    empl.h \
    khalil.h \
    mainwindow.h \
    reclam.h

FORMS += \
    dialogkha.ui \
    dir.ui \
    empl.ui \
    khalil.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Downloads/refresh-16.png \
    ../../Downloads/refresh.svg \
    IMAGE/133808442_213677027028425_7542878062308165848_n.png

RESOURCES += \
    IMAGE/img.qrc
