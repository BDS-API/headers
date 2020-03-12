#pragma once

#include "BehaviorNode.h"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~RepeatUntilSuccessNode();
    RepeatUntilSuccessNode();
};
