#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class LookAtBlockNode : BehaviorNode {

public:
    ~LookAtBlockNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    LookAtBlockNode();
};
