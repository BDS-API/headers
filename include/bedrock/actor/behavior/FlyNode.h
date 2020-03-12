#pragma once

#include "BehaviorNode.h"


class FlyNode : BehaviorNode {

public:
    ~FlyNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    FlyNode();
};
