QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    admin.cpp \
    home.cpp \
    main.cpp \
    mainwindow.cpp \
    search.cpp

HEADERS += \
    about.h \
    admin.h \
    home.h \
    mainwindow.h \
    search.h

FORMS += \
    about.ui \
    admin.ui \
    home.ui \
    mainwindow.ui \
    search.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
