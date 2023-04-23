#include <iostream>
#include <cstdint>
#include "../MyOwnLibs/Matrix.hpp"
#include "../MyOwnLibs/Vector.hpp"

// Compute the sum for every column

void sum_columns_of_matrix(const std::int32_t *, const std::int32_t, const std::int32_t);

int main()
{
    constexpr static auto NUM_ROWS = std::int32_t {3};
    constexpr static auto NUM_COLS = std::int32_t {2};

    std::int32_t my_matrix[NUM_ROWS][NUM_COLS] = { {1, 2},
                                                   {3, 4},
                                                   {5, 6} };

    print_matrix(*my_matrix, sizeof(my_matrix) / sizeof(std::int32_t),
                 sizeof(*my_matrix) / sizeof(std::int32_t));

    sum_columns_of_matrix(*my_matrix, sizeof(my_matrix) / sizeof(std::int32_t),
                          sizeof(*my_matrix) / sizeof(std::int32_t));

    return 0;
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
