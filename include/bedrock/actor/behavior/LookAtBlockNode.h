#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class LookAtBlockNode : BehaviorNode {

public:
    virtual ~LookAtBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    LookAtBlockNode();
};
