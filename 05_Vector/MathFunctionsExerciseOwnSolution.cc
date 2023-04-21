#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

// Exercise:
// 1. Schreibe eine Funktion, die einen Vektor mit aufsteigendem Wert füllt
//    void fill_vector(std::vector<double> &vec)
// 2. Schreibe eine Funktion, die die Werte eines Vektors ausgibt
//    void print_vector(const std::vector<double> &vec)
// 3. Schreibe Funktionen, die die:
//    - Exponential
//    - Natural Logarithm
//    Werte von einem double Vektor berechnen
//    void double_vector_exp(std::vector<double> &vec)
//    verwendet std::exp, std::log aus <cmath>
//    [exp(0.0), exp(1.0), ...]
//    [log(0.0), log(1.0), ...]

void fill_vector(std::vector<double> &);
void print_vector(const std::vector<double> &);
void exp_vector(std::vector<double> &);
void log_vector(std::vector<double> &);

int main()
{
    auto my_vector = std::vector<double>(3, 0.0);

    fill_vector(my_vector);
    print_vector(my_vector);

    exp_vector(my_vector);
    print_vector(my_vector);

    log_vector(my_vector);
    print_vector(my_vector);
}

/**
 * @brief Fills the elements of a dynamic array with ascending values
 * starting with 1
 *
 * @param vec dynamic array of type double
 */
void fill_vector(std::vector<double> &vec)
{
    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec.at(i) = static_cast<double>(i + 1);
    }
}

/**
 * @brief Prints the elements of a dynamic array at screen
 *
 * @param vec dynamic array of type double
 */
void print_vector(const std::vector<double> &vec)
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

/**
 * @brief Overwrites the values of a dynamic array with the exponential values
 *
 * @param vec dynamic array of type double
 */
void exp_vector(std::vector<double> &vec)
{

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec.at(i) = std::exp(vec.at(i));
    }

}

/**
 * @brief Overwrites the values of a dynamic array with the logarithm values
 *
 * @param vec dynmic array of type double
 */
void log_vector(std::vector<double> &vec)
{

    for (std::size_t i = 0; i < vec.size(); i++)
    {
        vec.at(i) = std::log(vec.at(i));
    }

}
