#ifndef FORM1_H
#define FORM1_H

#include <QWidget>
#include <isubject.h>

namespace Ui {
class Form1;
}

class Form1 : public QWidget, public ISubject
{
    Q_OBJECT

public:
    explicit Form1(QWidget *parent = 0);
    ~Form1();

    void startTimer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Form1 *ui;
};

#endif // FORM1_H
