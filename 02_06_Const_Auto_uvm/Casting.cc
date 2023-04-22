#include <iostream>

// C++: static_cast<newDtype>(varName)
// C:   (newDtype)(varName)

int main()
{
    int a = 12;

    // implicit casting
    float b = a;
    // explicit casting
    float c_cast = (float)a;                // obsolete, don't use
    float cpp_cast = static_cast<float>(a);

    return 0;
}
