#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class AttackNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~AttackNode();
    AttackNode();
};
