#pragma once

#include "BehaviorNode.h"


class AttackNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~AttackNode();
    virtual void initializeFromDefinition(Actor &);
    AttackNode();
};
