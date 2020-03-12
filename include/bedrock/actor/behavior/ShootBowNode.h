#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class ShootBowNode : BehaviorNode {

public:
    ~ShootBowNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ShootBowNode();
};
