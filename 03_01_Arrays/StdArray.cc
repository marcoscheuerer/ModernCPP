#include <array>
#include <cstdint>
#include <iostream>
#include "../MyOwnLibs/Vector.hpp"

template <std::size_t N>
void print_vector(const std::array<int32_t, N> vector);

int main()
{
    constexpr static std::size_t ARR_LEN = 4U;
    const std::array<std::int32_t, ARR_LEN> array { 1, 2, 3, 4 };
    print_vector(array);

    constexpr static std::size_t ARR_LEN2 = 6U;
    const std::array<std::int32_t, ARR_LEN2> array2 { 1, 2, 3, 4, -1, -2 };
    print_vector(array2);

    return 0;
}

template <std::size_t N>
void print_vector(const std::array<int32_t, N> vector)
{
    std::cout << "[ ";

    for (std::int32_t i = 0; i < vector.size(); i++)
    {
        std::cout << vector[i];

        if (i < vector.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
    std::cout << std::endl;
}
