#pragma once

class PlayerInteractionSystem::InteractionMappingBase {

public:
    virtual ~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);

    void InteractionMappingBase(void);
};
