#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class FlyNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~FlyNode();
    FlyNode();
};
