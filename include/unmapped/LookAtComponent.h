#pragma once



class LookAtComponent {

public:
    LookAtComponent(LookAtComponent &&); // _ZN15LookAtComponentC2EOS_
    LookAtComponent(); // _ZN15LookAtComponentC2Ev
    void initFromDefinition(Actor &, LookAtDefinition const&); // _ZN15LookAtComponent18initFromDefinitionER5ActorRK16LookAtDefinition
    void getTarget()const; // _ZNK15LookAtComponent9getTargetEv
    void getSearchRadius()const; // _ZNK15LookAtComponent15getSearchRadiusEv
    void getCoolingTime(); // _ZN15LookAtComponent14getCoolingTimeEv
    bool isLookingAtMe(Actor &, Actor &); // _ZN15LookAtComponent13isLookingAtMeER5ActorS1_
};
