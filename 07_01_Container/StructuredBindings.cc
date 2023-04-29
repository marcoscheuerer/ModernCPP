#include <iostream>
#include <map>
#include <string>
#include <tuple>

void get_data_old(int &a, std::string &b, double &c)
{
    a = 1337;
    b = "data";
    c = 1337.0;
}

std::tuple<int, std::string, double> get_data()
{
    return std::make_tuple(1337, "data", 1337.0);
}

int main()
{
    int a;
    std::string b;
    double c;

    get_data_old(a, b, c);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << std::endl;

    // Old access by get<T>()
    std::cout << std::get<0>(get_data()) << std::endl;
    std::cout << std::get<1>(get_data()) << std::endl;
    std::cout << std::get<2>(get_data()) << std::endl;
    std::cout << std::endl;

    // New access by Structured Binding (better readable, easier to use)
    const auto [id, name, score] = get_data();
    std::cout << id << std::endl;
    std::cout << name << std::endl;
    std::cout << score << std::endl;
}
