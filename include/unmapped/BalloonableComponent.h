#pragma once

#include "../bedrock/actor/Actor"


class BalloonableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    void attach(Actor &, Actor &, ItemStack &);
    void detach(Actor &, Actor &);
    BalloonableComponent(BalloonableComponent&&);
};
