#pragma once

#include "iterator.h"
#include <vector>

template <class T>
class VectorIterator : public Iterator<T>
{
  public:
    VectorIterator(std::vector<T> v);
    virtual ~VectorIterator() {}
    
    virtual bool hasNext();
    virtual T next();

  private:
    std::vector<T> vector_;
    int index_;
};

// Seriously, C++ templates?

//header
