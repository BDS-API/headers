#pragma once

#include "./LeashableComponent.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Player.h"


class LeashableComponent {

public:

    LeashableComponent(LeashableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _canStealLeash(Actor &)const;
    void leash(Actor &, Actor *);
    void _unleash(Actor &);
};
