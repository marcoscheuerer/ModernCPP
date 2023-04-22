#include <iostream>

// Post-increment: i++;
// Post-decrement: i--;
// Pre-increment:  ++i;
// Pre-decrement:  --i;

void func(int val)
{
    std::cout << "Value inside the function: " << val << std::endl;
}

int main()
{
    int val = 0;

    std::cout << "Value outside the function: " << val << std::endl;
    // change of value after function call!!!
    func(val++);
    std::cout << "Value outside the function: " << val << std::endl;

    return 0;
}
