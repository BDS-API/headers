#pragma once

class BucketableComponent {

public:

    void BucketableComponent(BucketableComponent&&);
    void BucketableComponent(void);
    void initFromDefinition(Actor &);
    void getInteraction(Actor &, Player &, ActorInteraction &);
};
