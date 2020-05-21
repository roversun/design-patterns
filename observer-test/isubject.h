#ifndef ISUBJECT_H
#define ISUBJECT_H

#include <iobserver.h>
#include <QList>

class ISubject
{

public:
    explicit ISubject();

    virtual void registerObserver(IObserver*) final;
    virtual void removeObserver(IObserver*) final;

protected:
    void notifyObservers();

private:
    QList<IObserver*> _list;

protected:
    void *_data=nullptr;
    char _type[5]={0};


};

#endif // ISUBJECT_H
