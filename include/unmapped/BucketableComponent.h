#pragma once



class BucketableComponent {

public:
    BucketableComponent(BucketableComponent &&); // _ZN19BucketableComponentC2EOS_
    BucketableComponent(); // _ZN19BucketableComponentC2Ev
    void initFromDefinition(Actor &); // _ZN19BucketableComponent18initFromDefinitionER5Actor
    void getInteraction(Actor &, Player &, ActorInteraction &); // _ZN19BucketableComponent14getInteractionER5ActorR6PlayerR16ActorInteraction
};
