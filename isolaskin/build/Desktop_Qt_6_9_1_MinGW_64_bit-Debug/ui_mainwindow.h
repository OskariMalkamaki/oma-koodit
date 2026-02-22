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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N1;
    QPushButton *N2;
    QLineEdit *EkaLuku;
    QPushButton *N3;
    QPushButton *Plus;
    QPushButton *Minus;
    QLineEdit *TokaLuku;
    QLineEdit *Tulostus;
    QPushButton *Enter;
    QPushButton *clear;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N0;
    QPushButton *kerto;
    QPushButton *jako;
    QPlainTextEdit *ohjeet;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(80, 110, 80, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(180, 110, 80, 24));
        EkaLuku = new QLineEdit(centralwidget);
        EkaLuku->setObjectName("EkaLuku");
        EkaLuku->setGeometry(QRect(82, 50, 121, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(290, 110, 80, 24));
        Plus = new QPushButton(centralwidget);
        Plus->setObjectName("Plus");
        Plus->setGeometry(QRect(400, 110, 80, 24));
        Minus = new QPushButton(centralwidget);
        Minus->setObjectName("Minus");
        Minus->setGeometry(QRect(400, 150, 80, 24));
        TokaLuku = new QLineEdit(centralwidget);
        TokaLuku->setObjectName("TokaLuku");
        TokaLuku->setGeometry(QRect(250, 50, 113, 24));
        Tulostus = new QLineEdit(centralwidget);
        Tulostus->setObjectName("Tulostus");
        Tulostus->setGeometry(QRect(400, 50, 191, 24));
        Enter = new QPushButton(centralwidget);
        Enter->setObjectName("Enter");
        Enter->setGeometry(QRect(510, 110, 80, 24));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(510, 150, 80, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(80, 150, 80, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(180, 150, 80, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(290, 150, 80, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(80, 190, 80, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(180, 190, 80, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(290, 190, 80, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(180, 230, 80, 24));
        kerto = new QPushButton(centralwidget);
        kerto->setObjectName("kerto");
        kerto->setGeometry(QRect(400, 190, 80, 24));
        jako = new QPushButton(centralwidget);
        jako->setObjectName("jako");
        jako->setGeometry(QRect(510, 190, 80, 24));
        ohjeet = new QPlainTextEdit(centralwidget);
        ohjeet->setObjectName("ohjeet");
        ohjeet->setGeometry(QRect(140, 290, 411, 70));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        jako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        ohjeet->setPlainText(QCoreApplication::translate("MainWindow", "j\303\244rjestys numero enter numero enter plus/miinus/kerto/jako", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
