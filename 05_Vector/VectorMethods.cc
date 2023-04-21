#include <iostream>
#include <vector>

void print_vector_info(const std::vector<int> &vec)
{
        std::cout << "Size: " << vec.size() << std::endl;
        std::cout << "Capacity: " << vec.capacity() << std::endl;
        std::cout << "Is Empty: " << std::boolalpha << vec.empty() << std::endl;
}

int main()
{
    std::vector<int> my_vector;

    print_vector_info(my_vector);

    return 0;
}
