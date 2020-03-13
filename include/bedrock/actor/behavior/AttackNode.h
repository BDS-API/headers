#pragma once

#include "BehaviorNode.h"


class AttackNode : BehaviorNode {

public:
    ~AttackNode(); // _ZN10AttackNodeD2Ev
    virtual void tick(Actor &); // _ZN10AttackNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN10AttackNode24initializeFromDefinitionER5Actor
    AttackNode(); // _ZN10AttackNodeC2Ev
};
