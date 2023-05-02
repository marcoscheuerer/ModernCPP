#include "Player.h"

Player::Player(const std::string name, const std::uint32_t id, const std::uint32_t hp, const std::uint32_t energy) : Agent(name, id, hp, energy)
{
    std::cout << "Player Constructor!\n";
}

Player::~Player()
{
    std::cout << "Player Destructor!\n";
}

void Player::print_agent_data() const
{
    std::cout << "Player hp: " << m_hp << ", energy: " << m_energy << '\n';
}
