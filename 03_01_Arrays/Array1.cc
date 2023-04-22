#include <iostream>
#include <cstdint>

void print_array(const std::int32_t *, const int);

int main()
{
    std::int32_t array1[5] = {10, 11, 12, 13, 14};

    // Read operations
    std::cout << array1[0] << std::endl;
    std::cout << array1[2] << std::endl;
    std::cout << array1[3] << std::endl;

    print_array(array1, 5);

    std::int32_t array2[] = {20, 21, 22};
    print_array(array2, sizeof(array2) / sizeof(int32_t));

    std::int32_t array3[3];
    // that doesn't work with braced initialization!
    // -> single assignment or array-class-library-functions
    // array3 = { 20, 21, 22 };
    // Write operations
    array3[0] = 20;
    array3[1] = 21;
    array3[2] = 22;
    print_array(array3, sizeof(array3) / sizeof(int32_t));

    return 0;
}

void print_array(const std::int32_t *ARRAY, const int LENGTH)
{
    std::cout << "[ ";

    for (std::size_t i = 0; i < LENGTH; i++)
    {
        std::cout << ARRAY[i];

        if (i < LENGTH - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}
