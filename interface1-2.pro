#DEFINES += QWT_DLL
SOURCES += \
    main.cpp \
    klavishi.cpp \
    handle.cpp \
    multichannel.cpp \
    single_channel.cpp \
    generator.cpp

HEADERS += \
    klavishi.h \
    handle.h \
    multichannel.h \
    singlechannel.h \
    generator.h
TRANSLATIONS += klavishi_ru.ts \handle_ru.qm

#INCLUDEPATH += C:/qwt-6.0.1/src

#CONFIG(debug, debug|release) {



#LIBS += C:/qwt-6.0.1/lib/qwtd.lib
#} else {



#LIBS += C:/qwt-6.0.1/lib/qwt.lib
#}
#DEFINES += QWT_DLL
#QT += core gui
#TARGET = interface1-2
#TEMPLATE = app

#LIBS += C:\qwt-6.0.1\qwt.lib
#INCLUDEPATH += C:\qwt-6.0.1\src
#QWT_PATH = C:/qwt-mob
##win32: LIBS += -lWS2_32

#INCLUDEPATH += include \
#C:/qwt-mob/include

#DEPENDPATH += C:/qwt-mob/lib

#LIBS += -LC:/qwt-mob/lib -lqwt
#QWT_PATH = C:/qwt-6.0.1
#win32: LIBS += -lWS2_32

#INCLUDEPATH += include \
#C:/qwt-6.0.1/include

#DEPENDPATH += C:/qwt-6.0.1/lib

#LIBS += -LC:/qwt-6.0.1/lib -lqwt

#OTHER_FILES +=

#RESOURCES += \
#    ress.qrc

RESOURCES += \
    res1.qrc
