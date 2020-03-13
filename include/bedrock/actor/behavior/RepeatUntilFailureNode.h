#pragma once

#include "BehaviorNode.h"


class RepeatUntilFailureNode : BehaviorNode {

public:
    ~RepeatUntilFailureNode(); // _ZN22RepeatUntilFailureNodeD2Ev
    virtual void tick(Actor &); // _ZN22RepeatUntilFailureNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN22RepeatUntilFailureNode24initializeFromDefinitionER5Actor
    RepeatUntilFailureNode(); // _ZN22RepeatUntilFailureNodeC2Ev
};
