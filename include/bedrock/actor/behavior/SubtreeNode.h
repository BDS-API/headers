#pragma once

#include "BehaviorNode.h"


class SubtreeNode : public BehaviorNode {

public:
    virtual ~SubtreeNode(); // _ZN11SubtreeNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN11SubtreeNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN11SubtreeNode24initializeFromDefinitionER5Actor
    SubtreeNode(); // _ZN11SubtreeNodeC2Ev
};
