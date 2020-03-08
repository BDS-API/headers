#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


using namespace PlayerInteractionSystem;

class InteractionMappingBase {

public:
    virtual PlayerInteractionSystem::InteractionMappingBase::~InteractionMappingBase()
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    InteractionMappingBase(void);
};
