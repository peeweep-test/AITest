QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

# 设置翻译文件输出目录
TRANSLATIONS_DIR = translations

TRANSLATIONS += \
    $$TRANSLATIONS_DIR/translation_en.ts 

# 确保translations目录存在
!exists($$TRANSLATIONS_DIR) {
    mkpath($$TRANSLATIONS_DIR)
}

# 设置QM文件输出目录
QMAKE_POST_LINK += $$QMAKE_CHK_DIR_EXISTS $$TRANSLATIONS_DIR || $$QMAKE_MKDIR $$TRANSLATIONS_DIR

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Transifex configuration
TRANSLATIONS_DIR = translations
!exists($$TRANSLATIONS_DIR) {
    mkpath($$TRANSLATIONS_DIR)
}

# Update translations from Transifex
QMAKE_POST_LINK += $$QMAKE_CHK_DIR_EXISTS $$TRANSLATIONS_DIR || $$QMAKE_MKDIR $$TRANSLATIONS_DIR
QMAKE_POST_LINK += tx pull -a 