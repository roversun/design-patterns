#ifndef FORM2_H
#define FORM2_H

#include <QWidget>
#include "iobserver.h"

namespace Ui {
class Form2;
}

class Form2 : public QWidget, public IObserver
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = 0);
    ~Form2();

    void updateData(void *data, char *type) override;


private:
    Ui::Form2 *ui;
};

#endif // FORM2_H
