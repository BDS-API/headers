#pragma once

#include "BehaviorNode.h"


class FindActorNode : BehaviorNode {

public:
    ~FindActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    FindActorNode();
};
