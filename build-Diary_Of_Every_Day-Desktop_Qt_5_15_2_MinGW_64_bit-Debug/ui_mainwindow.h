/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *l_nameEvent;
    QLabel *l_descriptionEvent;
    QLabel *l_dateEvent;
    QLabel *l_timeEvent;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QListWidget *listWidget;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *l_save;
    QPushButton *b_saveEvent;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QLabel *l_allEvents;
    QPushButton *b_allEvents;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *l_delete;
    QPushButton *b_deleteEvent;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        l_nameEvent = new QLabel(centralwidget);
        l_nameEvent->setObjectName(QString::fromUtf8("l_nameEvent"));
        l_nameEvent->setGeometry(QRect(140, 80, 61, 16));
        l_descriptionEvent = new QLabel(centralwidget);
        l_descriptionEvent->setObjectName(QString::fromUtf8("l_descriptionEvent"));
        l_descriptionEvent->setGeometry(QRect(120, 190, 91, 16));
        l_dateEvent = new QLabel(centralwidget);
        l_dateEvent->setObjectName(QString::fromUtf8("l_dateEvent"));
        l_dateEvent->setGeometry(QRect(680, 510, 27, 16));
        l_timeEvent = new QLabel(centralwidget);
        l_timeEvent->setObjectName(QString::fromUtf8("l_timeEvent"));
        l_timeEvent->setGeometry(QRect(680, 540, 26, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 80, 258, 220));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(710, 510, 81, 48));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(layoutWidget1);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout_2->addWidget(dateEdit);

        timeEdit = new QTimeEdit(layoutWidget1);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));

        verticalLayout_2->addWidget(timeEdit);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(480, 110, 256, 192));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(210, 310, 121, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        l_save = new QLabel(layoutWidget2);
        l_save->setObjectName(QString::fromUtf8("l_save"));

        horizontalLayout_2->addWidget(l_save);

        b_saveEvent = new QPushButton(layoutWidget2);
        b_saveEvent->setObjectName(QString::fromUtf8("b_saveEvent"));

        horizontalLayout_2->addWidget(b_saveEvent);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(550, 310, 130, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        l_allEvents = new QLabel(layoutWidget3);
        l_allEvents->setObjectName(QString::fromUtf8("l_allEvents"));

        horizontalLayout->addWidget(l_allEvents);

        b_allEvents = new QPushButton(layoutWidget3);
        b_allEvents->setObjectName(QString::fromUtf8("b_allEvents"));

        horizontalLayout->addWidget(b_allEvents);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(340, 310, 131, 25));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        l_delete = new QLabel(widget);
        l_delete->setObjectName(QString::fromUtf8("l_delete"));

        horizontalLayout_3->addWidget(l_delete);

        b_deleteEvent = new QPushButton(widget);
        b_deleteEvent->setObjectName(QString::fromUtf8("b_deleteEvent"));

        horizontalLayout_3->addWidget(b_deleteEvent);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(lineEdit, b_allEvents);
        QWidget::setTabOrder(b_allEvents, dateEdit);
        QWidget::setTabOrder(dateEdit, timeEdit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        l_nameEvent->setText(QCoreApplication::translate("MainWindow", "Name event:", nullptr));
        l_descriptionEvent->setText(QCoreApplication::translate("MainWindow", "Description event:", nullptr));
        l_dateEvent->setText(QCoreApplication::translate("MainWindow", "Date:", nullptr));
        l_timeEvent->setText(QCoreApplication::translate("MainWindow", "Time:", nullptr));
        l_save->setText(QCoreApplication::translate("MainWindow", "Save file", nullptr));
        b_saveEvent->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        l_allEvents->setText(QCoreApplication::translate("MainWindow", "All events", nullptr));
        b_allEvents->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        l_delete->setText(QCoreApplication::translate("MainWindow", "Delete file", nullptr));
        b_deleteEvent->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
