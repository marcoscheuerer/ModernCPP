#include <iostream>
#include <vector>

void print_info_vector(std::vector<int> &);
void print_vector(std::vector<int> &);

int main()
{
    auto myVector = std::vector<int>{ 1, 2, 3, 4, 5 };

    print_info_vector(myVector);

    // Saves the address of the vector-object in the auto (pointer) variable p
    auto p = myVector.data();

    std::cout << *p << std::endl;
    std::cout << *(p+3) << std::endl;
    p += 1;
    std::cout << *p << std::endl;
    std::cout << std::endl;

    // Reference f to first element of dynamic array
    auto& f = myVector.front();
    std::cout << f << std::endl;

    // Important: Only Pointer f to last element of dynamic array
    // (no write access to element of object)
    auto e = myVector.back();
    std::cout << e << std::endl;

    e = -5;
    print_info_vector(myVector);

    f = -1;
    print_info_vector(myVector);

    auto begin = myVector.begin();
    auto end = myVector.end();

    // [begin, end)
    // begin is "inclusive", end is "exclusive" -> points 1 element further (not valid range)
    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;
    std::cout << *(end-1) << std::endl;

    for (auto it = myVector.begin(); it < myVector.end(); it++)
    {
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    return 0;
}

void print_info_vector(std::vector<int> &vec)
{
    print_vector(vec);

    std::cout << "Size: " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
    std::cout << "Is empty: " << std::boolalpha << vec.empty() << std::endl;

    std::cout << std::endl;
}

void print_vector(std::vector<int> &vec)
{
    std::cout << "[ ";

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec.at(i);

        if (i < vec.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
}
