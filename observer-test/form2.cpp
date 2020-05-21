#include "form2.h"
#include "ui_form2.h"


Form2::Form2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    delete ui;
}

void Form2::updateData(void *data, char *type)
{
    if(!data)
        return;
    if(QString(type)=="text")
        ui->label_2->setText(*(QString*)data);
    else if(QString(type)=="timer")
    {
        ui->label_timer->setText(QString("%1").arg(*(int*)data));

    }

}
