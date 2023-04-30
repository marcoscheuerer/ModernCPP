#include <iostream>
#include <fstream>
#include <string>

#include "FileIO.h"

int main()
{
    const auto IN_FILE = "./TextInput.txt";
    const auto OUT_FILE = "./TextOutput.txt";

    //std::string str {};
    auto text = std::string {};

    /******************/
    /* READ FROM FILE */
    /******************/
    read_file(IN_FILE, text);

    // Change content
    change_content(text, "Eins", "One");

    /*****************/
    /* WRITE TO FILE */
    /*****************/
    write_file(OUT_FILE, text);

    return 0;
}
