#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class SubtreeNode : BehaviorNode {

public:
    virtual ~SubtreeNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SubtreeNode();
};
