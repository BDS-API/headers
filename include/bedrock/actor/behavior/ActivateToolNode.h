#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class ActivateToolNode : BehaviorNode {

public:
    virtual ~ActivateToolNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ActivateToolNode();
};
