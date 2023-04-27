#include <iostream>
#include <vector>
#include <cstdint>

#include "Image.h"

int main(int argc, char *argv[])
{
    // std::cout << "Before scope\n";
    // {
    //     Image myImage(640, 480);
    // }
    // std::cout << "Out of scope\n";
    std::uint32_t width = 10;
    std::uint32_t height = 5;

    // matrix on stack
    std::vector<std::vector<std::uint32_t>> my_vector(10, std::vector<std::uint32_t>(height, 0));
    // matrix on heap
    std::vector<std::vector<std::uint32_t>> *ptr_vector = new std::vector<std::vector<uint32_t>>(width, std::vector<std::uint32_t>(height, 0));

    for (auto it = my_vector.begin(); it <= my_vector.end(); it++)
    {

    }

    return 0;
}
