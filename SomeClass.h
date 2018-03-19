#pragma once

#include <iostream>

class SomeClass
{
 private:
  int m_i;
 public:
  SomeClass(int i) : m_i(i) { }
  friend bool operator<(SomeClass const& sc1, SomeClass const& sc2) { return sc1.m_i < sc2.m_i; }
  friend std::ostream& operator<<(std::ostream& os, SomeClass const& sc) { return os << sc.m_i; }
};
