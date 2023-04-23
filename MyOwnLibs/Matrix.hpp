#ifndef __MATRIX_HPP
#define __MATRIX_HPP

#include <cstdint>

/**
 * @brief Prints two-dimensional arrays formatted mathematically to the screen.
 *
 * @param matrix Two-dimensional array
 * @param LEN Complete Length of the matrix (count of all elements)
 * @param COL_LEN Length of one column (count of elements of a column)
 */
void print_matrix(const std::int32_t *matrix, const std::int32_t LEN,
                  const std::int32_t COL_LEN);


/**
 * @brief Calculates the sums of the columns of a matrix and prints it
 * as a vector on the screen
 *
 * @param matrix Two-dimensional array
 * @param LEN Complete Length of the matrix (count of all elements)
 * @param COUNT_COL Count of columns in the matrix
 */
void sum_columns_of_matrix(const std::int32_t *matrix, const std::int32_t LEN,
                           const std::int32_t COUNT_COL);

#endif
