#pragma once

#include "BehaviorNode.h"


class BreakBlockNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~BreakBlockNode();
    virtual void initializeFromDefinition(Actor &);
    BreakBlockNode();
};
