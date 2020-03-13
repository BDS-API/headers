#pragma once

#include "BehaviorNode.h"


class LookAtBlockNode : BehaviorNode {

public:
    ~LookAtBlockNode(); // _ZN15LookAtBlockNodeD2Ev
    virtual void tick(Actor &); // _ZN15LookAtBlockNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN15LookAtBlockNode24initializeFromDefinitionER5Actor
    LookAtBlockNode(); // _ZN15LookAtBlockNodeC2Ev
};
