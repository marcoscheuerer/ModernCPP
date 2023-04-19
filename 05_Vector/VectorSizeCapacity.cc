#include <iostream>
#include <cstdint>
#include <vector>
#include <iomanip>

void print_vector(std::vector<int32_t> &);

int main()
{
    // Erstellt einen leeren Vektor vom Typ int32_t
    auto my_vector = std::vector<int32_t>{};

    for (std::size_t i = 1; i <= 20; i++)
    {
        my_vector.push_back(i);

        print_vector(my_vector);
    }

}

// &vec - Objektreferenz auf den Vektor vec
void print_vector(std::vector<int32_t> &vec)
{
    std::cout << std::setw(10) << "Size: " << std::setw(2) << vec.size();
    std::cout << std::setw(12) << "Capacity: " << std::setw(2) << vec.capacity();

    std::cout << std::setw(5);

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        std::cout << vec.at(i);

        if (i < vec.size() - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;
}
