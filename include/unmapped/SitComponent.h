#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class SitComponent {

public:
    void initFromDefinition(Actor &);
    SitComponent(SitComponent &&);
    void _sitEvent(Actor &, bool);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
