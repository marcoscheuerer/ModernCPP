#pragma once

#include "Agent.h"

class Player : public Agent
{
    private:

    public:
        // Constructor
        Player(const std::string name, const std::uint32_t id);
        // Destructor
        ~Player();
};
