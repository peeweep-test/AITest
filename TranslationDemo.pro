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
    $$TRANSLATIONS_DIR/translation_am_ET.ts \
    $$TRANSLATIONS_DIR/translation_ar.ts \
    $$TRANSLATIONS_DIR/translation_ast.ts \
    $$TRANSLATIONS_DIR/translation_az.ts \
    $$TRANSLATIONS_DIR/translation_bg.ts \
    $$TRANSLATIONS_DIR/translation_bn.ts \
    $$TRANSLATIONS_DIR/translation_bo.ts \
    $$TRANSLATIONS_DIR/translation_ca.ts \
    $$TRANSLATIONS_DIR/translation_cs.ts \
    $$TRANSLATIONS_DIR/translation_da.ts \
    $$TRANSLATIONS_DIR/translation_de.ts \
    $$TRANSLATIONS_DIR/translation_en.ts \
    $$TRANSLATIONS_DIR/translation_en_US.ts \
    $$TRANSLATIONS_DIR/translation_es.ts \
    $$TRANSLATIONS_DIR/translation_et.ts \
    $$TRANSLATIONS_DIR/translation_fi.ts \
    $$TRANSLATIONS_DIR/translation_fr.ts \
    $$TRANSLATIONS_DIR/translation_gl_ES.ts \
    $$TRANSLATIONS_DIR/translation_he.ts \
    $$TRANSLATIONS_DIR/translation_hr.ts \
    $$TRANSLATIONS_DIR/translation_hu.ts \
    $$TRANSLATIONS_DIR/translation_it.ts \
    $$TRANSLATIONS_DIR/translation_ja.ts \
    $$TRANSLATIONS_DIR/translation_lt.ts \
    $$TRANSLATIONS_DIR/translation_ms.ts \
    $$TRANSLATIONS_DIR/translation_nl.ts \
    $$TRANSLATIONS_DIR/translation_pl.ts \
    $$TRANSLATIONS_DIR/translation_pt.ts \
    $$TRANSLATIONS_DIR/translation_pt_BR.ts \
    $$TRANSLATIONS_DIR/translation_ro.ts \
    $$TRANSLATIONS_DIR/translation_ru.ts \
    $$TRANSLATIONS_DIR/translation_sk.ts \
    $$TRANSLATIONS_DIR/translation_sl.ts \
    $$TRANSLATIONS_DIR/translation_sq.ts \
    $$TRANSLATIONS_DIR/translation_sr.ts \
    $$TRANSLATIONS_DIR/translation_tr.ts \
    $$TRANSLATIONS_DIR/translation_ug.ts \
    $$TRANSLATIONS_DIR/translation_uk.ts \
    $$TRANSLATIONS_DIR/translation_vi.ts \
    $$TRANSLATIONS_DIR/translation_zh_CN.ts \
    $$TRANSLATIONS_DIR/translation_zh_HK.ts \
    $$TRANSLATIONS_DIR/translation_zh_TW.ts

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