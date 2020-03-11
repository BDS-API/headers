#pragma once

#include "./BalloonableComponent.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"


class BalloonableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    void attach(Actor &, Actor &, ItemStack &);
    void detach(Actor &, Actor &);
    BalloonableComponent(BalloonableComponent &&);
};
