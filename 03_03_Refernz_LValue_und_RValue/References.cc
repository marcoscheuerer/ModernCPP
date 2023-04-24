#include <iostream>

void f1(int v)
{
    std::cout << "f1: " << v << std::endl;
    std::cout << &v << std::endl;
}

void f2(int *v)
{
    std::cout << "f2: " << *v << std::endl;
    std::cout << v << std::endl;
}

void f3(int &v)
{
    std::cout << "f3: " << v << std::endl;
    std::cout << &v << std::endl;
}

int main()
{
    int a = 2;
    f1(a);
    std::cout << std::endl;
    f2(&a);
    std::cout << std::endl;
    f3(a);

    return 0;
}
