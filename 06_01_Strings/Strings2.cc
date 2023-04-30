#include <iostream>
#include <string>

void print_found_index(const std::size_t index, const std::string &func_name)
{
    std::cout << "Function: " << func_name << '\n';

    if (index != std::string::npos)
        std::cout << "Found at index: " << index << '\n';
    else
        std::cout << "Not Found!" << index << '\n';

    std::cout << '\n';
}

int main()
{
    const auto text = std::string{"Eins, Zwei, Drei"};

    std::cout << text << '\n';
    std::cout << "01234567890123456" << '\n';
    std::cout << std::endl;

    const auto search_str1 = "Drei";
    const auto index1 = text.find(search_str1);
    print_found_index(index1, "find()");

    const auto search_str2 = "i";
    const auto index2 = text.find(search_str2);
    print_found_index(index2, "find()");

    const auto search_str3 = "i";
    const auto index3 = text.rfind(search_str3);
    print_found_index(index3, "rfind()");

    const auto search_str4 = "ZD";
    const auto index4 = text.find_first_of(search_str4);
    print_found_index(index4, "find_first_of()");

    const auto search_str5 = "ZD";
    const auto index5 = text.find_last_of(search_str5);
    print_found_index(index5, "find_first_of()");



    return 0;
}
