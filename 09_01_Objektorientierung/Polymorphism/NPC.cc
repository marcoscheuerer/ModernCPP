#include "NPC.h"

NPC::NPC(const std::string name, const std::uint32_t id, const std::uint32_t hp, const std::uint32_t energy) : Agent(name, id, hp, energy)
{
    std::cout << "NPC Constructor!\n";
}

NPC::~NPC()
{
    std::cout << "NPC Destructor!\n";
}

void NPC::print_agent_data() const
{
    std::cout << "NPC hp: " << m_hp << ", energy: " << m_energy << '\n';
}
