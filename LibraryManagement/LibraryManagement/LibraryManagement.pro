QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addbook.cpp \
    addmember.cpp \
    bookinfo.cpp \
    books.cpp \
    createnewaccount.cpp \
    lendingbook.cpp \
    main.cpp \
    login.cpp \
    mainmenu.cpp \
    memberinfo.cpp \
    members.cpp \
    removebook.cpp \
    removemember.cpp \
    returningschedule.cpp \
    returninigbook.cpp

HEADERS += \
    addbook.h \
    addmember.h \
    bookinfo.h \
    books.h \
    createnewaccount.h \
    lendingbook.h \
    login.h \
    mainmenu.h \
    memberinfo.h \
    members.h \
    removebook.h \
    removemember.h \
    returningschedule.h \
    returninigbook.h

FORMS += \
    addbook.ui \
    addmember.ui \
    books.ui \
    createnewaccount.ui \
    lendingbook.ui \
    login.ui \
    mainmenu.ui \
    members.ui \
    removebook.ui \
    removemember.ui \
    returningschedule.ui \
    returninigbook.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc

DISTFILES += \
    ../../main.jpeg
