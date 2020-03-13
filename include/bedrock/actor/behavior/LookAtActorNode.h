#pragma once

#include "BehaviorNode.h"


class LookAtActorNode : BehaviorNode {

public:
    ~LookAtActorNode(); // _ZN15LookAtActorNodeD2Ev
    virtual void tick(Actor &); // _ZN15LookAtActorNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN15LookAtActorNode24initializeFromDefinitionER5Actor
    LookAtActorNode(); // _ZN15LookAtActorNodeC2Ev
};
