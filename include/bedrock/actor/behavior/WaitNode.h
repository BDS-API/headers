#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class WaitNode : BehaviorNode {

public:
    ~WaitNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    WaitNode();
};
