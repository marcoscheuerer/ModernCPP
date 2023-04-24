#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array(const std::array<std::int32_t, N> arr)
{
    std::cout << arr[i] << std::endl;
}

int main()
{
    constexpr std::size_t arr_len1 = 4U;
    const std::array<std::int32_t, arr_len1> arr1 = { 1, 2, 3, 4 };



    return 0;
}
