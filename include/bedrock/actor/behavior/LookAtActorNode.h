#pragma once

#include "BehaviorNode.h"


class LookAtActorNode : public BehaviorNode {

public:
    virtual ~LookAtActorNode(); // _ZN15LookAtActorNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN15LookAtActorNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN15LookAtActorNode24initializeFromDefinitionER5Actor
    LookAtActorNode(); // _ZN15LookAtActorNodeC2Ev
};
