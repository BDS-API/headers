#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"


class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    GiveableComponent(GiveableComponent&&);
    GiveableComponent(void);
};
