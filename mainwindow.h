#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onButton1Clicked();
    void onButton2Clicked();
    void onButton3Clicked();
    void onButton4Clicked();
    void onButton5Clicked();
    void onButton6Clicked();
    void onButton7Clicked();
    void onButton8Clicked();
    void onButton9Clicked();
    void onButton10Clicked();

private:
    QWidget *centralWidget;
    QVBoxLayout *mainLayout;
    QLabel *statusLabel;
    QPushButton *buttons[10];
    void setupButtons();
};

#endif // MAINWINDOW_H 