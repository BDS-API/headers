#pragma once

#include "BehaviorNode.h"


class InteractActionNode : BehaviorNode {

public:
    ~InteractActionNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    InteractActionNode();
};
