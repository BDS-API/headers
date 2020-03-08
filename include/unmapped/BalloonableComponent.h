#pragma once

#include "../bedrock/item/ItemStack"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Player"


class BalloonableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    void attach(Actor &, Actor &, ItemStack &);
    void detach(Actor &, Actor &);
    BalloonableComponent(BalloonableComponent&&);
};
