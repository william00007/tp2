#pragma once

#include "iterator.h"
#include "predicate.h"
#include <vector>

template <class T>
class FilterIterator : public Iterator<T>
{
  public:
    FilterIterator(Iterator<T> * it, const Predicate<T> * predicate);
    virtual ~FilterIterator() {}
    
    virtual bool hasNext();
    virtual T next();

  private:
    Iterator<T> * it_, * myIt_;
    const Predicate<T> * predicate_;

};

// C++ templates hell
#include "filterIterator.cpp"
