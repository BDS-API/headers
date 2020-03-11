#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction.h"
#include "../bedrock/actor/Actor.h"
#include "./BucketableComponent.h"
#include "../bedrock/actor/Player.h"


class BucketableComponent {

public:

    BucketableComponent(BucketableComponent &&);
    BucketableComponent();
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
