#pragma once

#include "BehaviorNode.h"


class LookAtBlockNode : public BehaviorNode {

public:
    virtual ~LookAtBlockNode(); // _ZN15LookAtBlockNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN15LookAtBlockNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN15LookAtBlockNode24initializeFromDefinitionER5Actor
    LookAtBlockNode(); // _ZN15LookAtBlockNodeC2Ev
};
