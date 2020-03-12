#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class WaitTicksNode : BehaviorNode {

public:
    ~WaitTicksNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    WaitTicksNode();
};
