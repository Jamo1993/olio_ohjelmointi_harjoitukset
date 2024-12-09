#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0)
{
    ui->setupUi(this);

    connect(ui->countButton, &QPushButton::clicked, this, &MainWindow::onCountButtonClicked);
    connect(ui->resetButton, &QPushButton::clicked, this, &MainWindow::onResetButtonClicked);
    connect(ui->multiplyButton, &QPushButton::clicked, this, &::MainWindow::onmultiplyButtonClicked);
    connect(ui->divideButton, &QPushButton::clicked, this, &::MainWindow::ondivideButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCountButtonClicked()
{
    counter++;
    ui->lineEdit->setText(QString::number(counter));
    ui->label->setText("Press button has been clicked " + QString::number(counter) + " times");
}

void MainWindow::onResetButtonClicked()
{
    counter = 0;
    ui->lineEdit->setText(QString::number(counter));
    ui->label->setText("Press button has been clicked 0 times");
}

void MainWindow::onmultiplyButtonClicked()
{
    counter *= counter;
    ui->lineEdit->setText(QString::number(counter));
    ui->label->setText("Press button value has been multiplied by itself to " + QString::number(counter));
}

void MainWindow::ondivideButtonClicked()
{
    counter /=counter;
    ui->lineEdit->setText(QString::number(counter));
    ui->label->setText("Press button value has been divided by itself to " + QString::number(counter));
}

