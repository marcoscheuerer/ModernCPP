#pragma once

#include "Agent.h"

class NPC : public Agent
{
    private:

    public:
        NPC(const std::string name, const std::uint32_t id);
        ~NPC();
};
