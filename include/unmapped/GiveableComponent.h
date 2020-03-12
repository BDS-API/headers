#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class GiveableComponent {

public:
    GiveableComponent(GiveableComponent &&);
    GiveableComponent();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    ~GiveableComponent();
};
