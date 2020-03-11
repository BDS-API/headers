#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"


class PlayerInteractionSystem {

public:

    ~PlayerInteractionSystem();
    void unregisterAllComponents();
    PlayerInteractionSystem();
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
