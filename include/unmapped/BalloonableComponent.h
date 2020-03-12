#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class BalloonableComponent {

public:
    BalloonableComponent(BalloonableComponent &&);
    void attach(Actor &, Actor &, ItemStack &);
    void detach(Actor &, Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
