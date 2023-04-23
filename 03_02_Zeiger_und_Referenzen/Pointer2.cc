#include <iostream>


int main()
{
    // Heap allocation
    int *ptrVal = new int {4};
    //int *ptrVal = new int;
    //*ptrVal = 4;

    std::cout << "Memory address of ptrVal                    : " << &ptrVal << std::endl;
    std::cout << "Memory address of pointed value             : " <<  ptrVal << std::endl;
    std::cout << "Value of the memory address ptrVal points to: " << *ptrVal << std::endl;
    std::cout << std::endl;

    *ptrVal = 1337;
    std::cout << "Memory address of ptrVal                    : " << &ptrVal << std::endl;
    std::cout << "Memory address of pointed value             : " <<  ptrVal << std::endl;
    std::cout << "Value of the memory address ptrVal points to: " << *ptrVal << std::endl;

    // Heap deallocation
    delete ptrVal;
    ptrVal = NULL;

    return 0;
}
