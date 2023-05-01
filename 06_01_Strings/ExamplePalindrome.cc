#include <iostream>
#include <string>

bool is_palindrome(std::string_view text)
{
    for (std::size_t i = 0; i < text.size(); i++)
    {
        if (!(text.at(i) == text.at(text.size() -1 - i)))
            return false;
    }

    return true;
}

bool is_palindrome_2(std::string_view text)
{
    const auto reversed = std::string(text.rbegin(), text.rend());
    return text == reversed;
}

int main()
{
    const auto text = std::string{"otto"};
    const auto check = is_palindrome(text);
    const auto check2 = is_palindrome_2(text);

    std::cout << "Is Palindrome: " << std::boolalpha << check << '\n';
    std::cout << "Is Palindrome: " << std::boolalpha << check2 << '\n';

    return 0;
}
