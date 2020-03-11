#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    virtual ~RepeatUntilSuccessNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilSuccessNode();
};
