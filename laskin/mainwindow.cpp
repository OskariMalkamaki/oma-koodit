#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Count_clicked()
{
    //1. luetaan nykyinen arvo
    QString luku = ui->lineEdit->text();
    qDebug()<< "nykyinen luku merkki jonona " << luku;
    // 2.muutetaan merkkijono kokonais luvuksi
    int num = luku.toInt();
    qDebug()<< "nykyinen luku kokonais lukuna" << luku;

    num = num + 1;
    qDebug()<< "uusi luku kokonais lukuna" << luku;

    QString txt = QString::number(num);
    ui->lineEdit->setText(txt);
}

void MainWindow::on_Reset_clicked()
{
    ui->lineEdit->setText("0");
}


