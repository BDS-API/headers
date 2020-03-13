#pragma once

#include "BehaviorNode.h"


class BreakBlockNode : BehaviorNode {

public:
    ~BreakBlockNode(); // _ZN14BreakBlockNodeD2Ev
    virtual void tick(Actor &); // _ZN14BreakBlockNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN14BreakBlockNode24initializeFromDefinitionER5Actor
    BreakBlockNode(); // _ZN14BreakBlockNodeC2Ev
};
