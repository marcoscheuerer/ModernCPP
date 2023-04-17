#include <cstdint>
#include <iostream>

int main()
{
    const char LEFT = 'a';
    const char RIGHT = 'd';

    char move;
    std::cin >> move;

    if (LEFT == move)
    {
        std::cout << "The player moved to the left!" << std::endl;
    }
    else if (RIGHT == move)
    {
        std::cout << "The player moved to the right!" << std::endl;
    }
    else
    {
        std::cout << "Unrecognized move!" << std::endl;
    }

    return 0;
}
