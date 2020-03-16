#pragma once

#include "BehaviorNode.h"


class SelectorBehaviorNode : public BehaviorNode {

public:
    virtual ~SelectorBehaviorNode(); // _ZN20SelectorBehaviorNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN20SelectorBehaviorNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN20SelectorBehaviorNode24initializeFromDefinitionER5Actor
    SelectorBehaviorNode(); // _ZN20SelectorBehaviorNodeC2Ev
};
