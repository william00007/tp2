#include "filterIterator.h"
#include <iostream>
template <class T>
FilterIterator<T>::FilterIterator(Iterator<T> * it, const Predicate<T> * predicate)
    : it_(it), predicate_(predicate), myIt_(it)
{
}

template <class T>
bool FilterIterator<T>::hasNext()
{
    // TODO
    myIt_->next();

    return it_->hasNext();
}

template <class T>
T FilterIterator<T>::next()
{
    // TODO
    T tmp = it_->next();

    if(predicate_->test(tmp))
        return tmp;
    else
        next();
}
