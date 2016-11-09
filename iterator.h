#pragma once

template <class T>
class Iterator
{
  public:
    virtual ~Iterator() {}
    virtual bool hasNext() = 0;
    virtual T next() = 0;
};