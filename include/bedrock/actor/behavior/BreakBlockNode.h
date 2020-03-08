#pragma once

#include "../Actor"


class BreakBlockNode : BehaviorNode {

public:
    BreakBlockNode::~BreakBlockNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    BreakBlockNode(void);
};
