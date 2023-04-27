#include <iostream>
#include <cstdint>
#include <vector>
#include <list>
#include <iterator>

int main()
{
    auto my_vector = std::vector<std::int32_t>{0, 1, 2, 3, 4, 5};
    auto my_list = std::list<std::int32_t>{0, 1, 2, 3, 4, 5};

    auto vec_it = my_vector.begin();
    auto list_it = my_list.begin();

    std::advance(vec_it, 2);     // it += 2;
    std::advance(list_it, 2);

    std::cout << "Vector[2] = " << *vec_it << '\n';
    std::cout << "List[2] = " << *list_it << '\n';

    auto dist1 = std::distance(vec_it, my_vector.end());
    auto dist2 = std::distance(my_vector.begin(), vec_it);
    std::cout << dist1 << std::endl;
    std::cout << dist2 << std::endl;
    std::cout << std::endl;

    auto prev = std::prev(vec_it);
    std::cout << *prev << std::endl;
    std::cout << *vec_it << std::endl;
    auto next = std::next(vec_it);
    std::cout << *next << std::endl;
    std::cout << *vec_it << std::endl;

    return 0;
}
