#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"


namespace PlayerInteractionSystem {

class InteractionMappingBase {

public:
    virtual ~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    InteractionMappingBase();
};

}