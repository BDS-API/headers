#pragma once

#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"


class BucketableComponent {

public:

    BucketableComponent(BucketableComponent&&);
    BucketableComponent(void);
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
