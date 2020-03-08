#pragma once

#include "../Actor"


class SequenceBehaviorNode : BehaviorNode {

public:
    SequenceBehaviorNode::~SequenceBehaviorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SequenceBehaviorNode(void);
    void getCount()const;
};
