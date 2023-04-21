#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int> &);
void print_info_vector(const std::vector<int> &);
bool sort_ascending(const int, const int);
bool sort_descending(const int, const int);
void sort_vector_ascending(std::vector<int> &);
void sort_vector_descending(std::vector<int> &);

int main()
{
    std::vector<int> myVector = std::vector<int>{ 33, 2, 18, 6, -3 };

    print_info_vector(myVector);

    sort_vector_descending(myVector);
    print_vector(myVector);

    sort_vector_ascending(myVector);
    print_vector(myVector);

    return 0;
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

bool sort_ascending(const int i, const int j)
{
    return (i < j);
}

bool sort_descending(const int i, const int j)
{
    return (i > j);
}

void sort_vector_ascending(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
}

void sort_vector_descending(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end(), sort_descending);
}
