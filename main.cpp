#include "mainwindow.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // 创建并安装翻译器
    QTranslator qtTranslator;
    QTranslator appTranslator;
    
    // 获取系统语言
    QString locale = QLocale::system().name();
    
    // 加载Qt基础翻译
    if (qtTranslator.load("qt_" + locale,
                         QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
    {
        a.installTranslator(&qtTranslator);
    }
    
    // 获取应用程序目录
    QString appPath = QCoreApplication::applicationDirPath();
    QString translationsPath = appPath + "/translations";
    
    // 加载应用程序翻译
    if (appTranslator.load("translation_" + locale, translationsPath))
    {
        a.installTranslator(&appTranslator);
    }
    
    MainWindow w;
    w.show();
    
    return a.exec();
} 