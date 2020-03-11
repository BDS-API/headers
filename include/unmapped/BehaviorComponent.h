#pragma once

#include "./BehaviorComponent.h"
#include "../bedrock/actor/Actor.h"
#include "./BehaviorTreeDefinitionPtr.h"


class BehaviorComponent {

public:

    ~BehaviorComponent();
    BehaviorComponent(BehaviorComponent &&);
    BehaviorComponent();
    void initFromDefinition(Actor &);
    void runTree(Actor &, BehaviorTreeDefinitionPtr &);
    void reset(Actor &);
    void resetRoot();
    void getBehaviorData();
    void getRoot();
};
