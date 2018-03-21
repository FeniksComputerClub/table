#pragma once

#include <iostream>

template<typename T>
struct Register
{
  Register();
};

template<int n>
struct Interval
{
  static constexpr int value = n;
  static Register<Interval<n>> s_r;
};

struct SomeClass
{
  int m_i;

 public:
  template<int n>
  inline constexpr SomeClass(Interval<n> const&);
  friend bool operator<(SomeClass const& sc1, SomeClass const& sc2) { return sc1.m_i < sc2.m_i; }
  friend std::ostream& operator<<(std::ostream& os, SomeClass const& sc) { return os << sc.m_i; }
};

#include "Table.h"

inline void unused(void*)
{
}

template<int n>
constexpr SomeClass::SomeClass(Interval<n> const&) : m_i(n)
{
  unused((void*)&Interval<n>::s_r);
}

template<int n>
Register<Interval<n>> Interval<n>::s_r;

template<typename T>
Register<T>::Register()
{
  T in;
  SomeClass sc(in);
  std::cout << "Calling add(" << T::value << ')' << std::endl;
  Table::instance().add(&sc);
}
