#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void dateEvent();
    void timeEvent();
    void nameEvent();
    void saveOutputEvents();
    void deleteEvents();
    void openFile();

private:
    Ui::MainWindow *ui;
    QString currentFile;
};
#endif // MAINWINDOW_H
