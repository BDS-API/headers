#pragma once

#include "../bedrock/actor/Actor"


using namespace PlayerInteractionSystem;

class InteractionMappingBase {

public:
    virtual void PlayerInteractionSystem::InteractionMappingBase::~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    InteractionMappingBase(void);
};
