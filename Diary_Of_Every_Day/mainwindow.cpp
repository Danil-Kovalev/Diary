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
    connect(ui->b_deleteEvent, &QPushButton::clicked, this, &MainWindow::deleteEvents);

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
    QString text = ui->lineEdit->text();
    QFile name;
    name.setFileName(text);
    QDir::setCurrent("E:\\Event");
    name.open(QIODevice::ReadOnly);
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

void MainWindow::deleteEvents()
{
    QString path = QFileDialog::getOpenFileName(this, tr("Delete File"), "E:\\Event", tr("*.txt"));
    if (path.isEmpty())
        return;
    QFile fileToDelete(path);
    if (fileToDelete.open(QIODevice::WriteOnly)) {

        QTextStream to(&fileToDelete);

        fileToDelete.close();
        fileToDelete.remove();
    }
}

void MainWindow::openFile()
{
    QString path = ("E:\\Event");
    QDir current(path);
    QStringList files = current.entryList(QDir::Files |QDir::NoDotAndDotDot);
    ui->listWidget->addItems(files);
}
