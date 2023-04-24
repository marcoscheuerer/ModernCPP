#include <iostream>
#include <cstdint>

int array_maximum(const std::int32_t *array, const std::size_t length)
{
    if (length == 0)
        return INT32_MAX;

    int result = array[0];

    for (std::size_t i = 1; i < length; i++)
    {
        if (array[i] > result)
        {
            result = array[i];
        }
    }

    return result;
}

void print_name(const char *name)
{
    std::cout << name << std::endl;
}

int main()
{
    constexpr std::size_t array_size = 7U;
    const char* my_name = "Marco";

    // Heap Allocation
    auto *p = new std::int32_t[array_size] {13, 1, 5, 7, 11, 81, 9};

    std::cout << "Maximum value: " << array_maximum(p, array_size) << std::endl;
    print_name(my_name);

    return 0;
}
