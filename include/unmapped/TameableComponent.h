#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class TameableComponent {

public:

    TameableComponent(TameableComponent&&);
    TameableComponent(void);
    void initFromDefinition(Actor &);
    void _canTame(ItemStack const&)const;
    void _sendTameEvents(Actor &, Player &)const;
    void _becomeTame(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
