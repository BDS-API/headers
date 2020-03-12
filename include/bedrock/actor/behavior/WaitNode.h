#pragma once

#include "BehaviorNode.h"


class WaitNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~WaitNode();
    virtual void initializeFromDefinition(Actor &);
    WaitNode();
};
