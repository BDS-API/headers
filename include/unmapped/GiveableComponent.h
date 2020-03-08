#pragma once

#include "../bedrock/actor/Actor"


class GiveableComponent {

public:

    void getInteraction(Actor &, Player &, ActorInteraction &);
    GiveableComponent(GiveableComponent&&);
    GiveableComponent(void);
};
