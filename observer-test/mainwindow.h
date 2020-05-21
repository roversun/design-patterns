#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form1.h"
#include "form2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pbReg1_clicked();

    void on_pbUnreg1_clicked();

    void on_pbReg2_clicked();

    void on_pbUnreg2_clicked();

    void on_pbReg3_clicked();

    void on_pbUnreg3_clicked();

private:
    Ui::MainWindow *ui;

    Form1 _form1_subject;
    Form2 _form2_observer;
    Form2 _form2_observer2;
    Form2 _form2_observer3;
};

#endif // MAINWINDOW_H
