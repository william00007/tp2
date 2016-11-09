#pragma once

template <class T>
class Predicate
{
  public:
    virtual ~Predicate() {}
    virtual bool test(const T&) const = 0;
};