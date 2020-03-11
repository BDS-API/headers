#pragma once

#include "./TameableComponent.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class TameableComponent {

public:

    ~TameableComponent();
    TameableComponent(TameableComponent &&);
    TameableComponent();
    void initFromDefinition(Actor &);
    void _canTame(ItemStack const&)const;
    void _sendTameEvents(Actor &, Player &)const;
    void _becomeTame(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
