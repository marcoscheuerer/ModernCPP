#pragma once

#include <cstdint>

/**
 * @brief Structure of the player
 *
 */
struct PlayerData
{
    std::uint32_t id;

    float x_pos;
    float y_pos;
};

/**
 * @brief Prints the location of the player id on the screen
 *
 * @param player Player object to print on screen
 */
void printPlayer(const PlayerData &player);
