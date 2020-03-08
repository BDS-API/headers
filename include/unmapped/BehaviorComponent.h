#pragma once

#include "../bedrock/actor/Actor"


class BehaviorComponent {

public:

    BehaviorComponent(BehaviorComponent&&);
    BehaviorComponent(void);
    void initFromDefinition(Actor &);
    void runTree(Actor &, BehaviorTreeDefinitionPtr &);
    void reset(Actor &);
    void resetRoot(void);
    void getBehaviorData(void);
    void getRoot(void);
};
