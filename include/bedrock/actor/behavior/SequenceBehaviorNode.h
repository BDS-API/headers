#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class SequenceBehaviorNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~SequenceBehaviorNode();
    void getCount()const;
    SequenceBehaviorNode();
};
