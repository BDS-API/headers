#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    GiveableComponent(GiveableComponent&&);
    GiveableComponent(void);
};
