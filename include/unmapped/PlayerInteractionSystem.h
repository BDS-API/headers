#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


class PlayerInteractionSystem {

public:

    void unregisterAllComponents();
    PlayerInteractionSystem(void);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
