#pragma once

#include "BehaviorNode.h"


class LookAtBlockNode : BehaviorNode {

public:
    ~LookAtBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    LookAtBlockNode();
};
