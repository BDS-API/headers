#pragma once



class BehaviorComponent {

public:
    void initFromDefinition(Actor &);
    void getRoot();
    void runTree(Actor &, BehaviorTreeDefinitionPtr &);
    void resetRoot();
    BehaviorComponent(BehaviorComponent &&);
    ~BehaviorComponent();
    void getBehaviorData();
    void reset(Actor &);
    BehaviorComponent();
};
