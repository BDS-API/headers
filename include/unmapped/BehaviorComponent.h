#pragma once

#include "BehaviorTreeDefinitionPtr.h"
#include "../bedrock/actor/Actor.h"


class BehaviorComponent {

public:
    void reset(Actor &);
    ~BehaviorComponent();
    void getRoot();
    void initFromDefinition(Actor &);
    void runTree(Actor &, BehaviorTreeDefinitionPtr &);
    BehaviorComponent(BehaviorComponent &&);
    BehaviorComponent();
    void resetRoot();
    void getBehaviorData();
};
