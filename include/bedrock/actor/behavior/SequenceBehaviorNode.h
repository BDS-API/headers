#pragma once

#include "BehaviorNode.h"


class SequenceBehaviorNode : BehaviorNode {

public:
    ~SequenceBehaviorNode(); // _ZN20SequenceBehaviorNodeD2Ev
    virtual void tick(Actor &); // _ZN20SequenceBehaviorNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN20SequenceBehaviorNode24initializeFromDefinitionER5Actor
    SequenceBehaviorNode(); // _ZN20SequenceBehaviorNodeC2Ev
    void getCount()const; // _ZNK20SequenceBehaviorNode8getCountEv
};
