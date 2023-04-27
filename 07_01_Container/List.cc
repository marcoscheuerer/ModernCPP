#include <iostream>
#include <list>
#include <cstdint>

int main()
{
    auto lst = std::list<std::int32_t>{1, 2, 3};

    auto it_lst = lst.begin();

    for (std::size_t i = 0; i < lst.size(); ++i)
    {
        std::cout << *it_lst << ' ';
        ++it_lst;
    }

    std::cout << std::endl;

    return 0;
}
