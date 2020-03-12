#pragma once

#include "../bedrock/actor/Player.h"
#include "Interaction.h"
#include "../bedrock/definition/InteractDefinition.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class InteractComponent {

public:
    void setCooldownCounter(short);
    void initFromDefinition(Actor &, InteractDefinition const&);
    void getCooldownCounter()const;
    void _runInteraction(Actor &, Interaction const&, Player &, ActorInteraction &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    InteractComponent(InteractComponent &&);
};
