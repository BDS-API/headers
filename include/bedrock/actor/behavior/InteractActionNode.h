#pragma once

#include "BehaviorNode.h"


class InteractActionNode : public BehaviorNode {

public:
    virtual ~InteractActionNode(); // _ZN18InteractActionNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN18InteractActionNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN18InteractActionNode24initializeFromDefinitionER5Actor
    InteractActionNode(); // _ZN18InteractActionNodeC2Ev
};
