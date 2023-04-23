#include <iostream>
#include <cstdint>

void print_array(const std::int32_t [], const std::size_t LEN);

int main()
{
    constexpr static std::size_t ARR_LEN = 4U;
    const std::int32_t values[]{1, 2, 3};

    print_array(values, ARR_LEN);

    return 0;
}

void print_array(const std::int32_t array[], const std::size_t LEN)
{
    for (std::size_t i = 0; i < LEN; i++)
    {
        std::cout << array[i] << std::endl;
    }
}
