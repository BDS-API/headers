#pragma once

#include "../bedrock/actor/Actor"


class PlayerInteractionSystem {

public:

    void unregisterAllComponents(void);
    PlayerInteractionSystem(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
