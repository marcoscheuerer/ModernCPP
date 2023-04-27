#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    auto my_matrix = std::vector<std::vector<std::uint32_t>> { {1, 2},
                                                               {3, 4},
                                                               {5, 6} };

    auto my_matrix_2 = std::vector<std::vector<std::int32_t>>(3, std::vector<int32_t>(2, 0));

    std::vector<std::vector<std::int32_t>> my_matrix_3 = std::vector<std::vector<std::int32_t>>{ {1, 2},
                                                                                                 {3, 4},
                                                                                                 {5, 6} };

    std::vector<std::vector<std::int32_t>> my_matrix_4 = std::vector<std::vector<std::int32_t>>(3, std::vector<std::int32_t>(2, 0));

    for (std::size_t i = 0; i < 3; i++)
    {
        for (std::size_t j = 0; j < 2; j++)
            std::cout << my_matrix.at(i).at(j) << std::endl;
    }

    for (const auto &row : my_matrix_2)
    {
        for (const auto val : row)
            std::cout << val << std::endl;
    }

}
