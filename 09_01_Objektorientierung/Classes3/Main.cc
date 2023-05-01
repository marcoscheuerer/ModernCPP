#include <iostream>
#include <vector>
#include <cstdint>

#include "Image.h"

int main(int argc, char *argv[])
{
    Image my_image1(100, 400);
    my_image1.save_image("image.bmp");

    return 0;
}
