#include <iostream>
#include <cstdint>

void print_vector(const std::int32_t *, const std::int32_t);
void print_matrix(const std::int32_t *, const std::int32_t, const std::int32_t);

int main()
{
    // 1D-Array (Vector)
    int my_vector[3] = {1, 2, 3};

    // 2D-Array (Matrix)
    // Number of rows = 3
    // Number of columns = 2
    std::int32_t my_matrix1[3][2] = {1, 2, 3, 4, 5, 6};
    std::int32_t my_matrix2[4][2] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };

    print_vector(my_vector, sizeof(my_vector) / sizeof(std::int32_t));

    print_matrix(my_matrix1[0], sizeof(my_matrix1) / sizeof(int32_t), sizeof(my_matrix1[0]) / sizeof(int32_t));
    print_matrix(my_matrix2[0], sizeof(my_matrix2) / sizeof(int32_t), sizeof(my_matrix2[0]) / sizeof(int32_t));

    return 0;
}

/**
 * @brief Prints one-dimensional arrays formatted mathematically to the screen.
 *
 * @param vector One-dimensional array
 * @param LEN Length of the array (count of elements)
 */
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

/**
 * @brief Prints two-dimensional arrays formatted mathematically to the screen.
 *
 * @param matrix Two-dimensional array
 * @param LEN Complete Length of the matrix (count of all elements)
 * @param COL_LEN Length of one column (count of elements of a column)
 */
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
