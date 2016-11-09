#pragma once

#include "predicate.h"

class PositiveIntPredicate : public Predicate<int>
{
public:
  virtual ~PositiveIntPredicate() {}
  virtual bool test(const int & value) const
  {
    return value >= 0;
  };

  static PositiveIntPredicate * instance;
};

PositiveIntPredicate * PositiveIntPredicate::instance = new PositiveIntPredicate();