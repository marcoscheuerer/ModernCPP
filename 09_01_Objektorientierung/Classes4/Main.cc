#include <iostream>
#include <vector>
#include <cstdint>

#include "Image.h"

int main(int argc, char *argv[])
{
    Image my_image1(100, 400);

    std::cout << "Height: " << my_image1.get_height() << '\n';
    std::cout << "Width: " << my_image1.get_width() << '\n';

    // static_cast because datatype of matrix is (std::uint8_t) char => (int)0 == (char)' '
    std::cout << static_cast<std::int32_t>(my_image1.get_matrix().at(0).at(0)) << '\n';

    my_image1.set_pixel(10, 10, 255);
    my_image1.set_pixel(11, 11, 255);
    my_image1.set_pixel(10, 11, 255);
    my_image1.set_pixel(11, 10, 255);

    my_image1.save_image("image.bmp");

    return 0;
}
