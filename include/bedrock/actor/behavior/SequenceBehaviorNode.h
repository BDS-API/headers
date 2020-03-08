#pragma once

#include "../Actor"


class SequenceBehaviorNode : BehaviorNode {

public:
    virtual SequenceBehaviorNode::~SequenceBehaviorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SequenceBehaviorNode(void);
    void getCount()const;
};
