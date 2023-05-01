#pragma once

#include <iostream>
#include <string>

class Agent
{
    public:
        // Constructor
        Agent(const std::string &name, const std::uint32_t id);
        // Destructor
        ~Agent();

    protected:
        const std::string m_name;
        const std::uint32_t m_id;
};
