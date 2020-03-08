#pragma once

#include "../Actor"


class SelectorBehaviorNode : BehaviorNode {

public:
    SelectorBehaviorNode::~SelectorBehaviorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SelectorBehaviorNode(void);
};
