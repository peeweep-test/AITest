#include "mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 创建中央部件
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);
    
    // 创建主布局
    mainLayout = new QVBoxLayout(centralWidget);
    
    // 创建状态标签
    statusLabel = new QLabel(this);
    mainLayout->addWidget(statusLabel);
    
    // 设置按钮
    setupButtons();
    
    // 设置窗口标题和大小
    setWindowTitle(tr("Translation Demo"));
    resize(400, 600);
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupButtons()
{
    // 创建10个按钮，每个按钮都有可翻译的文本
    buttons[0] = new QPushButton(tr("Welcome Message"), this);
    buttons[1] = new QPushButton(tr("Hello World"), this);
    buttons[2] = new QPushButton(tr("Good Morning"), this);
    buttons[3] = new QPushButton(tr("Good Afternoon"), this);
    buttons[4] = new QPushButton(tr("Good Evening"), this);
    buttons[5] = new QPushButton(tr("Thank You"), this);
    buttons[6] = new QPushButton(tr("Please Wait"), this);
    buttons[7] = new QPushButton(tr("Operation Complete"), this);
    buttons[8] = new QPushButton(tr("Error Occurred"), this);
    buttons[9] = new QPushButton(tr("Goodbye"), this);
    buttons[10] = new QPushButton(tr("Hello TianShilin"), this);
    buttons[11] = new QPushButton(tr("Test if the translation was successful"), this);
    buttons[12] = new QPushButton(tr("translation was successful"), this);
    buttons[12] = new QPushButton(tr("International Translation Platform"), this);
    buttons[13] = new QPushButton(tr("Platform"), this);




    // 添加按钮到布局
    for(int i = 0; i < 10; ++i) {
        mainLayout->addWidget(buttons[i]);
    }

    // 连接信号和槽
    connect(buttons[0], &QPushButton::clicked, this, &MainWindow::onButton1Clicked);
    connect(buttons[1], &QPushButton::clicked, this, &MainWindow::onButton2Clicked);
    connect(buttons[2], &QPushButton::clicked, this, &MainWindow::onButton3Clicked);
    connect(buttons[3], &QPushButton::clicked, this, &MainWindow::onButton4Clicked);
    connect(buttons[4], &QPushButton::clicked, this, &MainWindow::onButton5Clicked);
    connect(buttons[5], &QPushButton::clicked, this, &MainWindow::onButton6Clicked);
    connect(buttons[6], &QPushButton::clicked, this, &MainWindow::onButton7Clicked);
    connect(buttons[7], &QPushButton::clicked, this, &MainWindow::onButton8Clicked);
    connect(buttons[8], &QPushButton::clicked, this, &MainWindow::onButton9Clicked);
    connect(buttons[9], &QPushButton::clicked, this, &MainWindow::onButton10Clicked);
    connect(buttons[10], &QPushButton::clicked, this, &MainWindow::onButton11Clicked);
    connect(buttons[11], &QPushButton::clicked, this, &MainWindow::onButton12Clicked);
    connect(buttons[12], &QPushButton::clicked, this, &MainWindow::onButton13Clicked);
}

void MainWindow::onButton1Clicked()
{
    statusLabel->setText(tr("Welcome to our application!"));
}

void MainWindow::onButton2Clicked()
{
    statusLabel->setText(tr("Hello World! This is a test message."));
}

void MainWindow::onButton3Clicked()
{
    statusLabel->setText(tr("Good Morning! Have a nice day!"));
}

void MainWindow::onButton4Clicked()
{
    statusLabel->setText(tr("Good Afternoon! Hope you're having a productive day!"));
}

void MainWindow::onButton5Clicked()
{
    statusLabel->setText(tr("Good Evening! Time to relax!"));
}

void MainWindow::onButton6Clicked()
{
    statusLabel->setText(tr("Thank You for using our application!"));
}

void MainWindow::onButton7Clicked()
{
    statusLabel->setText(tr("Please Wait while we process your request..."));
}

void MainWindow::onButton8Clicked()
{
    statusLabel->setText(tr("Operation Complete! Everything went well."));
}

void MainWindow::onButton9Clicked()
{
    statusLabel->setText(tr("Error Occurred! Please try again later."));
}

void MainWindow::onButton10Clicked()
{
    statusLabel->setText(tr("Goodbye! See you next time!"));
} 