#include <iostream>
#include "Table.h"

SomeClass foo{Interval<42>()};

int main()
{
  Table::instance().print();

  SomeClass sc3{Interval<30>()};
  SomeClass sc4{Interval<23>()};
  Interval<100> in;

  return 0;
}
