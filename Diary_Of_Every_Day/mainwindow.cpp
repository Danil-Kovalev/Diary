#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->dateEdit->setDate(QDate::currentDate());
    ui->timeEdit->setTime(QTime::currentTime());
    connect(ui->b_allEvents, &QPushButton::clicked, this, &MainWindow::openFile);
    connect(ui->b_saveEvent, &QPushButton::clicked, this, &MainWindow::saveOutputEvents);
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

void MainWindow::nameEvent()
{
    QString nameText;
    nameText = ui->lineEdit->text();
}

void MainWindow::saveOutputEvents()
{
    QString path = QFileDialog::getSaveFileName(this, tr("Save File"), "E:\\Event", tr("*.txt"));
    if (path.isEmpty())
        return;

    QFile fileToSave(path);

    if (fileToSave.open(QIODevice::WriteOnly)) {

        QTextStream to(&fileToSave);

        fileToSave.close();
    }
}

void MainWindow::openFile()
{
    QFileDialog::getOpenFileName(this, tr("Open File"), "E:\\Event");
    QString path = ("E:\\Event");
    QDir currentDir(path);
    QStringList items = currentDir.entryList(QDir::Files |QDir::NoDotAndDotDot);
    ui->listWidget->addItems(items);
}
