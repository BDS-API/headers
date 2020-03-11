#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class AttackNode : BehaviorNode {

public:
    virtual ~AttackNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    AttackNode();
};
