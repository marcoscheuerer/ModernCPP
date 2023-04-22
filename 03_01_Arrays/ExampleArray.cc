#include <cstdint>
#include <iostream>

// Store in an array "array2" the reversed elements of "array1";
void reverse_elements_in_new_array(const std::int32_t *OLD_ARRAY, std::int32_t *newArray, const std::int32_t LEN)
{
    for (std::int32_t i = 0; i < LEN; ++i)
    {
        newArray[i] = OLD_ARRAY[LEN - i - 1];
        std::cout << newArray[i] << " " << OLD_ARRAY[LEN - i - 1] << std::endl;
    }
}

void print_array(const std::int32_t *ARRAY, const std::int32_t LEN)
{
    std::cout << "[ ";

    for (std::int32_t i = 0; i < LEN; i++)
    {
        std::cout << ARRAY[i];

        if (i < LEN - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
    std::cout << std::endl;
}

int main()
{
    constexpr static auto LEN = std::uint32_t{4};

    std::int32_t array1[LEN] { 1, 4, 7, 12 };
    std::int32_t array2[LEN] {};

    print_array(array1, LEN);

    reverse_elements_in_new_array(array1, array2, LEN);
    print_array(array1, LEN);
    print_array(array2, LEN);

    return 0;
}
