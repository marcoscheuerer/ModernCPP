#include "Vector.hpp"
#include <iostream>

void print_vector(const std::int32_t *vector, const std::int32_t LEN)
{
    std::cout << "[ ";

    for (std::int32_t i = 0; i < LEN; i++)
    {
        std::cout << vector[i];

        if (i < LEN - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
    std::cout << std::endl;
}

int vector_maximum_value(const std::int32_t *vector, const std::size_t LEN)
{
    if (LEN == 0)
        return INT32_MAX;

    int result = vector[0];

    for (std::size_t i = 1; i < LEN; i++)
    {
        if (vector[i] > result)
        {
            result = vector[i];
        }
    }

    return result;
}
