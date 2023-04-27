#include <iostream>
#include <vector>
#include <cstdint>

// makes in loop a copy of elements
// 1. auto val : vec => std::int32_t val : vec
// no copy with reference
// 2. auto &val : vec => std::int32_t &val : vec
// copy but only readable
// 3. const auto val : vec => const std::int32_t val : vec
// no copy, only readable reference
// 4. const auto &val : vec => const std::int32_t &val : vec

int main()
{
    auto my_vector = std::vector<std::int32_t>{1, 2, 3, 4, 5};

    for (auto val : my_vector)
    {
        std::cout << val << std::endl;
    }

    for (auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }

    for (const auto val : my_vector)
    {
        std::cout << val << std::endl;
    }

    return 0;
}
