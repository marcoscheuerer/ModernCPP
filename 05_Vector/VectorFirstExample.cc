#include <iostream>
#include <vector>

void print_vector(const std::vector<int32_t> &vec);

int main()
{
    auto my_vector = std::vector<int32_t>(5, 0);
    int32_t value;

    print_vector(my_vector);

    my_vector[0] = 1337;
    print_vector(my_vector);

    my_vector.push_back(42);
    print_vector(my_vector);

    my_vector.pop_back();
    my_vector.pop_back();
    my_vector.pop_back();
    print_vector(my_vector);

    return 0;
}

void print_vector(const std::vector<int32_t> &vec)
{
    // for (auto value : vec)
    // {
    //     std::cout << value << ", ";
    // }

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec.at(i);

        if (i < vec.size() - 1)
            std::cout << ", ";
    }

    std::cout << std::endl;
}
