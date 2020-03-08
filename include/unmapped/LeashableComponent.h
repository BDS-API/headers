#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class LeashableComponent {

public:

    LeashableComponent(LeashableComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _canStealLeash(Actor &)const;
    void leash(Actor &, Actor*);
    void _unleash(Actor &);
};
