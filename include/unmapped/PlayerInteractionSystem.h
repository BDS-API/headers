#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class PlayerInteractionSystem {

public:
    class InteractionMappingBase;

    ~PlayerInteractionSystem();
    void unregisterAllComponents();
    PlayerInteractionSystem();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    class InteractionMappingBase {

    public:
        virtual void getInteraction(Actor &, Player &, ActorInteraction &);
        ~InteractionMappingBase();
        InteractionMappingBase();
    };
};
