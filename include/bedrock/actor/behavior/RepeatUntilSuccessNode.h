#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    ~RepeatUntilSuccessNode();
    virtual void tick(Actor &);
    RepeatUntilSuccessNode();
};
