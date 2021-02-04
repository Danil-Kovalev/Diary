#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->timeEdit->setTime(QTime::currentTime());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dateEvent()
{

}

void MainWindow::timeEvent()
{

}

void MainWindow::saveOutputEvents()
{

}

