#pragma once

#include "Player.h"

/**
 * @brief Prints the position of the player on the screen
 *
 * @param player Player object to print
 */
void print_player_pos(const PlayerData &player);

/**
 * @brief Appends a textline on a file
 *
 * @param filepath Path of the file to save
 * @param line line with text to save in file
 * @return Return value (0 = success, 1 = failure)
 */
int append_line_to_file(const std::string &filepath, const std::string &line);

/**
 * @brief Writes the player data (location and id) in a file
 *
 * @param filename Filename to write to
 * @param player Player object to write in file
 * @return Return value (0 = success, 1 = failure)
 */
int write_to_bin_file(const std::string &filename, const PlayerData &player);

/**
 * @brief Reads player data from a file
 *
 * @param filename Filename to read from
 * @param player Player object which gets information
 * @return Return value (0 = success, 1 = failure)
 */
int read_from_bin_file(const std::string &filename, PlayerData &player);
