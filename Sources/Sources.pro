######################################################################
# Automatically generated by qmake (2.01a) lun. aot 29 06:06:47 2011
######################################################################

TEMPLATE = app
TARGET = 
TARGET = tabula_rasa
DEPENDPATH += . Algorithme Interface Ressources Algorithme/Pictogramme
INCLUDEPATH += . Interface Algorithme Algorithme/Pictogramme
#CONFIG += debug
RC_FILE = iconSetter.rc
QT += xml svg

target.path += /usr/bin/
INSTALLS += target
# Input
HEADERS += Algorithme/algorithmeScene.hpp \
           Algorithme/pictoBuilder.hpp \
           Interface/aboutDialog.hpp \
           Interface/mainwindow.hpp \
           Interface/resizeDialog.hpp \
           Interface/tabWidget.hpp \
           Algorithme/Pictogramme/ancreItem.hpp \
           Algorithme/Pictogramme/labelItem.hpp \
           Algorithme/Pictogramme/liaisonItem.hpp \
           Algorithme/Pictogramme/pictoAction.hpp \
           Algorithme/Pictogramme/pictoCondition.hpp \
           Algorithme/Pictogramme/pictoConditionMultiple.hpp \
           Algorithme/Pictogramme/pictogramme.hpp \
           Algorithme/Pictogramme/pictoIteration.hpp \
           Algorithme/Pictogramme/pictoProcedure.hpp \
           Algorithme/Pictogramme/pictoSortie.hpp \
    Interface/labeledit.hpp \
    Interface/sauvegarde.hpp
FORMS += Interface/aboutDialog.ui \
         Interface/mainwindow.ui \
         Interface/resizeDialog.ui \
    Interface/labeledit.ui \
    Interface/sauvegarde.ui
SOURCES += main.cpp \
           Algorithme/algorithmeScene.cpp \
           Algorithme/pictoBuilder.cpp \
           Interface/aboutDialog.cpp \
           Interface/mainwindow.cpp \
           Interface/resizeDialog.cpp \
           Interface/tabWidget.cpp \
           Algorithme/Pictogramme/ancreItem.cpp \
           Algorithme/Pictogramme/labelItem.cpp \
           Algorithme/Pictogramme/liaisonItem.cpp \
           Algorithme/Pictogramme/pictoAction.cpp \
           Algorithme/Pictogramme/pictoCondition.cpp \
           Algorithme/Pictogramme/pictoConditionMultiple.cpp \
           Algorithme/Pictogramme/pictogramme.cpp \
           Algorithme/Pictogramme/pictoIteration.cpp \
           Algorithme/Pictogramme/pictoProcedure.cpp \
           Algorithme/Pictogramme/pictoSortie.cpp \
    Interface/labeledit.cpp \
    Interface/sauvegarde.cpp
RESOURCES += Ressources/ressources.qrc






