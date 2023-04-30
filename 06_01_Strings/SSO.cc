#include <iostream>
#include <string>

int main()
{
    // Stack address: 0x00007fff........
    // Heap address:  0x00005555........

    // Empty String -> puts string to stack
    // (gdb) x/1gx &str
    // 0x7fffffffd9b0:	0x00007fffffffd9c0
    {
        auto str = std::string();
        auto size = sizeof(str);
        auto capacity = str.capacity();

        std::cout << "sizeof  : " << size << std::endl;
        std::cout << "Capacity: " << capacity << std::endl;
    }

    // Before Threshold String -> puts string to stack
    // (gdb) x/1gx &str
    // 0x7fffffffd9b0:	0x00007fffffffd9c0
    {
        auto str = std::string(15, '*');
        auto size = sizeof(str);
        auto capacity = str.capacity();

        std::cout << "sizeof  : " << size << std::endl;
        std::cout << "Capacity: " << capacity << std::endl;
    }

    // After Threshold String -> puts string to heap
    // (gdb) x/1gx &str
    // 0x7fffffffd9b0:	0x000055555556b2c0
    {
        auto str = std::string(16, '*');
        auto size = sizeof(str);
        auto capacity = str.capacity();

        std::cout << "sizeof  : " << size << std::endl;
        std::cout << "Capacity: " << capacity << std::endl;
    }

    return 0;
}
