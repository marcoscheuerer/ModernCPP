#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>

#include "FileIO.h"

void print_player_pos(const PlayerData &player)
{
    std::cout << "Pos: (" << player.x_pos << ", " << player.y_pos << ")\n";
}

int append_line_to_file(const std::string &filepath, const std::string &line)
{
    auto file = std::ofstream { };
    file.open(filepath, std::ios::out | std::ios::app);

    if (file.fail())
        return 1;

    file << line << '\n';

    if (!file.good())
        return 1;

    // file.close() can be ignored because the scope is left when the function
    // has exited.

    return 0;
}

int write_to_bin_file(const std::string &filename, const PlayerData &player)
{
    auto file = std::ofstream { };

    file.open(filename, std::ios::out | std::ios::binary);

    if (file.fail())
        return 1;

    file.write((const char*)(&player), sizeof(PlayerData));

    if (!file.good())
        return 1;

    return 0;
}

int read_from_bin_file(const std::string &filename, PlayerData &player)
{
    auto file = std::ifstream { };

    file.open(filename, std::ios::in | std::ios::binary);

    if (file.fail())
        return 1;

    file.read((char*)&player, sizeof(PlayerData));

    if (!file.good())
        return 1;

    return 0;
}
