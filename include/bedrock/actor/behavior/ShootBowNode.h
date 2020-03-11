#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class ShootBowNode : BehaviorNode {

public:
    virtual ~ShootBowNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ShootBowNode();
};
