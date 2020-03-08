#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"


class PlayerInteractionSystem {

public:

    void unregisterAllComponents();
    PlayerInteractionSystem(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
