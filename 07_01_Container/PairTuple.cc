#include <iostream>
#include <tuple>
#include <utility>
#include <cstdint>
#include <string>
#include <vector>

using UserData = std::tuple<std::string, std::string, std::int32_t>;

int main()
{
    auto my_pair = std::pair<std::string, float>{"PI", 3.1415F};

    std::cout << my_pair.first << ": " << my_pair.second << '\n';
    std::cout << std::endl;

    auto my_tuple = std::tuple<std::int32_t, float, std::string, float>{1885, 1.5F, "PI", 3.1415F};
    std::cout << std::get<0>(my_tuple) << '\n';
    std::cout << std::get<1>(my_tuple) << '\n';
    std::cout << std::get<2>(my_tuple) << '\n';
    std::cout << std::get<3>(my_tuple) << '\n';

    //const auto data = std::vector<std::tuple<std::string, std::string, std::int32_t>>{{"Andreas", "Scheuerer", 39},
    const auto data = std::vector<UserData>{{"Andreas", "Scheuerer", 39},
                                            {"Marco", "Scheuerer", 44},
                                            {"Lena", "Engel", 46}};

    for (const auto &d : data)
    {
        std::cout << "Vorname : " << std::get<0>(d) << std::endl;
        std::cout << "Nachname: " << std::get<1>(d) << std::endl;
        std::cout << "Alter   : " << std::get<2>(d) << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
