#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/item/ItemStack"


class BalloonableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    void attach(Actor &, Actor &, ItemStack &);
    void detach(Actor &, Actor &);
    BalloonableComponent(BalloonableComponent&&);
};
