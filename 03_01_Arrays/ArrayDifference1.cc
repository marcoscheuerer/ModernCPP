#include <iostream>
#include <cstdint>

int main()
{
    // char-array
    const char last_name[] = "Scheuerer";
    // iterates until zero-termination-sign "\0"
    std::cout << last_name << std::endl;

    // regular array
    const std::int32_t values[]{1, 2, 3};

    for(std::size_t i = 0; i < 4; i++)
    {
        std::cout << values[i] << std::endl;
    }

    std::cout << values << std::endl;

    return 0;
}
