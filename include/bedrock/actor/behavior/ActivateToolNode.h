#pragma once

#include "BehaviorNode.h"


class ActivateToolNode : BehaviorNode {

public:
    ~ActivateToolNode(); // _ZN16ActivateToolNodeD2Ev
    virtual void tick(Actor &); // _ZN16ActivateToolNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN16ActivateToolNode24initializeFromDefinitionER5Actor
    ActivateToolNode(); // _ZN16ActivateToolNodeC2Ev
};
