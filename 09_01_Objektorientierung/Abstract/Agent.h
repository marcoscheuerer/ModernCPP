#pragma once

#include <iostream>
#include <string>

// default
// delete
// override
// final

class Agent
{
    protected:
        const std::string m_name;
        const std::uint32_t m_id;
        std::uint32_t m_hp = 0U;
        std::uint32_t m_energy = 0U;

    public:
        // Constructor
        Agent() = delete;
        Agent(const std::string &name, const std::uint32_t id,
              const std::uint32_t hp, const std::uint32_t energy);
        // Destructor
        virtual ~Agent();

        // abstract method -> only one is needed to make the class abstract
        // => you can't create an object or instance anymore
        // => the class is only useful for inheritance
        virtual void print_agent_data() const = 0;
};
