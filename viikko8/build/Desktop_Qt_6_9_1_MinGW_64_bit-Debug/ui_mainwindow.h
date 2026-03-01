/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Player1SwBtn;
    QPushButton *Player2SwBtn;
    QProgressBar *P1ProgressBar;
    QProgressBar *P2ProgressBar;
    QLabel *label;
    QPushButton *Btn120Sec;
    QPushButton *Btn5Min;
    QPushButton *StartGameBtn;
    QPushButton *EndGameBtn;
    QLabel *CurrentplayerLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(904, 586);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Player1SwBtn = new QPushButton(centralwidget);
        Player1SwBtn->setObjectName("Player1SwBtn");
        Player1SwBtn->setGeometry(QRect(180, 120, 101, 31));
        Player2SwBtn = new QPushButton(centralwidget);
        Player2SwBtn->setObjectName("Player2SwBtn");
        Player2SwBtn->setGeometry(QRect(640, 130, 101, 31));
        P1ProgressBar = new QProgressBar(centralwidget);
        P1ProgressBar->setObjectName("P1ProgressBar");
        P1ProgressBar->setGeometry(QRect(50, 90, 371, 23));
        P1ProgressBar->setValue(0);
        P2ProgressBar = new QProgressBar(centralwidget);
        P2ProgressBar->setObjectName("P2ProgressBar");
        P2ProgressBar->setGeometry(QRect(500, 90, 381, 23));
        P2ProgressBar->setValue(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 230, 471, 51));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);"));
        Btn120Sec = new QPushButton(centralwidget);
        Btn120Sec->setObjectName("Btn120Sec");
        Btn120Sec->setGeometry(QRect(320, 320, 83, 29));
        Btn5Min = new QPushButton(centralwidget);
        Btn5Min->setObjectName("Btn5Min");
        Btn5Min->setGeometry(QRect(590, 320, 83, 29));
        StartGameBtn = new QPushButton(centralwidget);
        StartGameBtn->setObjectName("StartGameBtn");
        StartGameBtn->setGeometry(QRect(250, 420, 111, 41));
        EndGameBtn = new QPushButton(centralwidget);
        EndGameBtn->setObjectName("EndGameBtn");
        EndGameBtn->setGeometry(QRect(580, 420, 111, 41));
        CurrentplayerLabel = new QLabel(centralwidget);
        CurrentplayerLabel->setObjectName("CurrentplayerLabel");
        CurrentplayerLabel->setGeometry(QRect(390, 40, 121, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 904, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Player1SwBtn->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        Player2SwBtn->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        P1ProgressBar->setFormat(QCoreApplication::translate("MainWindow", "%vs", nullptr));
        P2ProgressBar->setFormat(QCoreApplication::translate("MainWindow", "%vs", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "valitse peliaika ja paina start game", nullptr));
        Btn120Sec->setText(QCoreApplication::translate("MainWindow", "120 Sec", nullptr));
        Btn5Min->setText(QCoreApplication::translate("MainWindow", "5 Min", nullptr));
        StartGameBtn->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        EndGameBtn->setText(QCoreApplication::translate("MainWindow", "END GAME", nullptr));
        CurrentplayerLabel->setText(QCoreApplication::translate("MainWindow", "Current Player: 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
