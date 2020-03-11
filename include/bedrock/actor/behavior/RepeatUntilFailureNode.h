#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class RepeatUntilFailureNode : BehaviorNode {

public:
    virtual ~RepeatUntilFailureNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilFailureNode();
};
