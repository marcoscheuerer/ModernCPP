#include <iostream>

#include "Player.h"

void printPlayer(const PlayerData &player)
{
    std::cout << "The Player with the id \"" << player.id << "\" has the location ("
              << player.x_pos << ", " << player.y_pos << ")\n";
}
