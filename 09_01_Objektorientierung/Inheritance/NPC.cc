#include "NPC.h"

NPC::NPC(const std::string name, const std::uint32_t id) : Agent(name, id)
{
    std::cout << "NPC Constructor!\n";
}

NPC::~NPC()
{
    std::cout << "NPC Destructor!\n";
}
