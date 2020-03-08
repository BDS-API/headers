#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class SitComponent {

public:

    void initFromDefinition(Actor &);
    SitComponent(SitComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
};
