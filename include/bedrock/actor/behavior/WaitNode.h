#pragma once

#include "BehaviorNode.h"


class WaitNode : public BehaviorNode {

public:
    virtual ~WaitNode(); // _ZN8WaitNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN8WaitNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN8WaitNode24initializeFromDefinitionER5Actor
    WaitNode(); // _ZN8WaitNodeC2Ev
};
