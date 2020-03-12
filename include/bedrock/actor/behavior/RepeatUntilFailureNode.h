#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class RepeatUntilFailureNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    ~RepeatUntilFailureNode();
    virtual void tick(Actor &);
    RepeatUntilFailureNode();
};
