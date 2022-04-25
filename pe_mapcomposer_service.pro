QT += core gui xml widgets webenginewidgets sql

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    wmapcomposer.cpp \
    wms/qgstilescalewidget.cpp \
    wms/qgswmscapabilities.cpp \
    wms/qgswmsconnection.cpp \
    wms/qgswmsdataitemguiproviders.cpp \
    wms/qgswmsdataitems.cpp \
    wms/qgswmsprovider.cpp \
    wms/qgswmsprovidergui.cpp \
    wms/qgswmssourceselect.cpp \
    wms/qgswmtsdimensions.cpp \
    wms/qgsxyzconnection.cpp \
    wms/qgsxyzconnectiondialog.cpp \
    wms/qgsxyzsourceselect.cpp \
    ../sharedcodes/wstringutils.cpp \
    helperfunctions.cpp


HEADERS += \
    ajson5.h \
    wmapcomposer.h \
    wms/qgstilescalewidget.h \
    wms/qgswmscapabilities.h \
    wms/qgswmsconnection.h \
    wms/qgswmsdataitemguiproviders.h \
    wms/qgswmsdataitems.h \
    wms/qgswmsprovider.h \
    wms/qgswmsprovidergui.h \
    wms/qgswmssourceselect.h \
    wms/qgswmtsdimensions.h \
    wms/qgsxyzconnection.h \
    wms/qgsxyzconnectiondialog.h \
    wms/qgsxyzsourceselect.h \
    httplib.h \
    ../sharedcodes/wstringutils.h \
    helperfunctions.h


#QGIS
INCLUDEPATH += "/usr/local/include/qgis"
INCLUDEPATH += "/usr/include/x86_64-linux-gnu/qt5/QtSvg"
INCLUDEPATH += "/usr/include/x86_64-linux-gnu/qt5/QtWidgets"
INCLUDEPATH += "/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport"
INCLUDEPATH += "/usr/include/x86_64-linux-gnu/qt5/QtWebEngineWidgets"


LIBS += -L"/usr/lib"
LIBS += -L"/usr/local/lib" -lqgis_core -lqgis_gui -lqgis_app

#WMS
INCLUDEPATH += "/home/hadoop/IdeaProjects/Task23GeeWaterFixGUI/ui"
INCLUDEPATH += "/home/hadoop/IdeaProjects/Task23GeeWaterFixGUI/gui"
INCLUDEPATH += "/home/hadoop/IdeaProjects/Task23GeeWaterFixGUI/build_src_ui"
INCLUDEPATH += "/home/hadoop/IdeaProjects/Task23GeeWaterFixGUI/wms"
#keychain
INCLUDEPATH += "/usr/include/qt5keychain"
INCLUDEPATH += "/usr/include/Qca-qt5/QtCrypto"
CONFIG += crypto

INCLUDEPATH += "/usr/include/gdal"


LIBS += -L"/usr/local/lib/qgis/plugins" -lwmsprovider
LIBS += -L"/usr/lib" -lgdal

#zeromq
INCLUDEPATH += "/usr/local/include"
LIBS += -L"/usr/local/lib" -lzmq



