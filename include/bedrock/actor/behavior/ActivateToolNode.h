#pragma once

#include "BehaviorNode.h"


class ActivateToolNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~ActivateToolNode();
    virtual void initializeFromDefinition(Actor &);
    ActivateToolNode();
};
