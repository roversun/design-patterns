#include "isubject.h"

ISubject::ISubject()
{

}

void ISubject::registerObserver(IObserver *ob)
{
    _list.append(ob);
}

void ISubject::removeObserver(IObserver *ob)
{
    _list.removeOne(ob);
}

void ISubject::notifyObservers()
{
    for(auto item: _list)
    {
        item->updateData(_data,_type);
    }

}
