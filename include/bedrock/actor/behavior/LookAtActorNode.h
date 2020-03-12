#pragma once

#include "BehaviorNode.h"


class LookAtActorNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    ~LookAtActorNode();
    LookAtActorNode();
};
