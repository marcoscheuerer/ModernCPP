#include <algorithm>
#include <cstdint>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

#include "Timer.h"

constexpr static auto NUM_RUNS = std::size_t{5};
constexpr static auto ELEMENTS = std::size_t{100'000};

// #define USING_VEC

#ifdef USING_VEC
using Container_t = std::vector<std::int32_t>;
#else
using Container_t = std::list<std::int32_t>;
#endif

/*
1. Insert
2. Delete
3. Iterate over all
3. Random Index

Vector:
Insert:
Delete
Sum:
Random Index:
=

List:
Insert:
Delete
Sum:
Random Index:
=
*/

Container_t generate_container()
{
    auto gen = std::mt19937{0};
    auto dist = std::uniform_int_distribution<std::int32_t>{-100, 100};

    auto c = Container_t(ELEMENTS, 0);
    std::generate(c.begin(), c.end(), [&]() { return dist(gen); });

    return c;
}
