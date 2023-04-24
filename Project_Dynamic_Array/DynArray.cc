#include <cstdlib>
#include <iostream>
#include "DynArray.h"

DynamicArray create_dynamic_array(const double &value,
                                  const std::size_t &length)
{
    DynamicArray dynamic_array = {nullptr, 0};
    dynamic_array.m_length = length;
    dynamic_array.m_data = new double[length];
}

void push_back(DynamicArray &dynamic_array, const int &value)
{

}

void pop_back(DynamicArray &dynamic_array)
{

}
