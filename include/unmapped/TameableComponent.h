#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class TameableComponent {

public:
    void initFromDefinition(Actor &);
    TameableComponent(TameableComponent &&);
    void _sendTameEvents(Actor &, Player &)const;
    ~TameableComponent();
    TameableComponent();
    void _canTame(ItemStack const&)const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _becomeTame(Actor &);
};
