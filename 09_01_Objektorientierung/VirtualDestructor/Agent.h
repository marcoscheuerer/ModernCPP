#pragma once

#include <iostream>
#include <string>

class Agent
{
    protected:
        const std::string m_name;
        const std::uint32_t m_id;
        const std::uint32_t m_hp;
        const std::uint32_t m_energy;

    public:
        // Constructor
        Agent(const std::string &name, const std::uint32_t id,
              const std::uint32_t hp, const std::uint32_t energy);
        // Destructor
        virtual ~Agent();

        virtual void print_agent_data() const;
};
