#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"


using namespace PlayerInteractionSystem;

class InteractionMappingBase {

public:
    PlayerInteractionSystem::InteractionMappingBase::~InteractionMappingBase()
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    InteractionMappingBase(void);
};
