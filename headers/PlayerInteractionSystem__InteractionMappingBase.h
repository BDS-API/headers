#pragma once

class PlayerInteractionSystem::InteractionMappingBase {

    virtual ~InteractionMappingBase();
    virtual ~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);
}
