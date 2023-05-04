#pragma once

#include "Agent.h"

class NPC : public Agent
{
    private:

    public:
        NPC(const std::string name, const std::uint32_t id, const std::uint32_t hp, const std::uint32_t energy);
        ~NPC();

        void print_agent_data() const override;
};
