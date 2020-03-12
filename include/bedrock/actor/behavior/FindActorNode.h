#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class FindActorNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~FindActorNode();
    virtual void initializeFromDefinition(Actor &);
    FindActorNode();
};
