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
    // Agent is an abstract class -> no instantiation possible!
    //auto agent1 = new Agent {"A1", 0, 100, 25};
    auto player1 = new Player {"P1", 1, 250, 55};
    auto npc1 = new NPC {"N1", 2, 235, 41};

    // Agent-object removed from vector list
    //const auto agents = std::vector<Agent *>{agent1, player1, npc1};
    const auto agents = std::vector<Agent *>{player1, npc1};
    printAllAgents(agents);

    delete npc1;
    delete player1;
    // deletion of Agent-object removed
    //delete agent1;

    return 0;
}
