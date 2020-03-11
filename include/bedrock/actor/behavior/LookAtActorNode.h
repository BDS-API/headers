#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class LookAtActorNode : BehaviorNode {

public:
    virtual ~LookAtActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    LookAtActorNode();
};
