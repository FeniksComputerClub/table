#pragma once

#include <set>
#include "SomeClass.h"

class Table
{
 private:
  static Table s_table;
  std::set<SomeClass> m_table;

 public:
  static Table& instance() { return s_table; }

  void print() const;
};
