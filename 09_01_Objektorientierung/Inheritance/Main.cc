#include <iostream>

#include "Agent.h"
#include "Player.h"
#include "NPC.h"

int main()
{
    {
        auto agent1 = Agent{"A1", 0U};
    }

    std::cout << '\n';

    {
        auto player1 = Player{"P1", 0U};
    }

    std::cout << '\n';

    {
        auto npc1 = NPC{"N1", 0U};
    }

    return 0;
}
