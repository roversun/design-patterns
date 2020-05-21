#include "form1.h"
#include "ui_form1.h"
#include <QTimer>

Form1::Form1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form1)
{
    ui->setupUi(this);

    startTimer();
}

Form1::~Form1()
{
    delete ui;
}

void Form1::startTimer()
{    static int count=0;
    QTimer::singleShot(1000,[&]{
        this->_data=(void*)&count;
        strcpy(_type,"timer");
        notifyObservers();
        count++;
        startTimer();
    });
}

void Form1::on_pushButton_clicked()
{
    QString s=ui->lineEdit->text();
    if(s.length()==0)
        return;
    _data=(void*)&s;
    strcpy(_type,"text");
    notifyObservers();
}
