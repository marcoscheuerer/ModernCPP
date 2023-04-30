#include <fstream>

#include "FileIO.h"

void read_file(const std::string &filepath, std::string &text)
{
    auto str = std::string { };

    auto in_file = std::ifstream { };
    in_file.open(filepath);

    if (in_file.is_open())
    {
        while (std::getline(in_file, str))
        {
            text += str + '\n';
        }
    }

    // Has not be executed, because file is closed automatically when leaving
    // the function because scope has ended!

    //in_file.close();
}

void write_file(const std::string &filepath, const std::string &text)
{
    auto out_file = std::ofstream { };
    out_file.open(filepath);

    if (out_file.is_open())
    {
        out_file << text;
    }

    // Has not be executed, because file is closed automatically when leaving
    // the function because scope has ended!

    //out_file.close();
}

void change_content(std::string &text, std::string search_text, std::string replace_text)
{
    auto index = text.find(search_text);

    // Check if string was found by index and replace search string
    if (index != std::string::npos)
    {
        text.replace(index, search_text.size(), replace_text);
    }

}
