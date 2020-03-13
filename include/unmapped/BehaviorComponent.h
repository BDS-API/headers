#pragma once



class BehaviorComponent {

public:
    ~BehaviorComponent(); // _ZN17BehaviorComponentD2Ev
    BehaviorComponent(BehaviorComponent &&); // _ZN17BehaviorComponentC2EOS_
    BehaviorComponent(); // _ZN17BehaviorComponentC2Ev
    void initFromDefinition(Actor &); // _ZN17BehaviorComponent18initFromDefinitionER5Actor
    void runTree(Actor &, BehaviorTreeDefinitionPtr &); // _ZN17BehaviorComponent7runTreeER5ActorR25BehaviorTreeDefinitionPtr
    void reset(Actor &); // _ZN17BehaviorComponent5resetER5Actor
    void resetRoot(); // _ZN17BehaviorComponent9resetRootEv
    void getBehaviorData(); // _ZN17BehaviorComponent15getBehaviorDataEv
    void getRoot(); // _ZN17BehaviorComponent7getRootEv
};
