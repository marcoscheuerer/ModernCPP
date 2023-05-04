#pragma once

#include "Agent.h"

class Player : public Agent
{
    private:

    public:
        // Constructor
        Player(const std::string name, const std::uint32_t id, const std::uint32_t hp, const std::uint32_t energy);
        // Destructor
        ~Player();

        void print_agent_data() const override;
};
