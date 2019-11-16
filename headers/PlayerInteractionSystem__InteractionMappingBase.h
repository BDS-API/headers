#pragma once

class PlayerInteractionSystem::InteractionMappingBase {

    virtual void ~InteractionMappingBase();
    virtual void ~InteractionMappingBase();
    virtual void getInteraction(Actor &, Player &, ActorInteraction &);
}
