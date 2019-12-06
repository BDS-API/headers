#pragma once

class BehaviorComponent {

public:

    void BehaviorComponent(BehaviorComponent&&);
    void BehaviorComponent(void);
    void initFromDefinition(Actor &);
    void runTree(Actor &, BehaviorTreeDefinitionPtr &);
    void reset(Actor &);
    void resetRoot(void);
    void getBehaviorData(void);
    void getRoot(void);
};
