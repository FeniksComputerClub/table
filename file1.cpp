#include <iostream>
#include "SomeClass.h"
#include "Table.h"

int main()
{
  Table::instance().print();
  return 0;
}
