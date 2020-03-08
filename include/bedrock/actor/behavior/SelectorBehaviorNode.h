#pragma once

#include "../Actor"


class SelectorBehaviorNode : BehaviorNode {

public:
    virtual SelectorBehaviorNode::~SelectorBehaviorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SelectorBehaviorNode(void);
};
