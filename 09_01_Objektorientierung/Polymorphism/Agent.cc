#include "Agent.h"

Agent::Agent(const std::string &name,
             const std::uint32_t id,
             const std::uint32_t hp = 0U,
             const std::uint32_t energy = 0U) : m_name(name), m_id(id), m_hp(hp), m_energy(energy)
{
    std::cout << "Agent Constructor!\n";
}

Agent::~Agent()
{
    std::cout << "Agent Destructor!\n";
}

void Agent::print_agent_data() const
{
    std::cout << "Agent hp: " << m_hp << ", energy: " << m_energy << '\n';
}
