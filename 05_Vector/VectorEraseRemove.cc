#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int> &);
void print_info_vector(const std::vector<int> &);
void delete_vector(std::vector<int> &);
void delete_item_before_cpp20(std::vector<int> &, const int);
void delete_negative_items_before_cpp20(std::vector<int> &);
bool is_negative(const int);

int main()
{
    std::vector<int> myVector = std::vector<int>{ 33, 2, -18, 6, -3 };

    print_info_vector(myVector);
    delete_item_before_cpp20(myVector, 33);
    print_vector(myVector);
    delete_negative_items_before_cpp20(myVector);
    print_vector(myVector);
    delete_vector(myVector);
    print_vector(myVector);

    return 0;
}

bool is_negative(const int value)
{
    return (value < 0);
}

void delete_vector(std::vector<int> &vec)
{
    vec.erase(vec.begin(), vec.end());
}

void delete_item_before_cpp20(std::vector<int> &vec, const int value)
{
    // move elements with value to the end and returns iterator-position
    // of the first moved element
    auto removeIt = std::remove(vec.begin(), vec.end(), value);
    // erase elements from the returned iterator-position of the moved elements
    // to the last iterator-position of the vector
    vec.erase(removeIt, vec.end());
}

void delete_negative_items_before_cpp20(std::vector<int> &vec)
{
    vec.erase(std::remove_if(vec.begin(), vec.end(), is_negative), vec.end());
}

void print_vector(const std::vector<int> &vec)
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
    std::cout << std::endl;
}

void print_info_vector(const std::vector<int> &vec)
{
    print_vector(vec);

    std::cout << "Size    : " << vec.size() << std::endl;
    std::cout << "Capacity: " << vec.capacity() << std::endl;
    std::cout << "Is empty: " << vec.empty() << std::endl;

    std::cout << std::endl;
}
