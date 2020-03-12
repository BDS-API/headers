#pragma once

#include "BehaviorNode.h"


class ShootBowNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    ~ShootBowNode();
    ShootBowNode();
};
