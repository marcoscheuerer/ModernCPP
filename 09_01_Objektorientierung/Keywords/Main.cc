#include <iostream>
#include <vector>

#include "Agent.h"
#include "Player.h"
#include "NPC.h"

void printAllAgents(const std::vector<Agent *> &agents)
{
    for (const auto agent : agents)
    {
        agent->print_agent_data();
    }
}

int main()
{
    auto agent1 = new Agent {"A1", 0, 100, 25};
    auto player1 = new Player {"P1", 1, 250, 55};
    auto npc1 = new NPC {"N1", 2, 235, 41};

    const auto agents = std::vector<Agent *>{agent1, player1, npc1};
    printAllAgents(agents);

    delete npc1;
    delete player1;
    delete agent1;

    // doesn't work anymore, because Standard Constructor has keyword delete
    //auto agent2 = Agent();

    return 0;
}
