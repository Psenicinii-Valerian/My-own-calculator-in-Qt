#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QCursor>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::adunare(double a, double b)
{
    return a+b;
}

double  MainWindow::scadere(double a, double b)
{
    return a-b;
}

double MainWindow::inmultire(double a, double b)
{
    return a*b;
}

double MainWindow::impartire(double a, double b)
{
    return a/b;
}

// plus

void MainWindow::on_plus_clicked()
{
    if ( ui->a->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare"," Eroare::Seteaza valoarea a !!!");
    }

    else if( ui->b->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare", " Eroare::Seteaza valoarea b !!!");
    }

    else
    {
        double a = ui->a->text().toDouble();
        double b = ui->b->text().toDouble();

        ui->a->setText( QString::number(this->adunare(a,b) ) );
        ui->a->setStyleSheet("QLineEdit { background-color: #ffaaff; }");
        ui->b->setText( "" );
        ui->b->setFocus();

        // MainWindow::on_REZ_clicked(1, a, b);
    }
}

// minus

void MainWindow::on_minus_clicked()
{
    if ( ui->a->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare"," Eroare::Seteaza valoarea a !!!");
    }

    else if( ui->b->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare", " Eroare::Seteaza valoarea b !!!");
    }

    else
    {
        double a = ui->a->text().toDouble();
        double b = ui->b->text().toDouble();

        ui->a->setText( QString::number(this->scadere(a,b) ) );
        ui->a->setStyleSheet("QLineEdit { background-color: #ffff00; }");
        ui->b->setText( "" );
        ui->b->setFocus();

        // MainWindow::on_REZ_clicked(2, a, b);
    }
}

// inmultire

void MainWindow::on_inmultire_clicked()
{

    if ( ui->a->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare"," Eroare::Seteaza valoarea a !!!");
    }

    else if( ui->b->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare", " Eroare::Seteaza valoarea b !!!");
    }

    else
    {
        double a = ui->a->text().toDouble();
        double b = ui->b->text().toDouble();

        ui->a->setText( QString::number(this->inmultire(a,b) ) );
        ui->a->setStyleSheet("QLineEdit { background-color: #55ff7f; }");
        ui->b->setText( "" );
        ui->b->setFocus();

        // MainWindow::on_REZ_clicked(3, a, b);
    }
}

// impartire

void MainWindow::on_impartire_clicked()
{
    if ( ui->a->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare"," Eroare::Seteaza valoarea a !!!");
    }

    else if( ui->b->text().isEmpty() )
    {
        QMessageBox::information(this, "Eroare", " Eroare::Seteaza valoarea b !!!");
    }

    else
    {
        double a = ui->a->text().toDouble();
        double b = ui->b->text().toDouble();

        ui->a->setText( QString::number(this->impartire(a,b) ) );
        ui->a->setStyleSheet("QLineEdit { background-color: #55ffff; }");
        ui->b->setText( "" );
        ui->b->setFocus();

        // MainWindow::on_REZ_clicked(4, a, b);
    }
}

// egal :: nu prea este nevoie de el

/*
void MainWindow::on_REZ_clicked(int xxx, double a, double b)
{
    switch (xxx)
    {
        case 1:
        ui->REZ->setText( QString::number(this->adunare(a,b) ) );
        break;

        case 2:
        ui->REZ->setText( QString::number(this->scadere(a,b) ) );
        break;

        case 3:
        ui->REZ->setText( QString::number(this->inmultire(a,b) ) );
        break;

        case 4:
        ui->REZ->setText( QString::number(this->impartire(a,b) ) );
        break;

        default:
        ui->REZ->setText( " Nothing to calculate!!!");
    }
}
*/
