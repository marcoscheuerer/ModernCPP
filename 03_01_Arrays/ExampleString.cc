#include <iostream>
#include <cstdint>

// Output the length of the char array (String)
// The '\0' is not included in the length value

std::int32_t count_elements_of_array(const char *);

int main()
{
    char array1[] = "Hello World!";
    char array2[] = { 'A', 'B', 'C', '\0' };

    std::cout << count_elements_of_array(array1) << std::endl;
    std::cout << count_elements_of_array(array2) << std::endl;

    return 0;
}

std::int32_t count_elements_of_array(const char *array)
{
    std::int32_t counter = 0;

    while (array[counter++] != '\0');

    return counter;
}
