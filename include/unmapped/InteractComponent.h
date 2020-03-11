#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/definition/InteractDefinition.h"
#include "../bedrock/actor/Player.h"
#include "./InteractComponent.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "./Interaction.h"


class InteractComponent {

public:

    InteractComponent(InteractComponent &&);
    void setCooldownCounter(short);
    void initFromDefinition(Actor &, InteractDefinition const&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &);
    void getCooldownCounter()const;
};
