#include <iostream>
#include <cstdint>

int main()
{
    // pointer to address of object of type int in heap
    auto *p = new std::int32_t{4};
    std::cout << p << std::endl;
    std::cout << *p << std::endl;

    delete p;
    p = nullptr;

    if (p != nullptr) {
        std::cout <<  p << std::endl;
        std::cout << *p << std::endl;
    }
    else
    {
        std::cout << "p does not own the memory!\n";
    }

    return 0;
}
