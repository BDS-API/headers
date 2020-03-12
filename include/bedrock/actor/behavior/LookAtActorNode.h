#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class LookAtActorNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~LookAtActorNode();
    LookAtActorNode();
};
