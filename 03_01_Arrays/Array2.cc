#include <iostream>
#include <cstdint>

void print_array(const float *, const int);
void input_array(float *, const int);
void add_arrays(const float *, const float *, float *, const int);

int main()
{
    // Length is never negative -> always unsigned variant of datatype
    constexpr auto LEN = std::uint32_t{3U};

    //std::cout << LEN << std::endl;
    float vector1[LEN]{};
    float vector2[LEN]{};
    float sumVector[LEN]{};

    std::cout << "Enter the values for vector 1: \n";

    input_array(vector1, LEN);
    print_array(vector1, LEN);
    input_array(vector2, LEN);
    print_array(vector2, LEN);
    add_arrays(vector1, vector2, sumVector, LEN);
    print_array(sumVector, LEN);

    return 0;
}

void print_array(const float *ARRAY, const int LEN)
{
    std::cout << "[ ";

    for (std::int32_t i = 0; i < LEN; ++i)
    {
        std::cout << ARRAY[i];

        if (i < LEN - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " ]" << std::endl;
    std::cout << std::endl;
}

void input_array(float *array, const int LEN)
{
    for (std::int32_t i = 0; i < LEN; ++i)
    {
        std::cout << "Value " << i + 1 << " of array: ";
        std::cin >> array[i];
    }
}

void add_arrays(const float *ARRAY1, const float *ARRAY2, float *sumArray, const int LEN)
{
    for (std::int32_t i = 0; i < LEN; i++)
    {
        sumArray[i] = ARRAY1[i] + ARRAY2[i];
    }
}
