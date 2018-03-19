#include "Table.h"
#include <iostream>

//static
Table Table::s_table;

void Table::print() const
{
  for (auto&& sc : m_table)
    std::cout << sc << std::endl;
}
