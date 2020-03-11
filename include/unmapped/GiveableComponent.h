#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "./GiveableComponent.h"
#include "../bedrock/actor/Player.h"


class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    ~GiveableComponent();
    GiveableComponent(GiveableComponent &&);
    GiveableComponent();
};
