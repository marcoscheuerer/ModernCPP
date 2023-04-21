#include <iostream>
#include <vector>

void print_info_vector(std::vector<int> &);
void print_vector(std::vector<int> &);

int main()
{
    std::vector<int> myVector = std::vector<int>(5, 0);

    print_info_vector(myVector);

    myVector.push_back(1);
    myVector.push_back(2);
    print_info_vector(myVector);

    myVector.reserve(100);
    print_info_vector(myVector);

    myVector.shrink_to_fit();
    print_info_vector(myVector);

    myVector.reserve(50);
    myVector.clear();
    print_info_vector(myVector);

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
