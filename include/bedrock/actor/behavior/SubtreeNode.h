#pragma once

#include "BehaviorNode.h"


class SubtreeNode : BehaviorNode {

public:
    ~SubtreeNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    SubtreeNode();
};
