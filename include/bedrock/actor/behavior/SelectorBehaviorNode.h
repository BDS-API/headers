#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class SelectorBehaviorNode : BehaviorNode {

public:
    virtual ~SelectorBehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SelectorBehaviorNode();
};
