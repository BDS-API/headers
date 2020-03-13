#pragma once

#include "BehaviorNode.h"


class InteractActionNode : BehaviorNode {

public:
    ~InteractActionNode(); // _ZN18InteractActionNodeD2Ev
    virtual void tick(Actor &); // _ZN18InteractActionNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN18InteractActionNode24initializeFromDefinitionER5Actor
    InteractActionNode(); // _ZN18InteractActionNodeC2Ev
};
