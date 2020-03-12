#pragma once



class BucketableComponent {

public:
    BucketableComponent(BucketableComponent &&);
    BucketableComponent();
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void initFromDefinition(Actor &);
};
