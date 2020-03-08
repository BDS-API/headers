#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"


class SitComponent {

public:

    void initFromDefinition(Actor &);
    SitComponent(SitComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
};
