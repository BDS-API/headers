#pragma once

#include "BehaviorNode.h"


class ShootBowNode : public BehaviorNode {

public:
    virtual ~ShootBowNode(); // _ZN12ShootBowNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN12ShootBowNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN12ShootBowNode24initializeFromDefinitionER5Actor
    ShootBowNode(); // _ZN12ShootBowNodeC2Ev
};
