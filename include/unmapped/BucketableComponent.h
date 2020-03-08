#pragma once

#include "../bedrock/actor/Actor"


class BucketableComponent {

public:

    BucketableComponent(BucketableComponent&&);
    BucketableComponent(void);
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
