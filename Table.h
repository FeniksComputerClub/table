#include "SomeClass.h"

#ifndef TABLE_H
#define TABLE_H

#include <set>

class Table
{
 private:
  static Table* s_table;
  std::set<SomeClass> m_table;

 public:
  static Table& instance()
  {
    if (!s_table)
      s_table = new Table;
    return *s_table;
  }

  void add(SomeClass* sc)
  {
    m_table.insert(*sc);
  }

  void print() const;
};

#endif // TABLE_H
