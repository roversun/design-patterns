#ifndef IOBSERVER_H
#define IOBSERVER_H

class IObserver
{

public:
    explicit IObserver();

    virtual void updateData(void *data,char *type)=0;

};

#endif // IOBSERVER_H
