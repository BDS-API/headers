#pragma once

#include "BehaviorNode.h"


class FlyNode : public BehaviorNode {

public:
    virtual ~FlyNode(); // _ZN7FlyNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN7FlyNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN7FlyNode24initializeFromDefinitionER5Actor
    FlyNode(); // _ZN7FlyNodeC2Ev
};
