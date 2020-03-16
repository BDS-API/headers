#pragma once

#include "BehaviorNode.h"


class InverterNode : public BehaviorNode {

public:
    virtual ~InverterNode(); // _ZN12InverterNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN12InverterNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN12InverterNode24initializeFromDefinitionER5Actor
    InverterNode(); // _ZN12InverterNodeC2Ev
};
