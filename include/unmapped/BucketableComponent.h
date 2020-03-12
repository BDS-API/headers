#pragma once

#include "../bedrock/actor/Player.h"
#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"


class BucketableComponent {

public:
    BucketableComponent(BucketableComponent &&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void initFromDefinition(Actor &);
    BucketableComponent();
};
