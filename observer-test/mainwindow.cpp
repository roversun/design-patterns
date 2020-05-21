#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    _form1_subject.show();

    _form2_observer.setWindowTitle("observer1");
    _form2_observer2.setWindowTitle("observer2");
    _form2_observer3.setWindowTitle("observer3");

    _form2_observer.show();
    _form2_observer2.show();
    _form2_observer3.show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbReg1_clicked()
{

    _form1_subject.registerObserver(&_form2_observer);
}

void MainWindow::on_pbUnreg1_clicked()
{
    _form1_subject.removeObserver(&_form2_observer);
}

void MainWindow::on_pbReg2_clicked()
{

    _form1_subject.registerObserver(&_form2_observer2);
}

void MainWindow::on_pbUnreg2_clicked()
{
    _form1_subject.removeObserver(&_form2_observer2);
}

void MainWindow::on_pbReg3_clicked()
{
    _form1_subject.registerObserver(&_form2_observer3);
}

void MainWindow::on_pbUnreg3_clicked()
{
    _form1_subject.removeObserver(&_form2_observer3);
}
