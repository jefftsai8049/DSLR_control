#-------------------------------------------------
#
# Project created by QtCreator 2015-12-02T16:12:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DSLR
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    checkPID.cpp

HEADERS  += mainwindow.h \
    checkPID.h

FORMS    += mainwindow.ui

LIBS +=C:\\opencv300_x32_vc2013\\lib\\opencv_world300.lib\
        C:\\opencv300_x32_vc2013\\lib\\opencv_ts300.lib\
        C:\\opencv300_x32_vc2013\\lib\\opencv_world300d.lib\
        C:\\opencv300_x32_vc2013\\lib\\opencv_ts300d.lib\
        kernel32.lib\
        user32.lib\
        gdi32.lib\
        winspool.lib\
        comdlg32.lib\
        advapi32.lib\
        shell32.lib\
        ole32.lib\
        oleaut32.lib\
        uuid.lib\
        odbc32.lib\
        odbccp32.lib\

INCLUDEPATH += C:\\opencv300_x32_vc2013\\include \
                C:\\opencv300_x32_vc2013\\include\\opencv \
                C:\\opencv300_x32_vc2013\\include\\opencv2 \




