#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class InteractActionNode : BehaviorNode {

public:
    virtual ~InteractActionNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InteractActionNode();
};
