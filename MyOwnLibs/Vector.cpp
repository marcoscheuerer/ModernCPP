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
