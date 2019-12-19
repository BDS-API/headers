#pragma once

using namespace PlayerInteractionSystem;

class InteractionMappingBase {

public:
    virtual void PlayerInteractionSystem::InteractionMappingBase::~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    InteractionMappingBase(void);
};
