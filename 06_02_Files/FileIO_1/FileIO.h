#pragma once

#include <string>

/**
 * @brief Open a file and puts the content of the file in the variable text
 *
 * @param filepath Path of the input file
 * @param text Variable to save the text of the file
 */
void read_file(const std::string &filepath, std::string &text);

/**
 * @brief Write the content of the variable text to the output file
 *
 * @param filepath Path of the output file
 * @param text Variable to write the text to the file
 */
void write_file(const std::string &filepath, const std::string &text);

/**
 * @brief Changes the content of the file by searching a text and replacing
 *        it by another text
 *
 * @param text Variable which includes the complete text
 * @param search_text Text to search for
 * @param replace_text Text to replace
 */
void change_content(std::string &text, std::string search_text, std::string replace_text);
