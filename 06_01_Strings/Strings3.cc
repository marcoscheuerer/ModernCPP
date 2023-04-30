#include <iostream>
#include <string>

int main()
{
    const auto text = std::string {"Eins, Zwei, Drei"};

    auto text2 = text;
    std::cout << text2 << '\n';
    text2.clear();
    std::cout << text2 << '\n';

    // Concatenation
    auto text3 = text + ", Vier";
    std::cout << text3 << '\n';

    auto text4 = text3;
    text4.append({',', ' ', 'F', 'u', 'e', 'n', 'f'});
    std::cout << text4 << '\n';

    auto s1 = std::string("Jann");
    auto s2 = std::string("Jan");
    std::cout << "s1 == s2: " << std::boolalpha << (s1 == s2) << '\n';
    const auto compared = s1.compare(s2);
    std::cout << "s1.compare(s2): " << compared << '\n';

    const auto search_str = "nn";
    const auto index = s1.find(search_str);
    if (index != std::string::npos)
        s1.replace(index, 2, "n");
    std::cout << s1 << '\n';

    const auto sub_str = s1.substr(2, s1.length() - 2);
    std::cout << sub_str << '\n';

    return 0;
}
