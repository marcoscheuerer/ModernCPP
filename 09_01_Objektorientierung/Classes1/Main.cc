#include <iostream>

#include "Image.h"

int main(int argc, char *argv[])
{
    std::cout << "Before scope\n";
    {
        Image myImage(640, 480);
    }
    std::cout << "Out of scope\n";

    return 0;
}
