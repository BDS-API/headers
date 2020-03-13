#pragma once

#include "BehaviorNode.h"


class WaitTicksNode : BehaviorNode {

public:
    ~WaitTicksNode(); // _ZN13WaitTicksNodeD2Ev
    virtual void tick(Actor &); // _ZN13WaitTicksNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN13WaitTicksNode24initializeFromDefinitionER5Actor
    WaitTicksNode(); // _ZN13WaitTicksNodeC2Ev
};
