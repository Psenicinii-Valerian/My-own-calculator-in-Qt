#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    double adunare (double a, double b);
    double scadere (double a, double b);
    double inmultire (double a, double b);
    double impartire (double a, double b);


private slots:

    void on_plus_clicked();

    void on_minus_clicked();

    void on_inmultire_clicked();

    void on_impartire_clicked();

    // void on_REZ_clicked(int xxx, double a, double b);

private:
    Ui::MainWindow *ui;
    int c=0;
};

#endif // MAINWINDOW_H
