#include <iostream>

#include "Circle.h"

int main()
{
    Circle myCircle(3);
    Circle myCircle2(5);

    //std::cout << myCircle.get_pi() << std::endl;
    // Better visibilty of static method
    std::cout << Circle::get_pi() << std::endl;

    return 0;
}
