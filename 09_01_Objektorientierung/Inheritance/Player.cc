#include "Player.h"

Player::Player(const std::string name, const std::uint32_t id) : Agent(name, id)
{
    std::cout << "Player Constructor!\n";
}

Player::~Player()
{
    std::cout << "Player Destructor!\n";
}
