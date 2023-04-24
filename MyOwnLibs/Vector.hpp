#ifndef __VECTOR_HPP
#define __VECTOR_HPP

#include <cstdint>

/**
 * @brief Prints one-dimensional arrays formatted mathematically to the screen.
 *
 * @param vector One-dimensional array
 * @param LEN Length of the array (count of elements)
 */
void print_vector(const std::int32_t *vector, const std::int32_t LEN);

/**
 * @brief Search for the maximum value of the dynamic array
 *
 * @param vector One-dimensional array
 * @param LEN Length of the array
 * @return Returns the maximum value
 */
int vector_maximum_value(const std::int32_t *vector, const std::size_t LEN);

#endif
