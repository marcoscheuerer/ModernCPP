#include "Matrix.hpp"
#include "Vector.hpp"
#include <iostream>


void print_matrix(const std::int32_t *matrix, const std::int32_t LEN,
                  const std::int32_t COL_LEN)
{
    std::cout << "[ [";

    for (std::int32_t i = 0; i < LEN; i++)
    {
        std::cout << matrix[i];

        if ((i + 1) % COL_LEN == 0)
        {
            std::cout << "]";
            if (i < LEN - 1)
            {
                std::cout << ",\n  [";
            }
        }
        else
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
    std::cout << std::endl;
}


void sum_columns_of_matrix(const std::int32_t *matrix, const std::int32_t LEN,
                           const std::int32_t COUNT_COL)
{
    const std::int32_t COUNT_ROW = LEN / COUNT_COL;
    std::int32_t sum_matrix[COUNT_COL] { };

    for (std::int32_t i = 0; i < COUNT_COL; i++)
    {
        for (std::int32_t j = 0; j < COUNT_ROW; j++)
        {
            sum_matrix[i] += matrix[i + j * COUNT_COL];
        }
    }

    print_vector(sum_matrix, COUNT_COL);
}
