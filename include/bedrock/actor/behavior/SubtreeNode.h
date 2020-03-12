#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class SubtreeNode : BehaviorNode {

public:
    ~SubtreeNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    SubtreeNode();
};
