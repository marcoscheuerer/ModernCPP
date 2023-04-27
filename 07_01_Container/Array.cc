#include <array>
#include <iostream>
#include <vector>

constexpr static auto ARRAY_LEN = 3U;

int main()
{
    const auto vec = std::vector<std::int32_t>{1, 2, 3};
    const auto arr = std::array<std::int32_t, ARRAY_LEN>{1, 2, 3};

    std::cout << vec.size() << '\n';
    std::cout << arr.size() << '\n';

    std::cout << vec.empty() << '\n';
    std::cout << arr.empty() << '\n';

    for (auto it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it;

        if (it != vec.end()-1)
            std::cout << ", ";
        else
            std::cout << '\n';
    }

    for (auto it = arr.begin(); it != arr.end(); ++it)
    {
        std::cout << *it;

        if (it != arr.end()-1)
            std::cout << ", ";
        else
            std::cout << '\n';
    }

    for (auto &val : vec)
    {
        std::cout << val;

        if (val != vec[vec.size()-1])
            std::cout << ", ";
        else
            std::cout << '\n';
    }


    return 0;
}
