#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "./SitComponent.h"
#include "../bedrock/actor/Player.h"


class SitComponent {

public:

    void initFromDefinition(Actor &);
    SitComponent(SitComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
};
