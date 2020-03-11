#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class FlyNode : BehaviorNode {

public:
    virtual ~FlyNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FlyNode();
};
