#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"


class LeashableComponent {

public:

    LeashableComponent(LeashableComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _canStealLeash(Actor &)const;
    void leash(Actor &, Actor*);
    void _unleash(Actor &);
};
