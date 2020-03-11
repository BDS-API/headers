#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class SequenceBehaviorNode : BehaviorNode {

public:
    virtual ~SequenceBehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SequenceBehaviorNode();
    void getCount()const;
};
