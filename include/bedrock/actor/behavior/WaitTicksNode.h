#pragma once

#include "BehaviorNode.h"


class WaitTicksNode : BehaviorNode {

public:
    ~WaitTicksNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    WaitTicksNode();
};
