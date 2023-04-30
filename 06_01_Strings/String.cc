#include <iostream>
#include <string>
#include <cstdint>

int main()
{
    std::string s = "Hello people!";

    std::cout << s << '\n';

    // C++20/C++2a: starts_with()
    std::cout << std::boolalpha << s.starts_with("Hell") << '\n';

    // C++20/C++2a: ends_with()
    std::cout << std::boolalpha << s.ends_with("people") << '\n';

    // C++23: contains()
    //std::cout << std::boolalpha << s.contains("llo") << '\n';

    std::cout << std::boolalpha << s.substr(2, 3) << '\n';

    const auto index = s.find("hello");
    std::cout << index << '\n';

    if (index != std::string::npos)
    {
        std::cout << "Found substring!\n";
    }
    else
    {
        std::cout << "Did not find substring!\n";
    }

    std::cout << s.empty() << '\n';
    std::cout << s.length() << '\n';

    return 0;
}
