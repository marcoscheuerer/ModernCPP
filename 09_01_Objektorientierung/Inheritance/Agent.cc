#include "Agent.h"

Agent::Agent(const std::string &name, const std::uint32_t id) : m_name(name), m_id(id)
{
    std::cout << "Agent Constructor!\n";
}

Agent::~Agent()
{
    std::cout << "Agent Destructor!\n";
}
