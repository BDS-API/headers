#pragma once

#include "../bedrock/actor/Player"
#include "../bedrock/actor/unmapped/ActorInteraction"
#include "../bedrock/actor/Actor"


class BucketableComponent {

public:

    BucketableComponent(BucketableComponent&&);
    BucketableComponent(void);
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
