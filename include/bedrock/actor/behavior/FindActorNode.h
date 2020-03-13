#pragma once

#include "BehaviorNode.h"


class FindActorNode : BehaviorNode {

public:
    ~FindActorNode(); // _ZN13FindActorNodeD2Ev
    virtual void tick(Actor &); // _ZN13FindActorNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN13FindActorNode24initializeFromDefinitionER5Actor
    FindActorNode(); // _ZN13FindActorNodeC2Ev
};
