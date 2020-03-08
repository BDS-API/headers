#pragma once

#include "../bedrock/definition/InteractDefinition"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class InteractComponent {

public:

    InteractComponent(InteractComponent&&);
    void setCooldownCounter(short);
    void initFromDefinition(Actor &, InteractDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &);
    void getCooldownCounter()const;
};
