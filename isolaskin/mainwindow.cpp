#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << " alku tila " << tila;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    setEditNum(1);
}


void MainWindow::on_N2_clicked()
{
    setEditNum(2);
}
void MainWindow::on_N3_clicked()
{
    setEditNum(3);
}
void MainWindow::on_N4_clicked()
{
    setEditNum(4);
}
void MainWindow::on_N5_clicked()
{
    setEditNum(5);
}
void MainWindow::on_N6_clicked()
{
    setEditNum(6);
}
void MainWindow::on_N7_clicked()
{
    setEditNum(7);
}
void MainWindow::on_N8_clicked()
{
   setEditNum(8);
}
void MainWindow::on_N9_clicked()
{
    setEditNum(9);
}
void MainWindow::on_N0_clicked()
{
    setEditNum(0);
}

void MainWindow::on_Plus_clicked()
{
    if (tila == 2)
    {
        oper = '+';
        tulos = eka + toka;
        ui->Tulostus->setText(QString::number(tulos));

        tila = 0;


    }


}

void MainWindow::on_Minus_clicked()
{
    if (tila == 2)
    {
        oper = '-';
        tulos = eka - toka;
        ui->Tulostus->setText(QString::number(tulos));

        tila = 0;

    }
}

 void MainWindow::on_kerto_clicked()
{
    if (tila == 2)
    {
            oper = '*';
            tulos = eka * toka;
            ui->Tulostus->setText(QString::number(tulos));

            tila = 0;

    }
}

void MainWindow::on_jako_clicked()
{
    if (tila == 2)
    {
        oper = '/';
        tulos = eka / toka;
        ui->Tulostus->setText(QString::number(tulos));

        tila = 0;

    }
}

void MainWindow::setEditNum(int num)
{
    if(tila==0)
    {
        QString ekaLuku = ui->EkaLuku->text();
        ui->EkaLuku->setText(ekaLuku + QString::number(num));
    }

    else if (tila == 1)
    {
        QString tokaLuku = ui->TokaLuku->text();
        ui->TokaLuku->setText(tokaLuku + QString::number(num));
    }

}

void MainWindow::on_Enter_clicked()
{
    qDebug() << "nykyinen tila " << tila;
    if (tila == 0)
    {
        eka = ui->EkaLuku->text().toInt();
        tila = 1;
    }
    else if (tila == 1)
    {
        toka = ui->TokaLuku->text().toInt();
        tila = 2;
    }


    qDebug() << "uusi tila" << tila;

}

void MainWindow::on_clear_clicked()
{
    // putssaa kaiken
    tila = 0;
    eka = 0;
    toka = 0;
    oper = 0;
    tulos = 0;


    ui->EkaLuku->clear();
    ui->TokaLuku->clear();
    ui->Tulostus->clear();

    qDebug() << "Calculator cleared";

}







