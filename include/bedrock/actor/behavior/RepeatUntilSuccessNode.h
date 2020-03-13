#pragma once

#include "BehaviorNode.h"


class RepeatUntilSuccessNode : BehaviorNode {

public:
    ~RepeatUntilSuccessNode(); // _ZN22RepeatUntilSuccessNodeD2Ev
    virtual void tick(Actor &); // _ZN22RepeatUntilSuccessNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN22RepeatUntilSuccessNode24initializeFromDefinitionER5Actor
    RepeatUntilSuccessNode(); // _ZN22RepeatUntilSuccessNodeC2Ev
};
