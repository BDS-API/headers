#pragma once

#include "BehaviorNode.h"


class RepeatUntilFailureNode : BehaviorNode {

public:
    ~RepeatUntilFailureNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    RepeatUntilFailureNode();
};
