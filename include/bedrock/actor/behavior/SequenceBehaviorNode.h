#pragma once

#include "BehaviorNode.h"


class SequenceBehaviorNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    ~SequenceBehaviorNode();
    void getCount()const;
    SequenceBehaviorNode();
};
