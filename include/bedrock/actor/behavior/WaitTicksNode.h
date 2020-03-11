#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class WaitTicksNode : BehaviorNode {

public:
    virtual ~WaitTicksNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    WaitTicksNode();
};
