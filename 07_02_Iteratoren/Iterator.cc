#include <iostream>
#include <iterator>
#include <vector>
#include <cstdint>

int main()
{
    auto my_vector = std::vector<std::int32_t>{0, 1, 2, 3, 4, 5};

    // ForwardIterator
    auto it1 = my_vector.begin();
    auto it2 = my_vector.end();

    for (; it1 != it2; ++it1)
    {
        // Works perfertly, no constant iterator!
        //*it1 = 0;
        std::cout << *it1 << ' ';
    }
    std::cout << '\n';

    // BidirectionalIterator
    auto it3 = my_vector.rbegin();
    auto it4 = my_vector.rend();

    for (; it3 != it4; ++it3)
    {
        std::cout << *it3 << ' ';
    }
    std::cout << '\n';

    // Constant ForwardIterator
    auto it5 = my_vector.cbegin();
    auto it6 = my_vector.cend();

    for (; it5 != it6; ++it5)
    {
        // Doesn't work, constant iterator!!!
        //*it5 = 0;
        std::cout << *it5 << ' ';
    }
    std::cout << '\n';

    // Constant BidirectionalIterator
    auto it7 = my_vector.crbegin();
    auto it8 = my_vector.crend();

    for (; it7 != it8; ++it7)
    {
        std::cout << *it7 << ' ';
    }
    std::cout << '\n';



    return 0;
}
