#include <iostream>

int main()
{
    int my_value = 5;
    // Different Initialization of Pointers (Declaration and assignation)
    int* ptr_1 = &my_value;
    int * ptr_2 = &my_value;
    const int *ptr_3 = &my_value;

    *ptr_1 = 2;
    // No write access at constant pointers (only readable)
    //*ptr_2 = 3;

    std::cout << "&my_value: " << &my_value << std::endl;
    std::cout << "my_value : " << my_value << std::endl;
    std::cout << std::endl;

    // Prints address of my_value stored in pointer
    std::cout << "ptr_1    : " << ptr_1 << std::endl;
    std::cout << "ptr_2    : " << ptr_2 << std::endl;
    std::cout << "ptr_3    : " << ptr_3 << std::endl;
    std::cout << std::endl;

    // prints value of my_value, dereferenced address in pointer (*)
    std::cout << "*ptr_1   : " << *ptr_1 << std::endl;
    std::cout << "*ptr_2   : " << *ptr_2 << std::endl;
    std::cout << "*ptr_3   : " << *ptr_3 << std::endl;
    std::cout << std::endl;

    // prints address of pointers (& address operator, reference)
    std::cout << "&ptr_1   : " << &ptr_1 << std::endl;
    std::cout << "&ptr_2   : " << &ptr_2 << std::endl;
    std::cout << "&ptr_3   : " << &ptr_3 << std::endl;
    std::cout << std::endl;

    // prints size of pointer
    std::cout << "sizeof(ptr_1): " << sizeof(ptr_1) << " Bytes" << std::endl;
    std::cout << std::endl;

    return 0;
}
