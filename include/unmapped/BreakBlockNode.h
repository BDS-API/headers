#pragma once

class BreakBlockNode : BehaviorNode {

public:
    virtual BreakBlockNode::~BreakBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    BreakBlockNode(void);
};
