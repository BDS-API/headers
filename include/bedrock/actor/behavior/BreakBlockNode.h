#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class BreakBlockNode : BehaviorNode {

public:
    virtual ~BreakBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    BreakBlockNode();
};
