#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class LeashableComponent {

public:
    LeashableComponent(LeashableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void leash(Actor &, Actor *);
    void _canStealLeash(Actor &)const;
    void _unleash(Actor &);
};
