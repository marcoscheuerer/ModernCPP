#include <iostream>

int main()
{
    // Zero-Termination-Symbol "<String>\0"
    std::cout << "HEllo WOrld!";
    std::cout << std::endl;

    const char first_name[] = { 'M', 'a', 'r', 'c', 'o', '\0' };
    std::cout << first_name << std::endl;

    char last_name[] = "Scheuerer";
    std::cout << last_name << std::endl;

    last_name[0] = 's';

    for (std::int32_t i = 0; i < sizeof(last_name) - 1; i++)
    {
        std::cout << "Char[" << i << "] = " << last_name[i] << std::endl;
    }

    return 0;
}
