#include <iostream>
#include <string>
#include "FileIO.h"
#include "Player.h"

int main()
{
    const auto text = std::string {"My sample text."};
    const auto filename1 = std::string {"text.txt"};
    append_line_to_file(filename1, text);

    const auto player1 = PlayerData {.id = 0, .x_pos = 10.F, .y_pos = 110.F};
    const auto filename2 = std::string {"text.bin"};
    write_to_bin_file(filename2, player1);

    auto player2 = PlayerData { };
    read_from_bin_file(filename2, player2);

    printPlayer(player2);

    return 0;
}
